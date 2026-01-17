class CfgPatches
{
	class ADDON
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};
class cfgWeapons
{
	class VestItem;
	class ItemCore;
	class generic_jpc_1: ItemCore
	{
		author="isky";
		picture="\pzgr\pzgr33\addons\uniforms\pzgr33_ca.paa";
		logo="";
		scope=2;
		weaponPoolAvailable=1;
		displayName="[PzGr33] JPC 1";
		model="pzgr33\pzgr_vests\jpc_1.p3d";
		class ItemInfo: VestItem
		{
			mass=25;
			uniformModel="pzgr33\pzgr_vests\jpc_1.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.40000001;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.40000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=10;
					PassThrough=0.40000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=10;
					PassThrough=0.40000001;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.40000001;
				};
			};
		};
	};
};
