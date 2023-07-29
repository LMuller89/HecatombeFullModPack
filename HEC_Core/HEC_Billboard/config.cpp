class CfgPatches
{
	class HEC_Billboard
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Structures_Signs"
		};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class HEC_Billboard_1: HouseNoDestruct
	{
		scope=2;
		model="HEC_Core\HEC_Billboard\HEC_Billboard_1.p3d";
	};
	class HEC_Billboard_2: HouseNoDestruct
	{
		scope=2;
		model="HEC_Core\HEC_Billboard\HEC_Billboard_2.p3d";
	};
	class HEC_Billboard_3: HouseNoDestruct
	{
		scope=2;
		model="HEC_Core\HEC_Billboard\HEC_Billboard_3.p3d";
	};
	class HEC_Billboard_4: HouseNoDestruct
	{
		scope=2;
		model="HEC_Core\HEC_Billboard\HEC_Billboard_4.p3d";
	};
	class HEC_Billboard_5: HouseNoDestruct
	{
		scope=2;
		model="HEC_Core\HEC_Billboard\HEC_Billboard_5.p3d";
	};
};