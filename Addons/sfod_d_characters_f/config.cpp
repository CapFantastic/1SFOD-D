/*=======================================================================================
Author: Elliot Farrow aka. Captain Fantastic
License: CC BY-NC-ND
File Name: config.cpp
=======================================================================================*/

class CfgPatches 
{
	class sfod_d_characters_f
	{
		units[] = 
		{
			"SFOD_D_TL_MCAM","SFOD_D_JTAC_MCAM","SFOD_D_Medic_MCAM","SFOD_D_AR_MCAM","SFOD_D_Op_MCAM",
			"SFOD_D_T1_1","SFOD_D_T1_2","SFOD_D_T1_3","SFOD_D_T1_4","SFOD_D_T1_5","SFOD_D_T1_6",
			"SFOD_D_T2_1","SFOD_D_T2_2","SFOD_D_T2_3","SFOD_D_T2_4","SFOD_D_T2_5","SFOD_D_T2_6",
			"SFOD_D_T3_1","SFOD_D_T3_2","SFOD_D_T3_3","SFOD_D_T3_4","SFOD_D_T3_5","SFOD_D_T3_6",
			"SFOD_D_T4_1","SFOD_D_T4_2","SFOD_D_T4_3","SFOD_D_T4_4","SFOD_D_T4_5","SFOD_D_T4_6",
			"SFOD_D_RC_1","SFOD_D_RC_2",
			"SFOD_D_SR_1","SFOD_D_SR_2","SFOD_D_SR_3","SFOD_D_SR_4","SFOD_D_SR_5"
			"SFOD_D_CL_1","SFOD_D_CL_2","SFOD_D_CL_3",
		};
		weapons[] = 
		{
			
		};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"sfod_d_data_f"
		};
		author = "Capt. Fantastic";
		authorUrl = "https://twitter.com/Captain12957861?lang=en";
	};
};
class CfgFactionClasses
{
	class SFOD_D;
};
class CfgVehicleClasses {
	class SFOD_D_Temp 
	{
		displayName = "Templates";
	};
	/*
	class SFOD_D_HQ 
	{
		displayName = "Command";
	};
	*/
	class SFOD_D_T1 
	{
		displayName = "Team 1";
	};
	class SFOD_D_T2 
	{
		displayName = "Team 2";
	};
	class SFOD_D_T3 
	{
		displayName = "Team 3";
	};
	class SFOD_D_RC 
	{
		displayName = "Recon Team";
	};
	class SFOD_D_SR 
	{
		displayName = "160th SOAR";
	};
	class SFOD_D_CL 
	{
		displayName = "Command Liaison";
	};
};
class CfgVehicles
{
	class B_Soldier_F;
	class SFOD_D_TL_MCAM : B_Soldier_F {					
		_generalMacro = "SFOD_D_TL_MCAM";
		scope = 1;
		displayName = "Team Leader";
		faction = "SFOD_D";
		vehicleClass = "SFOD_D_Temp";
		icon = "iconManLeader";
		uniformClass = "U_B_CombatUniform_mcam";
		//hiddenSelections[] = {"Camo",	"insignia"};
		//hiddenSelectionsTextures[] = {"\SOAR_Units\data\retexture\clothes\soar_uniform_mtp.paa"};
		//hiddenSelectionsMaterials[] = {"\SOAR_Units\data\retexture\clothes\soar_uniform_mtp.rvmat"};  
		class EventHandlers 
		{
			init = "[(_this select 0),""CFOD_D_I""] call BIS_fnc_setUnitInsignia;";
			respawn = "[(_this select 0),""CFOD_D_I""] call BIS_fnc_setUnitInsignia;";
		};
		weapons[] = {"hgun_Rook40_F","Binocular","Put","Throw"};
		respawnWeapons[] = {"hgun_Rook40_F","Binocular","Put","Throw"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		Magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		backpack = "";
	};
	class SFOD_D_JTAC_MCAM : B_Soldier_F {					
		_generalMacro = "SFOD_D_JTAC_MCAM";
		scope = 1;
		displayName = "JTAC";
		faction = "SFOD_D";
		vehicleClass = "SFOD_D_Temp";
		icon = "iconManLeader";
		uniformClass = "U_B_CombatUniform_mcam";
		//hiddenSelections[] = {"Camo",	"insignia"};
		//hiddenSelectionsTextures[] = {"\SOAR_Units\data\retexture\clothes\soar_uniform_mtp.paa"};
		//hiddenSelectionsMaterials[] = {"\SOAR_Units\data\retexture\clothes\soar_uniform_mtp.rvmat"};  
		class EventHandlers 
		{
			init = "[(_this select 0),""CFOD_D_I""] call BIS_fnc_setUnitInsignia;";
			respawn = "[(_this select 0),""CFOD_D_I""] call BIS_fnc_setUnitInsignia;";
		};
		weapons[] = {"hgun_Rook40_F","Binocular","Put","Throw"};
		respawnWeapons[] = {"hgun_Rook40_F","Binocular","Put","Throw"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		Magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		backpack = "";
	};
	class SFOD_D_Medic_MCAM : B_Soldier_F {					
		_generalMacro = "SFOD_D_Medic_MCAM";
		scope = 1;
		displayName = "Medic";
		faction = "SFOD_D";
		vehicleClass = "SFOD_D_Temp";
		icon = "iconManMedic";
		uniformClass = "U_B_CombatUniform_mcam";
		//hiddenSelections[] = {"Camo",	"insignia"};
		//hiddenSelectionsTextures[] = {"\SOAR_Units\data\retexture\clothes\soar_uniform_mtp.paa"};
		//hiddenSelectionsMaterials[] = {"\SOAR_Units\data\retexture\clothes\soar_uniform_mtp.rvmat"};  
		class EventHandlers 
		{
			init = "[(_this select 0),""CFOD_D_I""] call BIS_fnc_setUnitInsignia;";
			respawn = "[(_this select 0),""CFOD_D_I""] call BIS_fnc_setUnitInsignia;";
		};
		weapons[] = {"hgun_Rook40_F","Binocular","Put","Throw"};
		respawnWeapons[] = {"hgun_Rook40_F","Binocular","Put","Throw"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		Magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		backpack = "";
	};
	class SFOD_D_AR_MCAM : B_Soldier_F {					
		_generalMacro = "SFOD_D_AR_MCAM";
		scope = 1;
		displayName = "Medic";
		faction = "SFOD_D";
		vehicleClass = "SFOD_D_Temp";
		icon = "iconManMG";
		uniformClass = "U_B_CombatUniform_mcam";
		//hiddenSelections[] = {"Camo",	"insignia"};
		//hiddenSelectionsTextures[] = {"\SOAR_Units\data\retexture\clothes\soar_uniform_mtp.paa"};
		//hiddenSelectionsMaterials[] = {"\SOAR_Units\data\retexture\clothes\soar_uniform_mtp.rvmat"};  
		class EventHandlers 
		{
			init = "[(_this select 0),""CFOD_D_I""] call BIS_fnc_setUnitInsignia;";
			respawn = "[(_this select 0),""CFOD_D_I""] call BIS_fnc_setUnitInsignia;";
		};
		weapons[] = {"hgun_Rook40_F","Binocular","Put","Throw"};
		respawnWeapons[] = {"hgun_Rook40_F","Binocular","Put","Throw"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		Magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		backpack = "";
	};
	class SFOD_D_Op_MCAM : B_Soldier_F {					
		_generalMacro = "SFOD_D_Op_MCAM";
		scope = 1;
		displayName = "Operator";
		faction = "SFOD_D";
		vehicleClass = "SFOD_D_Temp";
		icon = "iconMan";
		uniformClass = "U_B_CombatUniform_mcam";
		//hiddenSelections[] = {"Camo",	"insignia"};
		//hiddenSelectionsTextures[] = {"\SOAR_Units\data\retexture\clothes\soar_uniform_mtp.paa"};
		//hiddenSelectionsMaterials[] = {"\SOAR_Units\data\retexture\clothes\soar_uniform_mtp.rvmat"};  
		class EventHandlers 
		{
			init = "[(_this select 0),""CFOD_D_I""] call BIS_fnc_setUnitInsignia;";
			respawn = "[(_this select 0),""CFOD_D_I""] call BIS_fnc_setUnitInsignia;";
		};
		weapons[] = {"hgun_Rook40_F","Binocular","Put","Throw"};
		respawnWeapons[] = {"hgun_Rook40_F","Binocular","Put","Throw"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		Magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		backpack = "";
	};
	/*
	class SFOD_D_HQ_1 : SFOD_D_TL_MCAM {					
		_generalMacro = "SFOD_D_HQ_1";
		scope = 2;
		displayName = "Commander : ";
		vehicleClass = "SFOD_D_HQ";
	};
	class SFOD_D_HQ_2 : SFOD_D_JTAC_MCAM {					
		_generalMacro = "SFOD_D_HQ_2";
		scope = 2;
		displayName = "JTAC : ";
		vehicleClass = "SFOD_D_HQ";
	};
	class SFOD_D_HQ_3 : SFOD_D_Medic_MCAM {					
		_generalMacro = "SFOD_D_HQ_3";
		scope = 2;
		displayName = "Medic : ";
		vehicleClass = "SFOD_D_HQ";
	};
	class SFOD_D_HQ_4 : SFOD_D_Op_MCAM {					
		_generalMacro = "SFOD_D_HQ_4";
		scope = 2;
		displayName = "OPERATOR : ";
		vehicleClass = "SFOD_D_HQ";
	};
	class SFOD_D_HQ_5 : SFOD_D_Op_MCAM {					
		_generalMacro = "SFOD_D_HQ_5";
		scope = 2;
		displayName = "OPERATOR : ";
		vehicleClass = "SFOD_D_HQ";
	};
	class SFOD_D_HQ_6 : SFOD_D_Op_MCAM {					
		_generalMacro = "SFOD_D_HQ_6";
		scope = 2;
		displayName = "OPERATOR : ";
		vehicleClass = "SFOD_D_HQ";
	};
	*/
	//======================================================================
	class SFOD_D_T1_1 : SFOD_D_TL_MCAM {					
		_generalMacro = "SFOD_D_T1_1";
		scope = 2;
		displayName = "TEAM LEADER : 1SG LAMB";
		vehicleClass = "SFOD_D_T1";
	};
	class SFOD_D_T1_2 : SFOD_D_Medic_MCAM {					
		_generalMacro = "SFOD_D_T1_2";
		scope = 2;
		displayName = "MEDIC : SGT JOHN";
		vehicleClass = "SFOD_D_T1";
	};
	class SFOD_D_T1_3 : SFOD_D_AR_MCAM {					
		_generalMacro = "SFOD_D_T1_3";
		scope = 2;
		displayName = "AUTOMATIC RIFLEMAN : SGT ALEX";
		vehicleClass = "SFOD_D_T1";
	};
	class SFOD_D_T1_4 : SFOD_D_Op_MCAM {					
		_generalMacro = "SFOD_D_T1_4";
		scope = 2;
		displayName = "OPERATOR : ROBIN";
		vehicleClass = "SFOD_D_T1";
	};
	class SFOD_D_T1_5 : SFOD_D_Op_MCAM {					
		_generalMacro = "SFOD_D_T1_5";
		scope = 2;
		displayName = "OPERATOR : FANTASTIC";
		vehicleClass = "SFOD_D_T1";
	};
	class SFOD_D_T1_6 : SFOD_D_Op_MCAM {					
		_generalMacro = "SFOD_D_T1_6";
		scope = 2;
		displayName = "OPERATOR : LEWIS";
		vehicleClass = "SFOD_D_T1";
	};
	//======================================================================
	class SFOD_D_T2_1 : SFOD_D_TL_MCAM {					
		_generalMacro = "SFOD_D_T2_1";
		scope = 2;
		displayName = "TEAM LEADER : SFC HUTTON";
		vehicleClass = "SFOD_D_T2";
	};
	class SFOD_D_T2_2 : SFOD_D_Medic_MCAM {					
		_generalMacro = "SFOD_D_T2_2";
		scope = 2;
		displayName = "MEDIC : SGT ELI";
		vehicleClass = "SFOD_D_T2";
	};
	class SFOD_D_T2_3 : SFOD_D_AR_MCAM {					
		_generalMacro = "SFOD_D_T2_3";
		scope = 2;
		displayName = "AUTOMATIC RIFLEMAN : ";
		vehicleClass = "SFOD_D_T2";
	};
	class SFOD_D_T2_4 : SFOD_D_Op_MCAM {					
		_generalMacro = "SFOD_D_T2_4";
		scope = 2;
		displayName = "OPERATOR : SGT NORMAN";
		vehicleClass = "SFOD_D_T2";
	};
	class SFOD_D_T2_5 : SFOD_D_Op_MCAM {					
		_generalMacro = "SFOD_D_T2_5";
		scope = 2;
		displayName = "OPERATOR : SGT VANCE";
		vehicleClass = "SFOD_D_T2";
	};
	class SFOD_D_T2_6 : SFOD_D_Op_MCAM {					
		_generalMacro = "SFOD_D_T2_6";
		scope = 2;
		displayName = "OPERATOR : ";
		vehicleClass = "SFOD_D_T2";
	};
	//======================================================================
	class SFOD_D_T3_1 : SFOD_D_TL_MCAM {					
		_generalMacro = "SFOD_D_T3_1";
		scope = 2;
		displayName = "TEAM LEADER : ";
		vehicleClass = "SFOD_D_T3";
	};
	class SFOD_D_T3_2 : SFOD_D_Medic_MCAM {					
		_generalMacro = "SFOD_D_T3_2";
		scope = 2;
		displayName = "MEDIC : ";
		vehicleClass = "SFOD_D_T3";
	};
	class SFOD_D_T3_3 : SFOD_D_AR_MCAM {					
		_generalMacro = "SFOD_D_T3_3";
		scope = 2;
		displayName = "AUTOMATIC RIFLEMAN : ";
		vehicleClass = "SFOD_D_T3";
	};
	class SFOD_D_T3_4 : SFOD_D_Op_MCAM {					
		_generalMacro = "SFOD_D_T3_4";
		scope = 2;
		displayName = "OPERATOR : ";
		vehicleClass = "SFOD_D_T3";
	};
	class SFOD_D_T3_5 : SFOD_D_Op_MCAM {					
		_generalMacro = "SFOD_D_T3_5";
		scope = 2;
		displayName = "OPERATOR : ";
		vehicleClass = "SFOD_D_T3";
	};
	class SFOD_D_T3_6 : SFOD_D_Op_MCAM {					
		_generalMacro = "SFOD_D_T3_6";
		scope = 2;
		displayName = "OPERATOR : ";
		vehicleClass = "SFOD_D_T3";
	};
	//======================================================================
	class SFOD_D_T4_1 : SFOD_D_TL_MCAM {					
		_generalMacro = "SFOD_D_T4_1";
		scope = 2;
		displayName = "TEAM LEADER : ";
		vehicleClass = "SFOD_D_T4";
	};
	class SFOD_D_T4_2 : SFOD_D_Medic_MCAM {					
		_generalMacro = "SFOD_D_T4_2";
		scope = 2;
		displayName = "MEDIC : ";
		vehicleClass = "SFOD_D_T4";
	};
	class SFOD_D_T4_3 : SFOD_D_AR_MCAM {					
		_generalMacro = "SFOD_D_T4_3";
		scope = 2;
		displayName = "AUTOMATIC RIFLEMAN : ";
		vehicleClass = "SFOD_D_T4";
	};
	class SFOD_D_T4_4 : SFOD_D_Op_MCAM {					
		_generalMacro = "SFOD_D_T4_4";
		scope = 2;
		displayName = "OPERATOR : ";
		vehicleClass = "SFOD_D_T4";
	};
	class SFOD_D_T4_5 : SFOD_D_Op_MCAM {					
		_generalMacro = "SFOD_D_T4_5";
		scope = 2;
		displayName = "OPERATOR : ";
		vehicleClass = "SFOD_D_T4";
	};
	class SFOD_D_T4_6 : SFOD_D_Op_MCAM {					
		_generalMacro = "SFOD_D_T4_6";
		scope = 2;
		displayName = "OPERATOR : ";
		vehicleClass = "SFOD_D_T4";
	};
	//======================================================================
	class SFOD_D_RC_1 : SFOD_D_TL_MCAM {					
		_generalMacro = "SFOD_D_RC_1";
		scope = 2;
		displayName = "TEAM LEADER : SFC DREV";
		vehicleClass = "SFOD_D_RC";
	};
	class SFOD_D_RC_2 : SFOD_D_Medic_MCAM {					
		_generalMacro = "SFOD_D_RC_2";
		scope = 2;
		displayName = "MEDIC : SSG SWAGGER";
		vehicleClass = "SFOD_D_RC";
	};
	//======================================================================
	class SFOD_D_SR_1 : SFOD_D_TL_MCAM {					
		_generalMacro = "SFOD_D_SR_1";
		scope = 2;
		displayName = "PILOT : CW4 BLUE";
		vehicleClass = "SFOD_D_T3";
	};
	class SFOD_D_SR_2 : SFOD_D_Medic_MCAM {					
		_generalMacro = "SFOD_D_SR_2";
		scope = 2;
		displayName = "PILOT : WO1 REYES";
		vehicleClass = "SFOD_D_SR";
	};
	class SFOD_D_SR_3 : SFOD_D_AR_MCAM {					
		_generalMacro = "SFOD_D_SR_3";
		scope = 2;
		displayName = "PILOT : ";
		vehicleClass = "SFOD_D_SR";
	};
	class SFOD_D_SR_4 : SFOD_D_Op_MCAM {					
		_generalMacro = "SFOD_D_SR_4";
		scope = 2;
		displayName = "CREW CHIEF : ";
		vehicleClass = "SFOD_D_SR";
	};
	class SFOD_D_SR_5 : SFOD_D_Op_MCAM {					
		_generalMacro = "SFOD_D_SR_5";
		scope = 2;
		displayName = "CREW CHIEF : ";
		vehicleClass = "SFOD_D_SR";
	};
	class SFOD_D_CL_1 : SFOD_D_TL_MCAM {					
		_generalMacro = "SFOD_D_CL_1";
		scope = 2;
		displayName = "COMMAND LIAISON : ";
		vehicleClass = "SFOD_D_CL";
	};
	class SFOD_D_CL_2 : SFOD_D_TL_MCAM {					
		_generalMacro = "SFOD_D_CL_2";
		scope = 2;
		displayName = "COMMAND LIAISON : ";
		vehicleClass = "SFOD_D_CL";
	};
	class SFOD_D_CL_3 : SFOD_D_TL_MCAM {					
		_generalMacro = "SFOD_D_CL_3";
		scope = 2;
		displayName = "COMMAND LIAISON : ";
		vehicleClass = "SFOD_D_CL";
	};
};
class CfgGroups
{
	class West {
		
		name = "$STR_A3_CfgGroups_West0";
		class SFOD_D_GROUPS {
			
			name = "1st SFOD-D";
			
			class SFOD_D_T_MTP {
				name = "Teams";
				/*
				class SFOD_D_C {
					name = "Command";
					side = 1;
					faction = "SFOD_D";
					class Unit0 {
						side = 1;
						vehicle = "SFOD_D_HQ_1";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};													
					class Unit1 {
						side = 1;
						vehicle = "SFOD_D_HQ_2";
						rank = PRIVATE;
						position[] = {2, 0, 0};
					};							
					class Unit2 {
						side = 1;
						vehicle = "SFOD_D_HQ_3";
						rank = PRIVATE;
						position[] = {4, 0, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFOD_D_HQ_4";
						rank = PRIVATE;
						position[] = {6, 0, 0};
					};
					class Unit4 {
						side = 1;
						vehicle = "SFOD_D_HQ_5";
						rank = PRIVATE;
						position[] = {8, 0, 0};
					};
					class Unit5 {
						side = 1;
						vehicle = "SFOD_D_HQ_6";
						rank = PRIVATE;
						position[] = {10, 0, 0};
					};
				};
				*/
				class SFOD_D_T1 {
					name = "Team 1";
					side = 1;
					faction = "SFOD_D";
					class Unit0 {
						side = 1;
						vehicle = "SFOD_D_T1_1";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};													
					class Unit1 {
						side = 1;
						vehicle = "SFOD_D_T1_2";
						rank = PRIVATE;
						position[] = {2, 0, 0};
					};							
					class Unit2 {
						side = 1;
						vehicle = "SFOD_D_T1_3";
						rank = PRIVATE;
						position[] = {4, 0, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFOD_D_T1_4";
						rank = PRIVATE;
						position[] = {6, 0, 0};
					};
					class Unit4 {
						side = 1;
						vehicle = "SFOD_D_T1_5";
						rank = PRIVATE;
						position[] = {8, 0, 0};
					};
					class Unit5 {
						side = 1;
						vehicle = "SFOD_D_T1_6";
						rank = PRIVATE;
						position[] = {10, 0, 0};
					};
				};
				class SFOD_D_T2 {
					name = "Team 2";
					side = 1;
					faction = "SFOD_D";
					class Unit0 {
						side = 1;
						vehicle = "SFOD_D_T2_1";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};													
					class Unit1 {
						side = 1;
						vehicle = "SFOD_D_T2_2";
						rank = PRIVATE;
						position[] = {2, 0, 0};
					};							
					class Unit2 {
						side = 1;
						vehicle = "SFOD_D_T2_3";
						rank = PRIVATE;
						position[] = {4, 0, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFOD_D_T2_4";
						rank = PRIVATE;
						position[] = {6, 0, 0};
					};
					class Unit4 {
						side = 1;
						vehicle = "SFOD_D_T2_5";
						rank = PRIVATE;
						position[] = {8, 0, 0};
					};
					class Unit5 {
						side = 1;
						vehicle = "SFOD_D_T2_6";
						rank = PRIVATE;
						position[] = {10, 0, 0};
					};
				};
				class SFOD_D_T3 {
					name = "Team 3";
					side = 1;
					faction = "SFOD_D";
					class Unit0 {
						side = 1;
						vehicle = "SFOD_D_T3_1";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};													
					class Unit1 {
						side = 1;
						vehicle = "SFOD_D_T3_2";
						rank = PRIVATE;
						position[] = {2, 0, 0};
					};							
					class Unit2 {
						side = 1;
						vehicle = "SFOD_D_T3_3";
						rank = PRIVATE;
						position[] = {4, 0, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFOD_D_T3_4";
						rank = PRIVATE;
						position[] = {6, 0, 0};
					};
					class Unit4 {
						side = 1;
						vehicle = "SFOD_D_T3_5";
						rank = PRIVATE;
						position[] = {8, 0, 0};
					};
					class Unit5 {
						side = 1;
						vehicle = "SFOD_D_T3_6";
						rank = PRIVATE;
						position[] = {10, 0, 0};
					};
				};
				class SFOD_D_T4 {
					name = "Team 4";
					side = 1;
					faction = "SFOD_D";
					class Unit0 {
						side = 1;
						vehicle = "SFOD_D_T4_1";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};													
					class Unit1 {
						side = 1;
						vehicle = "SFOD_D_T4_2";
						rank = PRIVATE;
						position[] = {2, 0, 0};
					};							
					class Unit2 {
						side = 1;
						vehicle = "SFOD_D_T4_3";
						rank = PRIVATE;
						position[] = {4, 0, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFOD_D_T4_4";
						rank = PRIVATE;
						position[] = {6, 0, 0};
					};
					class Unit4 {
						side = 1;
						vehicle = "SFOD_D_T4_5";
						rank = PRIVATE;
						position[] = {8, 0, 0};
					};
					class Unit5 {
						side = 1;
						vehicle = "SFOD_D_T4_6";
						rank = PRIVATE;
						position[] = {10, 0, 0};
					};
				};
				class SFOD_D_RC {
					name = "Recon Team";
					side = 1;
					faction = "SFOD_D";
					class Unit0 {
						side = 1;
						vehicle = "SFOD_D_RC_1";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};													
					class Unit1 {
						side = 1;
						vehicle = "SFOD_D_RC_2";
						rank = PRIVATE;
						position[] = {2, 0, 0};
					};
				};
				class SFOD_D_SR {
					name = "160th SOAR";
					side = 1;
					faction = "SFOD_D";
					class Unit0 {
						side = 1;
						vehicle = "SFOD_D_SR_1";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};													
					class Unit1 {
						side = 1;
						vehicle = "SFOD_D_SR_2";
						rank = PRIVATE;
						position[] = {2, 0, 0};
					};							
					class Unit2 {
						side = 1;
						vehicle = "SFOD_D_SR_3";
						rank = PRIVATE;
						position[] = {4, 0, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFOD_D_SR_4";
						rank = PRIVATE;
						position[] = {6, 0, 0};
					};
					class Unit4 {
						side = 1;
						vehicle = "SFOD_D_SR_5";
						rank = PRIVATE;
						position[] = {8, 0, 0};
					};
				};
				class SFOD_D_CL {
					name = "Command Liaison";
					side = 1;
					faction = "SFOD_D";
					class Unit0 {
						side = 1;
						vehicle = "SFOD_D_SR_1";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};													
					class Unit1 {
						side = 1;
						vehicle = "SFOD_D_SR_2";
						rank = PRIVATE;
						position[] = {2, 0, 0};
					};							
					class Unit2 {
						side = 1;
						vehicle = "SFOD_D_SR_3";
						rank = PRIVATE;
						position[] = {4, 0, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFOD_D_SR_4";
						rank = PRIVATE;
						position[] = {6, 0, 0};
					};
					class Unit4 {
						side = 1;
						vehicle = "SFOD_D_SR_5";
						rank = PRIVATE;
						position[] = {8, 0, 0};
					};
				};
			};
		};
	};

};
