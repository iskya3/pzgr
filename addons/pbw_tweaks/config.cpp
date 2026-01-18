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
			"PBW_German_Uniform"
		};
	};
};
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class PBW_Uniform1_fleck: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="PBW_Uniform1_fleck_xx";
			containerClass="Supply80";
			mass=40;
		};
	};
};
