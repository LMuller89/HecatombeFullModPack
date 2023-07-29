#define _ARMA_

class CfgPatches
{
	class HEC_Loadingscreen
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
	class HEC_Loadingscreen
	{
		dir="HEC_Loadingscreen";
		picture="";
		action="";
		hideName=0;
		hidePicture=1;
		name="HEC_Loadingscreen";
		author="Müller";
		credits="Müller";
		authorID="0";
		version="1.0";
		type="mod";
		dependencies[]=
		{
			"Game"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"HEC_Loadingscreen/scripts/3_Game"
				};
			};
		};
	};
};
