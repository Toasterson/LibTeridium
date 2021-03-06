#ifndef MAGICWEAPON_H
#define MAGICWEAPON_H
#include "weapon.h"
namespace TeridiumWar{
namespace Items{
class MagicWeapon : public Weapon
{
public:
    MagicWeapon();
    TeridiumWar::Magic::MagicType magicType;
    int spellAttack, spellDefense;
    TeridiumWar::Magic::Spell spell;
};
}}
#endif // MAGICWEAPON_H
