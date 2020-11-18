// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_EquipAndUseBanana_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PromptActor_EquipAndUseBanana.BP_PromptActor_EquipAndUseBanana_C.UpdatePromptVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_EquipAndUseBanana_C::UpdatePromptVisibility()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EquipAndUseBanana.BP_PromptActor_EquipAndUseBanana_C.UpdatePromptVisibility"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EquipAndUseBanana.BP_PromptActor_EquipAndUseBanana_C.OnRep_DisplayPrompts
// (BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_EquipAndUseBanana_C::OnRep_DisplayPrompts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EquipAndUseBanana.BP_PromptActor_EquipAndUseBanana_C.OnRep_DisplayPrompts"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EquipAndUseBanana.BP_PromptActor_EquipAndUseBanana_C.SetDisplayPrompts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InDisplayPrompts               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_EquipAndUseBanana_C::SetDisplayPrompts(bool InDisplayPrompts)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EquipAndUseBanana.BP_PromptActor_EquipAndUseBanana_C.SetDisplayPrompts"));

	struct
	{
		bool                           InDisplayPrompts;
	} params;

	params.InDisplayPrompts = InDisplayPrompts;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EquipAndUseBanana.BP_PromptActor_EquipAndUseBanana_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_EquipAndUseBanana_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EquipAndUseBanana.BP_PromptActor_EquipAndUseBanana_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EquipAndUseBanana.BP_PromptActor_EquipAndUseBanana_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PromptActor_EquipAndUseBanana_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EquipAndUseBanana.BP_PromptActor_EquipAndUseBanana_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EquipAndUseBanana.BP_PromptActor_EquipAndUseBanana_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_EquipAndUseBanana_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EquipAndUseBanana.BP_PromptActor_EquipAndUseBanana_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EquipAndUseBanana.BP_PromptActor_EquipAndUseBanana_C.OnBananaUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventHealthChanged     Event                          (Parm)

void ABP_PromptActor_EquipAndUseBanana_C::OnBananaUsed(const struct FEventHealthChanged& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EquipAndUseBanana.BP_PromptActor_EquipAndUseBanana_C.OnBananaUsed"));

	struct
	{
		struct FEventHealthChanged     Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EquipAndUseBanana.BP_PromptActor_EquipAndUseBanana_C.ExecuteUbergraph_BP_PromptActor_EquipAndUseBanana
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_EquipAndUseBanana_C::ExecuteUbergraph_BP_PromptActor_EquipAndUseBanana(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EquipAndUseBanana.BP_PromptActor_EquipAndUseBanana_C.ExecuteUbergraph_BP_PromptActor_EquipAndUseBanana"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EquipAndUseBanana.BP_PromptActor_EquipAndUseBanana_C.BroadcastToListeners__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_EquipAndUseBanana_C::BroadcastToListeners__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EquipAndUseBanana.BP_PromptActor_EquipAndUseBanana_C.BroadcastToListeners__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
