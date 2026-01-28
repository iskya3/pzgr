#include "script_component.hpp"
class CfgPatches
{
	class ADDON
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"bwa3_puma"
		};
	};
};
class Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class BWA3_Optics_Gunner_Puma: Optics_Armored
{
	class Wide: Wide
	{
		gunnerOpticsModel="\bwa3_puma\bwa3_puma_optics_gunner_1.p3d";
		thermalMode[]={0,1};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"Ti"
		};
	};
	class Medium: Medium
	{
		gunnerOpticsModel="\bwa3_puma\bwa3_puma_optics_gunner_2.p3d";
		thermalMode[]={0,1};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"Ti"
		};
	};
	class Narrow: Narrow
	{
		gunnerOpticsModel="\bwa3_puma\bwa3_puma_optics_gunner_2.p3d";
		thermalMode[]={0,1};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"Ti"
		};
	};
};
class BWA3_Attribute_LicensePlate_Base;
class BWA3_Attribute_Company_Base;
class BWA3_Attribute_Battalion_Base;
class BWA3_Attribute_CamoNet_Base;
class BWA3_Attribute_CamoNet_Turret_Base;
class BWA3_Attribute_CamoNet_Gun_Base;
class BWA3_Attribute_CamoNet_MELLS_Base;
class BWA3_Attribute_HazardLights_Base;
class CfgVehicles
{
		class All
	{
		class Turrets;
	};
	class AllVehicles: All
	{
		class ViewCargo;
		class NewTurret
		{
			class Turrets;
		};
	};
	class Land: AllVehicles
	{
	};
	class LandVehicle: Land
	{
		class CommanderOptics: NewTurret
		{
			class ViewOptics;
		};
	};
	class Tank: LandVehicle
	{
		class HitPoints;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class Tank_F: Tank
	{
		class EventHandlers;
		class ViewOptics;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
	};
	class BWA3_Puma_base: Tank_F
	{
		tf_RadioType="BWA3_SEM90";
		acre_hasInfantryPhone=1;
		acre_infantryPhoneIntercom[]=
		{
			"crew",
			"passenger"
		};
		acre_infantryPhoneControlActions[]=
		{
			"Intercom_1"
		};
		acre_infantryPhonePosition="acre_telephone";
		acre_infantryPhoneDisableRinging=0;
		ace_vehicle_damage_hullDetonationProb=0.2;
		ace_vehicle_damage_turretDetonationProb=0.2;
		ace_vehicle_damage_turretFireProb=1;
		ace_vehicle_damage_engineFireProb=0.25;
		ace_vehicle_damage_canHaveFireRings=0;
		ace_vehicle_damage_detonationDuringFireProb=1;
		ace_cookoff_canHaveFireJet=1;
		class AcreRacks
		{
			class Rack_1
			{
				displayName="$STR_ACRE_sys_rack_dashUpper";
				shortName="$STR_ACRE_sys_rack_dashUpperShort";
				componentName="ACRE_SEM90";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="";
				isRadioRemovable=1;
				intercom[]=
				{
					"Intercom_1"
				};
			};
			class Rack_2
			{
				displayName="$STR_ACRE_sys_rack_dashLower";
				shortName="$STR_ACRE_sys_rack_dashLowerShort";
				componentName="ACRE_SEM90";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_SEM70";
				isRadioRemovable=0;
				intercom[]=
				{
					"Intercom_1"
				};
			};
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="$STR_ACRE_sys_intercom_crewIntercom";
				shortName="$STR_ACRE_sys_intercom_shortCrewIntercom";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]=
				{
					
					{
						"cargo",
						"all"
					}
				};
				masterPositions[]=
				{
					"driver"
				};
				numLimitedPositions=1;
				connectedByDefault=1;
			};
			class Intercom_2: Intercom_1
			{
				displayName="$STR_ACRE_sys_intercom_passengerIntercom";
				shortName="$STR_ACRE_sys_intercom_shortPassengerIntercom";
				allowedPositions[]=
				{
					"crew",
					
					{
						"cargo",
						"all"
					}
				};
				disabledPositions[]={};
				limitedPositions[]={};
				numLimitedPositions=0;
				connectedByDefault=0;
			};
		};
		BWA3_Battalions[]={92,112,122,212,371,391,401,411};
		BWA3_hasRearViewCamera=1;
		BWA3_hasCamoLights=1;
		BWA3_hasHazardLights=1;
		mapSize=10;
		textSingular="$STR_A3_nameSound_veh_vehicle_APC_s";
		textPlural="$STR_A3_nameSound_veh_vehicle_APC_p";
		nameSound="veh_vehicle_APC_s";
		author="$STR_BWA3_Author";
		simulation="tankX";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		displayName="$STR_BWA3_PumaName";
		selectionFireAnim="";
		hiddenSelections[]=
		{
			"mat_wanne",
			"mat_turm",
			"mat_netz",
			"mat_kette",
			"y_a",
			"y_b",
			"y_c",
			"y_d",
			"y_e",
			"y_f",
			"takt_a",
			"takt_b",
			"takt_c",
			"takt_d",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"bwa3_puma\data\bwa3_puma_wanne_fleck_co.paa",
			"bwa3_puma\data\bwa3_puma_turm_fleck_co.paa",
			"bwa3_puma\data\bwa3_puma_netz_fleck_ca.paa",
			"bwa3_puma\data\bwa3_puma_kette_co.paa",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)"
		};
		insideSoundCoef=0.89999998;
		attenuationEffectType="TankAttenuation";
		soundGetIn[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234133,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"\bwa3_puma\sounds\bwa3_puma_int_engine_start.wss",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"\bwa3_puma\sounds\bwa3_puma_ext_engine_start.wss",
			1,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"\bwa3_puma\sounds\bwa3_puma_int_engine_stop.wss",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"\bwa3_puma\sounds\bwa3_puma_ext_engine_stop.wss",
			1,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		WoodCrash4[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_01",
			1,
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Engine
			{
				sound[]=
				{
					"\bwa3_puma\sounds\bwa3_puma_ext_engine.wss",
					0.80000001,
					1,
					200
				};
				frequency="0.6  + (rpm factor[0, 4600]) * 0.4";
				volume="engineOn * camPos *     (0.5 + (rpm factor[0, 4600]) * 4.5)";
			};
			class EngineThrust
			{
				sound[]=
				{
					"\bwa3_puma\sounds\bwa3_puma_ext_exhaust.wss",
					0.80000001,
					1,
					280
				};
				frequency="0.6  + (rpm factor[0, 4600]) * 0.4";
				volume="engineOn * camPos *     (thrust factor[0.1,1]) * (rpm factor[0, 4600])";
			};
			class Engine_int
			{
				sound[]=
				{
					"\bwa3_puma\sounds\bwa3_puma_int_engine.wss",
					0.40000001,
					1
				};
				frequency="0.6  + (rpm factor[0, 4600]) * 0.4";
				volume="engineOn * (1-camPos) * (0.5 + (rpm factor[0, 4600]) * 3.5)";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"\bwa3_puma\sounds\bwa3_puma_int_exhaust.wss",
					0.40000001,
					1
				};
				frequency="0.6  + (rpm factor[0, 4600]) * 0.4";
				volume="engineOn * (1-camPos) * (thrust factor[0.1,1]) * (rpm factor[0, 4600])";
			};
			class NoiseInt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
					1.5,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
					1.5,
					1,
					250
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_01",
					1,
					1,
					140
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-0) max 0)/ 95),(((-10) max 10)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-25) max 25)/ 95),(((-15) max 15)/  95)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_02",
					0.44668359,
					1,
					160
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-20) max 20)/ 95),(((-35) max 35)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-55) max 55)/ 95),(((-40) max 40)/  95)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_03",
					0.50118721,
					1,
					180
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-45) max 45)/ 95),(((-55) max 55)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-70) max 70)/ 95),(((-60) max 60)/  95)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_04",
					0.56234133,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-65) max 65)/ 95),(((-70) max 70)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-85) max 85)/ 95),(((-80) max 80)/  95)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_05",
					0.56234133,
					1,
					220
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/ 95) factor[(((-80) max 80)/ 95),(((-90) max 90)/  95)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_01",
					0.31622776,
					1,
					120
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-0) max 0)/ 95),(((-10) max 10)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-25) max 25)/ 95),(((-15) max 15)/  95)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_02",
					0.35481337,
					1,
					140
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-20) max 20)/ 95),(((-35) max 35)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-55) max 55)/ 95),(((-40) max 40)/  95)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_03",
					0.39810717,
					1,
					160
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-45) max 45)/ 95),(((-55) max 55)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-70) max 70)/ 95),(((-60) max 60)/  95)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_04",
					0.44668359,
					1,
					180
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-65) max 65)/ 95),(((-70) max 70)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-85) max 85)/ 95),(((-80) max 80)/  95)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_05",
					0.50118721,
					1,
					200
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/ 95) factor[(((-80) max 80)/ 95),(((-90) max 90)/  95)])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_01",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-0) max 0)/ 95),(((-10) max 10)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-25) max 25)/ 95),(((-15) max 15)/  95)]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_02",
					0.50118721,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-20) max 20)/ 95),(((-35) max 35)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-55) max 55)/ 95),(((-40) max 40)/  95)]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_03",
					0.56234133,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-45) max 45)/ 95),(((-55) max 55)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-70) max 70)/ 95),(((-60) max 60)/  95)]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_04",
					0.63095737,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-65) max 65)/ 95),(((-70) max 70)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-85) max 85)/ 95),(((-80) max 80)/  95)]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_05",
					0.70794576,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/ 95) factor[(((-80) max 80)/ 95),(((-90) max 90)/  95)])";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_01",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-0) max 0)/ 95),(((-10) max 10)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-25) max 25)/ 95),(((-15) max 15)/  95)]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_02",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-20) max 20)/ 95),(((-35) max 35)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-55) max 55)/ 95),(((-40) max 40)/  95)]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_03",
					0.50118721,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-45) max 45)/ 95),(((-55) max 55)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-70) max 70)/ 95),(((-60) max 60)/  95)]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_04",
					0.63095737,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-65) max 65)/ 95),(((-70) max 70)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-85) max 85)/ 95),(((-80) max 80)/  95)]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_05",
					0.70794576,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/ 95) factor[(((-80) max 80)/ 95),(((-90) max 90)/  95)])";
			};
		};
		driveOnComponent[]={};
		enginePower=800;
		peakTorque=5865;
		torqueCurve[]=
		{
			{0.42424199,0.80000001},
			{0.54545498,0.94999999},
			{0.60606098,0.99000001},
			{0.63636398,1},
			{0.66666698,0.98000002},
			{0.72727299,0.93000001},
			{0.87878799,0.75999999},
			{1,0.60000002}
		};
		thrustDelay=0.050000001;
		clutchStrength=40;
		fuelCapacity=1885;
		brakeIdleSpeed=0.1;
		latency=1.2;
		tankTurnForce=800000;
		tankTurnForceAngMinSpd=0.75999999;
		tankTurnForceAngSpd=0.80000001;
		turnCoef=1;
		slowSpeedForwardCoef=0.029999999;
		normalSpeedForwardCoef=0.75;
		idleRpm=700;
		redRpm=2700;
		maxOmega=304;
		minOmega=74;
		engineMOI=10;
		dampingRateFullThrottle=1.3;
		dampingRateZeroThrottleClutchEngaged=6;
		dampingRateZeroThrottleClutchDisengaged=1;
		alphaTracks=0.69999999;
		accelAidForceCoef=1.5;
		accelAidForceYOffset=-2;
		accelAidForceSpd=1.4;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.42424199,0.45454499,0.33333299,0.939394,0.42424199,0.909091,0.63636398,0.84848499,0.66666698,1,0.66666698};
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=30;
		antiRollbarSpeedMin=15;
		antiRollbarSpeedMax=75;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-2,
				"N",
				0,
				"D1",
				4.9000001,
				"D2",
				2.9000001,
				"D3",
				1.8,
				"D4",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				8.5
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0;
		};
		class Wheels
		{
			class wheel_1_0
			{
				boneName="";
				center="wheel_1_0_axis";
				boundary="wheel_1_0_bound";
				damping=75;
				steering=0;
				side="left";
				weight=150;
				mass=150;
				MOI=90;
				latStiffX=1;
				latStiffY=35;
				suspTravelDirection[]={-0.125,-1,0};
				longitudinalStiffnessPerUnitGravity=100000;
				maxBrakeTorque=80000;
				sprungMass=1800;
				springStrength=700000;
				springDamperRate=36000;
				dampingRate=1;
				dampingRateInAir=4510;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				maxDroop=0;
				maxCompression=0;
				frictionVsSlipGraph[]=
				{
					{0,5},
					{0.5,5},
					{1,5}
				};
			};
			class wheel_1_1: wheel_1_0
			{
				boneName="wheel_1_1_damper";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				maxDroop=0.185;
				maxCompression=0.185;
			};
			class wheel_1_2: wheel_1_1
			{
				boneName="wheel_1_2_damper";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
			};
			class wheel_1_3: wheel_1_1
			{
				boneName="wheel_1_3_damper";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
			};
			class wheel_1_4: wheel_1_1
			{
				boneName="wheel_1_4_damper";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
			};
			class wheel_1_5: wheel_1_1
			{
				boneName="wheel_1_5_damper";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
			};
			class wheel_1_6: wheel_1_1
			{
				boneName="wheel_1_6_damper";
				center="wheel_1_6_axis";
				boundary="wheel_1_6_bound";
			};
			class wheel_1_7: wheel_1_0
			{
				boneName="";
				center="wheel_1_7_axis";
				boundary="wheel_1_7_bound";
			};
			class wheel_2_0: wheel_1_0
			{
				boneName="";
				center="wheel_2_0_axis";
				boundary="wheel_2_0_bound";
				side="right";
			};
			class wheel_2_1: wheel_2_0
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				maxDroop=0.185;
				maxCompression=0.185;
			};
			class wheel_2_2: wheel_2_1
			{
				boneName="wheel_2_2_damper";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
			};
			class wheel_2_3: wheel_2_1
			{
				boneName="wheel_2_3_damper";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
			};
			class wheel_2_4: wheel_2_1
			{
				boneName="wheel_2_4_damper";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
			};
			class wheel_2_5: wheel_2_1
			{
				boneName="wheel_2_5_damper";
				center="wheel_2_5_axis";
				boundary="wheel_2_5_bound";
			};
			class wheel_2_6: wheel_2_1
			{
				boneName="wheel_2_6_damper";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
			};
			class wheel_2_7: wheel_2_0
			{
				boneName="";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
			};
		};
		class Library
		{
			libtextdesc="";
		};
		scope=0;
		model="\bwa3_puma\bwa3_puma.p3d";
		editorSubcategory="EdSubcat_APCs";
		picture="\bwa3_puma\ui\bwa3_puma_picture.paa";
		icon="\bwa3_puma\ui\bwa3_puma_icon.paa";
		transportSoldier=6;
		getInAction="GetInMRAP_01";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInAMV_cargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoAction[]=
		{
			"passenger_flatground_leanleft",
			"passenger_flatground_generic01",
			"passenger_flatground_generic02",
			"passenger_flatground_generic03",
			"passenger_flatground_generic04",
			"passenger_flatground_generic05"
		};
		driverAction="crew_tank01_out";
		driverInAction="mbt1_slot1_in";
		extCameraPosition[]={0,2.25,-9};
		forceHideDriver=0;
		hideProxyInCombat=1;
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		class ViewOptics: ViewOptics
		{
			initFov=0.94999999;
			maxFov=0.94999999;
			minFov=0.94999999;
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
		};
		maxSpeed=75;
		armor=450;
		armorStructural=6;
		armorLights=0.1;
		crewExplosionProtection=0.99900001;
		damageResistance=0.0054700002;
		cost=1000000;
		threat[]={1,0.80000001,0.30000001};
		crewVulnerable=1;
		waterPPInVehicle=0;
		maxFordingDepth=2;
		waterResistance=0;
		waterDamageEngine=0.2;
		fireDustEffect="emptyEffect";
		wheelCircumference=2.1800001;
		tracksSpeed=-1.1;
		driverOpticsModel="\bwa3_puma\bwa3_puma_optics_driver";
		showNVGDriver=1;
		showNVGCommander=1;
		castDriverShadow=1;
		unitInfoType="BWA3_RscUnitInfoTank";
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=1;
				material=-1;
				name="hull";
				visual="mat_wanne";
				passThrough=1;
				minimalHit=0.23999999;
				explosionShielding=1;
				radius=0.15000001;
			};
			class HitEngine: HitEngine
			{
				armor=1;
				material=-1;
				name="engine";
				visual="engine";
				passThrough=0;
				minimalHit=0.23999999;
				explosionShielding=0.80000001;
				radius=0.25;
			};
			class HitLTrack: HitLTrack
			{
				armor=1;
				material=-1;
				name="ltrack";
				visual="ltrack";
				passThrough=0;
				minimalHit=0.2;
				explosionShielding=2;
				radius=0.1;
			};
			class HitRTrack: HitRTrack
			{
				armor=1;
				material=-1;
				name="rtrack";
				visual="rtrack";
				passThrough=0;
				minimalHit=0.2;
				explosionShielding=2;
				radius=0.1;
			};
			class HitFuel: HitFuel
			{
				armor=1.1;
				material=-1;
				name="HitFuel";
				visual="HitFuel";
				passThrough=0;
				minimalHit=0.30000001;
				explosionShielding=2;
				radius=0.2;
			};
		};
		class VehicleTransport
		{
			parachuteClass="B_Parachute_02_F";
			parachuteHeightLimit=5;
			canBeTransported=1;
			dimensions[]=
			{
				"BBox_1_1_pos",
				"BBox_1_2_pos"
			};
		};
		animationSourceHatch="";
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust_pos";
				direction="exhaust_dir";
				effect="ExhaustEffectHTruck";
			};
		};
		smokeLauncherGrenadeCount=4;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=120;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						memoryPointGunnerOutOptics="commanderview";
						memoryPointGunnerOptics="commanderview";
						minElev=-25;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						weapons[]=
						{
							"BWA3_SmokeLauncher"
						};
						magazines[]=
						{
							"BWA3_SmokeLauncherMag"
						};
						soundServo[]=
						{
							"A3\sounds_f\dummysound",
							0.0099999998,
							1,
							30
						};
						outGunnerMayFire=0;
						inGunnerMayFire=1;
						forceHideGunner=0;
						gunnerAction="crew_tank01_out";
						gunnerInAction="crew_tank01_in";
						gunnerGetInAction="GetInAMV_cargo";
						gunnerGetOutAction="GetOutLow";
						gunnerOpticsModel="\bwa3_puma\bwa3_puma_optics_commander.p3d";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						class ViewGunner: ViewCargo
						{
							minAngleX=-85;
						};
						class ViewOptics: ViewOptics
						{
							minFov="(75 * 0.05625 / 120)";
							maxFov="(42 / 120)";
							initFov="(42 / 120)";
							thermalMode[]={0,1};
							visionMode[]=
							{
								"Normal",
								"NVG",
								"TI"
							};
						};
						turretInfoType="BWA3_RscOptics_Puma_commander";
						startEngine=0;
						class HitPoints
						{
							class HitComTurret
							{
								armor=2;
								material=-1;
								name="commander_turret_hit";
								visual="commander_turret_hit";
								passThrough=0;
								minimalHit=0.23999999;
								explosionShielding=0.40000001;
								radius=0.1;
								isTurret=1;
							};
							class HitComGun
							{
								armor=1;
								material=-1;
								name="commander_gun_hit";
								visual="commander_gun_hit";
								passThrough=0;
								minimalHit=0.23999999;
								explosionShielding=0.40000001;
								radius=0.1;
								isGun=1;
							};
						};
						stabilizedInAxes=3;
						gunnerHasFlares=1;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						viewGunnerInExternal=1;
						castGunnerShadow=1;
					};
				};
				body="mainTurret";
				gun="mainGun";
				weapons[]=
				{
					"BWA3_MK30",
					"BWA3_MG5_vehicle",
					"BWA3_Spike_LR"
				};
				magazines[]=
				{
					"BWA3_240Rnd_APFSDS_shells",
					"BWA3_160Rnd_ABM_shells",
					"BWA3_1200Rnd_762x51",
					"BWA3_1200Rnd_762x51",
					"BWA3_2Rnd_Spike_Lr"
				};
				soundServo[]=
				{
					"\bwa3_sounds\sounds\bwa3_turret_turn.ogg",
					1,
					1,
					30
				};
				minElev=-10;
				maxElev=45;
				gunnerAction="apctracked2_slot1_out";
				gunnerInAction="apctracked2_slot1_in";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				forceHideGunner=1;
				stabilizedInAxes=3;
				gunnerOpticsModel="\bwa3_puma\bwa3_puma_optics_gunner.p3d";
				gunnerOutOpticsModel="";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
				discreteDistanceInitIndex=2;
				memoryPointGunnerOptics="gunnerview";
				selectionFireAnim="zasleh";
				turretAxis="";
				gunAxis="mainGunAxis";
				startEngine=0;
				lockWhenDriverOut=1;
				class ViewOptics: ViewOptics
				{
					initFov=0.4375;
					maxFov=0.4375;
					minFov=0.034820002;
					thermalMode[]={0,1};
					visionMode[]=
					{
						"Normal",
						"TI"
					};
				};
				class OpticsIn: BWA3_Optics_Gunner_Puma
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
				turretInfoType="BWA3_RscOptics_Puma_gunner";
				class HitPoints
				{
					class HitTurret
					{
						armor=0.60000002;
						material=-1;
						name="turret";
						visual="mat_turm";
						passThrough=0.2;
						minimalHit=0.1;
						explosionShielding=0.30000001;
						radius=0.30000001;
						isTurret=1;
					};
					class HitGun
					{
						armor=1.2;
						material=-1;
						name="gun";
						visual="mat_kanone";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.30000001;
						radius=0.15000001;
						isGun=1;
					};
				};
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=40;
				outerAngle=119;
				coneFadeCoef=10;
				intensity=1;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.15000001;
					hardLimitStart=15;
					hardLimitEnd=45;
				};
			};
			class Left2: Left
			{
				position="light_L_flare";
				innerAngle=100;
				outerAngle=179;
				useFlare=1;
				class Attenuation: Attenuation
				{
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class Right2: Right
			{
				position="Light_R_flare";
				innerAngle=100;
				outerAngle=179;
				useFlare=1;
				class Attenuation: Attenuation
				{
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Back
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_B";
				direction="Light_B_end";
				hitpoint="Light_B";
				selection="Light_B";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Back2: Back
			{
				position="Light_B_flare";
				useFlare=1;
			};
			class Left_cover
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L3";
				direction="Light_L3_end";
				hitpoint="";
				selection="Light_L3";
				size=1;
				innerAngle=25;
				outerAngle=98;
				coneFadeCoef=5;
				intensity=0.029999999;
				useFlare=0;
				dayLight=0;
				flareSize=0.0099999998;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=5.5;
					hardLimitEnd=20.5;
				};
			};
			class Left2_cover: Left_cover
			{
				position="Light_L3_flare";
				innerAngle=40;
				outerAngle=65;
				useFlare=1;
				class Attenuation: Attenuation
				{
					quadratic=0.25;
					hardLimitStart=3;
					hardLimitEnd=6.5;
				};
			};
			class Right_cover: Left_cover
			{
				position="Light_R3";
				direction="Light_R3_end";
				hitpoint="";
				selection="Light_R3";
			};
			class Right2_cover: Right_cover
			{
				position="Light_R3_flare";
				innerAngle=40;
				outerAngle=65;
				useFlare=1;
				class Attenuation: Attenuation
				{
					quadratic=0.25;
					hardLimitStart=3;
					hardLimitEnd=6.5;
				};
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right"
			},
			
			{
				"Left_cover",
				"Right_cover"
			},
			
			{
				"Back",
				"Back2"
			}
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"bwa3_puma\data\bwa3_puma_wanne.rvmat",
				"bwa3_puma\data\bwa3_puma_wanne_damage.rvmat",
				"bwa3_puma\data\bwa3_puma_wanne_destruct.rvmat",
				"bwa3_puma\data\bwa3_puma_turm.rvmat",
				"bwa3_puma\data\bwa3_puma_turm_damage.rvmat",
				"bwa3_puma\data\bwa3_puma_turm_destruct.rvmat"
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine="BWA3_30Rnd_556x45_G36";
				count=24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine="BWA3_200Rnd_556x45";
				count=6;
			};
			class _xx_BWA3_DM25
			{
				magazine="BWA3_DM25";
				count=10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine="BWA3_DM32_Orange";
				count=8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_RSAS_pointer
			{
				weapon="BWA3_G36KA2_RSAS_pointer";
				count=2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon="BWA3_MG4_ZO4x30_pointer";
				count=1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon="BWA3_PzF3_Tandem_Loaded";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class AnimationSources
		{
			class hide_netz
			{
				displayName="$STR_BWA3_CamouflageNet";
				author="$STR_BWA3_Author";
				source="user";
				animPeriod=9.9999997e-005;
				initPhase=1;
			};
			class hide_netz_turret
			{
				displayName="$STR_BWA3_CamouflageNet_Turret";
				author="$STR_BWA3_Author";
				source="user";
				animPeriod=9.9999997e-005;
				initPhase=1;
			};
			class hide_netz_gun
			{
				displayName="$STR_BWA3_CamouflageNet_Gun";
				author="$STR_BWA3_Author";
				source="user";
				animPeriod=9.9999997e-005;
				initPhase=1;
			};
			class hide_netz_mells
			{
				displayName="$STR_BWA3_CamouflageNet_MELLS";
				author="$STR_BWA3_Author";
				source="user";
				animPeriod=9.9999997e-005;
				initPhase=1;
			};
			class mainTurret_user
			{
				source="mainTurret_user";
				animPeriod=1;
				initPhase=0;
			};
			class mainGun_user
			{
				source="mainGun_user";
				animPeriod=1;
				initPhase=0;
			};
			class obsTurret_user
			{
				source="obsTurret_user";
				animPeriod=1;
				initPhase=0;
			};
			class obsGun_user
			{
				source="obsGun_user";
				animPeriod=1;
				initPhase=0;
			};
			class mainGun_reload
			{
				source="reload";
				weapon="BWA3_MK30";
			};
			class mainGun_random
			{
				source="ammorandom";
				weapon="BWA3_MK30";
			};
			class MG_reload
			{
				source="reload";
				weapon="BWA3_MG5_vehicle";
			};
			class MG_random
			{
				source="ammorandom";
				weapon="BWA3_MG5_vehicle";
			};
			class missiles_revolving
			{
				source="revolving";
				weapon="BWA3_Spike_LR";
			};
			class MUSS
			{
				source="user";
				animPeriod=0.5;
				initPhase=0.5;
			};
			class mirror1_left
			{
				source="user";
				animPeriod=0.40000001;
				initPhase=0;
			};
			class mirror1_right
			{
				source="user";
				animPeriod=0.40000001;
				initPhase=0;
			};
			class mirror2_left
			{
				source="user";
				animPeriod=0.40000001;
				initPhase=0;
			};
			class mirror2_right
			{
				source="user";
				animPeriod=0.40000001;
				initPhase=0;
			};
			class HazardLights
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class CamoLight
			{
				source="user";
				animPeriod=0.001;
				initPhase=-1;
			};
		};
		animationList[]=
		{
			"hide_netz",
			0.85000002,
			"hide_netz_turret",
			0.85000002,
			"hide_netz_gun",
			0.85000002,
			"hide_netz_mells",
			0.85000002
		};
		class RenderTargets
		{
			class Mirror_Left_1
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					fov=0.40000001;
					pointDirection="pip1_dir";
					pointPosition="pip1_pos";
					renderQuality=2;
					renderVisionMode=4;
				};
			};
			class Mirror_Left_2: Mirror_Left_1
			{
				renderTarget="rendertarget2";
				class CameraView1: CameraView1
				{
					pointDirection="pip2_dir";
					pointPosition="pip2_pos";
				};
			};
			class Mirror_Right_1
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					fov=0.40000001;
					pointDirection="pip3_dir";
					pointPosition="pip3_pos";
					renderQuality=2;
					renderVisionMode=4;
				};
			};
			class Mirror_Right_2: Mirror_Right_1
			{
				renderTarget="rendertarget4";
				class CameraView1: CameraView1
				{
					pointDirection="pip4_dir";
					pointPosition="pip4_pos";
				};
			};
		};
		class UserActions
		{
			class Mirrors_FoldOut
			{
				displayName="$STR_BWA3_MirrorsOut";
				onlyforplayer=1;
				position="mirrors_control";
				radius=2;
				showWindow=0;
				condition="this animationPhase ""mirror1_left"" < 0.5 and this animationPhase ""driverhatch"" > 0.5 and player == driver this";
				statement="this animate [""mirror1_left"", 1]; this animate [""mirror1_right"", 1]; this animate [""mirror2_left"", 1]; this animate [""mirror2_right"", 1];";
			};
			class Mirrors_FoldIn: Mirrors_FoldOut
			{
				displayName="$STR_BWA3_MirrorsIn";
				condition="this animationPhase ""mirror2_left"" > 0.5 and this animationPhase ""driverhatch"" > 0.5 and player == driver this";
				statement="this animate [""mirror1_left"", 0]; this animate [""mirror1_right"", 0]; this animate [""mirror2_left"", 0]; this animate [""mirror2_right"", 0];";
			};
			class CamoNet_show
			{
				displayName="$STR_BWA3_CamouflageNet_show";
				onlyforplayer=1;
				position="net_control_hull";
				radius=2;
				showWindow=0;
				condition="this animationPhase ""hide_netz"" > 0.5 and player == cameraOn";
				statement="this animate [""hide_netz"", 0];";
			};
			class CamoNet_hide: CamoNet_show
			{
				displayName="$STR_BWA3_CamouflageNet_hide";
				condition="this animationPhase ""hide_netz"" < 0.5 and player == cameraOn";
				statement="this animate [""hide_netz"", 1];";
			};
			class CamoNet_turret_show: CamoNet_show
			{
				displayName="$STR_BWA3_CamouflageNet_Turret_show";
				position="net_control_turret";
				condition="this animationPhase ""hide_netz_turret"" > 0.5 and player == cameraOn";
				statement="this animate [""hide_netz_turret"", 0];";
			};
			class CamoNet_turret_hide: CamoNet_turret_show
			{
				displayName="$STR_BWA3_CamouflageNet_Turret_hide";
				condition="this animationPhase ""hide_netz_turret"" < 0.5 and player == cameraOn";
				statement="this animate [""hide_netz_turret"", 1];";
			};
			class CamoNet_gun_show: CamoNet_show
			{
				displayName="$STR_BWA3_CamouflageNet_Gun_show";
				position="net_control_turret";
				condition="this animationPhase ""hide_netz_gun"" > 0.5 and player == cameraOn";
				statement="this animate [""hide_netz_gun"", 0];";
			};
			class CamoNet_gun_hide: CamoNet_gun_show
			{
				displayName="$STR_BWA3_CamouflageNet_Gun_hide";
				condition="this animationPhase ""hide_netz_gun"" < 0.5 and player == cameraOn";
				statement="this animate [""hide_netz_gun"", 1];";
			};
			class CamoNet_mells_show: CamoNet_show
			{
				displayName="$STR_BWA3_CamouflageNet_MELLS_show";
				position="net_control_turret";
				condition="this animationPhase ""hide_netz_mells"" > 0.5 and player == cameraOn";
				statement="this animate [""hide_netz_mells"", 0];";
			};
			class CamoNet_mells_hide: CamoNet_mells_show
			{
				displayName="$STR_BWA3_CamouflageNet_MELLS_hide";
				condition="this animationPhase ""hide_netz_mells"" < 0.5 and player == cameraOn";
				statement="this animate [""hide_netz_mells"", 1];";
			};
		};
		class TextureSources
		{
			class Fleck
			{
				displayName="$STR_BWA3_CamouflageType_Fleck";
				author="$STR_BWA3_Author";
				textures[]=
				{
					"bwa3_puma\data\bwa3_puma_wanne_fleck_co.paa",
					"bwa3_puma\data\bwa3_puma_turm_fleck_co.paa",
					"bwa3_puma\data\bwa3_puma_netz_fleck_ca.paa",
					"bwa3_puma\data\bwa3_puma_kette_co.paa"
				};
				factions[]=
				{
					"BWA3_Faction_Fleck"
				};
			};
			class Tropen1
			{
				displayName="$STR_BWA3_CamouflageType_Tropen1";
				author="$STR_BWA3_Author";
				textures[]=
				{
					"bwa3_puma\data\bwa3_puma_wanne_tropen_co.paa",
					"bwa3_puma\data\bwa3_puma_turm_tropen_co.paa",
					"bwa3_puma\data\bwa3_puma_netz_tropen_ca.paa",
					"bwa3_puma\data\bwa3_puma_kette_co.paa"
				};
				factions[]=
				{
					"BWA3_Faction_Tropen"
				};
			};
			class Winter
			{
				displayName="$STR_BWA3_CamouflageType_Winter";
				author="$STR_BWA3_Author";
				textures[]=
				{
					"bwa3_puma\data\bwa3_puma_wanne_winter_co.paa",
					"bwa3_puma\data\bwa3_puma_turm_winter_co.paa",
					"bwa3_puma\data\bwa3_puma_netz_fleck_ca.paa",
					"bwa3_puma\data\bwa3_puma_kette_winter_ca.paa"
				};
				factions[]=
				{
					"BWA3_Faction_Fleck"
				};
			};
		};
		class Attributes
		{
			class BWA3_LicensePlate: BWA3_Attribute_LicensePlate_Base
			{
			};
			class BWA3_Company: BWA3_Attribute_Company_Base
			{
			};
			class BWA3_Battalion: BWA3_Attribute_Battalion_Base
			{
			};
			class BWA3_CamoNet: BWA3_Attribute_CamoNet_Base
			{
			};
			class BWA3_CamoNet_Turret: BWA3_Attribute_CamoNet_Turret_Base
			{
			};
			class BWA3_CamoNet_Gun: BWA3_Attribute_CamoNet_Gun_Base
			{
			};
			class BWA3_CamoNet_MELLS: BWA3_Attribute_CamoNet_MELLS_Base
			{
			};
			class BWA3_Attribute_HazardLights: BWA3_Attribute_HazardLights_Base
			{
			};
			class BWA3_MK30AP
			{
				displayName="$STR_BWA3_MK30APMagNameShort";
				property="BWA3_MK30AP";
				control="Checkbox";
				expression="_this setVariable ['%s', _value];";
				defaultValue="true";
				condition="objectVehicle";
				typeName="BOOL";
			};
			class BWA3_MK30HE: BWA3_MK30AP
			{
				displayName="$STR_BWA3_MK30HEMagNameShort";
				property="BWA3_MK30HE";
				defaultValue="false";
			};
			class BWA3_MK30ABM: BWA3_MK30AP
			{
				displayName="$STR_BWA3_MK30ABMMagNameShort";
				property="BWA3_MK30ABM";
				defaultValue="true";
			};
		};
	};
};