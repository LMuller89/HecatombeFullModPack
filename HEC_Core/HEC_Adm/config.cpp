class CfgPatches
{
	class HEC_Admin
	{
		units[]=
		{
			"HEC_Adm_Capacete",
			"HEC_Adm_Balaclava",
			"HEC_Adm_Camiseta",
			"HEC_Adm_ColeteMK3",
			"HEC_Adm_ColeteMK5",
			"HEC_Adm_AmmoPouch",
			"HEC_Adm_MagPouch",
			"HEC_Adm_DoubleMagPouch",
			"HEC_Adm_TripleMagPouch",
			"HEC_Adm_MedicalPouch",
			"HEC_Adm_TacticalPouch",
			"HEC_Adm_MK5UtilityPouch",
			"HEC_Adm_MK5GranadePouch",
			"HEC_Adm_Coldre",
			"HEC_Adm_Bainha",
			"HEC_Adm_Calca",
			"HEC_Adm_Cinto",
			"HEC_Adm_Mochila",
			"HEC_Adm_Luvas",
			"HEC_Adm_Botas"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters_Vests",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Headgear",
			"DZ_Scripts",
			"DZ_Gear_Drinks",
			"DZ_Gear_Medical",
			"DZ_Radio",
			"DZ_Gear_Optics",
			"DZ_Characters_Glasses",
			"DZ_Characters",
			"JPC_vest",
			"DZ_Gear_Containers"
		};
	};
};
class CfgVehicles
{
	// CAPACETE
	class striker_helmet_base;
	class HEC_Adm_Capacete: striker_helmet_base
	{
		scope = 2;
		displayName="Capacete do Hecatombe Special Force";
		descriptionShort="Capacete do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_Visor.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Capacete.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Capacete.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Capacete.paa"
		};
	};
	// BALACLAVA
	class balaclava_base;
	class HEC_Adm_Balaclava_base: balaclava_base
	{
		scope=2;
		displayName="Balaclava do Hecatombe Special Force";
		descriptionShort="Balaclava do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[] = 
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_Balaclava.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Balaclava.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Balaclava.paa"
		};
	};
	// CAMISETA
	class mmg_tactical_shirt_base;
	class HEC_Adm_Camiseta: mmg_tactical_shirt_base
	{
		scope=2;
		displayName="Camiseta Tatica Hecatombe Special Force";
		descriptionShort="Camiseta Tatica do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		hiddenSelectionsTextures[] = 
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_Camiseta.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Camiseta.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Camiseta.paa"
		};
	};
	// COLETEMK3
	class heavyvest_base;
	class HEC_Adm_ColeteMK3: heavyvest_base
	{
		scope = 2;
		displayName = "Colete MK3 do Hecatombe Special Force";
		descriptionShort="Colete MK3 do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		hiddenSelectionsTextures[] = 
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_ColeteMK3.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_ColeteMK3.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_ColeteMK3.paa"
		};
	};
	// COLETEMK5
	class mk5_vest_base;
	class HEC_Adm_ColeteMK5: mk5_vest_base
	{
		scope = 2;
		displayName = "Colete MK5 do Hecatombe Special Force";
		descriptionShort="Colete MK5 do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		hiddenSelectionsTextures[] = 
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_ColeteMK5.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_ColeteMK5.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_ColeteMK5.paa"
		};
	};
	// AMMOPOUCH
	class JPCammo_pouch_base;
	class HEC_Adm_AmmoPouch: JPCammo_pouch_base
	{
		scope = 2;
		displayName = "Bolsa Munições do Hecatombe Special Force";
		descriptionShort="Bolsa de munições de acesso rápido do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_AmmoPouch.paa"
		};
	};
	// MAGPOUCH
	class mag_pouch_Base;
	class HEC_Adm_MagPouch: mag_pouch_Base
	{
		scope = 2;
		displayName = "Bolsa de carregadores do Hecatombe Special Force";
		descriptionShort="Bolsa de carregadores de acesso rápido do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_MagPouch.paa"
		};
	};
	// DOUBLEMAGPOUCH
	class double_magpouch_base;
	class HEC_Adm_DoubleMagPouch: double_magpouch_base
	{
		scope = 2;
		displayName = "Bolsa dupla de carregadores do Hecatombe Special Force";
		descriptionShort="Bolsa dupla de carregadores de acesso rápido do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_SingleMagPouch.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_SingleMagPouch.paa"
		};
	};
	// TRIPLEMAGPOUCH
	class triple_magpouch_base;
	class HEC_Adm_TripleMagPouch: triple_magpouch_base
	{
		scope = 2;
		displayName = "Bolsa tripla de carregadores do Hecatombe Special Force";
		descriptionShort="Bolsa tripla de carregadores de acesso rápido do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_SingleMagPouch.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_SingleMagPouch.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_SingleMagPouch.paa"
		};
	};
	// MEDICALPOUCH
	class JPCMed_Pouch_base;
	class HEC_Adm_MedicalPouch: JPCMed_Pouch_Base
	{
		scope = 2;
		displayName = "Bolsa medica do Hecatombe Special Force";
		descriptionShort="Bolsa medica do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_MedicalPouch.paa"
		};
	};
	// TACTICALPOUCH
	class tactical_pouch_base;
	class HEC_Adm_TacticalPouch: tactical_pouch_base
	{
		scope = 2;
		displayName = "Bolsa tatica do Hecatombe Special Force";
		descriptionShort="Bolsa tatica do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_TacticalPouch.paa"
		};
	};
	// MK5UTILITYPOUCH
	class mk5_utility_pouch_base;
	class HEC_Adm_MK5UtilityPouch: mk5_utility_pouch_base
	{
		scope = 2;
		displayName = "Bolsa de utilitarios MK5 do Hecatombe Special Force";
		descriptionShort="Bolsa de utilitarios MK5 do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_MK5Pouch.paa"
		};
	};
	// MK5GRANADEPOUCH
	class mk5_grenade_pouch_base;
	class HEC_Adm_MK5GranadePouch: mk5_grenade_pouch_base
	{
		scope = 2;
		displayName = "Bolsa de granadas MK5 do Hecatombe Special Force";
		descriptionShort="Bolsa de granadas MK5 do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_MK5Pouch.paa"
		};
	};
	// COLDRE
	class JPCsheath_Base;
	class HEC_Adm_Coldre: JPCsheath_Base
	{
		scope=2;
		displayName = "Coldre do Hecatombe Special Force";
		descriptionShort="Coldre do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_Coldre.paa"
		};
	};
	// BAINHA
	class PlateCarrierHolster_ColorBase;
	class HEC_Adm_Bainha: PlateCarrierHolster_ColorBase
	{
		scope=2;
		displayName = "Bainha do Hecatombe Special Force";
		descriptionShort="Bainha do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_Bainha.paa"
		};
	};
	// CALÇA
	class combatpants_base;
	class HEC_Adm_Calca: combatpants_base
	{
		scope=2;
		displayName="Calça do Hecatombe Special Force";
		descriptionShort="Calça do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		hiddenSelectionsTextures[] = 
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_Calca_g.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Calca.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Calca.paa"
		};
	};
	// CINTO
	class falconbelt_base;
	class HEC_Adm_Cinto: falconbelt_base
	{
		scope = 2;
		displayName = "Cinto do Hecatombe Special Force";
		descriptionShort="Cinto do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		hiddenSelectionsTextures[] = 
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_Cinto.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Cinto.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Cinto.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Cinto_leg.paa"
		};
	};
	// MOCHILA
	class assault_pack_base;
	class HEC_Adm_Mochila: assault_pack_base
	{
		scope=2;
		displayName = "Mochila do Hecatombe Special Force";
		descriptionShort="Mochila do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		hiddenSelectionsTextures[] = 
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_Mochila.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Mochila.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Mochila.paa"
		};
	};
	// LUVAS
	class TacticalGloves_ColorBase;
	class HEC_Adm_Luvas: TacticalGloves_ColorBase
	{
		scope=2;
		displayName = "Luvas do Hecatombe Special Force";
		descriptionShort="Luvas do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		hiddenSelectionsTextures[] = 
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_Luvas.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Luvas.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Luvas.paa"
		};
	};
	// BOTAS
	class JungleBoots_ColorBase;
	class HEC_Adm_Botas: JungleBoots_ColorBase
	{
		scope=2;
		displayName = "Botas do Hecatombe Special Force";
		descriptionShort="Botas do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE | Manter posse desse item é punível com Banimento!!!";
		hiddenSelectionsTextures[] = 
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_Botas.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Botas.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Botas.paa"
		};
	};
};