// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PirateGenerator_LineUpUI_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.GetLockStatus"));

	struct
	{
		int                            IndexToToggle;
		bool                           Locked;
	} params;

	params.IndexToToggle = IndexToToggle;

	UObject::ProcessEvent(fn, &params);

	if (Locked != nullptr)
		*Locked = params.Locked;
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ToggleLockStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IndexToToggle                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PirateGenerator_LineUpUI_C::ToggleLockStatus(int IndexToToggle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ToggleLockStatus"));

	struct
	{
		int                            IndexToToggle;
	} params;

	params.IndexToToggle = IndexToToggle;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ClearLockedPirates
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUpUI_C::ClearLockedPirates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ClearLockedPirates"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.GetTransitionState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Transitioning                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PirateGenerator_LineUpUI_C::GetTransitionState(bool* Transitioning)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.GetTransitionState"));

	struct
	{
		bool                           Transitioning;
	} params;


	UObject::ProcessEvent(fn, &params);

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.GetAnimationDataFromClass"));

	struct
	{
		class UClass*                  Class;
		class UAD_FrontendPirate_Default_C* AnimationData;
	} params;

	params.Class = Class;

	UObject::ProcessEvent(fn, &params);

	if (AnimationData != nullptr)
		*AnimationData = params.AnimationData;
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.SanitizeAnimationPoses
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUpUI_C::SanitizeAnimationPoses()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.SanitizeAnimationPoses"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.RandomizePirates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUpUI_C::RandomizePirates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.RandomizePirates"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUpUI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PirateGenerator_LineUpUI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.LineUpPirateInitalized
// (BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUpUI_C::LineUpPirateInitalized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.LineUpPirateInitalized"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ExecuteUbergraph_BP_PirateGenerator_LineUpUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PirateGenerator_LineUpUI_C::ExecuteUbergraph_BP_PirateGenerator_LineUpUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ExecuteUbergraph_BP_PirateGenerator_LineUpUI"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.PirateLineUpInitializedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUpUI_C::PirateLineUpInitializedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.PirateLineUpInitializedDispatcher__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
