class CfgPatches
{
	class HEC_Box
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class SeaChest;
	class HEC_Box_SeaChest_Base: SeaChest
	{
		scope=0;
		displayName="Seachest Base do Servidor Hecatombe";
		descriptionShort="Baú do Servidor Hecatombe";
		itemSize[]={10,8};
		inventorySlot[]=
		{
			"Truck_01_Barrel1",
			"Truck_01_Barrel2",
			"Truck_01_Barrel3",
			"Truck_01_Barrel4",
			"Truck_01_WoodenCrate1",
			"Truck_01_WoodenCrate2",
			"Truck_01_WoodenCrate3",
			"Truck_01_WoodenCrate4"
		};
		attachments[]=
		{
			"Pistol",
			"Hips",
			"Back",
			"Body",
			"Legs",
			"Feet",
			"Mask",
			"Gloves",
			"Vest",
			"Headgear",
			"Knife"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Box\HEC_Box_SeaHeactombe.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Various
			{
				name="Various";
				description="";
				attachmentSlots[]=
				{
					"Pistol",
					"Knife"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
			class Loadout_Storage
			{
				name="Loadout";
				description="";
				attachmentSlots[]=
				{
					"Headgear",
					"Eyewear",
					"Mask",
					"Armband",
					"Gloves",
					"Body",
					"Vest",
					"Back",
					"Hips",
					"Legs",
					"Feet"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
		};
	};
	class HEC_Box_SeaHecatombe: HEC_Box_SeaChest_Base
	{
		scope=2;
		displayName="Baú do Servidor Hecatombe";
		descriptionShort="Baú do mar com capacidade de 500 slots do Servidor Hecatombe";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Box\HEC_Box_SeaHeactombe.paa"
		};
	};
};