#include "script_component.hpp"
class CfgPatches
{
	class ADDON
	{
		units[]={};
		weapons[]={"pzgr_viper_p6_grey_fg","pzgr_viper_p6_grey_plain","pzgr_viper_p6_od_plain","pzgr_viper_p6_od_cb","pzgr_viper_p6_od_blk","pzgr_viper_p6_od_od","pzgr_viper_p6_od_fg","pzgr_viper_p6_grey_plain","pzgr_viper_p6_grey_od","pzgr_viper_p6_grey_cb","pzgr_viper_p6_grey_blk","pzgr_viper_p6_grey_fg"};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};
class XtdGearModels
{
	class CamoBase;
	class CfgWeapons
	{
		class pzgr_viper_p6
		{
			label = "P6";
			author = "isky";
			options[] = {"color","comtacs"};
			class color: CamoBase
			{
				label = "Helmet Color";
				values[] = {"grey","od"};
				class grey
				{
					label = "Grey";
					description = "";
					image = "";
				};	
				class od
				{
					label = "Olive Drab";
					description = "";
					image = "";
				};							
			};
			class comtacs
			{
				label = "Comtac's";
				values[] = {"fg","od","blk","cb","off"};
				class fg
				{
					label = "FG";
					description = "";
					image = "";
				};	
				class od
				{
					label = "Olive Drab";
					description = "";
					image = "";
				};	
				class blk
				{
					label = "Black";
					description = "";
					image = "";
				};	
				class cb
				{
					label = "Coyote Brown";
					description = "";
					image = "";
				};
				class off
				{
					label = "Off";
					description = "";
					image = "";
				};						
			};
		};
	};
};
class cfgWeapons
{
	class InventoryItem_Base_F;
	class HeadgearItem: InventoryItem_Base_F{};
	class H_HelmetB;
	class pzgr_viper_p6_grey_fg: H_HelmetB
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
		dlc = "PzGr33";
		class ItemInfo: HeadgearItem
		{
			mass=19;
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
		class XtdGearInfo
		{
			model = "pzgr_viper_p6";
			color = "grey";
			comtacs = "fg";
		};
	};
	class pzgr_viper_p6_grey_blk: H_HelmetB
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[PzGr33] Viper P6";
		picture="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		UiPicture ="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		model="pzgr33\pzgr\addons\helmets\p6.p3d";
		hiddenSelections[]={"_comtac"};
		hiddenSelectionsTextures[]={"pzgr33\pzgr\addons\helmets\data\comtac_iii\Comtac_III_Blk_CO.paa"};
		author="isky";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		dlc = "PzGr33";
		class ItemInfo: HeadgearItem
		{
			mass=19;
			uniformModel="pzgr33\pzgr\addons\helmets\p6.p3d";
			hiddenSelections[]={"_comtac"};
			hiddenSelectionsTextures[]={"pzgr33\pzgr\addons\helmets\data\comtac_iii\Comtac_III_Blk_CO.paa"};
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
		class XtdGearInfo
		{
			model = "pzgr_viper_p6";
			color = "grey";
			comtacs = "blk";
		};
	};
	class pzgr_viper_p6_grey_cb: H_HelmetB
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[PzGr33] Viper P6";
		picture="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		UiPicture ="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		model="pzgr33\pzgr\addons\helmets\p6.p3d";
		hiddenSelections[]={"_comtac"};
		hiddenSelectionsTextures[]={"pzgr33\pzgr\addons\helmets\data\comtac_iii\Comtac_III_cb_CO.paa"};
		author="isky";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		dlc = "PzGr33";
		class ItemInfo: HeadgearItem
		{
			mass=19;
			uniformModel="pzgr33\pzgr\addons\helmets\p6.p3d";
			hiddenSelections[]={"_comtac"};
			hiddenSelectionsTextures[]={"pzgr33\pzgr\addons\helmets\data\comtac_iii\Comtac_III_cb_CO.paa"};
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
		class XtdGearInfo
		{
			model = "pzgr_viper_p6";
			color = "grey";
			comtacs = "cb";
		};
	};
	class pzgr_viper_p6_grey_od: H_HelmetB
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[PzGr33] Viper P6";
		picture="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		UiPicture ="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		model="pzgr33\pzgr\addons\helmets\p6.p3d";
		hiddenSelections[]={"_comtac"};
		hiddenSelectionsTextures[]={"pzgr33\pzgr\addons\helmets\data\comtac_iii\Comtac_III_od_CO.paa"};
		author="isky";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		dlc = "PzGr33";
		class ItemInfo: HeadgearItem
		{
			mass=19;
			uniformModel="pzgr33\pzgr\addons\helmets\p6.p3d";
			hiddenSelections[]={"_comtac"};
			hiddenSelectionsTextures[]={"pzgr33\pzgr\addons\helmets\data\comtac_iii\Comtac_III_od_CO.paa"};
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
		class XtdGearInfo
		{
			model = "pzgr_viper_p6";
			color = "grey";
			comtacs = "od";
		};
	};
	class pzgr_viper_p6_grey_plain: H_HelmetB
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[PzGr33] Viper P6 Plain(Grey)";
		picture="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		UiPicture ="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		model="pzgr33\pzgr\addons\helmets\p6.p3d";
		hiddenSelections[]={"_comtac","_comtacwire"};
		hiddenSelectionsTextures[]={"",""};
		author="isky";
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=0;
		dlc = "PzGr33";
		class ItemInfo: HeadgearItem
		{
			mass=19;
			uniformModel="pzgr33\pzgr\addons\helmets\p6.p3d";
			hiddenSelections[]={"_comtac","_comtacwire"};
			hiddenSelectionsTextures[]={"",""};
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
		class XtdGearInfo
		{
			model = "pzgr_viper_p6";
			color = "grey";
			comtacs = "off";
		};
	};
	///OD Variants
	class pzgr_viper_p6_od_fg: H_HelmetB
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[PzGr33] Viper P6";
		picture="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		UiPicture ="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		model="pzgr33\pzgr\addons\helmets\p6.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"pzgr33\pzgr\addons\helmets\data\p6\p6_od_co.paa"};
		author="isky";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		dlc = "PzGr33";
		class ItemInfo: HeadgearItem
		{
			mass=19;
			uniformModel="pzgr33\pzgr\addons\helmets\p6.p3d";
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"pzgr33\pzgr\addons\helmets\data\p6\p6_od_co.paa"};
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
		class XtdGearInfo
		{
			model = "pzgr_viper_p6";
			color = "od";
			comtacs = "fg";
		};
	};
	class pzgr_viper_p6_od_blk: H_HelmetB
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[PzGr33] Viper P6";
		picture="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		UiPicture ="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		model="pzgr33\pzgr\addons\helmets\p6.p3d";
		hiddenSelections[]={"_comtac","camo"};
		hiddenSelectionsTextures[]={"pzgr33\pzgr\addons\helmets\data\comtac_iii\Comtac_III_Blk_CO.paa","pzgr33\pzgr\addons\helmets\data\p6\p6_od_co.paa"};
		author="isky";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		dlc = "PzGr33";
		class ItemInfo: HeadgearItem
		{
			mass=19;
			uniformModel="pzgr33\pzgr\addons\helmets\p6.p3d";
			hiddenSelections[]={"_comtac","camo"};
			hiddenSelectionsTextures[]={"pzgr33\pzgr\addons\helmets\data\comtac_iii\Comtac_III_Blk_CO.paa","pzgr33\pzgr\addons\helmets\data\p6\p6_od_co.paa"};
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
		class XtdGearInfo
		{
			model = "pzgr_viper_p6";
			color = "od";
			comtacs = "blk";
		};
	};
	class pzgr_viper_p6_od_cb: H_HelmetB
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[PzGr33] Viper P6";
		picture="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		UiPicture ="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		model="pzgr33\pzgr\addons\helmets\p6.p3d";
		hiddenSelections[]={"_comtac","camo"};
		hiddenSelectionsTextures[]={"pzgr33\pzgr\addons\helmets\data\comtac_iii\Comtac_III_cb_CO.paa","pzgr33\pzgr\addons\helmets\data\p6\p6_od_co.paa"};
		author="isky";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		dlc = "PzGr33";
		class ItemInfo: HeadgearItem
		{
			mass=19;
			uniformModel="pzgr33\pzgr\addons\helmets\p6.p3d";
			hiddenSelections[]={"_comtac","camo"};
			hiddenSelectionsTextures[]={"pzgr33\pzgr\addons\helmets\data\comtac_iii\Comtac_III_cb_CO.paa","pzgr33\pzgr\addons\helmets\data\p6\p6_od_co.paa"};
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
		class XtdGearInfo
		{
			model = "pzgr_viper_p6";
			color = "od";
			comtacs = "cb";
		};
	};
	class pzgr_viper_p6_od_od: H_HelmetB
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[PzGr33] Viper P6";
		picture="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		UiPicture ="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		model="pzgr33\pzgr\addons\helmets\p6.p3d";
		hiddenSelections[]={"_comtac","camo"};
		hiddenSelectionsTextures[]={"pzgr33\pzgr\addons\helmets\data\comtac_iii\Comtac_III_od_CO.paa","pzgr33\pzgr\addons\helmets\data\p6\p6_od_co.paa"};
		author="isky";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		dlc = "PzGr33";
		class ItemInfo: HeadgearItem
		{
			mass=19;
			uniformModel="pzgr33\pzgr\addons\helmets\p6.p3d";
			hiddenSelections[]={"_comtac","camo"};
			hiddenSelectionsTextures[]={"pzgr33\pzgr\addons\helmets\data\comtac_iii\Comtac_III_od_CO.paa","pzgr33\pzgr\addons\helmets\data\p6\p6_od_co.paa"};
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
		class XtdGearInfo
		{
			model = "pzgr_viper_p6";
			color = "od";
			comtacs = "od";
		};
	};
	class pzgr_viper_p6_od_plain: H_HelmetB
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[PzGr33] Viper P6 Plain(OD)";
		picture="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		UiPicture ="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		model="pzgr33\pzgr\addons\helmets\p6.p3d";
		hiddenSelections[]={"_comtac","_comtacwire","camo"};
		hiddenSelectionsTextures[]={"","","pzgr33\pzgr\addons\helmets\data\p6\p6_od_co.paa"};
		author="isky";
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=0;
		dlc = "PzGr33";
		class ItemInfo: HeadgearItem
		{
			mass=19;
			uniformModel="pzgr33\pzgr\addons\helmets\p6.p3d";
			hiddenSelections[]={"_comtac","_comtacwire","camo"};
			hiddenSelectionsTextures[]={"","","pzgr33\pzgr\addons\helmets\data\p6\p6_od_co.paa"};
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
		class XtdGearInfo
		{
			model = "pzgr_viper_p6";
			color = "od";
			comtacs = "off";
		};
	};
};
