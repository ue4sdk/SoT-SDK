// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_RepairShip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.UnregisterDamageEventFromCurrentShip
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_RepairShip_C::UnregisterDamageEventFromCurrentShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.UnregisterDamageEventFromCurrentShip"));

	UBP_Prompt_RepairShip_C_UnregisterDamageEventFromCurrentShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.RegisterDamageEventWithCurrentShip
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_RepairShip_C::RegisterDamageEventWithCurrentShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.RegisterDamageEventWithCurrentShip"));

	UBP_Prompt_RepairShip_C_RegisterDamageEventWithCurrentShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_RepairShip_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.Evaluate"));

	UBP_Prompt_RepairShip_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_RepairShip_C::RegisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.RegisterCharacterEvents_Implementable"));

	UBP_Prompt_RepairShip_C_RegisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.OnCurrentShipChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEventCurrentShipChanged       Event                          (Parm)

void UBP_Prompt_RepairShip_C::OnCurrentShipChanged(const FEventCurrentShipChanged& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.OnCurrentShipChanged"));

	UBP_Prompt_RepairShip_C_OnCurrentShipChanged_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.OnShipDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FDamageZoneDamageLevelChanged  Event                          (Parm)

void UBP_Prompt_RepairShip_C::OnShipDamaged(const FDamageZoneDamageLevelChanged& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.OnShipDamaged"));

	UBP_Prompt_RepairShip_C_OnShipDamaged_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_RepairShip_C::UnregisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.UnregisterCharacterEvents_Implementable"));

	UBP_Prompt_RepairShip_C_UnregisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.ExecuteUbergraph_BP_Prompt_RepairShip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_RepairShip_C::ExecuteUbergraph_BP_Prompt_RepairShip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.ExecuteUbergraph_BP_Prompt_RepairShip"));

	UBP_Prompt_RepairShip_C_ExecuteUbergraph_BP_Prompt_RepairShip_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
