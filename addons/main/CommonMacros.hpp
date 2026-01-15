// 9th Aux Common Macros
#ifndef COMMON_MACROS_DEFINED
    // Creates a class holding mags, weapons, items, and backpacks
    // Used in 9th backpack loadouts and box inventories
    #define COMMON_MACROS_DEFINED
    #define MAG_XX(a,b) class _xx_##a {magazine = QUOTE(a); count = b;}
    #define WEAP_XX(a,b) class _xx_##a {weapon = QUOTE(a); count = b;}
    #define ITEM_XX(a,b) class _xx_##a {name = QUOTE(a); count = b;}
    #define PACK_XX(a,b) class _xx_##a {backpack = QUOTE(a); count = b;}

    // Used as shorthand to list multiples in an array
    // e.g. give MAG_8(DC-15A Mags) to a unit's magazines[] array
    #define MAG_2(a) a, a
    #define MAG_3(a) a, a, a
    #define MAG_4(a) a, a, a, a
    #define MAG_5(a) a, a, a, a, a
    #define MAG_6(a) a, a, a, a, a, a
    #define MAG_7(a) a, a, a, a, a, a, a
    #define MAG_8(a) a, a, a, a, a, a, a, a
    #define MAG_9(a) a, a, a, a, a, a, a, a, a
    #define MAG_10(a) a, a, a, a, a, a, a, a, a, a
    #define MAG_100(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a

    // Shorthand for Throw and Put weapons, used to allow AI to throw grenades
    #define THROWPUT "Throw", "Put",

    // String concatenation macros
    #define TO_STR(a) #a 
    #define TO_PART_STR(a,b) QUOTE(a##b) 
    #define CONCAT_FUNC(a,b) a ## b
    #define CONCAT(a,b) CONCAT_FUNC(a,b)
    #define STRINGIZE_FUNC(a) #a
    #define STRINGIZE(a) STRINGIZE_FUNC(a)

    // Weapon/Item slot config definitions
    #define DEFAULT_SLOT    0
    #define MUZZLE_SLOT     101
    #define OPTICS_SLOT     201
    #define FLASHLIGHT_SLOT 301
    #define NVG_SLOT        602
    #define GOGGLE_SLOT     603
    #define HEADGEAR_SLOT   605
    #define UNIFORM_SLOT    801
    #define HMD_SLOT        616
    #define BINOCULAR_SLOT  617
    #define MEDIKIT_SLOT    619
    #define RADIO_SLOT      611
    #define VEST_SLOT       701
    #define BACKPACK_SLOT   901
#endif
