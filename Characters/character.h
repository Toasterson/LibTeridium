#ifndef CHARACTER_H
#define CHARACTER_H

#include <QQuickItem>
#include <QString>
#include "Item/item.h"
namespace TeridiumWar{
namespace Characters{
class Character : public QQuickItem
{
    Q_OBJECT
public:
    explicit Character(QQuickItem *parent = 0);
    int currentHealth, maxHealth, currentMana, maxMana, attack, defense, experience, damage;
    QString id;
signals:

public slots:
};
}}
#endif // CHARACTER_H
