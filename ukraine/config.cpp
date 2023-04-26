class CfgPatches
{
	class mmg_retexture
	{
		units[]=
		{
			"MMG_JPC_Vest_ukraine",
			"MMG_tt_vest_ukraine",
			"mmg_chestrig_ukraine",
			"MMG_MK_III_Armor_ukraine",
			"MMG_MK_V_Armor_ukraine",
			"MMG_combatshirt_ukraine",
			"MMG_combatpants_ukraine",
			"MMG_operatorshirt_ukraine",
			"MMG_tactical_shirt_ukraine",
			"mmg_tactical_gloves_ukraine",
			"MMG_boots_ukraine",
			"MMG_facemask_ukraine",
			"MMG_balaclava_ukraine",
			"MMG_boonie_ukraine",
			"MMG_striker_helmet_ukraine",
			"MMG_tactical_helmet_ukraine",
			"MMG_falcon_b1_belt_ukraine",
			"MMG_Mag_Pouch_ukraine",
			"MMG_triple_magpouch_ukraine",
			"MMG_double_magpouch_ukraine",
			"MMG_Med_Pouch_ukraine",
			"MMG_ammo_pouch_ukraine",
			"MMG_tactical_pouch_ukraine",
			"MMG_mk5_utility_pouch_ukraine",
			"MMG_mk_V_grenade_pouch_ukraine",
			"MMG_carrier_backpack_ukraine",
			"MMG_supplybag_ukraine",
			"MMG_assault_pack_ukraine",
			"MMG_camelback_ukraine",
			"MMG_sheath_ukraine",
			"MMG_Holster_ukraine",
			"MMG_bottle_ukraine"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"JPC_vest",
			"DZ_Characters"
		};
	};
};
class CfgMods
{
	class mmg_retexture
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
	class MMG_JPC_Vest_ukraine: JPC_Vest_Base
	{
		scope=2;
		displayName="MMG JPC VEST Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\jpcvest_ukr.paa",
			"mmg_retexture\data\textures\ukraine\jpcvest_ukr.paa",
			"mmg_retexture\data\textures\ukraine\jpcvest_ukr.paa"
		};
	};
	class tt_vest_Base;
	class MMG_tt_vest_ukraine: tt_vest_Base
	{
		scope=2;
		displayName="MMG TT Plate Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\tt_vest_ukr.paa",
			"mmg_retexture\data\textures\ukraine\tt_vest_ukr.paa",
			"mmg_retexture\data\textures\ukraine\tt_vest_ukr.paa"
		};
	};
	class mmg_chestrig_Base;
	class mmg_chestrig_ukraine: mmg_chestrig_Base
	{
		scope=2;
		displayName="MMG Chestrig Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\chestrig_ukr.paa",
			"mmg_retexture\data\textures\ukraine\chestrig_ukr.paa",
			"mmg_retexture\data\textures\ukraine\chestrig_ukr.paa"
		};
	};
	class heavyvest_base;
	class MMG_MK_III_Armor_ukraine: heavyvest_base
	{
		scope=2;
		displayName="MMG MK-3 Armor Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\heavyvest_ukr.paa",
			"mmg_retexture\data\textures\ukraine\heavyvest_ukr.paa",
			"mmg_retexture\data\textures\ukraine\heavyvest_ukr.paa"
		};
	};
	class mk5_vest_base;
	class MMG_MK_V_Armor_ukraine: mk5_vest_base
	{
		scope=2;
		displayName="MMG MK-V Armor Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\mk5_vest_ukr.paa",
			"mmg_retexture\data\textures\ukraine\mk5_vest_ukr.paa",
			"mmg_retexture\data\textures\ukraine\mk5_vest_ukr.paa"
		};
	};
	class combatshirt_base;
	class MMG_combatshirt_ukraine: combatshirt_base
	{
		scope=2;
		displayName="MMG CombatShirt Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\combatshirt_ukr_g.paa",
			"mmg_retexture\data\textures\ukraine\combatshirt_ukr.paa",
			"mmg_retexture\data\textures\ukraine\combatshirt_ukr.paa"
		};
	};
	class combatpants_base;
	class MMG_combatpants_ukraine: combatpants_base
	{
		scope=2;
		displayName="MMG CombatPants Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\combatpants_ukr_g.paa",
			"mmg_retexture\data\textures\ukraine\combatpants_ukr.paa",
			"mmg_retexture\data\textures\ukraine\combatpants_ukr.paa"
		};
	};
	class operatorshirt_base;
	class MMG_operatorshirt_ukraine: operatorshirt_base
	{
		scope=2;
		displayName="MMG Operatorshirt Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\operatorshirt_ukr.paa",
			"mmg_retexture\data\textures\ukraine\operatorshirt_ukr.paa",
			"mmg_retexture\data\textures\ukraine\operatorshirt_ukr.paa"
		};
	};
	class mmg_tactical_shirt_base;
	class MMG_tactical_shirt_ukraine: mmg_tactical_shirt_base
	{
		scope=2;
		displayName="MMG Tactical Shirt Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\tactical_shirt_ukr.paa",
			"mmg_retexture\data\textures\ukraine\tactical_shirt_ukr.paa",
			"mmg_retexture\data\textures\ukraine\tactical_shirt_ukr.paa"
		};
	};
	class TacticalGloves_ColorBase;
	class mmg_tactical_gloves_ukraine: TacticalGloves_ColorBase
	{
		scope=2;
		displayName="MMG Tactical Gloves Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\tacticalgloves_ukr.paa",
			"mmg_retexture\data\textures\ukraine\tacticalgloves_ukr.paa",
			"mmg_retexture\data\textures\ukraine\tacticalgloves_ukr.paa"
		};
	};
	class JungleBoots_ColorBase;
	class MMG_boots_ukraine: JungleBoots_ColorBase
	{
		scope=2;
		displayName="MMG Tactical Boots Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\boots_ukr.paa",
			"mmg_retexture\data\textures\ukraine\boots_ukr.paa",
			"mmg_retexture\data\textures\ukraine\boots_ukr.paa"
		};
	};
	class facemask_base;
	class MMG_facemask_ukraine: facemask_base
	{
		scope=2;
		displayName="MMG Facemask Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\facemask_ukr.paa",
			"mmg_retexture\data\textures\ukraine\facemask_ukr.paa",
			"mmg_retexture\data\textures\ukraine\facemask_ukr.paa",
			"mmg_retexture\data\textures\ukraine\facemask_ukr.paa",
			"mmg_retexture\data\textures\ukraine\facemask_ukr.paa"
		};
	};
	class balaclava_base;
	class MMG_balaclava_ukraine: balaclava_base
	{
		scope=2;
		displayName="MMG Balaclava Ukraine M14";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\balaclava_ukr.paa",
			"mmg_retexture\data\textures\ukraine\balaclava_ukr.paa",
			"mmg_retexture\data\textures\ukraine\balaclava_ukr.paa"
		};
	};
	class mmg_boonie_base;
	class MMG_boonie_ukraine: mmg_boonie_base
	{
		scope=2;
		displayName="MMG Sniper Boonie Ukraine M14";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\boonie_ukr.paa",
			"mmg_retexture\data\textures\ukraine\boonie_ukr.paa",
			"mmg_retexture\data\textures\ukraine\boonie_ukr.paa"
		};
	};
	class striker_helmet_base;
	class MMG_striker_helmet_ukraine: striker_helmet_base
	{
		scope=2;
		displayName="MMG Striker Helmet Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\striker_visor_base_co.paa",
			"mmg_retexture\data\textures\ukraine\striker_helmet_ukr.paa",
			"mmg_retexture\data\textures\ukraine\striker_helmet_ukr.paa",
			"mmg_retexture\data\textures\ukraine\striker_helmet_ukr.paa"
		};
	};
	class tactical_helmet_base;
	class MMG_tactical_helmet_ukraine: tactical_helmet_base
	{
		scope=2;
		displayName="MMG Defcon 5 Tactical Helmet Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\tactical_helmet_ukr.paa",
			"mmg_retexture\data\textures\ukraine\tactical_helmet_ukr.paa",
			"mmg_retexture\data\textures\ukraine\tactical_helmet_ukr.paa"
		};
	};
	class falconbelt_base;
	class MMG_falcon_b1_belt_ukraine: falconbelt_base
	{
		scope=2;
		displayName="MMG Falcon Belt Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\falconbelt_ukr.paa",
			"mmg_retexture\data\textures\ukraine\falconbelt_ukr.paa",
			"mmg_retexture\data\textures\ukraine\falconbelt_ukr.paa",
			"mmg_retexture\data\textures\ukraine\drop_leg_ukr.paa"
		};
	};
	class mag_pouch_Base;
	class MMG_Mag_Pouch_ukraine: mag_pouch_Base
	{
		scope=2;
		displayName="MMG Mag Pouch Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\JPCmag_pouch_ukr.paa"
		};
	};
	class triple_magpouch_base;
	class MMG_triple_magpouch_ukraine: triple_magpouch_base
	{
		scope=2;
		displayName="MMG Triple MagPouch Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\single_magpouch_ukr.paa",
			"mmg_retexture\data\textures\ukraine\single_magpouch_ukr.paa",
			"mmg_retexture\data\textures\ukraine\single_magpouch_ukr.paa"
		};
	};
	class double_magpouch_base;
	class MMG_double_magpouch_ukraine: double_magpouch_base
	{
		scope=2;
		displayName="MMG Double MagPouch Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\single_magpouch_ukr.paa",
			"mmg_retexture\data\textures\ukraine\single_magpouch_ukr.paa"
		};
	};
	class JPCMed_Pouch_base;
	class MMG_Med_Pouch_ukraine: JPCMed_Pouch_base
	{
		scope=2;
		displayName="MMG MedPouch Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\jpcmed_pouch_ukr.paa"
		};
	};
	class JPCammo_pouch_base;
	class MMG_ammo_pouch_ukraine: JPCammo_pouch_base
	{
		scope=2;
		displayName="EOD Pouch Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\ammo_pouch_ukr.paa"
		};
	};
	class tactical_pouch_base;
	class MMG_tactical_pouch_ukraine: tactical_pouch_base
	{
		scope=2;
		displayName="MMG 5.11 Tactical Pouch Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\tactical_pouch_ukr.paa"
		};
	};
	class mk5_utility_pouch_base;
	class MMG_mk5_utility_pouch_ukraine: mk5_utility_pouch_base
	{
		scope=2;
		displayName="MMG MK5 Utility Pouch Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\mk5_gear_ukr.paa"
		};
	};
	class mk5_grenade_pouch_base;
	class MMG_mk_V_grenade_pouch_ukraine: mk5_grenade_pouch_base
	{
		scope=2;
		displayName="MMG MK5 Grenade Pouch Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\mk5_gear_ukr.paa"
		};
	};
	class carrier_backpack_base;
	class MMG_carrier_backpack_ukraine: carrier_backpack_base
	{
		scope=2;
		displayName="MMG Carrier Pack Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\carrier_backpack_ukr.paa",
			"mmg_retexture\data\textures\ukraine\carrier_backpack_ukr.paa",
			"mmg_retexture\data\textures\ukraine\carrier_backpack_ukr.paa"
		};
	};
	class supplybag_base;
	class MMG_supplybag_ukraine: supplybag_base
	{
		scope=2;
		displayName="MMG 5.11 SupplyBag Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\supplybag_ukr.paa",
			"mmg_retexture\data\textures\ukraine\supplybag_ukr.paa",
			"mmg_retexture\data\textures\ukraine\supplybag_ukr.paa",
			"mmg_retexture\data\textures\ukraine\carrier_backpack_ukr.paa"
		};
	};
	class assault_pack_base;
	class MMG_assault_pack_ukraine: assault_pack_base
	{
		scope=2;
		displayName="MMG Assault Pack Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\assault_pack_ukr.paa",
			"mmg_retexture\data\textures\ukraine\assault_pack_ukr.paa",
			"mmg_retexture\data\textures\ukraine\assault_pack_ukr.paa"
		};
	};
	class camelback_base;
	class MMG_camelback_ukraine: camelback_base
	{
		scope=2;
		displayName="MMG Camelback Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\camelback_ukr.paa",
			"mmg_retexture\data\textures\ukraine\camelback_ukr.paa",
			"mmg_retexture\data\textures\ukraine\camelback_ukr.paa"
		};
	};
	class JPCsheath_Base;
	class MMG_sheath_ukraine: JPCsheath_Base
	{
		scope=2;
		displayName="MMG Sheath Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\sheath_ukr.paa"
		};
	};
	class PlateCarrierHolster_ColorBase;
	class MMG_Holster_ukraine: PlateCarrierHolster_ColorBase
	{
		scope=2;
		displayName="MMG Holster Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\holster_ukr.paa"
		};
	};
	class JPC_Bottle_Base;
	class MMG_bottle_ukraine: JPC_Bottle_Base
	{
		scope=2;
		displayName="MMG Bottle Ukraine M14";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\ukraine\jpc_bottle_ukr.paa"
		};
	};
};
