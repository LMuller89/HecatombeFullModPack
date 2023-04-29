class CfgPatches
{
	class Hecatombe
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
					"HEC_Core/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"HEC_Core/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"HEC_Core/scripts/5_Mission"
				};
			};
		};
	};
};