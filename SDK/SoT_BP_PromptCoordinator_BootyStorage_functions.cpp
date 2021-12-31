// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptCoordinator_BootyStorage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyRetrieveActorDespawned
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_BootyStorage_C::OnBootyRetrieveActorDespawned()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyRetrieveActorDespawned"));

	UBP_PromptCoordinator_BootyStorage_C_OnBootyRetrieveActorDespawned_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnStowedFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FEventObjectStowed             Event                          (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnStowedFunc(const FEventObjectStowed& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnStowedFunc"));

	UBP_PromptCoordinator_BootyStorage_C_OnStowedFunc_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyRetrieveActorSpawned
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_BootyStorage_C::OnBootyRetrieveActorSpawned()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyRetrieveActorSpawned"));

	UBP_PromptCoordinator_BootyStorage_C_OnBootyRetrieveActorSpawned_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.CrewHasLootToRetrieve
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasTreasure                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PromptCoordinator_BootyStorage_C::CrewHasLootToRetrieve(bool* HasTreasure)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.CrewHasLootToRetrieve"));

	UBP_PromptCoordinator_BootyStorage_C_CrewHasLootToRetrieve_Params params;

	UObject::ProcessEvent(fn, &params);

	if (HasTreasure != nullptr)
		*HasTreasure = params.HasTreasure;
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.IsInSunkenKingdom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           InSunkenKingdom                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PromptCoordinator_BootyStorage_C::IsInSunkenKingdom(bool* InSunkenKingdom)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.IsInSunkenKingdom"));

	UBP_PromptCoordinator_BootyStorage_C_IsInSunkenKingdom_Params params;

	UObject::ProcessEvent(fn, &params);

	if (InSunkenKingdom != nullptr)
		*InSunkenKingdom = params.InSunkenKingdom;
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_BootyStorage_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Reset"));

	UBP_PromptCoordinator_BootyStorage_C_Reset_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageUpdateFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FEventOnCrewStorageUpdate      Event                          (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnCrewStorageUpdateFunc(const FEventOnCrewStorageUpdate& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageUpdateFunc"));

	UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageUpdateFunc_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFullFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FEventOnCrewStorageFull        Event                          (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnCrewStorageFullFunc(const FEventOnCrewStorageFull& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFullFunc"));

	UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageFullFunc_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWieldedFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FAthena_FEventObjectWielded    Object                         (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnWieldedFunc(const FAthena_FEventObjectWielded& Object)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWieldedFunc"));

	UBP_PromptCoordinator_BootyStorage_C_OnWieldedFunc_Params params;
	params.Object = Object;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.PostInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_BootyStorage_C::PostInitialize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.PostInitialize"));

	UBP_PromptCoordinator_BootyStorage_C_PostInitialize_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_PromptCoordinator_BootyStorage_C::RegisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.RegisterCharacterEvents_Implementable"));

	UBP_PromptCoordinator_BootyStorage_C_RegisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_BootyStorage_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Evaluate"));

	UBP_PromptCoordinator_BootyStorage_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_PromptCoordinator_BootyStorage_C::UnregisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.UnregisterCharacterEvents_Implementable"));

	UBP_PromptCoordinator_BootyStorage_C_UnregisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Uninitialize_Implementable
// (Event, Public, BlueprintEvent)

void UBP_PromptCoordinator_BootyStorage_C::Uninitialize_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Uninitialize_Implementable"));

	UBP_PromptCoordinator_BootyStorage_C_Uninitialize_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.SetPromptComplete
// (BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_BootyStorage_C::SetPromptComplete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.SetPromptComplete"));

	UBP_PromptCoordinator_BootyStorage_C_SetPromptComplete_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ResetLootPrompt
// (BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_BootyStorage_C::ResetLootPrompt()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ResetLootPrompt"));

	UBP_PromptCoordinator_BootyStorage_C_ResetLootPrompt_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ResetMermaidPrompt
// (BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_BootyStorage_C::ResetMermaidPrompt()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ResetMermaidPrompt"));

	UBP_PromptCoordinator_BootyStorage_C_ResetMermaidPrompt_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnStowed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEventObjectStowed             Event                          (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnStowed(const FEventObjectStowed& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnStowed"));

	UBP_PromptCoordinator_BootyStorage_C_OnStowed_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FAthena_FEventObjectWielded    Object                         (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnWielded(const FAthena_FEventObjectWielded& Object)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWielded"));

	UBP_PromptCoordinator_BootyStorage_C_OnWielded_Params params;
	params.Object = Object;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageChange_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEventOnCrewStorageFull        Event                          (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnCrewStorageChange_Event(const FEventOnCrewStorageFull& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageChange_Event"));

	UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageChange_Event_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFull_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEventOnCrewStorageUpdate      Event                          (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnCrewStorageFull_Event(const FEventOnCrewStorageUpdate& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFull_Event"));

	UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageFull_Event_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnItemsRetrieved_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEventItemsRetrieved           Event                          (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnItemsRetrieved_Event(const FEventItemsRetrieved& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnItemsRetrieved_Event"));

	UBP_PromptCoordinator_BootyStorage_C_OnItemsRetrieved_Event_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyActorDespawned_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FRetrieveBootyActorDespawnedEvent Event                          (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnBootyActorDespawned_Event(const FRetrieveBootyActorDespawnedEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyActorDespawned_Event"));

	UBP_PromptCoordinator_BootyStorage_C_OnBootyActorDespawned_Event_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyActorSpawned_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FRetrieveBootyActorSpawnedEvent Event                          (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnBootyActorSpawned_Event(const FRetrieveBootyActorSpawnedEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyActorSpawned_Event"));

	UBP_PromptCoordinator_BootyStorage_C_OnBootyActorSpawned_Event_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ExecuteUbergraph_BP_PromptCoordinator_BootyStorage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_PromptCoordinator_BootyStorage_C::ExecuteUbergraph_BP_PromptCoordinator_BootyStorage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ExecuteUbergraph_BP_PromptCoordinator_BootyStorage"));

	UBP_PromptCoordinator_BootyStorage_C_ExecuteUbergraph_BP_PromptCoordinator_BootyStorage_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
