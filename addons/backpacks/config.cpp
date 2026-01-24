#include "script_component.hpp"
class CfgPatches
{
	class ADDON
	{
		requiredaddons[] = {"A3_Characters_F"};
		requiredversion = 1;
		units[] = {"pzgr_f2_bergen_flkw","pzgr_arcteryx_leaf_flkw"};
		weapons[] = {};
		magazines[] = {};
	};
};
class CfgVehicles
{
	class B_Kitbag_rgr;
	class pzgr_f2_bergen_flkw: B_Kitbag_rgr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "isky";
		displayName = "[PzGr33] F2 Bergen (FLKW)";
		model = "\pzgr33\pzgr\addons\backpacks\F2.p3d";
		picture = "\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		logo="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		maximumLoad = 600;
		mass = 60;
		dlc = "PzGr33";
		/*
		tf_dialog="anprc155_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=22000;
		tf_subtype="digital_lr";
		*/
	};
	class pzgr_arcteryx_leaf_flkw: B_Kitbag_rgr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "isky";
		displayName = "[PzGr33] Arcteryx Assault (FLKW)";
		model = "\pzgr33\pzgr\addons\backpacks\assault.p3d";
		picture = "\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		logo="\pzgr33\pzgr\addons\uniforms\pzgr33_ca.paa";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		maximumLoad = 400;
		mass = 40;
		dlc = "PzGr33";
		/*
		tf_dialog="anprc155_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=22000;
		tf_subtype="digital_lr";
		*/
	};
};
