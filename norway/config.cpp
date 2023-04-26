class CfgPatches
{
	class mmg_retexture
	{
		units[]=
		{
			"MMG_JPC_Vest_norway",
			"MMG_tt_vest_norway",
			"mmg_chestrig_norway",
			"MMG_MK_III_Armor_norway",
			"MMG_MK_V_Armor_norway",
			"MMG_combatshirt_norway",
			"MMG_combatpants_norway",
			"MMG_operatorshirt_norway",
			"MMG_tactical_shirt_norway",
			"mmg_tactical_gloves_norway",
			"MMG_boots_norway",
			"MMG_facemask_norway",
			"MMG_balaclava_norway",
			"MMG_boonie_norway",
			"MMG_striker_helmet_norway",
			"MMG_tactical_helmet_norway",
			"MMG_falcon_b1_belt_norway",
			"MMG_Mag_Pouch_norway",
			"MMG_triple_magpouch_norway",
			"MMG_double_magpouch_norway",
			"MMG_Med_Pouch_norway",
			"MMG_ammo_pouch_norway",
			"MMG_tactical_pouch_norway",
			"MMG_mk5_utility_pouch_norway",
			"MMG_mk_V_grenade_pouch_norway",
			"MMG_carrier_backpack_norway",
			"MMG_supplybag_norway",
			"MMG_assault_pack_norway",
			"MMG_camelback_norway",
			"MMG_sheath_norway",
			"MMG_Holster_norway",
			"MMG_bottle_norway"
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
	class MMG_JPC_Vest_norway: JPC_Vest_Base
	{
		scope=2;
		displayName="MMG JPC VEST Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\jpcvest_nor.paa",
			"mmg_retexture\data\textures\norway\jpcvest_nor.paa",
			"mmg_retexture\data\textures\norway\jpcvest_nor.paa"
		};
	};
	class tt_vest_Base;
	class MMG_tt_vest_norway: tt_vest_Base
	{
		scope=2;
		displayName="MMG TT Plate Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\tt_vest_nor.paa",
			"mmg_retexture\data\textures\norway\tt_vest_nor.paa",
			"mmg_retexture\data\textures\norway\tt_vest_nor.paa"
		};
	};
	class mmg_chestrig_Base;
	class mmg_chestrig_norway: mmg_chestrig_Base
	{
		scope=2;
		displayName="MMG Chestrig Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\chestrig_nor.paa",
			"mmg_retexture\data\textures\norway\chestrig_nor.paa",
			"mmg_retexture\data\textures\norway\chestrig_nor.paa"
		};
	};
	class heavyvest_base;
	class MMG_MK_III_Armor_norway: heavyvest_base
	{
		scope=2;
		displayName="MMG MK-3 Armor Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\heavyvest_nor.paa",
			"mmg_retexture\data\textures\norway\heavyvest_nor.paa",
			"mmg_retexture\data\textures\norway\heavyvest_nor.paa"
		};
	};
	class mk5_vest_base;
	class MMG_MK_V_Armor_norway: mk5_vest_base
	{
		scope=2;
		displayName="MMG MK-V Armor Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\mk5_vest_nor.paa",
			"mmg_retexture\data\textures\norway\mk5_vest_nor.paa",
			"mmg_retexture\data\textures\norway\mk5_vest_nor.paa"
		};
	};
	class combatshirt_base;
	class MMG_combatshirt_norway: combatshirt_base
	{
		scope=2;
		displayName="MMG CombatShirt Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\combatshirt_nor_g.paa",
			"mmg_retexture\data\textures\norway\combatshirt_nor.paa",
			"mmg_retexture\data\textures\norway\combatshirt_nor.paa"
		};
	};
	class combatpants_base;
	class MMG_combatpants_norway: combatpants_base
	{
		scope=2;
		displayName="MMG CombatPants Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\combatpants_nor_g.paa",
			"mmg_retexture\data\textures\norway\combatpants_nor.paa",
			"mmg_retexture\data\textures\norway\combatpants_nor.paa"
		};
	};
	class operatorshirt_base;
	class MMG_operatorshirt_norway: operatorshirt_base
	{
		scope=2;
		displayName="MMG Operatorshirt Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\operatorshirt_nor.paa",
			"mmg_retexture\data\textures\norway\operatorshirt_nor.paa",
			"mmg_retexture\data\textures\norway\operatorshirt_nor.paa"
		};
	};
	class mmg_tactical_shirt_base;
	class MMG_tactical_shirt_norway: mmg_tactical_shirt_base
	{
		scope=2;
		displayName="MMG Tactical Shirt Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\tactical_shirt_nor.paa",
			"mmg_retexture\data\textures\norway\tactical_shirt_nor.paa",
			"mmg_retexture\data\textures\norway\tactical_shirt_nor.paa"
		};
	};
	class TacticalGloves_ColorBase;
	class mmg_tactical_gloves_norway: TacticalGloves_ColorBase
	{
		scope=2;
		displayName="MMG Tactical Gloves Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\tacticalgloves_nor.paa",
			"mmg_retexture\data\textures\norway\tacticalgloves_nor.paa",
			"mmg_retexture\data\textures\norway\tacticalgloves_nor.paa"
		};
	};
	class JungleBoots_ColorBase;
	class MMG_boots_norway: JungleBoots_ColorBase
	{
		scope=2;
		displayName="MMG Tactical Boots Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\boots_nor.paa",
			"mmg_retexture\data\textures\norway\boots_nor.paa",
			"mmg_retexture\data\textures\norway\boots_nor.paa"
		};
	};
	class facemask_base;
	class MMG_facemask_norway: facemask_base
	{
		scope=2;
		displayName="MMG Facemask Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\facemask_nor.paa",
			"mmg_retexture\data\textures\norway\facemask_nor.paa",
			"mmg_retexture\data\textures\norway\facemask_nor.paa",
			"mmg_retexture\data\textures\norway\facemask_nor.paa",
			"mmg_retexture\data\textures\norway\facemask_nor.paa"
		};
	};
	class balaclava_base;
	class MMG_balaclava_norway: balaclava_base
	{
		scope=2;
		displayName="MMG Balaclava Norway M98";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\balaclava_nor.paa",
			"mmg_retexture\data\textures\norway\balaclava_nor.paa",
			"mmg_retexture\data\textures\norway\balaclava_nor.paa"
		};
	};
	class mmg_boonie_base;
	class MMG_boonie_norway: mmg_boonie_base
	{
		scope=2;
		displayName="MMG Sniper Boonie Norway M98";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\boonie_nor.paa",
			"mmg_retexture\data\textures\norway\boonie_nor.paa",
			"mmg_retexture\data\textures\norway\boonie_nor.paa"
		};
	};
	class striker_helmet_base;
	class MMG_striker_helmet_norway: striker_helmet_base
	{
		scope=2;
		displayName="MMG Striker Helmet Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\sweden\striker_visor_base_co.paa",
			"mmg_retexture\data\textures\norway\striker_helmet_nor.paa",
			"mmg_retexture\data\textures\norway\striker_helmet_nor.paa",
			"mmg_retexture\data\textures\norway\striker_helmet_nor.paa"
		};
	};
	class tactical_helmet_base;
	class MMG_tactical_helmet_norway: tactical_helmet_base
	{
		scope=2;
		displayName="MMG Defcon 5 Tactical Helmet Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\tactical_helmet_nor.paa",
			"mmg_retexture\data\textures\norway\tactical_helmet_nor.paa",
			"mmg_retexture\data\textures\norway\tactical_helmet_nor.paa"
		};
	};
	class falconbelt_base;
	class MMG_falcon_b1_belt_norway: falconbelt_base
	{
		scope=2;
		displayName="MMG Falcon Belt Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\falconbelt_nor.paa",
			"mmg_retexture\data\textures\norway\falconbelt_nor.paa",
			"mmg_retexture\data\textures\norway\falconbelt_nor.paa",
			"mmg_retexture\data\textures\norway\drop_leg_nor.paa"
		};
	};
	class mag_pouch_Base;
	class MMG_Mag_Pouch_norway: mag_pouch_Base
	{
		scope=2;
		displayName="MMG Mag Pouch Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\JPCmag_pouch_nor.paa"
		};
	};
	class triple_magpouch_base;
	class MMG_triple_magpouch_norway: triple_magpouch_base
	{
		scope=2;
		displayName="MMG Triple MagPouch Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\single_magpouch_nor.paa",
			"mmg_retexture\data\textures\norway\single_magpouch_nor.paa",
			"mmg_retexture\data\textures\norway\single_magpouch_nor.paa"
		};
	};
	class double_magpouch_base;
	class MMG_double_magpouch_norway: double_magpouch_base
	{
		scope=2;
		displayName="MMG Double MagPouch Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\single_magpouch_nor.paa",
			"mmg_retexture\data\textures\norway\single_magpouch_nor.paa"
		};
	};
	class JPCMed_Pouch_base;
	class MMG_Med_Pouch_norway: JPCMed_Pouch_base
	{
		scope=2;
		displayName="MMG MedPouch Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\jpcmed_pouch_nor.paa"
		};
	};
	class JPCammo_pouch_base;
	class MMG_ammo_pouch_norway: JPCammo_pouch_base
	{
		scope=2;
		displayName="EOD Pouch Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\ammo_pouch_nor.paa"
		};
	};
	class tactical_pouch_base;
	class MMG_tactical_pouch_norway: tactical_pouch_base
	{
		scope=2;
		displayName="MMG 5.11 Tactical Pouch Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\tactical_pouch_nor.paa"
		};
	};
	class mk5_utility_pouch_base;
	class MMG_mk5_utility_pouch_norway: mk5_utility_pouch_base
	{
		scope=2;
		displayName="MMG MK5 Utility Pouch Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\mk5_gear_nor.paa"
		};
	};
	class mk5_grenade_pouch_base;
	class MMG_mk_V_grenade_pouch_norway: mk5_grenade_pouch_base
	{
		scope=2;
		displayName="MMG MK5 Grenade Pouch Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\mk5_gear_nor.paa"
		};
	};
	class carrier_backpack_base;
	class MMG_carrier_backpack_norway: carrier_backpack_base
	{
		scope=2;
		displayName="MMG Carrier Pack Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\carrier_backpack_nor.paa",
			"mmg_retexture\data\textures\norway\carrier_backpack_nor.paa",
			"mmg_retexture\data\textures\norway\carrier_backpack_nor.paa"
		};
	};
	class supplybag_base;
	class MMG_supplybag_norway: supplybag_base
	{
		scope=2;
		displayName="MMG 5.11 SupplyBag Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\supplybag_nor.paa",
			"mmg_retexture\data\textures\norway\supplybag_nor.paa",
			"mmg_retexture\data\textures\norway\supplybag_nor.paa",
			"mmg_retexture\data\textures\norway\carrier_backpack_nor.paa"
		};
	};
	class assault_pack_base;
	class MMG_assault_pack_norway: assault_pack_base
	{
		scope=2;
		displayName="MMG Assault Pack Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\assault_pack_nor.paa",
			"mmg_retexture\data\textures\norway\assault_pack_nor.paa",
			"mmg_retexture\data\textures\norway\assault_pack_nor.paa"
		};
	};
	class camelback_base;
	class MMG_camelback_norway: camelback_base
	{
		scope=2;
		displayName="MMG Camelback Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\camelback_nor.paa",
			"mmg_retexture\data\textures\norway\camelback_nor.paa",
			"mmg_retexture\data\textures\norway\camelback_nor.paa"
		};
	};
	class JPCsheath_Base;
	class MMG_sheath_norway: JPCsheath_Base
	{
		scope=2;
		displayName="MMG Sheath Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\sheath_nor.paa"
		};
	};
	class PlateCarrierHolster_ColorBase;
	class MMG_Holster_norway: PlateCarrierHolster_ColorBase
	{
		scope=2;
		displayName="MMG Holster Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\holster_nor.paa"
		};
	};
	class JPC_Bottle_Base;
	class MMG_bottle_norway: JPC_Bottle_Base
	{
		scope=2;
		displayName="MMG Bottle Norway M98";
		hiddenSelectionsTextures[]=
		{
			"mmg_retexture\data\textures\norway\jpc_bottle_nor.paa"
		};
	};
};
