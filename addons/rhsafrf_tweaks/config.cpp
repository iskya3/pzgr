#include "script_component.hpp"
class CfgPatches
{
	class ADDON
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhs_c_troops"};
	};
};
class CfgWeapons
{
	class ItemCore;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	//6B2
	class rhs_6b2: Vest_Camo_Base
	{
		descriptionShort = "Armor Level 2";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 8;
					PassThrough = 0.4;
				};
				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 8;
					PassThrough = 0.4;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.4;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.4;
				};
			};
		};
	};
	//6B3
	class rhs_6b3: rhs_6b2
	{
		descriptionShort = "Armor Level 3";
		class ItemInfo: ItemInfo
		{			
			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 11;
					PassThrough = 0.3;
				};
				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 11;
					PassThrough = 0.3;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 11;
					passThrough = 0.3;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	//6B23
	class rhs_6b23: Vest_Camo_Base
	{
		descriptionShort = "Armor Level 2-3";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 1;
					PassThrough = 0.4;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 8;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 8;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class rhs_6b23_6sh92: rhs_6b23
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 8;
					PassThrough = 0.3;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 9;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 9;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 9;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	//6B23-2 (EMR)
	class rhs_6b23_digi: rhs_6b23
	{
		descriptionShort = "Armor Level 4";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 1;
					PassThrough = 0.3;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class rhs_6b23_6sh92_radio: rhs_6b23_6sh92
	{
		class ItemInfo;
	};
	class rhs_6b23_digi_6sh92: rhs_6b23_6sh92
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 8;
					PassThrough = 0.3;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 15;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 15;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class rhs_6b23_digi_6sh92_Spetsnaz: rhs_6b23_6sh92_radio
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 8;
					PassThrough = 0.4;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 15;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 15;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class rhs_6b23_vydra_3m: rhs_6b23_6sh92
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 1;
					PassThrough = 0.4;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 9;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 9;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 9;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class rhs_6b23_6sh116: rhs_6b23_digi
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 8;
					PassThrough = 0.3;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 11;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 11;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 11;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	//6B13
	class rhs_6b13: rhs_6b23
	{
		descriptionShort = "Armor Level 4";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 8;
					PassThrough = 0.3;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class rhs_6b13_6sh92: rhs_6b13
	{
		descriptionShort = "Armor Level 4";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 8;
					PassThrough = 0.3;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	//6B43
	class rhs_6b43: rhs_6b23
	{
		descriptionShort = "Armor Level 6";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 9;
					PassThrough = 0.3;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	//6B5
	class rhs_6b5: rhs_6b23
	{
		descriptionShort = "Armor Level 4";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 7;
					PassThrough = 0.5;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 14;
					passThrough = 0.4;
				};
			};
		};
	};
	//6B45
	class rhs_6b45: rhs_6b43
	{
		descriptionShort = "Armor Level 5";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 9;
					PassThrough = 0.3;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 17;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 17;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 17;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
};
