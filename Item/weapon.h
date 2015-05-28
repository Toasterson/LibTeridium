#ifndef WEAPON_H
#define WEAPON_H

#include "item.h"
namespace TeridiumWar{
namespace Items{
class Weapon : public Item
{
public:
    Weapon();
    TeridiumWar::Items::Types::WeaponType weaponType;
    TeridiumWar::Items::Types::HoldingType holdingType;
    int attack, defense, damage;
    bool armorPiercing;
};
}}
#endif // WEAPON_H
