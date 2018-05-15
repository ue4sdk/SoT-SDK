// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PirateGenerator_LineUpUI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.GetLockStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            IndexToToggle                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PirateGenerator_LineUpUI_C::GetLockStatus(int IndexToToggle, bool* Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.GetLockStatus");

	ABP_PirateGenerator_LineUpUI_C_GetLockStatus_Params params;
	params.IndexToToggle = IndexToToggle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locked != nullptr)
		*Locked = params.Locked;
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ToggleLockStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IndexToToggle                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PirateGenerator_LineUpUI_C::ToggleLockStatus(int IndexToToggle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ToggleLockStatus");

	ABP_PirateGenerator_LineUpUI_C_ToggleLockStatus_Params params;
	params.IndexToToggle = IndexToToggle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ClearLockedPirates
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUpUI_C::ClearLockedPirates()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ClearLockedPirates");

	ABP_PirateGenerator_LineUpUI_C_ClearLockedPirates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.GetTransitionState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Transitioning                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PirateGenerator_LineUpUI_C::GetTransitionState(bool* Transitioning)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.GetTransitionState");

	ABP_PirateGenerator_LineUpUI_C_GetTransitionState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transitioning != nullptr)
		*Transitioning = params.Transitioning;
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.GetAnimationDataFromClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAD_FrontendPirate_Default_C* AnimationData                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PirateGenerator_LineUpUI_C::GetAnimationDataFromClass(class UClass* Class, class UAD_FrontendPirate_Default_C** AnimationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.GetAnimationDataFromClass");

	ABP_PirateGenerator_LineUpUI_C_GetAnimationDataFromClass_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationData != nullptr)
		*AnimationData = params.AnimationData;
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.SanitizeAnimationPoses
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUpUI_C::SanitizeAnimationPoses()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.SanitizeAnimationPoses");

	ABP_PirateGenerator_LineUpUI_C_SanitizeAnimationPoses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.RandomizePirates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUpUI_C::RandomizePirates()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.RandomizePirates");

	ABP_PirateGenerator_LineUpUI_C_RandomizePirates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUpUI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.UserConstructionScript");

	ABP_PirateGenerator_LineUpUI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PirateGenerator_LineUpUI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ReceiveBeginPlay");

	ABP_PirateGenerator_LineUpUI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.LineUpPirateInitalized
// (BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUpUI_C::LineUpPirateInitalized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.LineUpPirateInitalized");

	ABP_PirateGenerator_LineUpUI_C_LineUpPirateInitalized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ExecuteUbergraph_BP_PirateGenerator_LineUpUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PirateGenerator_LineUpUI_C::ExecuteUbergraph_BP_PirateGenerator_LineUpUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ExecuteUbergraph_BP_PirateGenerator_LineUpUI");

	ABP_PirateGenerator_LineUpUI_C_ExecuteUbergraph_BP_PirateGenerator_LineUpUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.PirateLineUpInitializedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUpUI_C::PirateLineUpInitializedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.PirateLineUpInitializedDispatcher__DelegateSignature");

	ABP_PirateGenerator_LineUpUI_C_PirateLineUpInitializedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
