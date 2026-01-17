class CfgPatches
{
	class ADDON
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
	};
};
class CfgMagazines 
{
    class CA_Magazine;
	class BWA3_1Rnd_Flare_Singlestar_White;
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
    class BWA3_1Rnd_Flare_Singlestar_Green: BWA3_1Rnd_Flare_Singlestar_White 
	{
        ammo = "Sub_F_Signal_Green";
    };
    class BWA3_1Rnd_Flare_Singlestar_Red: BWA3_1Rnd_Flare_Singlestar_White 
	{
        ammo = "Sub_F_Signal_Red";
    };
};
class CfgAmmo
{
    class B_30mm_MP_Tracer_Red;
	class Sh_120mm_HE_Tracer_Red;
	class B_556x45_Ball_Tracer_Red;
	class B_762x51_Tracer_Red;
    class BWA3_B_30mm_HE: B_30mm_MP_Tracer_Red 
	{
		hit = 100; 
		indirectHit = 10;     
		indirectHitRange = 3; 
		caliber = 4.8;      
		explosive = 0.6;    
    };
    class BWA3_Sh_120mm_HE: Sh_120mm_HE_Tracer_Red {
        hit = 600;
        indirectHit = 20;
        indirectHitRange = 8;
        typicalSpeed = 900;
        explosive = 0.7;
    };
    class BWA3_B_556x45_Ball: B_556x45_Ball_Tracer_Red 
	{
		hit=9;
		typicalSpeed=960;
		indirectHit =0;
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
class CfgWeapons
{
    class Pistol_Base_F;
    class BWA3_P2A1: Pistol_Base_F 
	{
        scope = 2;
        magazines[] = 
		{
			"BWA3_1Rnd_Flare_Illum",
            "BWA3_1Rnd_Flare_Singlestar_White",
            "BWA3_1Rnd_Flare_Singlestar_Green",
            "BWA3_1Rnd_Flare_Singlestar_Red"
        };
	};
};
