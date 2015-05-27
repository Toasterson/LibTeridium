#ifndef ITEMTYPES
#define ITEMTYPES
namespace TeridiumWar{
namespace Items{

    enum ItemType {
        Weapon,
        Shield,
        Armor,
        Clothing
    };

    enum WeaponType{
        Sword,
        Axe,
        Club,
        Throw,
        Staff,
        Wand,
        Dager,
        Rapier
    };

    enum ProjectileType{
        Knife,
        Arrow,
        Bullet,
        Bolt,
        Magic
    };

    enum HoldingType{
        OneHanded,
        TwoHanded
    };

    enum Rarity{
        Gray = '#606860',
        White = '#F0F0F0',
        Lime = '#00FF00',
        Navy = '#000080',
        BlueViolet = '#8028E0',
        OrangeRed = '#FF4500',
        Beige = '#F5F5DC',
        LightPink = '#FFB6C1',
        Pink = '#FFC0CB'
    };
}
}
#endif // ITEMTYPES

