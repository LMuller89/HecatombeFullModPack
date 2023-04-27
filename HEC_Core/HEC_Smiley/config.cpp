class CfgPatches
{
	class Hecatombe
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
					hitpoints=10000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"HEC_Core\data\HEC_Smiley\HEC_Smiley.rvmat"
							}
						}
					};
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
class CfgMods
{
	class Hecatombe
	{
		dir="Hecatombe";
		picture="";
		action="";
		hideName=0;
		hidePicture=0;
		name="Hecatombe";
		credits="MÜLLER, WINCODERS";
		author="MÜLLER, WINCODERS";
		authorID="76561198084922059, 76561198379616734";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"game",
			"world",
			"mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"Hecatombe/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Hecatombe/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Hecatombe/scripts/5_Mission"
				};
			};
		};
	};
};