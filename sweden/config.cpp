class CfgPatches
{
	class mmg_retexture
	{
		units[]=
		{
			"MMG_JPC_Vest_sweden",
			"MMG_tt_vest_sweden",
			"mmg_chestrig_green",
			"MMG_MK_III_Armor_sweden",
			"MMG_MK_V_Armor_sweden",
			"MMG_combatshirt_sweden",
			"MMG_combatpants_sweden",
			"MMG_operatorshirt_sweden",
			"MMG_tactical_shirt_sweden",
			"mmg_tactical_gloves_sweden",
			"MMG_boots_sweden",
			"MMG_facemask_sweden",
			"MMG_balaclava_sweden",
			"mmg_boonie_sweden",
			"MMG_striker_helmet_sweden",
			"MMG_helmet_sweden",
			"MMG_falcon_b1_belt_sweden",
			"MMG_Mag_Pouch_sweden",
			"MMG_triple_magpouch_sweden",
			"MMG_double_magpouch_sweden",
			"MMG_Med_Pouch_sweden",
			"MMG_ammo_pouch_sweden",
			"MMG_tactical_pouch_sweden",
			"MMG_mk5_utility_pouch_sweden",
			"MMG_mk_V_grenade_pouch_sweden",
			"MMG_carrier_backpack_sweden",
			"MMG_supplybag_sweden",
			"MMG_assault_pack_sweden",
			"MMG_camelback_sweden",
			"MMG_sheath_sweden",
			"MMG_Holster_sweden",
			"MMG_bottle_sweden"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"JPC_vest",
			"DZ_Characters_Shoes"
		};
	};
};
class CfgMods
{
	class jpc_vest
	{
		dir="";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="MihgtyMoitzbert";
		credits="";
		author="MM";
		authorID="MM";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
	};
};
class cfgVehicles
{
	class JPC_Vest_Base;
	class MMG_JPC_Vest_sweden: JPC_Vest_Base
	{
		scope=2;
		displayName="MMG JPC VEST Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\jpcvest_swe.paa",
			"mmg_retexture\data\textures\sweden\jpcvest_swe.paa",
			"mmg_retexture\data\textures\sweden\jpcvest_swe.paa"
		};
	};
	class tt_vest_Base;
	class MMG_tt_vest_sweden: tt_vest_Base
	{
		scope=2;
		displayName="MMG Tactical-TEC Plate Carrier Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\tt_vest_swe.paa",
			"mmg_retexture\data\textures\sweden\tt_vest_swe.paa",
			"mmg_retexture\data\textures\sweden\tt_vest_swe.paa"
		};
	};
	class mmg_chestrig_Base;
	class mmg_chestrig_green: mmg_chestrig_Base
	{
		scope=2;
		displayName="MMG Chestrig Green";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\chestrig_swe.paa",
			"mmg_retexture\data\textures\sweden\chestrig_swe.paa",
			"mmg_retexture\data\textures\sweden\chestrig_swe.paa"
		};
	};
	class heavyvest_base;
	class MMG_MK_III_Armor_sweden: heavyvest_base
	{
		scope=2;
		displayName="MMG MK-3 Armor Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\heavyvest_swe.paa",
			"mmg_retexture\data\textures\sweden\heavyvest_swe.paa",
			"mmg_retexture\data\textures\sweden\heavyvest_swe.paa"
		};
	};
	class mk5_vest_base;
	class MMG_MK_V_Armor_sweden: mk5_vest_base
	{
		scope=2;
		displayName="MMG MK-V Armor Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\mk5_vest_swe.paa",
			"mmg_retexture\data\textures\sweden\mk5_vest_swe.paa",
			"mmg_retexture\data\textures\sweden\mk5_vest_swe.paa"
		};
	};
	class combatshirt_base;
	class MMG_combatshirt_sweden: combatshirt_base
	{
		scope=2;
		displayName="MMG CombatShirt Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\combatshirt_swe_g.paa",
			"mmg_retexture\data\textures\sweden\combatshirt_swe.paa",
			"mmg_retexture\data\textures\sweden\combatshirt_swe.paa"
		};
	};
	class combatpants_base;
	class MMG_combatpants_sweden: combatpants_base
	{
		scope=2;
		displayName="MMG CombatPants Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\combatpants_swe_g.paa",
			"mmg_retexture\data\textures\sweden\combatpants_swe.paa",
			"mmg_retexture\data\textures\sweden\combatpants_swe.paa"
		};
	};
	class operatorshirt_base;
	class MMG_operatorshirt_sweden: operatorshirt_base
	{
		scope=2;
		displayName="MMG Operatorshirt Sweden M90 M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\operatorshirt_swe.paa",
			"mmg_retexture\data\textures\sweden\operatorshirt_swe.paa",
			"mmg_retexture\data\textures\sweden\operatorshirt_swe.paa"
		};
	};
	class mmg_tactical_shirt_base;
	class MMG_tactical_shirt_sweden: mmg_tactical_shirt_base
	{
		scope=2;
		displayName="MMG Tactical Shirt Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\tactical_shirt_sweden.paa",
			"mmg_retexture\data\textures\sweden\tactical_shirt_sweden.paa",
			"mmg_retexture\data\textures\sweden\tactical_shirt_sweden.paa"
		};
	};
	class TacticalGloves_ColorBase;
	class mmg_tactical_gloves_sweden: TacticalGloves_ColorBase
	{
		scope=2;
		displayName="MMG Tactical Gloves Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\tacticalgloves_swe.paa",
			"mmg_retexture\data\textures\sweden\tacticalgloves_swe.paa",
			"mmg_retexture\data\textures\sweden\tacticalgloves_swe.paa"
		};
	};
	class JungleBoots_ColorBase;
	class MMG_boots_sweden: JungleBoots_ColorBase
	{
		scope=2;
		displayName="MMG Tactical Boots Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\boots_swe.paa",
			"mmg_retexture\data\textures\sweden\boots_swe.paa",
			"mmg_retexture\data\textures\sweden\boots_swe.paa"
		};
	};
	class facemask_base;
	class MMG_facemask_sweden: facemask_base
	{
		scope=2;
		displayName="MMG Facemask Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\facemask_swe.paa",
			"mmg_retexture\data\textures\sweden\facemask_swe.paa",
			"mmg_retexture\data\textures\sweden\facemask_swe.paa",
			"mmg_retexture\data\textures\sweden\facemask_swe.paa",
			"mmg_retexture\data\textures\sweden\facemask_swe.paa"
		};
	};
	class balaclava_base;
	class MMG_balaclava_sweden: balaclava_base
	{
		scope=2;
		displayName="MMG Balaclava Sweden M90";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\balaclava_swe.paa",
			"mmg_retexture\data\textures\sweden\balaclava_swe.paa",
			"mmg_retexture\data\textures\sweden\balaclava_swe.paa"
		};
	};
	class mmg_boonie_base;
	class mmg_boonie_sweden: mmg_boonie_base
	{
		scope=2;
		displayName="MMG Sniper Boonie Sweden M90";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\boonie_swe.paa",
			"mmg_retexture\data\textures\sweden\boonie_swe.paa",
			"mmg_retexture\data\textures\sweden\boonie_swe.paa"
		};
	};
	class striker_helmet_base;
	class MMG_striker_helmet_sweden: striker_helmet_base
	{
		scope=2;
		displayName="MMG Striker Helmet Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\striker_visor_base_co.paa",
			"mmg_retexture\data\textures\sweden\striker_helmet_swe.paa",
			"mmg_retexture\data\textures\sweden\striker_helmet_swe.paa",
			"mmg_retexture\data\textures\sweden\striker_helmet_swe.paa"
		};
	};
	class tactical_helmet_base;
	class MMG_helmet_sweden: tactical_helmet_base
	{
		scope=2;
		displayName="Tactical Helmet Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\tactical_helmet_swe.paa",
			"mmg_retexture\data\textures\sweden\tactical_helmet_swe.paa",
			"mmg_retexture\data\textures\sweden\tactical_helmet_swe.paa"
		};
	};
	class falconbelt_base;
	class MMG_falcon_b1_belt_sweden: falconbelt_base
	{
		scope=2;
		displayName="MMG Falcon Belt Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\falconbelt_swe.paa",
			"mmg_retexture\data\textures\sweden\falconbelt_swe.paa",
			"mmg_retexture\data\textures\sweden\falconbelt_swe.paa",
			"mmg_retexture\data\textures\sweden\drop_leg_swe.paa"
		};
	};
	class mag_pouch_Base;
	class MMG_Mag_Pouch_sweden: mag_pouch_Base
	{
		scope=2;
		displayName="MMG Mag Pouch Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\JPCmag_pouch_swe.paa"
		};
	};
	class triple_magpouch_base;
	class MMG_triple_magpouch_sweden: triple_magpouch_base
	{
		scope=2;
		displayName="MMG Triple MagPouch Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\single_magpouch_swe.paa",
			"mmg_retexture\data\textures\sweden\single_magpouch_swe.paa",
			"mmg_retexture\data\textures\sweden\single_magpouch_swe.paa"
		};
	};
	class double_magpouch_base;
	class MMG_double_magpouch_sweden: double_magpouch_base
	{
		scope=2;
		displayName="MMG Double MagPouch Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\single_magpouch_swe.paa",
			"mmg_retexture\data\textures\sweden\single_magpouch_swe.paa"
		};
	};
	class JPCMed_Pouch_base;
	class MMG_Med_Pouch_sweden: JPCMed_Pouch_base
	{
		scope=2;
		displayName="MMG MedPouch Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\jpcmed_pouch_swe.paa"
		};
	};
	class JPCammo_pouch_base;
	class MMG_ammo_pouch_sweden: JPCammo_pouch_base
	{
		scope=2;
		displayName="EOD Pouch Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\ammo_pouch_swe.paa"
		};
	};
	class tactical_pouch_base;
	class MMG_tactical_pouch_sweden: tactical_pouch_base
	{
		scope=2;
		displayName="MMG 5.11 Tactical Pouch Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\tactical_pouch_swe.paa"
		};
	};
	class mk5_utility_pouch_base;
	class MMG_mk5_utility_pouch_sweden: mk5_utility_pouch_base
	{
		scope=2;
		displayName="MMG MK5 Utility Pouch Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\mk5_gear_swe.paa"
		};
	};
	class mk5_grenade_pouch_base;
	class MMG_mk_V_grenade_pouch_sweden: mk5_grenade_pouch_base
	{
		scope=2;
		displayName="MMG MK5 Grenade Pouch Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\mk5_gear_swe.paa"
		};
	};
	class carrier_backpack_base;
	class MMG_carrier_backpack_sweden: carrier_backpack_base
	{
		scope=2;
		displayName="MMG Carrier Pack Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\carrier_backpack_swe.paa",
			"mmg_retexture\data\textures\sweden\carrier_backpack_swe.paa",
			"mmg_retexture\data\textures\sweden\carrier_backpack_swe.paa"
		};
	};
	class supplybag_base;
	class MMG_supplybag_sweden: supplybag_base
	{
		scope=2;
		displayName="MMG 5.11 SupplyBag Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\supplybag_swe.paa",
			"mmg_retexture\data\textures\sweden\supplybag_swe.paa",
			"mmg_retexture\data\textures\sweden\supplybag_swe.paa",
			"mmg_retexture\data\textures\sweden\carrier_backpack_swe.paa"
		};
	};
	class assault_pack_base;
	class MMG_assault_pack_sweden: assault_pack_base
	{
		scope=2;
		displayName="MMG Assault Pack Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\assault_pack_swe.paa",
			"mmg_retexture\data\textures\sweden\assault_pack_swe.paa",
			"mmg_retexture\data\textures\sweden\assault_pack_swe.paa"
		};
	};
	class camelback_base;
	class MMG_camelback_sweden: camelback_base
	{
		scope=2;
		displayName="MMG Camelback Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\camelback_swe.paa",
			"mmg_retexture\data\textures\sweden\camelback_swe.paa",
			"mmg_retexture\data\textures\sweden\camelback_swe.paa"
		};
	};
	class JPCsheath_Base;
	class MMG_sheath_sweden: JPCsheath_Base
	{
		scope=2;
		displayName="MMG Sheath Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\sheath_swe.paa"
		};
	};
	class PlateCarrierHolster_ColorBase;
	class MMG_Holster_sweden: PlateCarrierHolster_ColorBase
	{
		scope=2;
		displayName="MMG Holster Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\holster_swe.paa"
		};
	};
	class JPC_Bottle_Base;
	class MMG_bottle_sweden: JPC_Bottle_Base
	{
		scope=2;
		displayName="MMG Bottle Sweden M90";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\jpc_bottle_swe.paa"
		};
	};
};
