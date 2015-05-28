#ifndef SPELL_H
#define SPELL_H
#include <QQuickItem>
#include "types.h"
#include "QtCore/QString"
namespace TeridiumWar {
namespace Magic {
    class Spell : public QQuickItem
    {
        Q_OBJECT
    public:
        explicit Spell(QQuickItem *parent = 0);
        QString name;
        TeridiumWar::Magic::MagicType Type;
        int strength;
        double areaOfEffect;

    signals:

    public slots:
    };
}}
#endif // SPELL_H
