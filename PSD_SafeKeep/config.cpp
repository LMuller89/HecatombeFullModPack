class CfgPatches
{
	class SavageSafeKeeps
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
	class SavageSafeKeeps
	{
		dir="PSD_SafeKeep";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="SavageSafeKeeps";
		credits="PINK";
		author="PINK";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"PSD_SafeKeep/scripts/4_World"
				};
			};
		};
	};
};
