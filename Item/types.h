#ifndef ITEMTYPES
#define ITEMTYPES
namespace TeridiumWar{
namespace Items{
namespace Types{

    enum ItemType {
        Weapon,
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
        Rapier,
        Shield
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
        Invalid = -1,
        Gray = 0,
        White = 1,
        Lime,
        Navy,
        BlueViolet,
        OrangeRed,
        Beige,
        LightPink,
        Pink
    };

    const std::string RarityColors[] = {
        "#606860",
        "#F0F0F0",
        "#00FF00",
        "#000080",
        "#8028E0",
        "#FF4500",
        "#F5F5DC",
        "#FFB6C1",
        "#FFC0CB"
    };
}
}
}
#endif // ITEMTYPES

