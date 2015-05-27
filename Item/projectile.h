#ifndef PROJECTILE_H
#define PROJECTILE_H
#include "item.h"
namespace TeridiumWar{
namespace Items{
class Projectile : public Item
{
public:
    Projectile();
    int damage;
    bool armorPiercing;
};
}}
#endif // PROJECTILE_H
