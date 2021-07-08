// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Blunderbuss_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.AnimNotify_ExitedFire
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_Blunderbuss_C::AnimNotify_ExitedFire()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.AnimNotify_ExitedFire"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.OnOneShotUseTriggered
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UClass*                  InputID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FWieldableItemActionVisuals ActionVisuals                  (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Anim_Blunderbuss_C::OnOneShotUseTriggered(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.OnOneShotUseTriggered"));

	struct
	{
		class UClass*                  InputID;
		struct FWieldableItemActionVisuals ActionVisuals;
	} params;

	params.InputID = InputID;
	params.ActionVisuals = ActionVisuals;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.OnUseStarted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UClass*                  InputID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FWieldableItemActionVisuals ActionVisuals                  (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Anim_Blunderbuss_C::OnUseStarted(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.OnUseStarted"));

	struct
	{
		class UClass*                  InputID;
		struct FWieldableItemActionVisuals ActionVisuals;
	} params;

	params.InputID = InputID;
	params.ActionVisuals = ActionVisuals;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UBP_Anim_Blunderbuss_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.BlueprintInitializeAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.ReloadEventDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventProjectileWeaponReload Event                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_Blunderbuss_C::ReloadEventDelegate(const struct FEventProjectileWeaponReload& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.ReloadEventDelegate"));

	struct
	{
		struct FEventProjectileWeaponReload Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.BlueprintUninitializeAnimation
// (Event, Public, BlueprintEvent)

void UBP_Anim_Blunderbuss_C::BlueprintUninitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.BlueprintUninitializeAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.AnimNotify_ResetReload
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_Blunderbuss_C::AnimNotify_ResetReload()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.AnimNotify_ResetReload"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.ExecuteUbergraph_BP_Anim_Blunderbuss
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_Blunderbuss_C::ExecuteUbergraph_BP_Anim_Blunderbuss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.ExecuteUbergraph_BP_Anim_Blunderbuss"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
