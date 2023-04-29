class CfgPatches
{
	class HEC_Flags
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Containers",
			"DZ_Gear_Camping",
			"DZ_Data"
		};
	};
};
class cfgVehicles
{
	class Flag_Base;
	class HEC_Flag_Hecatombe: Flag_Base //Hecatombe
	{
		scope=2;
		displayName="Bandeira do Servidor Hecatombe";
		descriptionShort="Bandeira do Servidor Hecatombe";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Flags\Flag_Hecatombe_co.paa"
		};
	};
	class HEC_Flag_Krona: Flag_Base //Krona
	{
		scope=2;
		displayName="Bandeira do Cartel de Krona Castle";
		descriptionShort="Bandeira do Cartel do Castelo de Krona";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Flags\Flag_Krona_co.paa"
		};
	};
	class HEC_Flag_Devils: Flag_Base //Devils
	{
		scope=2;
		displayName="Bandeira do Cartel de Devils Castle";
		descriptionShort="Bandeira do Cartel do Castelo de Devils";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Flags\Flag_Devils_co.paa"
		};
	};
	class HEC_Flag_Cla_BLT: Flag_Base //Clã BLT
	{
		scope=2;
		displayName="Bandeira do Clã [BLT]";
		descriptionShort="Bandeira do Clã Bullet's";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Flags\Flag_Cla_BLT_co.paa"
		};
	};
};