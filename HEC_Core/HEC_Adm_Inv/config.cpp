class CfgPatches
{
	class HEC_Admin_Invisivel
	{
		units[]=
		{
			"HEC_Adm_Inv_Cabeca",
			"HEC_Adm_Inv_Torso",
			"HEC_Adm_Inv_Pernas",
			"HEC_Adm_Inv_Maos",
			"HEC_Adm_Inv_Pes",
			"HEC_Adm_Inv_Mochila"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Characters_Gloves",
			"DZ_Gear_Containers",
			"DZ_Characters_Headgear",
			"DZ_Characters_Masks",
			"DZ_Characters_Shoes",
			"DZ_Data",
			"DZ_Characters_Heads",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Magazines"
		};
	};
};
class cfgVehicles
{
	// CABEÇA
	class Inventory_Base;
	class HEC_Adm_Inv_Cabeca: Inventory_Base
	{
		scope=2;
		displayName="Cabeça Invisível - ADMIN HECATOMBE";
		descriptionShort="Cabeça Invisível - ADMIN HECATOMBE - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		itemSize[]={2,2};
		model=
			"HEC_Core\HEC_Adm_Inv\HEC_Adm_Inv.p3d";
		inventorySlot="Head";
		simulation="head";
	};
	// TORSO
	class GorkaEJacket_ColorBase;
	class HEC_Adm_Inv_Torso: GorkaEJacket_ColorBase
	{
		scope=2;
		displayName="Torso Invisível - ADMIN HECATOMBE";
		descriptionShort="Torso Invisível - ADMIN HECATOMBE - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		itemSize[]={2,2};
		visibilityModifier=0;
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(1,1,1,0.3,ca)",
			"HEC_Core\data\HEC_Adm_Inv\HEC_Adm_Inv_ca.paa",
			"HEC_Core\data\HEC_Adm_Inv\HEC_Adm_Inv_ca.paa"
		};
	};
	// PERNAS
	class HunterPants_ColorBase;
	class HEC_Adm_Inv_Pernas: HunterPants_ColorBase
	{
		scope=2;
		displayName="Pernas Invisível - ADMIN HECATOMBE";
		descriptionShort="Pernas Invisível - ADMIN HECATOMBE - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		itemSize[]={2,2};
		visibilityModifier=0;
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(1,1,1,0.3,ca)",
			"HEC_Core\data\HEC_Adm_Inv\HEC_Adm_Inv_ca.paa",
			"HEC_Core\data\HEC_Adm_Inv\HEC_Adm_Inv_ca.paa"
		};
	};
	// MAOS
	class HEC_Adm_Inv_Maos: Inventory_Base
	{
		scope=2;
		displayName="Mãos Invisível - ADMIN HECATOMBE";
		descriptionShort="Mãos Invisível - ADMIN HECATOMBE - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		itemSize[]={2,2};
		model=
			"HEC_Core\HEC_Adm_Inv\HEC_Adm_Inv.p3d";
		inventorySlot="Gloves";
		visibilityModifier=0;
	};
	// PES
	class HEC_Adm_Inv_Pes: Inventory_Base
	{
		scope=2;
		displayName="Pés Invisível - ADMIN HECATOMBE";
		descriptionShort="Pés Invisível - ADMIN HECATOMBE - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		itemSize[]={2,2};
		model=
			"HEC_Core\HEC_Adm_Inv\HEC_Adm_Inv.p3d";
		inventorySlot="Feet";
		itemInfo[]=
		{
			"Clothing",
			"Feet"
		};
		visibilityModifier=0.80000001;
		weight=1230;
		durability=0.5;
		repairableWithKits[]={5,3};
		repairCosts[]={30,25};
		absorbency=0.1;
		heatIsolation=0.5;
	};
	// MOCHILA
	class CS_WeaponBag_Base;
	class HEC_Adm_Inv_Mochila: CS_WeaponBag_Base
	{
		scope=2;
		displayName="Mochila Invisível - ADMIN HECATOMBE";
		descriptionShort="Mochila Invisível - ADMIN HECATOMBE - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		visibilityModifier=0;
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(1,1,1,0.3,ca)",
			"HEC_Core\data\HEC_Adm_Inv\HEC_Adm_Inv_ca.paa",
			"HEC_Core\data\HEC_Adm_Inv\HEC_Adm_Inv_ca.paa"
		};
	};
};
