#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\pzgr33\pzgr\addons\main\CommonMacros.hpp"

#undef PREP
#define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction; LOG_1("PREP: ",QUOTE(FUNC(fncName)))
