/*=======================================================================================
Author: Elliot Farrow aka. Captain Fantastic
License: CC BY-NC-ND
File Name: config.cpp
=======================================================================================*/

class CfgPatches 
{
	class SFOD_D_supplies_f
	{
		units[] = 
		{
			"SFOD_D_AmmoBox","SFOD_D_MedicalBox","SFOD_D_ItemsBox","SFOD_D_HaloBox"
		};
		weapons[] = 
		{
			
		};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"SFOD_D_data_f"
		};
		author = "Capt. Fantastic";
		authorUrl = "https://twitter.com/Captain12957861?lang=en";
	};
};
class CfgFactionClasses
{
	class OPF_F; //CSAT
	class OPF_G_F; //FIA
	class BLU_F; //FIA
	class BLU_G_F; //FIA
	class IND_F; //AAF
	class IND_G_F; //FIA
	class CIV_F; //CIVILLIANS
	class BLU_T_F; //NATO PACIFIC
	class BLU_CTRG_F; //CTRG PACIFIC 
	class BLU_GEN_F; //GENDARMERIE
	class OPF_T_F; //CSAT PACIFIC
	class OPF_V_F; //VIPER PACIFIC
	class IND_C_F; //SYNDIKAT
	class CIV_IDAP_F; //IDAP
	class SFOD_D;
};
class CfgEditorCategories
{
	class EdCat_Default;
	class EdCat_Structures;
	class EdCat_Structures_Altis;
	class EdCat_Structures_Tanoa;
	class EdCat_Ruins;
	class EdCat_Ruins_Altis;
	class EdCat_Ruins_Tanoa;
	class EdCat_Things;
	class EdCat_Signs;
	class EdCat_Weapons;
	class EdCat_WeaponAttachments;
	class EdCat_Equipment;
	class EdCat_Supplies;
	class EdCat_Wrecks;
	class EdCat_Walls;
	class EdCat_Fences;
	class EdCat_Furniture;
	class EdCat_VRObjects;
	class EdCat_Animals;
	class EdCat_Environment;
	class EdCat_Sets;
	class EdCat_TEST;
	class EdCat_Sounds;
	class SFOD_D_OBJECTS;
};
class CfgEditorSubcategories
{
	class EdSubcat_Default;
	class EdSubcat_APCs;
	class EdSubcat_Artillery;
	class EdSubcat_AAs;
	class EdSubcat_Boats;
	class EdSubcat_Cars;
	class EdSubcat_Drones;
	class EdSubcat_Helicopters;
	class EdSubcat_Planes;
	class EdSubcat_Submersibles;
	class EdSubcat_Tanks;
	class EdSubcat_Turrets;
	class EdSubcat_Personnel;
	class EdSubcat_Personnel_African;
	class EdSubcat_Personnel_Asian;
	class EdSubcat_Personnel_European;
	class EdSubcat_Personnel_SpecialForces;
	class EdSubcat_Personnel_Story;
	class EdSubcat_Personnel_Tanoan;
	class EdSubcat_Personnel_VR;
	class EdSubcat_Personnel_Camo_Urban;
	class EdSubcat_Personnel_Camo_Woodland;
	class EdSubcat_Personnel_Camo_Desert;
	class EdSubcat_Personnel_Camo_Arctic;
	class EdSubcat_Personnel_Camo_Arid;
	class EdSubcat_Personnel_Camo_Jungle;
	class EdSubcat_Industrial;
	class EdSubcat_Utilities;
	class EdSubcat_Military;
	class EdSubcat_Residential_Village;
	class EdSubcat_Residential_City;
	class EdSubcat_Services;
	class EdSubcat_Transportation;
	class EdSubcat_Historical;
	class EdSubcat_Religious;
	class EdSubcat_Cemetery;
	class EdSubcat_Seaports;
	class EdSubcat_Airports;
	class EdSubcat_Lamps;
	class EdSubcat_ShootHouse;
	class EdSubcat_Tools;
	class EdSubcat_Electronics;
	class EdSubcat_ConstructionSites;
	class EdSubcat_Food;
	class EdSubcat_Medicine;
	class EdSubcat_Garbage;
	class EdSubcat_Camping;
	class EdSubcat_Sports;
	class EdSubcat_Racing;
	class EdSubcat_Storage;
	class EdSubcat_Market;
	class EdSubcat_Targets;
	class EdSubcat_Obstacles;
	class EdSubcat_Trains;
	class EdSubcat_Intel;
	class EdSubcat_Beach;
	class EdSubcat_Advertisements;
	class EdSubcat_Office;
	class EdSubcat_Shops;
	class EdSubcat_Machines;
	class EdSubcat_RoadSigns;
	class EdSubcat_Posters;
	class EdSubcat_Graffiti;
	class EdSubcat_Helipads;
	class EdSubcat_WarningSigns;
	class EdSubcat_Flags;
	class EdSubcat_BlankSigns;
	class EdSubcat_Helpers;
	class EdSubcat_Craters;
	class EdSubcat_AssaultRifles;
	class EdSubcat_MachineGuns;
	class EdSubcat_SubMachineGuns;
	class EdSubcat_SniperRifles;
	class EdSubcat_Pistols;
	class EdSubcat_Launchers;
	class EdSubcat_TopSlot_Optics;
	class EdSubcat_TopSlot_Collimators;
	class EdSubcat_FrontSlot;
	class EdSubcat_SideSlot;
	class EdSubcat_BottomSlot;
	class EdSubcat_Explosives;
	class EdSubcat_Magazines;
	class EdSubcat_Uniforms;
	class EdSubcat_Vests;
	class EdSubcat_Hats;
	class EdSubcat_Helmets;
	class EdSubcat_Backpacks;
	class EdSubcat_DismantledWeapons;
	class EdSubcat_InventoryItems;
	class EdSubcat_Chemlights;
	class EdSubcat_Blocks;
	class EdSubcat_Decals;
	class EdSubcat_Terrestrial;
	class EdSubcat_Aquatic;
	class EdSubcat_Avian;
	class EdSubcat_Rocks;
	class EdSubcat_Plants;
	class EdSubcat_Bushes;
	class EdSubcat_Trees;
	class EdSubcat_TEST;
	class EdSubcat_Sounds;
	class EdSubcat_Railways;
	class EdSubcat_Personnel_Mediterranean;
	class EdSubcat_Personnel_Pacific;
	class EdSubcat_Personnel_Viper;
	class EdSubcat_Personnel_Paramilitary;
	class EdSubcat_Personnel_Bandits;
	class SFOD_D_SUPPLIES;
	class SFOD_D_ITEMS;
};
class CfgVehicleClasses
{
	class Static;
	class Backpacks;
	class Autonomous;
	class Submarine;
	class Uniforms;
	class Wreck;
	class Wreck_sub;
	class Anomalies;
	class Afroamerican;
	class Asian;
	class European;
	class Men;
	class MenRecon;
	class MenWood;
	class MenSage;
	class MenSpecFor;
	class MenUrban;
	class MenSupport;
	class MenSniper;
	class MenDiver;
	class MenStory;
	class Women;
	class Armory;
	class Targets;
	class Test;
	class Locations;
	class Modules;
	class Emitters;
	class WeaponsPrimary;
	class WeaponsSecondary;
	class WeaponsHandguns;
	class WeaponAccessories;
	class Magazines;
	class Items;
	class ItemsHeadgear;
	class ItemsVests;
	class ItemsUniforms;
	class Intel;
	class Virtual;
	class Cargo;
	class Container;
	class Garbage;
	class Flag;
	class Submerged;
	class Lamps;
	class Communication;
	class Helpers;
	class Dead_bodies;
	class Furniture;
	class Military;
	class Misc;
	class Signs;
	class Small_items;
	class Training;
	class Shelters;
	class Fortifications;
	class Tents;
	class Market;
	class Structures;
	class Structures_Commercial;
	class Structures_Cultural;
	class Structures_Industrial;
	class Structures_Infrastructure;
	class Structures_Military;
	class Structures_Town;
	class Structures_Transport;
	class Structures_Village;
	class Structures_Walls;
	class Structures_Fences;
	class Structures_Slums;
	class Ruins;
	class MenTanoan;
	class MenParamilitary;
	class MenBandits;
};
class CfgVehicles
{
	class B_CargoNet_01_ammo_F;
	//----- AMMO BOX -----
	class SFOD_D_AmmoBox: B_CargoNet_01_ammo_F {
		_generalMacro = "SFOD_D_AmmoBox";
		scope = 2;
		scopeCurator = 2;
		displayName = "Ammo Box";
		editorPreview="\SFOD_D\SFOD_D_supplies_f\data\pre_ammo_box.jpg";
		editorCategory="SFOD_D_OBJECTS";
		editorSubcategory="SFOD_D_SUPPLIES";
		model="\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
		hiddenSelections[]=	{"Camo_1","Camo_2"};
		hiddenSelectionsTextures[]=	{"\SFOD_D\SFOD_D_supplies_f\data\ammo_co.paa","\SFOD_D\SFOD_D_supplies_f\data\ammo_signs_ca.paa"};
		mass = 750;
		maximumLoad = 99999;
		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		class TransportMagazines {}; 
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};

	//----- MEDICAL BOX -----
	class SFOD_D_MedicalBox : B_CargoNet_01_ammo_F {
		_generalMacro = "SFOD_D_MedicalBox";
		scope = 2;
		scopeCurator = 2;
		displayName = "Medical Box";
		editorPreview="\SFOD_D\SFOD_D_supplies_f\data\pre_medical_box.jpg";
		editorCategory="SFOD_D_OBJECTS";
		editorSubcategory="SFOD_D_SUPPLIES";
		model="\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
		hiddenSelections[]=	{"Camo_1","Camo_2"};
		hiddenSelectionsTextures[]=	{"\SFOD_D\SFOD_D_supplies_f\data\medical_co.paa","\SFOD_D\SFOD_D_supplies_f\data\medical_signs_ca.paa"};
		mass = 750;
		maximumLoad = 99999;
		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		class TransportMagazines {}; 
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};

	//----- ITEM BOX -----
	class SFOD_D_ItemsBox : B_CargoNet_01_ammo_F {
		_generalMacro = "SFOD_D_ItemsBox";
		scope = 2;
		scopeCurator = 2;
		displayName = "Items Box";
		editorPreview="\SFOD_D\SFOD_D_supplies_f\data\pre_items_box.jpg";
		editorCategory="SFOD_D_OBJECTS";
		editorSubcategory="SFOD_D_SUPPLIES";
		model="\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
		hiddenSelections[]=	{"Camo_1","Camo_2"};
		hiddenSelectionsTextures[]=	{"\SFOD_D\SFOD_D_supplies_f\data\items_co.paa","\SFOD_D\SFOD_D_supplies_f\data\items_signs_ca.paa"};
		mass = 750;
		maximumLoad = 99999;
		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		class TransportMagazines {}; 
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};

	//----- HALO BOX -----
	class SFOD_D_HaloBox : B_CargoNet_01_ammo_F {
		_generalMacro = "SFOD_D_HaloBox";
		scope = 2;
		scopeCurator = 2;
		displayName = "HALO Box";
		editorPreview="\SFOD_D\SFOD_D_supplies_f\data\pre_halo_box.jpg";
		editorCategory="SFOD_D_OBJECTS";
		editorSubcategory="SFOD_D_SUPPLIES";
		model="\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
		hiddenSelections[]=	{"Camo_1","Camo_2"};
		hiddenSelectionsTextures[]=	{"\SFOD_D\SFOD_D_supplies_f\data\halo_co.paa","\SFOD_D\SFOD_D_supplies_f\data\halo_signs_ca.paa"};
		mass = 750;
		maximumLoad = 99999;
		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		class TransportMagazines {}; 
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
};