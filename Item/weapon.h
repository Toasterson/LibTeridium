#ifndef WEAPON_H
#define WEAPON_H

#include "item.h"

class Weapon : public Item
{
public:
    TeridiumWar::Items::WeaponType weaponType;
    TeridiumWar::Items::HoldingType holdingType;
    int attack, defense, damage;
    bool armorPiercing;
};

#endif // WEAPON_H
