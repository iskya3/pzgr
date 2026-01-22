#include "script_component.hpp"
class CfgPatches
{
	class ADDON
	{
		units[]={};
		weapons[]={"pzgr_viper_p6_blk"};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};
class cfgWeapons
{
	class InventoryItem_Base_F;
	class HeadgearItem: InventoryItem_Base_F{};
	class H_HelmetB;
	class pzgr_viper_p6_blk: H_HelmetB
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[PzGr33] Viper P6";
		picture="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		UiPicture ="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		model="pzgr33\pzgr\addons\helmets\p6.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		author="isky";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: HeadgearItem
		{
			mass=20;
			uniformModel="pzgr33\pzgr\addons\helmets\p6.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			modelSides[]={3,1};
			armor="25";
			passThrough=0.40000001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead"; 
					armor= 4; 
					passThrough=0.5; 
				};
			};
		};
	};
};
