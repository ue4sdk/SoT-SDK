#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptCoordinator_BootyStorage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyRetrieveActorDespawned
struct UBP_PromptCoordinator_BootyStorage_C_OnBootyRetrieveActorDespawned_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnStowedFunc
struct UBP_PromptCoordinator_BootyStorage_C_OnStowedFunc_Params
{
	FEventObjectStowed                                 Event;                                                    // (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyRetrieveActorSpawned
struct UBP_PromptCoordinator_BootyStorage_C_OnBootyRetrieveActorSpawned_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.CrewHasLootToRetrieve
struct UBP_PromptCoordinator_BootyStorage_C_CrewHasLootToRetrieve_Params
{
	bool                                               HasTreasure;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.IsInSunkenKingdom
struct UBP_PromptCoordinator_BootyStorage_C_IsInSunkenKingdom_Params
{
	bool                                               InSunkenKingdom;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Reset
struct UBP_PromptCoordinator_BootyStorage_C_Reset_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageUpdateFunc
struct UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageUpdateFunc_Params
{
	FEventOnCrewStorageUpdate                          Event;                                                    // (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFullFunc
struct UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageFullFunc_Params
{
	FEventOnCrewStorageFull                            Event;                                                    // (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWieldedFunc
struct UBP_PromptCoordinator_BootyStorage_C_OnWieldedFunc_Params
{
	FAthena_FEventObjectWielded                        Object;                                                   // (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.PostInitialize
struct UBP_PromptCoordinator_BootyStorage_C_PostInitialize_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.RegisterCharacterEvents_Implementable
struct UBP_PromptCoordinator_BootyStorage_C_RegisterCharacterEvents_Implementable_Params
{
	FObjectMessagingDispatcherHandle                   CharacterDispatcher;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Evaluate
struct UBP_PromptCoordinator_BootyStorage_C_Evaluate_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.UnregisterCharacterEvents_Implementable
struct UBP_PromptCoordinator_BootyStorage_C_UnregisterCharacterEvents_Implementable_Params
{
	FObjectMessagingDispatcherHandle                   CharacterDispatcher;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Uninitialize_Implementable
struct UBP_PromptCoordinator_BootyStorage_C_Uninitialize_Implementable_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.SetPromptComplete
struct UBP_PromptCoordinator_BootyStorage_C_SetPromptComplete_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ResetLootPrompt
struct UBP_PromptCoordinator_BootyStorage_C_ResetLootPrompt_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ResetMermaidPrompt
struct UBP_PromptCoordinator_BootyStorage_C_ResetMermaidPrompt_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnStowed
struct UBP_PromptCoordinator_BootyStorage_C_OnStowed_Params
{
	FEventObjectStowed                                 Event;                                                    // (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWielded
struct UBP_PromptCoordinator_BootyStorage_C_OnWielded_Params
{
	FAthena_FEventObjectWielded                        Object;                                                   // (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageChange_Event
struct UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageChange_Event_Params
{
	FEventOnCrewStorageFull                            Event;                                                    // (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFull_Event
struct UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageFull_Event_Params
{
	FEventOnCrewStorageUpdate                          Event;                                                    // (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnItemsRetrieved_Event
struct UBP_PromptCoordinator_BootyStorage_C_OnItemsRetrieved_Event_Params
{
	FEventItemsRetrieved                               Event;                                                    // (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyActorDespawned_Event
struct UBP_PromptCoordinator_BootyStorage_C_OnBootyActorDespawned_Event_Params
{
	FRetrieveBootyActorDespawnedEvent                  Event;                                                    // (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyActorSpawned_Event
struct UBP_PromptCoordinator_BootyStorage_C_OnBootyActorSpawned_Event_Params
{
	FRetrieveBootyActorSpawnedEvent                    Event;                                                    // (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ExecuteUbergraph_BP_PromptCoordinator_BootyStorage
struct UBP_PromptCoordinator_BootyStorage_C_ExecuteUbergraph_BP_PromptCoordinator_BootyStorage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
