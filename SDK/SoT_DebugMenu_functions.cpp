// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_DebugMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuReady
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDebugMenuTestFunctions::STATIC_IsDebugMenuReady(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuReady");

	UDebugMenuTestFunctions_IsDebugMenuReady_Params params;
	params.WorldContextObject = WorldContextObject;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuOpen
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDebugMenuTestFunctions::STATIC_IsDebugMenuOpen(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuOpen");

	UDebugMenuTestFunctions_IsDebugMenuOpen_Params params;
	params.WorldContextObject = WorldContextObject;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuAvailable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDebugMenuTestFunctions::STATIC_IsDebugMenuAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuAvailable");

	UDebugMenuTestFunctions_IsDebugMenuAvailable_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboBetaKeyboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FKey UDebugMenuTestFunctions::STATIC_GetDebugMenuToggleKeyComboBetaKeyboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboBetaKeyboard");

	UDebugMenuTestFunctions_GetDebugMenuToggleKeyComboBetaKeyboard_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboAlphaKeyboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FKey UDebugMenuTestFunctions::STATIC_GetDebugMenuToggleKeyComboAlphaKeyboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboAlphaKeyboard");

	UDebugMenuTestFunctions_GetDebugMenuToggleKeyComboAlphaKeyboard_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboBetaGamepad
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FKey UDebugMenuTestFunctions::STATIC_GetDebugMenuToggleButtonComboBetaGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboBetaGamepad");

	UDebugMenuTestFunctions_GetDebugMenuToggleButtonComboBetaGamepad_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboAlphaGamepad
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FKey UDebugMenuTestFunctions::STATIC_GetDebugMenuToggleButtonComboAlphaGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboAlphaGamepad");

	UDebugMenuTestFunctions_GetDebugMenuToggleButtonComboAlphaGamepad_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
