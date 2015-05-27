#ifndef RANGEDWEAPON_H
#define RANGEDWEAPON_H
#include "weapon.h"

namespace TeridiumWar {
namespace Items {
    class RangedWeapon : public Weapon
    {
    public:
        RangedWeapon();
        int range;
        TeridiumWar::Items::ProjectileType projectileType;

    };
}}
#endif // RANGEDWEAPON_H
