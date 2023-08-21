class CfgPatches
{
	class HEC_Ini
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Tops",
			"DZ_Characters_Pants",
			"DZ_Characters_Shoes",
			"DZ_Characters_Gloves",
			"DZ_Characters_Headgear"
		};
	};
};
class CfgVehicles
{
	class TShirt_ColorBase;
	class HEC_Ini_Camiseta: TShirt_ColorBase //Camiseta Inicial
	{
		scope=2;
		displayName="Camiseta Hecatombe";
		descriptionShort="Camiseta Inicial do Servidor Hecatombe";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Ini\HEC_Ini_Camiseta.paa",
			"HEC_Core\data\HEC_Ini\HEC_Ini_Camiseta.paa",
			"HEC_Core\data\HEC_Ini\HEC_Ini_Camiseta.paa"
		};
	};
	class CargoPants_ColorBase;
	class HEC_Ini_Calca: CargoPants_ColorBase //Calça Inicial
	{
		scope=2;
		displayName="Calça Hecatombe";
		descriptionShort="Calça Inicial do Servidor Hecatombe";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Ini\HEC_Ini_Calca.paa",
			"HEC_Core\data\HEC_Ini\HEC_Ini_Calca.paa",
			"HEC_Core\data\HEC_Ini\HEC_Ini_Calca.paa"
		};
	};
	class WorkingBoots_ColorBase;
	class HEC_Ini_Botas: WorkingBoots_ColorBase //Botas Inicial
	{
		scope=2;
		displayName="Botas Hecatombe";
		descriptionShort="Botas Inicial do Servidor Hecatombe";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Ini\HEC_Ini_Botas.paa",
			"HEC_Core\data\HEC_Ini\HEC_Ini_Botas.paa",
			"HEC_Core\data\HEC_Ini\HEC_Ini_Botas.paa"
		};
	};
	class TacticalGloves_ColorBase;
	class HEC_Ini_Luvas: TacticalGloves_ColorBase //Luvas Inicial
	{
		scope=2;
		displayName="Luvas Hecatombe";
		descriptionShort="Luvas Inicial do Servidor Hecatombe";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Ini\HEC_Ini_Luvas.paa",
			"HEC_Core\data\HEC_Ini\HEC_Ini_Luvas.paa",
			"HEC_Core\data\HEC_Ini\HEC_Ini_Luvas.paa"
		};
	};
	class BaseballCap_ColorBase;
	class HEC_Ini_Bone: BaseballCap_ColorBase //Boné Inicial
	{
		scope=2;
		displayName="Boné Hecatombe";
		descriptionShort="Boné Inicial do Servidor Hecatombe";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Ini\HEC_Ini_Bone.paa",
			"HEC_Core\data\HEC_Ini\HEC_Ini_Bone.paa",
			"HEC_Core\data\HEC_Ini\HEC_Ini_Bone.paa"
		};
	};
};