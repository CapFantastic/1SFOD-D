/*=======================================================================================
Author: Captain Fantastic
File Name: config.cpp
=======================================================================================*/

//#include "basicDefines_A3.hpp"
//#include "guiDefines_A3.hpp"

class CfgPatches 
{
	class sfod_d_data_f
	{
		units[] = 
		{
			
		};
		weapons[] = 
		{
			
		};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"a3_data_f"
		};
		author = "Capt. Fantastic";
		authorUrl = "https://twitter.com/Captain12957861?lang=en";
	};
};
class CfgMods
{
	class Mod_Base;
	class SFOD_D: Mod_Base
	{
		picture="\SFOD_D\SFOD_D_data_f\data\insignia\cf_sfodd_logo.paa";
		logo="\SFOD_D\SFOD_D_data_f\data\insignia\cf_sfodd_logo.paa";
		logoSmall="\SFOD_D\SFOD_D_data_f\data\insignia\cf_sfodd_logo_small.paa";
		tooltipOwned="SFODD : Capt. Fantastic";
		action="";
		overview="SFODD";
		hideName=1;
		hidePicture=0;
		name="1st Special Forces Operational Detachment Delta (Pre-Release)";
		nameShort="SFODD (PR)";
		dir="SFODD";
		version="0.1";
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
	class SFOD_D
	{
		displayName="1st SFOD-D";
		priority=1;
		side=1;
		icon="\SFOD_D\SFOD_D_data_f\data\insignia\cf_sfodd_logo.paa";
		flag="";
	};
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
	class SFOD_D_OBJECTS 
	{
		displayName = "1st SFOD-D Objects";
	};
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
	class SFOD_D_SUPPLIES 
	{
		displayName = "Supplies";
	};
	class SFOD_D_ITEMS 
	{
		displayName = "Items";
	};
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
	
};

class CfgWeapons
{
	
};

class CfgSounds 
{
	
};

class CfgGroups
{

};

class CfgUnitInsignia 
{
	class 111thID;
	class TFAegis;
	class GryffinRegiment;
	class Curator;
	class BI;
	class MANW;
	class CFOD_D_I
	{
		author = "Capt. Fantastic";
		displayName="1st SFOD-D";
		texture="\SFOD_D\SFOD_D_data_f\data\insignia\cf_sfodd_logo.paa";
	};
};

class cfgFunctions
{

};
