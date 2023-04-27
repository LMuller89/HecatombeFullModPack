class CfgPatches
{
	class HEC_MENU
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Consumables",
			"DZ_Vehicles_Wheeled",
			"DZ_Structures_Residential",
			"DZ_Sounds_Effects",
			"DZ_Sounds_Weapons"
		};
	};
};	
class CfgMods
{
	class HEC_MENU
	{
		dir="HEC_MENU";
		picture="";
		action="";
		hideName=0;
		hidePicture=0;
		name="HEC_MENU";
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
					"HEC_Menu/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"HEC_Menu/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"HEC_Menu/scripts/5_Mission"
				};
			};
		};
	};
};
class CfgSoundSets {
	class FMusic_Menu_SoundSet {
		soundShaders[] = {"FMusic_Menu_SoundShader"};
		volumeFactor = 1;
		frequencyFactor = 1;
		spatial = 0;
	};
};
class CfgSoundShaders {
	class FMusic_Menu_SoundShader {
		samples[] = {{"\HEC_Menu\mainmenu", 1}};
		volume = 0.5;
	};
};