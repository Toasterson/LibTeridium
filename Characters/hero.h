#ifndef HERO_H
#define HERO_H
#include "character.h"
#include "Item/item.h"
#include "Item/weapon.h"
namespace TeridiumWar{
namespace Characters{
class Hero : public Character
{
public:
    Hero();
    TeridiumWar::Items::Item head, shoulders, arms, hands, chest, legs, knees, feet;
    TeridiumWar::Items::Weapon rightHand, leftHand;
    QList<TeridiumWar::Items::Item> inventory;
};
}}
#endif // HERO_H
