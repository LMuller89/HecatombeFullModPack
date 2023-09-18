class CfgPatches
{
	class HEC_Admin
	{
		units[]=
		{
			"HEC_Adm_Capacete",
			"HEC_Adm_Camiseta",
			"HEC_Adm_CamisetaTatica",
			"HEC_Adm_Calca",
			"HEC_Adm_Colete",
			"HEC_Adm_Cinto",
			"HEC_Adm_Balaclava",
			"HEC_Adm_Mochila",
			"HEC_Adm_AmmoPouch",
			"HEC_Adm_MagPouch",
			"HEC_Adm_MedicaPouch",
			"HEC_Adm_TaticaPouch"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Vests",
			"DZ_Gear_Containers",
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Mich2001Helmet;
	class TacticalShirt_ColorBase;
	class CargoPants_ColorBase;
	class PlateCarrierVest;
	class BalaclavaMask_ColorBase;
	class Container_Base;
	class Clothing;
	class striker_helmet_base: Mich2001Helmet
	{
		scope=0;
		displayName="Striker Helmet";
		class ClothingTypes
		{
			male="\JPC_Vest\data\helmet\striker_helmet_m.p3d";
			female="\JPC_Vest\data\helmet\striker_helmet_f.p3d";
		};
	};
	class HEC_Adm_Capacete: striker_helmet_base
	{
		scope=2;
		displayName="Capacete do Hecatombe Special Force";
		descriptionShort="Capacete do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_Visor.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Capacete.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Capacete.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Capacete.paa"
		};
	};
	class HEC_Adm_Camiseta: TacticalShirt_ColorBase
	{
		itemsCargoSize[]={8,10};
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_Camiseta.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Camiseta.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Camiseta.paa"
		};
	};
	class HEC_Adm_CamisetaTatica_base: Clothing
	{
		descriptionShort="Camiseta Tatica do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE";
		model="\jpc_vest\data\clothing\tactical_shirt_g.p3d";
		ContinuouActions[]=
		{
			"AT_WRING_CLOTHES"
		};
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=1630;
		itemSize[]={4,3};
		itemsCargoSize[]={7,5};
		quickBarBonus=3;
		varWetMax=0.69;
		heatIsolation=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="HeavyJacket";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\jpc_vest\data\clothing\tactical_shirt\tactical_shirt_digital.paa",
			"\jpc_vest\data\clothing\tactical_shirt\tactical_shirt_digital.paa",
			"\jpc_vest\data\clothing\tactical_shirt\tactical_shirt_digital.paa"
		};
		class ClothingTypes
		{
			male="\jpc_vest\data\clothing\tactical_shirt_m.p3d";
			female="\jpc_vest\data\clothing\tactical_shirt_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"JPC_Vest\data\clothing\tactical_shirt\tactical_shirt.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"JPC_Vest\data\clothing\tactical_shirt\tactical_shirt.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"JPC_Vest\data\clothing\tactical_shirt\tactical_shirt_damaged.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"JPC_Vest\data\clothing\tactical_shirt\tactical_shirt_damaged.rvmat"
							}
						},
						
						{
							0,
							
							{
								"JPC_Vest\data\clothing\tactical_shirt\tactical_shirt_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.89999998;
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
						damage=0.89999998;
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
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class HEC_Adm_CamisetaTatica: HEC_Adm_CamisetaTatica_base
	{
		scope=2;
		itemsCargoSize[]={8,10};
		displayName="Camiseta Tatica Hecatombe Special Force";
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_Camiseta.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Camiseta.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Camiseta.paa"
		};
	};
	class HEC_Adm_Calca_base: CargoPants_ColorBase
	{
		displayName="Calça do Hecatombe Special Force";
		scope=0;
		itemSize[]={4,3};
		itemsCargoSize[]={6,5};
		varWetMax=0.60000002;
		heatIsolation=0.85000002;
		hiddenSelectionsMaterials[]=
		{
			"JPC_Vest\data\clothing\combatpants\combatpants.rvmat"
		};
	};
	class HEC_Adm_Calca: HEC_Adm_Calca_base
	{
		scope=2;
		descriptionShort="Calça do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_Calca.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Calca.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Calca.paa"
		};
	};
	class HEC_Adm_Colete_base: PlateCarrierVest
	{
		scope=0;
		displayName="Colete do Hecatombe Special Force";
		model="\JPC_Vest\data\heavyvest_g.p3d";
		inventorySlot[]=
		{
			"Vest"
		};
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		attachments[]=
		{
			"VestPouch",
			"tactical_pouch2",
			"JPCMed_Pouch",
			"VestGrenadeA",
			"mmg_patch"
		};
		dexterityCondition="true";
		weight=12500;
		quickBarBonus=3;
		itemSize[]={5,5};
		varWetMax=0.49000001;
		heatIsolation=0.80000001;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"JPC_Vest\data\Vest\heavyvest\heavyvest_base_co.paa",
			"JPC_Vest\data\Vest\heavyvest\heavyvest_base_co.paa",
			"JPC_Vest\data\Vest\heavyvest\heavyvest_base_co.paa"
		};
		class ClothingTypes
		{
			male="\JPC_Vest\data\heavyvest_m.p3d";
			female="\JPC_Vest\data\heavyvest_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"JPC_Vest\data\Vest\heavyvest\heavyvest.rvmat",
								"JPC_Vest\data\Vest\heavyvest\heavyvest.rvmat",
								"JPC_Vest\data\Vest\heavyvest\heavyvest.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"JPC_Vest\data\Vest\heavyvest\heavyvest.rvmat",
								"JPC_Vest\data\Vest\heavyvest\heavyvest.rvmat",
								"JPC_Vest\data\Vest\heavyvest\heavyvest.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"JPC_Vest\data\Vest\heavyvest\heavyvest_damaged.rvmat",
								"JPC_Vest\data\Vest\heavyvest\heavyvest_damaged.rvmat",
								"JPC_Vest\data\Vest\heavyvest\heavyvest_damaged.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"JPC_Vest\data\Vest\heavyvest\heavyvest_damaged.rvmat",
								"JPC_Vest\data\Vest\heavyvest\heavyvest_damaged.rvmat",
								"JPC_Vest\data\Vest\heavyvest\heavyvest_damaged.rvmat"
							}
						},
						
						{
							0,
							
							{
								"JPC_Vest\data\Vest\heavyvest\heavyvest_destruct.rvmat",
								"JPC_Vest\data\Vest\heavyvest\heavyvest_destruct.rvmat",
								"JPC_Vest\data\Vest\heavyvest\heavyvest_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.2;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.44999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
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
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class HEC_Adm_Colete: HEC_Adm_Colete_base
	{
		scope=2;
		descriptionShort="Colete do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_Colete.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Colete.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Colete.paa"
		};
	};
	class HEC_Adm_Cinto_base: Clothing
	{
		scope=0;
		displayName="Cinto do Hecatombe Special Force";
		model="\JPC_Vest\data\belt\falconbelt_g.p3d";
		attachments[]=
		{
			"Belt_Right",
			"tactical_pouch3",
			"jpcmed_pouch",
			"Belt_Back",
			"Belt_Left",
			"carbine",
			"morphine",
			"epinephrine"
		};
		inventorySlot[]=
		{
			"Hips"
		};
		itemInfo[]=
		{
			"Clothing",
			"Hips"
		};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		itemSize[]={4,2};
		weight=20;
		quickBarBonus=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"camo_holster"
		};
		hiddenSelectionsTextures[]=
		{
			"\JPC_Vest\data\belt\falcon_b1\falconbelt_olive.paa",
			"\JPC_Vest\data\belt\falcon_b1\falconbelt_olive.paa",
			"\JPC_Vest\data\belt\falcon_b1\falconbelt_olive.paa",
			"\JPC_Vest\data\belt\drop_leg\drop_leg_green.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"JPC_Vest\data\belt\falcon_b1\falconbelt.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"JPC_Vest\data\belt\falcon_b1\falconbelt.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"JPC_Vest\data\belt\falcon_b1\falconbelt_damaged.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"JPC_Vest\data\belt\falcon_b1\falconbelt_damaged.rvmat"
							}
						},
						
						{
							0,
							
							{
								"JPC_Vest\data\belt\falcon_b1\falconbelt_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\JPC_Vest\data\belt\falconbelt_m.p3d";
			female="\JPC_Vest\data\belt\falconbelt_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class HEC_Adm_Cinto: HEC_Adm_Cinto_base
	{
		scope=2;
		descriptionShort="Cinto do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_Cinto.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Cinto.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Cinto.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_CintoPerna.paa"
		};
	};
	class HEC_Adm_Balaclava_base: BalaclavaMask_ColorBase
	{
		displayName="Balaclava do Hecatombe Special Force";
		itemSize[]={3,2};
		ragQuantity=1;
		varWetMax=1;
		heatIsolation=1;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
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
	};
	class HEC_Adm_Balaclava: HEC_Adm_Balaclava_base
	{
		scope=2;
		descriptionShort="Balaclava do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_Balaclava.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Balaclava.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Balaclava.paa"
		};
	};
	class HEC_Adm_Mochila_base: Clothing
	{
		displayName="Mochila do Hecatombe Special Force";
		model="\JPC_Vest\data\backpack\assault_pack_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		attachments[]=
		{
			"Melee",
			"WalkieTalkie",
			"Chemlight"
		};
		rotationFlags=16;
		itemSize[]={5,7};
		itemsCargoSize[]={8,10};
		weight=2500;
		varWetMax=0.30000001;
		heatIsolation=1;
		isBack=1;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Outdoor";
		randomQuantity=4;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\JPC_Vest\data\backpack\assault_pack\assault_pack_black.paa",
			"\JPC_Vest\data\backpack\assault_pack\assault_pack_black.paa",
			"\JPC_Vest\data\backpack\assault_pack\assault_pack_black.paa"
		};
		simpleHiddenSelections[]=
		{
			"slot_melee_rifle",
			"slot_melee_melee"
		};
		class ClothingTypes
		{
			male="\JPC_Vest\data\backpack\assault_pack_m.p3d";
			female="\JPC_Vest\data\backpack\assault_pack_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"JPC_Vest\data\backpack\assault_pack\assault_pack.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"JPC_Vest\data\backpack\assault_pack\assault_pack.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"JPC_Vest\data\backpack\assault_pack\assault_pack_damaged.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"JPC_Vest\data\backpack\assault_pack\assault_pack_damaged.rvmat"
							}
						},
						
						{
							0,
							
							{
								"JPC_Vest\data\backpack\assault_pack\assault_pack_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class HEC_Adm_Mochila: HEC_Adm_Mochila_base
	{
		scope=2;
		descriptionShort="Mochila do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_Mochila.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Mochila.paa",
			"HEC_Core\data\HEC_Adm\HEC_Adm_Mochila.paa"
		};
	};
	class HEC_Adm_AmmoPouch_base: Container_Base
	{
		scope=0;
		displayName="Bolsa Munições do Hecatombe Special Force";
		model="\JPC_Vest\data\JPCammo_pouch.p3d";
		itemSize[]={4,3};
		itemsCargoSize[]={6,4};
		inventorySlot[]=
		{
			"JPCammo_pouch",
			"tactical_pouch",
			"tactical_pouch1",
			"tactical_pouch2"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\JPC_Vest\data\pouch\ammo_pouch\JPCammo_pouch_base.paa"
		};
		weight=100;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		lootTag[]=
		{
			"Military_east",
			"Military_west"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"JPC_Vest\data\pouch\ammo_pouch\JPCammo_pouch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"JPC_Vest\data\pouch\ammo_pouch\JPCammo_pouch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"JPC_Vest\data\pouch\ammo_pouch\jpcammo_pouch_damaged.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"JPC_Vest\data\pouch\ammo_pouch\jpcammo_pouch_damaged.rvmat"
							}
						},
						
						{
							0,
							
							{
								"JPC_Vest\data\pouch\ammo_pouch\jpcammo_pouch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class HEC_Adm_AmmoPouch: HEC_Adm_AmmoPouch_base
	{
		scope=2;
		descriptionShort="Bolsa de munições de acesso rápido do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_AmmoPouch.paa"
		};
	};
	class HEC_Adm_MagPouch_Base: Container_Base
	{
		scope=0;
		displayName="Bolsa de carregadores do Hecatombe Special Force";
		model="\JPC_Vest\data\JPCmag_pouch.p3d";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		rotationFlags=0;
		itemSize[]={4,3};
		itemsCargoSize[]={4,3};
		inventorySlot[]=
		{
			"VestPouch",
			"JPCmag_Pouch"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\JPC_Vest\data\pouch\Mag_Pouch\JPCmag_pouch_base.paa"
		};
		weight=200;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		lootTag[]=
		{
			"Military_east",
			"Military_west"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"JPC_Vest\data\pouch\mag_pouch\JPCmag_pouch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"JPC_Vest\data\pouch\mag_pouch\JPCmag_pouch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"JPC_Vest\data\pouch\mag_pouch\JPCmag_pouch_damaged.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"JPC_Vest\data\pouch\mag_pouch\JPCmag_pouch_damaged.rvmat"
							}
						},
						
						{
							0,
							
							{
								"JPC_Vest\data\pouch\mag_pouch\JPCmag_pouch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class HEC_Adm_MagPouch: HEC_Adm_MagPouch_base
	{
		scope=2;
		descriptionShort="Bolsa de carregadores de acesso rápido do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_MagPouch.paa"
		};
	};
	class HEC_Adm_MedicaPouch_base: Container_Base
	{
		scope=0;
		displayName="Bolsa medica do Hecatombe Special Force";
		model="\JPC_Vest\data\JPCmed_pouch.p3d";
		itemSize[]={2,3};
		allowOwnedCargoManipulation=1;
		itemsCargoSize[]={3,5};
		inventorySlot[]=
		{
			"JPCmed_pouch"
		};
		hiddenSelections[]=
		{
			"camo",
			"material"
		};
		hiddenSelectionsTextures[]=
		{
			"\JPC_Vest\data\pouch\Med_Pouch\JPCmed_pouch_base.paa"
		};
		weight=200;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		randomQuantity=2;
		lootTag[]=
		{
			"Military_east",
			"Military_west"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"JPC_Vest\data\pouch\med_pouch\jpcmedpouch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"JPC_Vest\data\pouch\med_pouch\jpcmedpouch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"JPC_Vest\data\pouch\med_pouch\jpcmedpouch_damaged.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"JPC_Vest\data\pouch\med_pouch\jpcmedpouch_damaged.rvmat"
							}
						},
						
						{
							0,
							
							{
								"JPC_Vest\data\pouch\med_pouch\jpcmedpouch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class HEC_Adm_MedicaPouch: HEC_Adm_MedicaPouch_base
	{
		scope=2;
		descriptionShort="Bolsa medica do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_MedicaPouch.paa"
		};
	};
	class HEC_Adm_TaticaPouch_base: Container_Base
	{
		scope=0;
		displayName="Bolsa tatica do Hecatombe Special Force";
		model="\JPC_Vest\data\tactical_pouch.p3d";
		itemSize[]={4,3};
		itemsCargoSize[]={6,4};
		inventorySlot[]=
		{
			"tactical_pouch",
			"tactical_pouch1",
			"tactical_pouch2",
			"tactical_pouch3"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\JPC_Vest\data\pouch\tactical_pouch\tactical_pouch_base_co.paa"
		};
		weight=100;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		lootTag[]=
		{
			"Military_east",
			"Military_west"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"JPC_Vest\data\pouch\tactical_pouch\tactical_pouch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"JPC_Vest\data\pouch\tactical_pouch\tactical_pouch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"JPC_Vest\data\pouch\tactical_pouch\tactical_pouch_damaged.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"JPC_Vest\data\pouch\tactical_pouch\tactical_pouch_damaged.rvmat"
							}
						},
						
						{
							0,
							
							{
								"JPC_Vest\data\pouch\tactical_pouch\tactical_pouch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class HEC_Adm_TaticaPouch: HEC_Adm_TaticaPouch_base
	{
		scope=2;
		descriptionShort="Bolsa tatica do Hecatombe Special Force - ADMINISTRAÇÃO DO SERVIDOR HECATOMBE";
		hiddenSelectionsTextures[]=
		{
			"HEC_Core\data\HEC_Adm\HEC_Adm_TaticaPouch.paa"
		};
	};
};