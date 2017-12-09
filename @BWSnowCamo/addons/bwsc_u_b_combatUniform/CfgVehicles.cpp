
class B_Soldier_F;
class B_Soldier_02_F;
class B_Soldier_03_F;

class bwsc_soldier_01 : B_Soldier_F
{
    scope = 1;
    displayName = "";
    hiddenSelectionsTextures[] = {
        "\bwsc_u_b_combatUniform\data\combatUniform_co.paa"
    };
};

class bwsc_soldier_01_tshirt : B_Soldier_02_F
{
    scope = 1;
    displayName = "";
    hiddenSelectionsTextures[] = {
        "\bwsc_u_b_combatUniform\data\combatUniform_co.paa"
    };
};

class bwsc_soldier_01_sleeves : B_Soldier_03_F
{
    scope = 1;
    displayName = "";
    hiddenSelectionsTextures[] = {
        "\bwsc_u_b_combatUniform\data\combatUniform_co.paa"
    };
};

class bwsc_soldier_01_F : bwsc_soldier_01
{
    scope = 2;
    displayName = "$STR_bwsc_u_b_combatUniform_ConfigTitle_rifleman";
    author = "RicoEDLI";
    faction = "bwsc";
    vehicleClass = "bwsc_infantry";
    uniformClass = "u_b_bwsc_combatUniform_01";
    linkedItems[] = {
        "BWA3_Vest_Rifleman1_Fleck",
        "h_bwsc_m92",
        "ItemGPS",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        "NVGoggles_OPFOR"
    };
    respawnLinkedItems[] = {
        "BWA3_Vest_Rifleman1_Fleck",
        "h_bwsc_m92",
        "ItemGPS",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        "NVGoggles_OPFOR"
    };
    weapons[] = {
        "Throw",
        "Put",
        "BWA3_G36_equipped",
        "BWA3_P8",
        "BWA3_Vector"
    };
    respawnWeapons[] = {
        "Throw",
        "Put",
        "BWA3_G36_equipped",
        "BWA3_P8",
        "BWA3_Vector"
    };
    magazines[] = {
        "BWA3_30Rnd_556x45_G36",
        "BWA3_30Rnd_556x45_G36",
        "BWA3_30Rnd_556x45_G36",
        "BWA3_30Rnd_556x45_G36",
        "BWA3_30Rnd_556x45_G36",
        "BWA3_30Rnd_556x45_G36",
        "BWA3_30Rnd_556x45_G36",
        "BWA3_30Rnd_556x45_G36",
        "BWA3_15Rnd_9x19_P8",
        "BWA3_15Rnd_9x19_P8",
        "BWA3_15Rnd_9x19_P8",
        "BWA3_DM51A1",
        "BWA3_DM25"
    };
    respawnMagazines[] = {
        "BWA3_30Rnd_556x45_G36",
        "BWA3_30Rnd_556x45_G36",
        "BWA3_30Rnd_556x45_G36",
        "BWA3_30Rnd_556x45_G36",
        "BWA3_30Rnd_556x45_G36",
        "BWA3_30Rnd_556x45_G36",
        "BWA3_30Rnd_556x45_G36",
        "BWA3_30Rnd_556x45_G36",
        "BWA3_15Rnd_9x19_P8",
        "BWA3_15Rnd_9x19_P8",
        "BWA3_15Rnd_9x19_P8",
        "BWA3_DM51A1",
        "BWA3_DM25"
    };
};
