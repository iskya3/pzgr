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
			"tfar_backpacks",
			"bwa3_weapons",
			"bwa3_p2a1",
			"bwa3_pzh2000",
			"bwa3_puma",
			"bwa3_leopard2"
		};
	};
};
class CfgMagazines 
{
    class CA_Magazine;
    class BWA3_200Rnd_556x45: CA_Magazine 
	{
        ACE_isBelt = 1;
        mass = 25;
    };
    class BWA3_200Rnd_556x45_Tracer: BWA3_200Rnd_556x45 
	{
		ACE_isBelt = 1;
        tracersEvery = 1;
    };
    class BWA3_120Rnd_762x51_soft: CA_Magazine 
	{
        ACE_isBelt = 1;
        mass = 25;
    };
    class BWA3_120Rnd_762x51_Tracer_soft: BWA3_120Rnd_762x51_soft 
	{
		ACE_isBelt = 1;
        tracersEvery = 1;

    };
#include "flaregun_magazines.hpp"
};
class CfgAmmo
{
    class B_30mm_MP_Tracer_Red;
	class Sh_120mm_HE_Tracer_Red;
	class B_556x45_Ball_Tracer_Red;
	class B_762x51_Tracer_Red;
	class B_30mm_HE_Tracer_Red;
	//class F_Signal_Green;
    class BWA3_B_30mm_HE: B_30mm_MP_Tracer_Red 
	{
		hit = 100; 
		indirectHit = 15;     
		indirectHitRange = 4; 
		caliber = 4.8;      
		explosive = 0.6;  
		deflecting=0;
		deflectionSlowDown=3.0;
		ace_vehicle_damage_incendiary = 0.9;
    };
	class Redd_B_30mm_HE_Tracer_Red: B_30mm_HE_Tracer_Red
	{
		typicalSpeed=1050;
		irLock=0;
		airLock=0;
		laserLock=0;
		nvlock=0;
		canLock=0;
		tracerScale=2;
		tracerStartTime=0.07;
		tracerEndTime=5.6999998;
		hit=25;
		indirectHit=15;
		indirectHitRange=5;
		caliber=2.5;
		explosive=0.94999999;
		ace_vehicle_damage_incendiary = 0.7;
		class CamShakeFire
		{
			power=1;
			duration=1;
			frequency=20;
			distance=10;
		};
	};
    class BWA3_Sh_120mm_MZ: Sh_120mm_HE_Tracer_Red {
        hit = 600;
        indirectHit = 20;
        indirectHitRange = 8;
        typicalSpeed = 900;
        explosive = 0.7;
		deflecting=0;
		deflectionSlowDown=3.5; 
    };
    class BWA3_B_556x45_Ball: B_556x45_Ball_Tracer_Red 
	{
		hit=10;
		typicalSpeed=960;
		indirectHit=0;
		indirectHitRange=0;
		airFriction=-0.000772;
	};
    class BWA3_B_556x45_Ball_Tracer_Dim: BWA3_B_556x45_Ball 
	{
        nvgOnly = 1;
    };
    class BWA3_B_762x51_Ball: B_762x51_Tracer_Red 
	{
		hit = 11.55;
	};
};
class CfgVehicles
{
	class TFAR_Bag_Base;
	class TFAR_rt1523g: TFAR_Bag_Base 
	{
		maximumLoad = 200;
	};
	class TFAR_rt1523g_big: TFAR_rt1523g 
	{
		maximumLoad = 320;
	};
};
class Mode_Burst;
class CfgWeapons
{
	#include "uniforms.hpp"
	class CannonCore;
	class autocannon_Base_F;
	class cannon_120mm;
	class BWA3_MK30: autocannon_Base_F 
	{
        displayName = "$STR_BWA3_MK30Name";
		ace_overpressure_priority=1;
		ace_overpressure_angle=90;
		ace_overpressure_range=15;
		ace_overpressure_damage=0.60000002;
    };
	class BWA3_L55: cannon_120mm 
	{
        displayName = "$STR_BWA3_L55Name";
        reloadTime = 6;
        magazineReloadTime = 6;
		ace_overpressure_priority=1;
		ace_overpressure_angle = 90;    // Cone in which the damage is applied (in degrees from the muzzle of the cannon towards the side)
        ace_overpressure_range = 50;    // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.85; // Damage multiplier
        ace_overpressure_offset = 1;
    };
	class BWA3_RH155mm_AMOS: CannonCore 
	{
        scope = 1;
        displayName = "$STR_BWA3_RH155_52";
        reloadTime = 5;
        magazineReloadTime = 7;
        autoReload = 1;
		ace_overpressure_priority=1;
        ace_overpressure_angle = 90;    // Cone in which the damage is applied (in degrees from the muzzle of the cannon towards the side)
        ace_overpressure_range = 50;    // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.85; // Damage multiplier
        ace_overpressure_offset = 1;    // Offset from the projectile origin forwards, to where the overpressure should originate from
        class Burst1: Mode_Burst 
		{
            reloadTime = 5;
        };
    };
};
