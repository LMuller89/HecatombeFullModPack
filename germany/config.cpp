class CfgPatches
{
	class germany
	{
		units[]=
		{
			"MMG_JPC_Vest_germany",
			"MMG_tt_vest_germany",
			"mmg_chestrig_germany",
			"MMG_MK_III_Armor_germany",
			"MMG_MK_V_Armor_germany",
			"MMG_combatshirt_germany",
			"MMG_combatpants_germany",
			"MMG_operatorshirt_germany",
			"MMG_tactical_shirt_germany",
			"mmg_tactical_gloves_germany",
			"MMG_boots_germany",
			"MMG_facemask_germany",
			"MMG_balaclava_germany",
			"MMG_boonie_germany",
			"MMG_striker_helmet_germany",
			"MMG_tactical_helmet_germany",
			"MMG_falcon_b1_belt_germany",
			"MMG_Mag_Pouch_germany",
			"MMG_triple_magpouch_germany",
			"MMG_double_magpouch_germany",
			"MMG_Med_Pouch_germany",
			"MMG_ammo_pouch_germany",
			"MMG_tactical_pouch_germany",
			"MMG_mk5_utility_pouch_germany",
			"MMG_mk_V_grenade_pouch_germany",
			"MMG_carrier_backpack_germany",
			"MMG_supplybag_germany",
			"MMG_assault_pack_germany",
			"MMG_camelback_germany",
			"MMG_sheath_germany",
			"MMG_Holster_germany",
			"MMG_bottle_germany"
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
	class germany
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
	class MMG_JPC_Vest_germany: JPC_Vest_Base
	{
		scope=2;
		displayName="MMG JPC VEST German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\jpcvest_ft.paa",
			"germany\data\jpcvest_ft.paa",
			"germany\data\jpcvest_ft.paa"
		};
	};
	class tt_vest_Base;
	class MMG_tt_vest_germany: tt_vest_Base
	{
		scope=2;
		displayName="MMG TT Plate German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\tt_vest_ft.paa",
			"germany\data\tt_vest_ft.paa",
			"germany\data\tt_vest_ft.paa"
		};
	};
	class mmg_chestrig_Base;
	class mmg_chestrig_germany: mmg_chestrig_Base
	{
		scope=2;
		displayName="MMG Chestrig German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\chestrig_ft.paa",
			"germany\data\chestrig_ft.paa",
			"germany\data\chestrig_ft.paa"
		};
	};
	class heavyvest_base;
	class MMG_MK_III_Armor_germany: heavyvest_base
	{
		scope=2;
		displayName="MMG MK-3 Armor German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\heavyvest_ft.paa",
			"germany\data\heavyvest_ft.paa",
			"germany\data\heavyvest_ft.paa"
		};
	};
	class mk5_vest_base;
	class MMG_MK_V_Armor_germany: mk5_vest_base
	{
		scope=2;
		displayName="MMG MK-V Armor German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\mk5_vest_ft.paa",
			"germany\data\mk5_vest_ft.paa",
			"germany\data\mk5_vest_ft.paa"
		};
	};
	class combatshirt_base;
	class MMG_combatshirt_germany: combatshirt_base
	{
		scope=2;
		displayName="MMG CombatShirt German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\combatshirt_ft_g.paa",
			"germany\data\combatshirt_ft.paa",
			"germany\data\combatshirt_ft.paa"
		};
	};
	class combatpants_base;
	class MMG_combatpants_germany: combatpants_base
	{
		scope=2;
		displayName="MMG CombatPants German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\combatpants_ft_g.paa",
			"germany\data\combatpants_ft.paa",
			"germany\data\combatpants_ft.paa"
		};
	};
	class operatorshirt_base;
	class MMG_operatorshirt_germany: operatorshirt_base
	{
		scope=2;
		displayName="MMG Operatorshirt German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\operatorshirt_ft.paa",
			"germany\data\operatorshirt_ft.paa",
			"germany\data\operatorshirt_ft.paa"
		};
	};
	class mmg_tactical_shirt_base;
	class MMG_tactical_shirt_germany: mmg_tactical_shirt_base
	{
		scope=2;
		displayName="MMG Tactical Shirt German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\tactical_shirt_ft.paa",
			"germany\data\tactical_shirt_ft.paa",
			"germany\data\tactical_shirt_ft.paa"
		};
	};
	class TacticalGloves_ColorBase;
	class mmg_tactical_gloves_germany: TacticalGloves_ColorBase
	{
		scope=2;
		displayName="MMG Gloves German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\tacticalgloves_ft.paa",
			"germany\data\tacticalgloves_ft.paa",
			"germany\data\tacticalgloves_ft.paa"
		};
	};
	class JungleBoots_ColorBase;
	class MMG_boots_germany: JungleBoots_ColorBase
	{
		scope=2;
		displayName="MMG Tactical Boots German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\boots_ft.paa",
			"germany\data\boots_ft.paa",
			"germany\data\boots_ft.paa"
		};
	};
	class facemask_base;
	class MMG_facemask_germany: facemask_base
	{
		scope=2;
		displayName="MMG Facemask German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\facemask_ft.paa",
			"germany\data\facemask_ft.paa",
			"germany\data\facemask_ft.paa",
			"germany\data\facemask_ft.paa",
			"germany\data\facemask_ft.paa"
		};
	};
	class balaclava_base;
	class MMG_balaclava_germany: balaclava_base
	{
		scope=2;
		displayName="MMG Balaclava German FT";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"germany\data\balaclava_ft.paa",
			"germany\data\balaclava_ft.paa",
			"germany\data\balaclava_ft.paa"
		};
	};
	class mmg_boonie_base;
	class MMG_boonie_germany: mmg_boonie_base
	{
		scope=2;
		displayName="MMG Sniper Boonie German FT";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"germany\data\boonie_ft.paa",
			"germany\data\boonie_ft.paa",
			"germany\data\boonie_ft.paa"
		};
	};
	class striker_helmet_base;
	class MMG_striker_helmet_germany: striker_helmet_base
	{
		scope=2;
		displayName="MMG Striker Helmet German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\striker_visor_base_co.paa",
			"germany\data\striker_helmet_ft.paa",
			"germany\data\striker_helmet_ft.paa",
			"germany\data\striker_helmet_ft.paa"
		};
	};
	class tactical_helmet_base;
	class MMG_tactical_helmet_germany: tactical_helmet_base
	{
		scope=2;
		displayName="MMG Tactical Helmet German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\tactical_helmet_ft.paa",
			"germany\data\tactical_helmet_ft.paa",
			"germany\data\tactical_helmet_ft.paa"
		};
	};
	class falconbelt_base;
	class MMG_falcon_b1_belt_germany: falconbelt_base
	{
		scope=2;
		displayName="MMG Falcon Belt German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\falconbelt_ft.paa",
			"germany\data\falconbelt_ft.paa",
			"germany\data\falconbelt_ft.paa",
			"germany\data\drop_leg_ft.paa"
		};
	};
	class mag_pouch_Base;
	class MMG_Mag_Pouch_germany: mag_pouch_Base
	{
		scope=2;
		displayName="MMG MagPouch German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\JPCmag_pouch_ft.paa"
		};
	};
	class triple_magpouch_base;
	class MMG_triple_magpouch_germany: triple_magpouch_base
	{
		scope=2;
		displayName="MMG Triple MagPouch German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\single_magpouch_ft.paa",
			"germany\data\single_magpouch_ft.paa",
			"germany\data\single_magpouch_ft.paa"
		};
	};
	class double_magpouch_base;
	class MMG_double_magpouch_germany: double_magpouch_base
	{
		scope=2;
		displayName="MMG Double MagPouch German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\single_magpouch_ft.paa",
			"germany\data\single_magpouch_ft.paa"
		};
	};
	class JPCMed_Pouch_base;
	class MMG_Med_Pouch_germany: JPCMed_Pouch_base
	{
		scope=2;
		displayName="MMG MedPouch German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\jpcmed_pouch_ft.paa"
		};
	};
	class JPCammo_pouch_base;
	class MMG_ammo_pouch_germany: JPCammo_pouch_base
	{
		scope=2;
		displayName="EOD Pouch German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\ammo_pouch_ft.paa"
		};
	};
	class tactical_pouch_base;
	class MMG_tactical_pouch_germany: tactical_pouch_base
	{
		scope=2;
		displayName="MMG 5.11 Tactical Pouch German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\tactical_pouch_ft.paa"
		};
	};
	class mk5_utility_pouch_base;
	class MMG_mk5_utility_pouch_germany: mk5_utility_pouch_base
	{
		scope=2;
		displayName="MMG MK5 Utility Pouch German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\mk5_gear_ft.paa"
		};
	};
	class mk5_grenade_pouch_base;
	class MMG_mk_V_grenade_pouch_germany: mk5_grenade_pouch_base
	{
		scope=2;
		displayName="MMG MK5 Grenade Pouch German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\mk5_gear_ft.paa"
		};
	};
	class carrier_backpack_base;
	class MMG_carrier_backpack_germany: carrier_backpack_base
	{
		scope=2;
		displayName="MMG Carrier Pack German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\carrier_backpack_ft.paa",
			"germany\data\carrier_backpack_ft.paa",
			"germany\data\carrier_backpack_ft.paa"
		};
	};
	class supplybag_base;
	class MMG_supplybag_germany: supplybag_base
	{
		scope=2;
		displayName="MMG 5.11 SupplyBag German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\supplybag_ft.paa",
			"germany\data\supplybag_ft.paa",
			"germany\data\supplybag_ft.paa",
			"germany\data\carrier_backpack_ft.paa"
		};
	};
	class assault_pack_base;
	class MMG_assault_pack_germany: assault_pack_base
	{
		scope=2;
		displayName="MMG Assault Pack German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\assault_pack_ft.paa",
			"germany\data\assault_pack_ft.paa",
			"germany\data\assault_pack_ft.paa"
		};
	};
	class camelback_base;
	class MMG_camelback_germany: camelback_base
	{
		scope=2;
		displayName="MMG Camelback German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\camelback_ft.paa",
			"germany\data\camelback_ft.paa",
			"germany\data\camelback_ft.paa"
		};
	};
	class JPCsheath_Base;
	class MMG_sheath_germany: JPCsheath_Base
	{
		scope=2;
		displayName="MMG Sheath German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\sheath_ft.paa"
		};
	};
	class PlateCarrierHolster_ColorBase;
	class MMG_Holster_germany: PlateCarrierHolster_ColorBase
	{
		scope=2;
		displayName="MMG Holster German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\holster_ft.paa"
		};
	};
	class JPC_Bottle_Base;
	class MMG_bottle_germany: JPC_Bottle_Base
	{
		scope=2;
		displayName="MMG Bottle German FT";
		hiddenSelectionsTextures[]=
		{
			"germany\data\jpc_bottle_ft.paa"
		};
	};
};
