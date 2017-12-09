
class ItemCore;
class HeadgearItem;

class h_bwsc_m92 : ItemCore
{
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "$STR_bwsc_h_m92_ConfigTitle_helmetName";
    picture = "\bwsc_h_m92\data\ui\icons\icon.paa";
    model = "bwa3_headgear\bwa3_m92.p3d";
    hiddenSelections[] = {
        "Camo"
    };
    hiddenSelectionsTextures[] = {
        "\bwsc_h_m92\data\m92_co.paa"
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
