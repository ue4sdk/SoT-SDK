#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_DebugMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuReady
struct UDebugMenuTestFunctions_IsDebugMenuReady_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuOpen
struct UDebugMenuTestFunctions_IsDebugMenuOpen_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuAvailable
struct UDebugMenuTestFunctions_IsDebugMenuAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboBetaKeyboard
struct UDebugMenuTestFunctions_GetDebugMenuToggleKeyComboBetaKeyboard_Params
{
	struct FKey                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboAlphaKeyboard
struct UDebugMenuTestFunctions_GetDebugMenuToggleKeyComboAlphaKeyboard_Params
{
	struct FKey                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboBetaGamepad
struct UDebugMenuTestFunctions_GetDebugMenuToggleButtonComboBetaGamepad_Params
{
	struct FKey                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboAlphaGamepad
struct UDebugMenuTestFunctions_GetDebugMenuToggleButtonComboAlphaGamepad_Params
{
	struct FKey                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
