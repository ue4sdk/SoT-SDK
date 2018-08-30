// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ServerMigration_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SwitchNetworkClusterForActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  NewOwner                       (Parm, ZeroConstructor, IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::STATIC_SwitchNetworkClusterForActor(class AActor* TargetActor, class AActor* NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SwitchNetworkClusterForActor");

	UNetworkTestingBlueprintFunctionLibrary_SwitchNetworkClusterForActor_Params params;
	params.TargetActor = TargetActor;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SetConnectionLastReceiveTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          OffsetFromDriverTime           (Parm, ZeroConstructor, IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::STATIC_SetConnectionLastReceiveTime(class APlayerController* PlayerController, float OffsetFromDriverTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SetConnectionLastReceiveTime");

	UNetworkTestingBlueprintFunctionLibrary_SetConnectionLastReceiveTime_Params params;
	params.PlayerController = PlayerController;
	params.OffsetFromDriverTime = OffsetFromDriverTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ResumePropertyTracking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::STATIC_ResumePropertyTracking(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ResumePropertyTracking");

	UNetworkTestingBlueprintFunctionLibrary_ResumePropertyTracking_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.PausePropertyTrackingOnNextSend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::STATIC_PausePropertyTrackingOnNextSend(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.PausePropertyTrackingOnNextSend");

	UNetworkTestingBlueprintFunctionLibrary_PausePropertyTrackingOnNextSend_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetRelevantFor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsActorNetRelevantFor(class AActor* TargetActor, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetRelevantFor");

	UNetworkTestingBlueprintFunctionLibrary_IsActorNetRelevantFor_Params params;
	params.TargetActor = TargetActor;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetDormant
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsActorNetDormant(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetDormant");

	UNetworkTestingBlueprintFunctionLibrary_IsActorNetDormant_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.GetReliableBufferBunchCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UNetworkTestingBlueprintFunctionLibrary::STATIC_GetReliableBufferBunchCount(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.GetReliableBufferBunchCount");

	UNetworkTestingBlueprintFunctionLibrary_GetReliableBufferBunchCount_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimerForPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::STATIC_ClearRecentRelevanceTimerForPlayer(class AActor* TargetActor, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimerForPlayer");

	UNetworkTestingBlueprintFunctionLibrary_ClearRecentRelevanceTimerForPlayer_Params params;
	params.TargetActor = TargetActor;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::STATIC_ClearRecentRelevanceTimer(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimer");

	UNetworkTestingBlueprintFunctionLibrary_ClearRecentRelevanceTimer_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitWhileMigrationInProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UServerMigrationBlueprintFunctionLibrary::STATIC_WaitWhileMigrationInProgress(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitWhileMigrationInProgress");

	UServerMigrationBlueprintFunctionLibrary_WaitWhileMigrationInProgress_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForPendingNetTraffic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UServerMigrationBlueprintFunctionLibrary::STATIC_WaitForPendingNetTraffic(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForPendingNetTraffic");

	UServerMigrationBlueprintFunctionLibrary_WaitForPendingNetTraffic_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForMigrationCompletedEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UServerMigrationBlueprintFunctionLibrary::STATIC_WaitForMigrationCompletedEvent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForMigrationCompletedEvent");

	UServerMigrationBlueprintFunctionLibrary_WaitForMigrationCompletedEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForClientsToHaveActorChannel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UServerMigrationBlueprintFunctionLibrary::STATIC_WaitForClientsToHaveActorChannel(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForClientsToHaveActorChannel");

	UServerMigrationBlueprintFunctionLibrary_WaitForClientsToHaveActorChannel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorToBuffer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UServerMigrationBlueprintFunctionLibrary::STATIC_TestSerialiseActorToBuffer(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorToBuffer");

	UServerMigrationBlueprintFunctionLibrary_TestSerialiseActorToBuffer_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorGroupToBuffer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          ActorGroup                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UServerMigrationBlueprintFunctionLibrary::STATIC_TestSerialiseActorGroupToBuffer(TArray<class AActor*> ActorGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorGroupToBuffer");

	UServerMigrationBlueprintFunctionLibrary_TestSerialiseActorGroupToBuffer_Params params;
	params.ActorGroup = ActorGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorWithOffsetFromBuffer
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Offset                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UServerMigrationBlueprintFunctionLibrary::STATIC_TestDeserialiseActorWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorWithOffsetFromBuffer");

	UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorWithOffsetFromBuffer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupWithOffsetFromBuffer
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Offset                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UServerMigrationBlueprintFunctionLibrary::STATIC_TestDeserialiseActorGroupWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupWithOffsetFromBuffer");

	UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorGroupWithOffsetFromBuffer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupFromBuffer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UServerMigrationBlueprintFunctionLibrary::STATIC_TestDeserialiseActorGroupFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupFromBuffer");

	UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorGroupFromBuffer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorFromBuffer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UServerMigrationBlueprintFunctionLibrary::STATIC_TestDeserialiseActorFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorFromBuffer");

	UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorFromBuffer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestServerSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FServerSettings         Settings                       (ConstParm, Parm, OutParm, ReferenceParm)

void UServerMigrationBlueprintFunctionLibrary::STATIC_SetServerMigrationTestServerSettings(class UObject* WorldContextObject, const struct FServerSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestServerSettings");

	UServerMigrationBlueprintFunctionLibrary_SetServerMigrationTestServerSettings_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestClientSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FClientSettings         Settings                       (ConstParm, Parm, OutParm, ReferenceParm)

void UServerMigrationBlueprintFunctionLibrary::STATIC_SetServerMigrationTestClientSettings(class UObject* WorldContextObject, const struct FClientSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestClientSettings");

	UServerMigrationBlueprintFunctionLibrary_SetServerMigrationTestClientSettings_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetPacketSimulationSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            PacketLag                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            PacketLagVariance              (Parm, ZeroConstructor, IsPlainOldData)
// int                            PacketLoss                     (Parm, ZeroConstructor, IsPlainOldData)

void UServerMigrationBlueprintFunctionLibrary::STATIC_SetPacketSimulationSettings(class UObject* WorldContextObject, int PacketLag, int PacketLagVariance, int PacketLoss)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetPacketSimulationSettings");

	UServerMigrationBlueprintFunctionLibrary_SetPacketSimulationSettings_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PacketLag = PacketLag;
	params.PacketLagVariance = PacketLagVariance;
	params.PacketLoss = PacketLoss;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ResumeReplication
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UServerMigrationBlueprintFunctionLibrary::STATIC_ResumeReplication(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ResumeReplication");

	UServerMigrationBlueprintFunctionLibrary_ResumeReplication_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.RegisterPersistentDynamicActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  IdentificationName             (Parm, ZeroConstructor)

void UServerMigrationBlueprintFunctionLibrary::STATIC_RegisterPersistentDynamicActor(class AActor* TargetActor, const class FString& IdentificationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.RegisterPersistentDynamicActor");

	UServerMigrationBlueprintFunctionLibrary_RegisterPersistentDynamicActor_Params params;
	params.TargetActor = TargetActor;
	params.IdentificationName = IdentificationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.PauseReplication
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDropUnreliableRPCsWhilePaused (Parm, ZeroConstructor, IsPlainOldData)

void UServerMigrationBlueprintFunctionLibrary::STATIC_PauseReplication(class AActor* TargetActor, bool bDropUnreliableRPCsWhilePaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.PauseReplication");

	UServerMigrationBlueprintFunctionLibrary_PauseReplication_Params params;
	params.TargetActor = TargetActor;
	params.bDropUnreliableRPCsWhilePaused = bDropUnreliableRPCsWhilePaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.HasActorChannelFromServer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServerMigrationBlueprintFunctionLibrary::STATIC_HasActorChannelFromServer(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.HasActorChannelFromServer");

	UServerMigrationBlueprintFunctionLibrary_HasActorChannelFromServer_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveDormantActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServerMigrationBlueprintFunctionLibrary::STATIC_ClientsHaveDormantActor(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveDormantActor");

	UServerMigrationBlueprintFunctionLibrary_ClientsHaveDormantActor_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveActorChannel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServerMigrationBlueprintFunctionLibrary::STATIC_ClientsHaveActorChannel(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveActorChannel");

	UServerMigrationBlueprintFunctionLibrary_ClientsHaveActorChannel_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
