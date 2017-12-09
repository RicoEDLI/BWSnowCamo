
class I_Soldier_F;

class bwsc_combatUniform_02 : I_Soldier_F
{
    scope = 1;
    side = 1;
    displayName = "";
    hiddenSelectionsTextures[] = {
        "\bwsc_u_i_combatUniform\data\combatUniform_co.paa"
    };
};

class bwsc_soldier_02_F : bwsc_combatUniform_02
{
    scope = 2;
    displayName = "$STR_bwsc_u_i_combatUniform_ConfigTitle_rifleman";
    author = "RicoEDLI";
    faction = "bwsc";
    vehicleClass = "bwsc_infantry";
    uniformClass = "u_b_bwsc_combatUniform_02";
    hiddenSelectionsTextures[] = {
        "\bwsc_u_i_combatUniform\data\combatUniform_co.paa"
    };
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
