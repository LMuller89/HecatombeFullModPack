class CfgPatches
{
	class HEC_Ladder
	{
		requiredAddons[]=
		{
			"DZ_Data"
		};
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class HEC_Ladder: HouseNoDestruct
	{
		scope=1;
		model="\HEC_Ladder\HEC_Ladder.p3d";
	};
};