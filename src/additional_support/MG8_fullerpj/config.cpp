class cfgPatches
{
	class MG8_fullerpj_a10c2
	{
		units[] = {"USAF_A10"};
		weapons[] = {};
		requiredVersion = 1.70;
		requiredAddons[] =
		{
			"A3_Weapons_F",
			"A3_Air_F",
			"A3_Air_F_EPC",
			"A3_Air_F_EPC_Plane_CAS_01",
			"MG8_core",
			"USAF_A10"
		};
		author = "Zabuza";
	};
};

class CfgVehicles
{
	class Air;
	class Plane;
	class USAF_A10 : Plane
	{
		weapons[] =
		{
			"USAF_MASTER_ARM_SAFE",
			"USAF_GAU8_GUN",
			"USAF_Countermeasures_A10C"
		};
		magazines[] =
		{
			"USAF_GAU8_1150Rnd",
			"240Rnd_CMFlare_Chaff_Magazine"
			
		};
	};
};
