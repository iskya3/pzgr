class CfgPatches
{
	class ADDON
	{
		requiredaddons[] = {"A3_Characters_F"};
		requiredversion = 1;
		units[] = {};
		weapons[] = {};
		magazines[] = {};
	};
};
class XtdGearModels
{
	class cfgweapons
	{
		class g3_pzgr
		{
			label = "[PzGr33] Combat Uniforms";
			author = "isky";
			options[] = {"sleeves","camo"};
			class sleeves
			{
				label = "Sleeve Length";
				values[] = {"fs","r","qr"};
				class fs
				{
					label = "";
					description = "Full Sleeves";
					image = "pzgr\pzgr33\addons\uniforms\aceax\unrolled.paa";
				};
				class qr
				{
					label = "";
					description = "Quarter Rolled Sleeves";
					image = "pzgr\pzgr33\addons\uniforms\aceax\qrolled.paa";
				};
				class r
				{
					label = "";
					description = "Rolled Sleeves";
					image = "pzgr\pzgr33\addons\uniforms\aceax\hrolled.paa";
				};
			};
			class camo
			{
				label = "Camo";
				values[] = {"flkw","flekA"};
				class flkw
				{
					label = "";
					description = "Flecktarn Woodland";
					image = "pzgr\pzgr33\addons\uniforms\aceax\flkw.paa";
				};
				class flka
				{
					label = "";
					description = "Flecktarn Alpine";
					image = "pzgr\pzgr33\addons\uniforms\aceax\flka.paa";
				};
			};
			class gloves
			{
				label = "Gloves";
				values[] = {"g","ng"};
				class g
				{
					label = "";
					description = "Gloves On";
					image = "pzgr\pzgr33\addons\uniforms\aceax\gloves.paa";
				};
				class ng
				{
					label = "";
					description = "Gloves On";
					image = "pzgr\pzgr33\addons\uniforms\aceax\Nogloves.paa";
				};
			};
		};
	};
};
class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class G3_FS_FLKW_NG: Uniform_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "isky";
		displayName = "[PzGr33] Crye G3 (FLKW/FS/NG)";
		picture = "\pzgr\pzgr33\addons\uniforms\pzgr33_ca.paa";
		model = "\pzgr\pzgr33\addons\uniforms\G3_FS_NG.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			modelSides[] = {0,1,2,3};
			uniformClass = "G3_FS_FLKW_NG";
			containerClass = "Supply80";
			mass = 5;
			allowedSlots[] = {"701","801","901"};
			armor = 2;
		};
		class XtdGearInfo
		{
			model = "g3_pzgr";
			sleeves = "fs";
			camo = "flkw";
			gloves = "ng";
		};
	};
	class G3_QR_FLKW_NG: Uniform_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "isky";
		displayName = "[PzGr33] Crye G3 (FLKW/QR/NG)";
		picture = "\pzgr\pzgr33\addons\uniforms\pzgr33_ca.paa";
		model = "\pzgr\pzgr33\addons\uniforms\G3_QR_NG.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			modelSides[] = {0,1,2,3};
			uniformClass = "G3_QR_FLKW_NG";
			containerClass = "Supply80";
			mass = 5;
			allowedSlots[] = {"701","801","901"};
			armor = 2;
		};
		class XtdGearInfo
		{
			model = "g3_pzgr";
			sleeves = "qr";
			camo = "flkw";
			gloves = "ng";
		};
	};
	class G3_R_FLKW_NG: Uniform_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "isky";
		displayName = "[PzGr33] Crye G3 (FLKW/R/NG)";
		picture = "\pzgr\pzgr33\addons\uniforms\pzgr33_ca.paa";
		model = "\pzgr\pzgr33\addons\uniforms\G3_R_NG.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			modelSides[] = {0,1,2,3};
			uniformClass = "G3_R_FLKW_NG";
			containerClass = "Supply80";
			mass = 5;
			allowedSlots[] = {"701","801","901"};
			armor = 2;
		};
		class XtdGearInfo
		{
			model = "g3_pzgr";
			sleeves = "r";
			camo = "flkw";
			gloves = "ng";
		};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class G3_FS_FLKW_NG: B_Soldier_base_F
	{
		scope = 1;
		dlc = "";
		modelSides[] = {0,1,2,3};
		displayName = "Crye G3 (FLKW/FS/NG)";
		model = "pzgr\pzgr33\addons\uniforms\G3_FS_NG.p3d";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"pzgr\pzgr33\addons\uniforms\data\g2_pants_CO.paa","pzgr\pzgr33\addons\uniforms\data\g2_top_CO.paa"};
	};
	class G3_QR_FLKW_NG: B_Soldier_base_F
	{
		scope = 1;
		dlc = "";
		modelSides[] = {0,1,2,3};
		displayName = "Crye G3 (FLKW/QR/NG)";
		model = "pzgr\pzgr33\addons\uniforms\G3_QR_NG.p3d";
		hiddenSelections[] = {"camo","camo1","camo6"};
		hiddenSelectionsTextures[] = {"pzgr\pzgr33\addons\uniforms\data\g2_pants_3_CO.paa","pzgr\pzgr33\addons\uniforms\data\g2_top_2_CO.paa","pzgr\pzgr33\addons\uniforms\data\cuffs_CO.paa"};
	};
	class G3_R_FLKW_NG: B_Soldier_base_F
	{
		scope = 1;
		dlc = "";
		modelSides[] = {0,1,2,3};
		displayName = "Crye G3 (FLKW/R/NG)";
		model = "pzgr\pzgr33\addons\uniforms\G3_R_NG.p3d";
		hiddenSelections[] = {"camo","camo1","camo6"};
		hiddenSelectionsTextures[] = {"pzgr\pzgr33\addons\uniforms\data\g2_pants_2_CO.paa","pzgr\pzgr33\addons\uniforms\data\g2_top_3_CO.paa","pzgr\pzgr33\addons\uniforms\data\cuffs_CO.paa"};
	};
};
