class CfgPatches
{
	class BW_Schnee_Units
	{
		units[] = {};
		weapons[] = {
			"BW_Unit_Snow",
			"BW_M92_Snow",
		};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"a3_characters_f",
			"a3_characters_f_beta",
			"a3_characters_f_bootcamp",
			"a3_characters_f_epa",
			"a3_characters_f_epb",
			"a3_characters_f_epc",
			"a3_characters_f_gamma",
			"BWA3_Units"
		};
		author = "RicoEDLI";
	};
};

class CfgVehicles
{
	class B_Soldier_base_F;
	class I_soldier_F;
	class B_BW_Unit_Snow : I_soldier_F
	{
		faction = "";
		hiddenSelectionsTextures[] = {
			"\bw_snowCamo\data\tex\bw_kleidung_schnee_co.paa"
		};
	};
	class B_BW_Schnee_Rifleman: B_Soldier_base_F
	{
		_generalMacro="B_BW_Schnee_Rifleman";
		author="RicoEDLI";
		faction="BW_Schnee_Faction";
		vehicleClass="BW_VehClass_Men_Snow";
		scope=2;
		displayName="Soldat";
		uniformAccessories[]={};
		nakedUniform="U_BasicBody";
		uniformClass="BW_Unit_Snow";
		uniform = "BW_Unit_Snow";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		hiddenSelectionsTextures[] = {"\bw_snowCamo\data\tex\bw_kleidung_schnee_co.paa"};
		hiddenSelections[] = {"Camo"};
		linkedItems[]=
		{
			"BW_Unit_Snow",
			"BWA3_Vest_Rifleman1_Fleck",
			"BW_M92_Snow",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_OPFOR"
		};
		respawnLinkedItems[]=
		{
			"BW_Unit_Snow",
			"BWA3_Vest_Rifleman1_Fleck",
			"BW_M92_Snow",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_OPFOR"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"BWA3_G36_equipped",
			"BWA3_P8",
			"BWA3_Vector"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"BWA3_G36_equipped",
			"BWA3_P8",
			"BWA3_Vector"
		};
		magazines[]=
		{
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
		respawnMagazines[]=
		{
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
};

class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class Vest_Camo_Base;
	class VestItem;
	class ItemCore;
	class HeadgearItem;
	class H_Booniehat_khk;
	class U_I_CombatUniform;
	
	class BW_Unit_Snow: U_I_CombatUniform
	{
		scope = 2;
		displayName = "Kampfanzug Schneetarn";
		picture = "\bw_snowCamo\data\logo\Kleidunglogo.paa";
		hiddenSelectionsTextures[] = {
			"\bw_snowCamo\data\tex\bw_kleidung_schnee_co.paa"
		};
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "B_BW_Unit_Snow";
			containerClass = "Supply50";
			mass = 40;
			hiddenSelections[] = {
				"Camo",
				"Insignia"
			};
		};
	};
	
	class BW_M92_Snow: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Gefechtshelm M92 (Schnee)";
		picture = "\bw_snowCamo\data\logo\Helmlogo.paa";
		model = "bw_snowCamo\data\model\bwa3_m92.p3d";
		hiddenSelections[] = {
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\bw_snowCamo\data\tex\bw_m92_schnee_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "bw_snowCamo\data\model\bwa3_m92.p3d";
			modelSides[] = {3,1};
			passThrough = 0.75;
			hiddenSelections[] =
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.75;
				};
			};
		};
	};
};
class CfgFactionClasses
{
	class BW_Schnee_Faction
	{
		icon="\bw_snowCamo\data\logo\BW_Logo.paa";
		displayName="Bundeswehr (Schnee)";
		priority=5;
		side=1;
	};
};
class CfgVehicleClasses
{
	class BW_VehClass_Men_Snow
	{
		displayName = "Infantrie Schnee";
	};
};
