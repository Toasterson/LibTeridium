#ifndef ITEM_H
#define ITEM_H

#include <QObject>
#include <Magic/types.h>
#include <Magic/spell.h>
#include "types.h"
#include <QString>
namespace TeridiumWar{
namespace Items{
class Item : public QObject
{
    Q_OBJECT
public:
    explicit Item(QObject *parent = 0);
    TeridiumWar::Items::ItemType itemType;
    int stackSize, weigth;
    bool stackAble(){
        if(stackSize > 0){
            return true;
        }
        return false;
    }
    QString name;
    QString description;
    TeridiumWar::Items::Rarity rarity;
    TeridiumWar::Magic::Spell echantment;

signals:

public slots:
};
}}
#endif // ITEM_H
