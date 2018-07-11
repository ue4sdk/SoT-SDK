#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ServerMigration_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SetConnectionLastReceiveTime
struct UNetworkTestingBlueprintFunctionLibrary_SetConnectionLastReceiveTime_Params
{
	class APlayerController*                           PlayerController;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OffsetFromDriverTime;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ResumePropertyTracking
struct UNetworkTestingBlueprintFunctionLibrary_ResumePropertyTracking_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.PausePropertyTrackingOnNextSend
struct UNetworkTestingBlueprintFunctionLibrary_PausePropertyTrackingOnNextSend_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetRelevantFor
struct UNetworkTestingBlueprintFunctionLibrary_IsActorNetRelevantFor_Params
{
	class AActor*                                      TargetActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetDormant
struct UNetworkTestingBlueprintFunctionLibrary_IsActorNetDormant_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.GetReliableBufferBunchCount
struct UNetworkTestingBlueprintFunctionLibrary_GetReliableBufferBunchCount_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimerForPlayer
struct UNetworkTestingBlueprintFunctionLibrary_ClearRecentRelevanceTimerForPlayer_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimer
struct UNetworkTestingBlueprintFunctionLibrary_ClearRecentRelevanceTimer_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitWhileMigrationInProgress
struct UServerMigrationBlueprintFunctionLibrary_WaitWhileMigrationInProgress_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForPendingNetTraffic
struct UServerMigrationBlueprintFunctionLibrary_WaitForPendingNetTraffic_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForMigrationCompletedEvent
struct UServerMigrationBlueprintFunctionLibrary_WaitForMigrationCompletedEvent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForClientsToHaveActorChannel
struct UServerMigrationBlueprintFunctionLibrary_WaitForClientsToHaveActorChannel_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorToBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestSerialiseActorToBuffer_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorGroupToBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestSerialiseActorGroupToBuffer_Params
{
	TArray<class AActor*>                              ActorGroup;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorWithOffsetFromBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorWithOffsetFromBuffer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Buffer;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Offset;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupWithOffsetFromBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorGroupWithOffsetFromBuffer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Buffer;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Offset;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupFromBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorGroupFromBuffer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Buffer;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorFromBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorFromBuffer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Buffer;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestServerSettings
struct UServerMigrationBlueprintFunctionLibrary_SetServerMigrationTestServerSettings_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FServerSettings                             Settings;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestClientSettings
struct UServerMigrationBlueprintFunctionLibrary_SetServerMigrationTestClientSettings_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FClientSettings                             Settings;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetPacketSimulationSettings
struct UServerMigrationBlueprintFunctionLibrary_SetPacketSimulationSettings_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PacketLag;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PacketLagVariance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PacketLoss;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ResumeReplication
struct UServerMigrationBlueprintFunctionLibrary_ResumeReplication_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.RegisterPersistentDynamicActor
struct UServerMigrationBlueprintFunctionLibrary_RegisterPersistentDynamicActor_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      IdentificationName;                                       // (Parm, ZeroConstructor)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.PauseReplication
struct UServerMigrationBlueprintFunctionLibrary_PauseReplication_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDropUnreliableRPCsWhilePaused;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.HasActorChannelFromServer
struct UServerMigrationBlueprintFunctionLibrary_HasActorChannelFromServer_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveDormantActor
struct UServerMigrationBlueprintFunctionLibrary_ClientsHaveDormantActor_Params
{
	class AActor*                                      TargetActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveActorChannel
struct UServerMigrationBlueprintFunctionLibrary_ClientsHaveActorChannel_Params
{
	class AActor*                                      TargetActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
