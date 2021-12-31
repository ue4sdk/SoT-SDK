#pragma once

// Sea of Thieves (2) SDK

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
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuOpen
struct UDebugMenuTestFunctions_IsDebugMenuOpen_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
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
	FKey                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboAlphaKeyboard
struct UDebugMenuTestFunctions_GetDebugMenuToggleKeyComboAlphaKeyboard_Params
{
	FKey                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboBetaGamepad
struct UDebugMenuTestFunctions_GetDebugMenuToggleButtonComboBetaGamepad_Params
{
	FKey                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboAlphaGamepad
struct UDebugMenuTestFunctions_GetDebugMenuToggleButtonComboAlphaGamepad_Params
{
	FKey                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
