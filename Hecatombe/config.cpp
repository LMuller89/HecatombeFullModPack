class CfgPatches
{
	class Hecatombe
	{
		units[]=
		{
			"AdminHecatombeSmiley"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Containers",
			"DZ_Gear_Camping",
			"DZ_Data",
			"DZ_Characters_Headgear",
			"DZ_Characters_Tops"
		};
	};
};
class cfgVehicles
{
	class Flag_Base;
	class HEC_Flag_Hecatombe: Flag_Base //Hecatombe
	{
		scope=2;
		displayName="Bandeira do Servidor Hecatombe";
		descriptionShort="Bandeira do Servidor Hecatombe";
		hiddenSelectionsTextures[]=
		{
			"\Hecatombe\data\Flags\Flag_Hecatombe_co.paa"
		};
	};
	class Flag_Base;
	class HEC_Flag_Krona: Flag_Base //Krona
	{
		scope=2;
		displayName="Bandeira do Cartel de Krona Castle";
		descriptionShort="Bandeira do Cartel do Castelo de Krona";
		hiddenSelectionsTextures[]=
		{
			"\Hecatombe\data\Flags\Flag_Krona_co.paa"
		};
	};
	class Flag_Base;
	class HEC_Flag_Devils: Flag_Base //Devils
	{
		scope=2;
		displayName="Bandeira do Cartel de Devils Castle";
		descriptionShort="Bandeira do Cartel do Castelo de Devils";
		hiddenSelectionsTextures[]=
		{
			"\Hecatombe\data\Flags\Flag_Devils_co.paa"
		};
	};
	class Flag_Base;
	class HEC_Flag_Cla_BLT: Flag_Base //Clã BLT
	{
		scope=2;
		displayName="Bandeira do Clã [BLT]";
		descriptionShort="Bandeira do Clã Bullet's";
		hiddenSelectionsTextures[]=
		{
			"\Hecatombe\data\Flags\Flag_Cla_BLT_co.paa"
		};
	};
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class AdminHecatombeSmiley: Clothing
	{
		scope=2;
		displayName="Admin Hecatombe Smiley";
		descriptionShort="Máscara Smiley Administrativa Hecatombe";
		model="Hecatombe\Smiley\Smiley_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		weight=10;
		itemSize[]={2,2};
		hiddenSelectionsTextures[]=
		{
			"Hecatombe\Smiley\Smiley_co.paa",
			"Hecatombe\Smiley\Smiley_co.paa",
			"Hecatombe\Smiley\Smiley_co.paa"
		};
		class ClothingTypes
		{
			male="Hecatombe\Smiley\Smiley.p3d";
			female="Hecatombe\Smiley\Smiley.p3d";
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=1000;
                    healthLevels[]={};
                };
            };
            class GlobalArmor
            {
                class Melee
                {
                    class Health
                    {
                        damage=0.85000002;
                    };
                    class Blood
                    {
                        damage=0.80000001;
                    };
                    class Shock
                    {
                        damage=0.89999998;
                    };
                };
                class Infected
                {
                    class Health
                    {
                        damage=0.85000002;
                    };
                    class Blood
                    {
                        damage=0.80000001;
                    };
                    class Shock
                    {
                        damage=0.89999998;
                    };
                };
            };
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