
class B_Soldier_base_F;
class I_soldier_F;

class B_BW_Unit_Snow : I_soldier_F
{
    faction = "";
    hiddenSelectionsTextures[] = {
        "\bw_snowCamo\bw_unit_snow\data\bw_unit_snow_co.paa"
    };
};

class B_BW_Snow_Rifleman : B_Soldier_base_F
{
    _generalMacro = "B_BW_Schnee_Rifleman";
    author = "RicoEDLI";
    faction = "BW_Schnee_Faction";
    vehicleClass = "BW_VehClass_Men_Snow";
    scope = 2;
    displayName = "Soldat";
    uniformAccessories[] = {};
    nakedUniform = "U_BasicBody";
    uniformClass = "BW_Unit_Snow";
    uniform = "BW_Unit_Snow";
    model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
    hiddenSelections[] = {
        "Camo"
    };
    hiddenSelectionsTextures[] = {
        "\bw_snowCamo\bw_unit_snow\data\bw_unit_snow_co.paa"
    };
    linkedItems[] = {
        "B_BW_Unit_Snow",
        "BWA3_Vest_Rifleman1_Fleck",
        "BW_M92_Snow",
        "ItemGPS",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        "NVGoggles_OPFOR"
    };
    respawnLinkedItems[] = {
        "B_BW_Unit_Snow",
        "BWA3_Vest_Rifleman1_Fleck",
        "BW_M92_Snow",
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
