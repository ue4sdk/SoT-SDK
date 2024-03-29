// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_FlintlockPistol_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.AnimNotify_ExitedFire
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_FlintlockPistol_C::AnimNotify_ExitedFire()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.AnimNotify_ExitedFire"));

	UBP_Anim_FlintlockPistol_C_AnimNotify_ExitedFire_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.OnOneShotUseTriggered
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// UClass*                        InputID                        (Parm, ZeroConstructor, IsPlainOldData)
// FWieldableItemActionVisuals    ActionVisuals                  (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Anim_FlintlockPistol_C::OnOneShotUseTriggered(UClass* InputID, const FWieldableItemActionVisuals& ActionVisuals)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.OnOneShotUseTriggered"));

	UBP_Anim_FlintlockPistol_C_OnOneShotUseTriggered_Params params;
	params.InputID = InputID;
	params.ActionVisuals = ActionVisuals;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.OnUseStarted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// UClass*                        InputID                        (Parm, ZeroConstructor, IsPlainOldData)
// FWieldableItemActionVisuals    ActionVisuals                  (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Anim_FlintlockPistol_C::OnUseStarted(UClass* InputID, const FWieldableItemActionVisuals& ActionVisuals)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.OnUseStarted"));

	UBP_Anim_FlintlockPistol_C_OnUseStarted_Params params;
	params.InputID = InputID;
	params.ActionVisuals = ActionVisuals;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UBP_Anim_FlintlockPistol_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.BlueprintInitializeAnimation"));

	UBP_Anim_FlintlockPistol_C_BlueprintInitializeAnimation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.ReloadEventDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEventProjectileWeaponReload   Event                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_FlintlockPistol_C::ReloadEventDelegate(const FEventProjectileWeaponReload& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.ReloadEventDelegate"));

	UBP_Anim_FlintlockPistol_C_ReloadEventDelegate_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.BlueprintUninitializeAnimation
// (Event, Public, BlueprintEvent)

void UBP_Anim_FlintlockPistol_C::BlueprintUninitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.BlueprintUninitializeAnimation"));

	UBP_Anim_FlintlockPistol_C_BlueprintUninitializeAnimation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.AnimNotify_ResetReload
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_FlintlockPistol_C::AnimNotify_ResetReload()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.AnimNotify_ResetReload"));

	UBP_Anim_FlintlockPistol_C_AnimNotify_ResetReload_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.ExecuteUbergraph_BP_Anim_FlintlockPistol
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_FlintlockPistol_C::ExecuteUbergraph_BP_Anim_FlintlockPistol(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.ExecuteUbergraph_BP_Anim_FlintlockPistol"));

	UBP_Anim_FlintlockPistol_C_ExecuteUbergraph_BP_Anim_FlintlockPistol_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
