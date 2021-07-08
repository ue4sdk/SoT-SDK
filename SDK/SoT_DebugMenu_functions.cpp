// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_DebugMenu_classes.hpp"

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

bool UDebugMenuTestFunctions::IsDebugMenuReady(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuReady"));

	struct
	{
		class UObject*                 WorldContextObject;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuOpen
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDebugMenuTestFunctions::IsDebugMenuOpen(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuOpen"));

	struct
	{
		class UObject*                 WorldContextObject;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuAvailable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDebugMenuTestFunctions::IsDebugMenuAvailable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuAvailable"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboBetaKeyboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FKey UDebugMenuTestFunctions::GetDebugMenuToggleKeyComboBetaKeyboard()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboBetaKeyboard"));

	struct
	{
		struct FKey                    ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboAlphaKeyboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FKey UDebugMenuTestFunctions::GetDebugMenuToggleKeyComboAlphaKeyboard()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboAlphaKeyboard"));

	struct
	{
		struct FKey                    ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboBetaGamepad
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FKey UDebugMenuTestFunctions::GetDebugMenuToggleButtonComboBetaGamepad()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboBetaGamepad"));

	struct
	{
		struct FKey                    ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboAlphaGamepad
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FKey UDebugMenuTestFunctions::GetDebugMenuToggleButtonComboAlphaGamepad()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboAlphaGamepad"));

	struct
	{
		struct FKey                    ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
