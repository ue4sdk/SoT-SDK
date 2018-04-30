#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameplayDebugger_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameplayDebugger.GameplayDebuggingComponent.ServerReplicateData
struct UGameplayDebuggingComponent_ServerReplicateData_Params
{
	uint32_t                                           InMessage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           DataView;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayDebugger.GameplayDebuggingComponent.ServerDiscardNavmeshData
struct UGameplayDebuggingComponent_ServerDiscardNavmeshData_Params
{
};

// Function GameplayDebugger.GameplayDebuggingComponent.ServerCollectNavmeshData
struct UGameplayDebuggingComponent_ServerCollectNavmeshData_Params
{
	struct FVector_NetQuantize10                       TargetLocation;                                           // (Parm)
};

// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateNavmesh
struct UGameplayDebuggingComponent_OnRep_UpdateNavmesh_Params
{
};

// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateEQS
struct UGameplayDebuggingComponent_OnRep_UpdateEQS_Params
{
};

// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateBlackboard
struct UGameplayDebuggingComponent_OnRep_UpdateBlackboard_Params
{
};

// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_PathCorridorData
struct UGameplayDebuggingComponent_OnRep_PathCorridorData_Params
{
};

// Function GameplayDebugger.GameplayDebuggingComponent.OnCycleDetailsView
struct UGameplayDebuggingComponent_OnCycleDetailsView_Params
{
};

// Function GameplayDebugger.GameplayDebuggingComponent.ClientEnableTargetSelection
struct UGameplayDebuggingComponent_ClientEnableTargetSelection_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayDebugger.GameplayDebuggingReplicator.ServerSetActorToDebug
struct AGameplayDebuggingReplicator_ServerSetActorToDebug_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayDebugger.GameplayDebuggingReplicator.ServerReplicateMessage
struct AGameplayDebuggingReplicator_ServerReplicateMessage_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           InMessage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           DataView;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayDebugger.GameplayDebuggingReplicator.OnRep_AutoActivate
struct AGameplayDebuggingReplicator_OnRep_AutoActivate_Params
{
};

// Function GameplayDebugger.GameplayDebuggingReplicator.ClientReplicateMessage
struct AGameplayDebuggingReplicator_ClientReplicateMessage_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           InMessage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           DataView;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayDebugger.GameplayDebuggingReplicator.ClientEnableTargetSelection
struct AGameplayDebuggingReplicator_ClientEnableTargetSelection_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayDebugger.GameplayDebuggingReplicator.ClientAutoActivate
struct AGameplayDebuggingReplicator_ClientAutoActivate_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
