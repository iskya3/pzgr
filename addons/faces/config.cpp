#include "script_component.hpp"
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
class CfgFaces
{
	class Man_A3
	{
		class WhiteHead_05;
		class isky_camo: WhiteHead_05
		{
			author="isky";
			displayname="isky(Camo)";
			texture="\pzgr33\pzgr\addons\faces\data\isky_face_Camo_co.paa";
			identityTypes[]={};
			textureHL="\pzgr33\pzgr\addons\faces\data\isky_body_CO.paa";
			materialHL="\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2="\pzgr33\pzgr\addons\faces\data\isky_body_CO.paa";
			materialHL2="\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			dlc = "PzGr33";
		};
		class isky: WhiteHead_05
		{
			author="isky";
			displayname="isky";
			texture="\pzgr33\pzgr\addons\faces\data\isky_face_co.paa";
			identityTypes[]={};
			textureHL="\pzgr33\pzgr\addons\faces\data\isky_body_CO.paa";
			materialHL="\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2="\pzgr33\pzgr\addons\faces\data\isky_body_CO.paa";
			materialHL2="\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			dlc = "PzGr33";
		};
		class hawk: WhiteHead_05
		{
			author="isky";
			displayname="hawk";
			texture="\pzgr33\pzgr\addons\faces\data\hawk_face_co.paa";
			identityTypes[]={};
			textureHL="\pzgr33\pzgr\addons\faces\data\hawk_body_CO.paa";
			materialHL="\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2="\pzgr33\pzgr\addons\faces\data\hawk_body_CO.paa";
			materialHL2="\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			dlc = "PzGr33";
		};
	};
};
