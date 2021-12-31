#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ServerMigration_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SwitchNetworkClusterForActor
struct UNetworkTestingBlueprintFunctionLibrary_SwitchNetworkClusterForActor_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SetConnectionLastReceiveTime
struct UNetworkTestingBlueprintFunctionLibrary_SetConnectionLastReceiveTime_Params
{
	APlayerController*                                 PlayerController;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OffsetFromDriverTime;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ResumePropertyTracking
struct UNetworkTestingBlueprintFunctionLibrary_ResumePropertyTracking_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.PausePropertyTrackingOnNextSend
struct UNetworkTestingBlueprintFunctionLibrary_PausePropertyTrackingOnNextSend_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsComponentNetDormant
struct UNetworkTestingBlueprintFunctionLibrary_IsComponentNetDormant_Params
{
	int                                                ClientConnectionIdx;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	UActorComponent*                                   TargetComponent;                                          // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetRelevantFor
struct UNetworkTestingBlueprintFunctionLibrary_IsActorNetRelevantFor_Params
{
	AActor*                                            TargetActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetDormant
struct UNetworkTestingBlueprintFunctionLibrary_IsActorNetDormant_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkClusterGlobal
struct UNetworkTestingBlueprintFunctionLibrary_IsActorInNetworkClusterGlobal_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkCluster
struct UNetworkTestingBlueprintFunctionLibrary_IsActorInNetworkCluster_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            NetworkClusterOwner;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkClusterOnOwner
struct UNetworkTestingBlueprintFunctionLibrary_IsActorInLevelNetworkClusterOnOwner_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            LevelOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkCluster
struct UNetworkTestingBlueprintFunctionLibrary_IsActorInLevelNetworkCluster_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.HasComponentReplicator
struct UNetworkTestingBlueprintFunctionLibrary_HasComponentReplicator_Params
{
	int                                                ClientConnectionIdx;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	UActorComponent*                                   TargetComponent;                                          // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.GetReliableBufferBunchCount
struct UNetworkTestingBlueprintFunctionLibrary_GetReliableBufferBunchCount_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.FlushComponentNetDormancy
struct UNetworkTestingBlueprintFunctionLibrary_FlushComponentNetDormancy_Params
{
	UActorComponent*                                   TargetComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimerForPlayer
struct UNetworkTestingBlueprintFunctionLibrary_ClearRecentRelevanceTimerForPlayer_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimer
struct UNetworkTestingBlueprintFunctionLibrary_ClearRecentRelevanceTimer_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitWhileMigrationInProgress
struct UServerMigrationBlueprintFunctionLibrary_WaitWhileMigrationInProgress_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FLatentActionInfo                                  LatentInfo;                                               // (Parm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForPendingNetTraffic
struct UServerMigrationBlueprintFunctionLibrary_WaitForPendingNetTraffic_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FLatentActionInfo                                  LatentInfo;                                               // (Parm)
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForMigrationCompletedEvent
struct UServerMigrationBlueprintFunctionLibrary_WaitForMigrationCompletedEvent_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FLatentActionInfo                                  LatentInfo;                                               // (Parm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForClientsToHaveActorChannel
struct UServerMigrationBlueprintFunctionLibrary_WaitForClientsToHaveActorChannel_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FLatentActionInfo                                  LatentInfo;                                               // (Parm)
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorToBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestSerialiseActorToBuffer_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorGroupToBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestSerialiseActorGroupToBuffer_Params
{
	TArray<AActor*>                                    ActorGroup;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorWithOffsetFromBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorWithOffsetFromBuffer_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Buffer;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	FVector                                            Offset;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	AActor*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupWithOffsetFromBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorGroupWithOffsetFromBuffer_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Buffer;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	FVector                                            Offset;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<AActor*>                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupFromBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorGroupFromBuffer_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Buffer;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<AActor*>                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorFromBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorFromBuffer_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Buffer;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	AActor*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestServerSettings
struct UServerMigrationBlueprintFunctionLibrary_SetServerMigrationTestServerSettings_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FServerSettings                                    Settings;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestClientSettings
struct UServerMigrationBlueprintFunctionLibrary_SetServerMigrationTestClientSettings_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FClientSettings                                    Settings;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetPacketSimulationSettings
struct UServerMigrationBlueprintFunctionLibrary_SetPacketSimulationSettings_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PacketLag;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PacketLagVariance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PacketLoss;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ResumeReplication
struct UServerMigrationBlueprintFunctionLibrary_ResumeReplication_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.RegisterPersistentDynamicActor
struct UServerMigrationBlueprintFunctionLibrary_RegisterPersistentDynamicActor_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            IdentificationName;                                       // (Parm, ZeroConstructor)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.PauseReplication
struct UServerMigrationBlueprintFunctionLibrary_PauseReplication_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDropUnreliableRPCsWhilePaused;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.HasActorChannelFromServer
struct UServerMigrationBlueprintFunctionLibrary_HasActorChannelFromServer_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveDormantActor
struct UServerMigrationBlueprintFunctionLibrary_ClientsHaveDormantActor_Params
{
	AActor*                                            TargetActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveActorChannel
struct UServerMigrationBlueprintFunctionLibrary_ClientsHaveActorChannel_Params
{
	AActor*                                            TargetActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
