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
	class jpc_1: ItemCore
	{
		author="isky";
		picture="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		logo="";
		scope=2;
		weaponPoolAvailable=1;
		displayName="[PzGr33] JPC 1";
		model="pzgr33\pzgr\addons\vests\jpc_1.p3d";
		dlc = "PzGr33";
		class ItemInfo: VestItem
		{
			mass=25;
			uniformModel="pzgr33\pzgr\addons\vests\jpc_1.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.4;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=10;
					PassThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=10;
					PassThrough=0.4;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.4;
				};
			};
		};
	};
	class jpc_mg_1: ItemCore
	{
		author="isky";
		picture="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		logo="";
		scope=2;
		weaponPoolAvailable=1;
		displayName="[PzGr33] JPC MG (1)";
		model="pzgr33\pzgr\addons\vests\jpc_mg.p3d";
		dlc = "PzGr33";
		class ItemInfo: VestItem
		{
			mass=25;
			uniformModel="pzgr33\pzgr\addons\vests\jpc_mg.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.4;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=10;
					PassThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=10;
					PassThrough=0.4;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.4;
				};
			};
		};
	};
	class jpc_tl_1: ItemCore
	{
		author="isky";
		picture="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		logo="";
		scope=2;
		weaponPoolAvailable=1;
		displayName="[PzGr33] JPC TL (1)";
		model="pzgr33\pzgr\addons\vests\jpc_tl.p3d";
		dlc = "PzGr33";
		class ItemInfo: VestItem
		{
			mass=25;
			uniformModel="pzgr33\pzgr\addons\vests\jpc_tl.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.4;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=10;
					PassThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=10;
					PassThrough=0.4;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.4;
				};
			};
		};
	};
	class jpc_gl_1: ItemCore
	{
		author="isky";
		picture="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		logo="";
		scope=2;
		weaponPoolAvailable=1;
		displayName="[PzGr33] JPC GL (1)";
		model="pzgr33\pzgr\addons\vests\jpc_gl.p3d";
		dlc = "PzGr33";
		class ItemInfo: VestItem
		{
			mass=25;
			uniformModel="pzgr33\pzgr\addons\vests\jpc_gl.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.4;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=10;
					PassThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=10;
					PassThrough=0.4;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.4;
				};
			};
		};
	};
};
