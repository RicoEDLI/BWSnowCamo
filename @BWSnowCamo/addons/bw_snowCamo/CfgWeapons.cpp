
class UniformItem;
class ItemCore;
class HeadgearItem;
class U_I_CombatUniform;

//The uniform item for a normal snow camo
class BW_Unit_Snow : U_I_CombatUniform
{
    scope = 2;
    displayName = "Kampfanzug Schneetarn";
    picture = "\bw_snowCamo\bw_unit_snow\data\ui\icons\icon.paa";
    hiddenSelectionsTextures[] = {
        "\bw_snowCamo\bw_unit_snow\data\bw_unit_snow_co.paa"
    };
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    class ItemInfo : UniformItem
    {
        uniformClass = "BW_Unit_Snow";
        containerClass = "Supply50";
        mass = 40;
        hiddenSelections[] = {
            "Camo",
            "Insignia"
        };
    };
};

//A helmet with snow camo
class BW_M92_Snow : ItemCore
{
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Gefechtshelm M92 (Schnee)";
    picture = "\bw_snowCamo\bw_m92_snow\data\ui\icons\icon.paa";
    model = "bwa3_headgear\bwa3_m92.p3d";
    hiddenSelections[] = {
        "Camo"
    };
    hiddenSelectionsTextures[] = {
        "\bw_snowCamo\bw_m92_snow\data\bw_m92_snow_co.paa"
    };
    class ItemInfo : HeadgearItem
    {
        mass = 40;
        uniformModel = "bwa3_headgear\bwa3_m92.p3d";
        modelSides[] = {3,1};
        passThrough = 0.75;
        hiddenSelections[] = {
            "camo"
        };
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName = "HitHead";
                armor = 10;
                passThrough = 0.75;
            };
        };
    };
};
