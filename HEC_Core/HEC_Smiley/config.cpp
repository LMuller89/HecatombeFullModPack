class CfgPatches
{
	class HEC_Smiley
	{
		units[]=
		{
			"HEC_Smiley_Admin"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Characters_Headgear",
			"DZ_Characters_Tops"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class HEC_Smiley_ColorBase: Clothing
	{
		displayName="Admin Hecatombe Smiley";
		descriptionShort="Máscara Smiley Administrativa Hecatombe";
		model="HEC_Core\HEC_Smiley\HEC_Smiley_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		rotationFlags=1;
		weight=130;
		itemSize[]={2,2};
		heatIsolation=1;
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000000;
				};
			};
		};
		class ClothingTypes
		{
			male="HEC_Core\HEC_Smiley\HEC_Smiley_g.p3d";
			female="HEC_Core\HEC_Smiley\HEC_Smiley_g.p3d";
		};
		class Protection
		{
			biological=0.25;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class HEC_Smiley_Admin: HEC_Smiley_ColorBase
	{
		scope=2;
		color="Admin";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Smiley\HEC_Smiley_co.paa",
			"HEC_Core\data\HEC_Smiley\HEC_Smiley_co.paa",
			"HEC_Core\data\HEC_Smiley\HEC_Smiley_co.paa"
		};
	};
};