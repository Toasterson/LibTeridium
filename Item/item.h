#ifndef ITEM_H
#define ITEM_H

#include <QQuickItem>
#include "../Magic/types.h"
#include "../Magic/spell.h"
#include "types.h"
#include <QString>

namespace TeridiumWar{
namespace Items{
class Item : public QQuickItem
{
    Q_OBJECT
public:
    explicit Item(QQuickItem *parent = 0);
    TeridiumWar::Items::Types::ItemType itemType;
    int stackSize, weigth;
    bool stackAble(){
        if(stackSize > 0){
            return true;
        }
        return false;
    }
    QString name;
    QString description;
    TeridiumWar::Items::Types::Rarity rarity;
    std::string rarityColor(){
        return Types::RarityColors[this->rarity];
    }
    TeridiumWar::Magic::Spell echantment;

signals:

public slots:
};
}}
#endif // ITEM_H
