class CfgPatches
{
	class Savage_Safekeep
	{
		units[]=
		{
			"Savage_Safekeep"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Gear_Containers",
			"DZ_Data",
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Gear_Containers",
			"DZ_Characters_Headgear",
			"DZ_Weapons_Melee",
			"DZ_Characters_Headgear"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Savage_Safekeep: Inventory_Base
	{
		scope=2;
		storageCategory=1;
		displayName="Savage Safekeep";
		descriptionShort="Store all you Savage items and gear.";
		model="PSD_SafeKeep\safekeep\SavageKeep.p3d";
		weight=40000;
		physLayer="item_large";
		simulation="inventoryItem";
		carveNavmesh=1;
		canBeDigged=1;
		itemBehaviour=0;
		itemSize[]={10,20};
		itemsCargoSize[]={10,30};
		attachments[]=
		{
			"Shoulder",
			"Shoulder1",
			"Shoulder2",
			"Melee",
			"Headgear",
			"Mask",
			"Eyewear",
			"Gloves",
			"Armband",
			"Vest",
			"Body",
			"Back",
			"Hips",
			"Legs",
			"Feet"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"PSD_SafeKeep\data\metal_stains.paa"
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
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet="seachest_movement_SoundSet";
					id=1;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="seachest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};
