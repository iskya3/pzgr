#include "script_component.hpp"
class CfgPatches
{
	class ADDON
	{
		units[]={};
		weapons[]={"pzgr_mikrond"};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F"
		};
	};
};
class cfgWeapons
{
	class NVGoggles;
	class pzgr_nvg_base: NVGoggles
	{
		scope=0;
		author="isky";
		displayName="Theon Mikron-D";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		modelOptics="pzgr33\pzgr\addons\nightvision\nvg_optic.p3d";
		model="";
		picture="\A3\Weapons_F\Data\UI\gear_nvg_CA.paa";
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.13;
		ace_nightvision_border="";
		ace_nightvision_colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {1.1, 0.8, 1.9, 0.9}, {1, 1, 6, 0.0}};
		descriptionShort="mikron-d night vision goggles";
		dlc = "PzGr33";
		class ItemInfo
		{
			type=616;
			uniformModel="";
			modelOff="";
			mass=0.46;
		};
	};
	class pzgr_mikrond: pzgr_nvg_base
	{
		scope=2;
		displayName="[PzGr33] Mikron-D";
		model="pzgr33\pzgr\addons\nightvision\mikron_dual_down.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="pzgr33\pzgr\addons\nightvision\mikron_dual_down.p3d";
			modelOff="pzgr33\pzgr\addons\nightvision\mikron_dual_up.p3d";
		};
	};
};

