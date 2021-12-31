// Sea of Thieves (2) SDK

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
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        NewOwner                       (Parm, ZeroConstructor, IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::SwitchNetworkClusterForActor(AActor* TargetActor, AActor* NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SwitchNetworkClusterForActor"));

	UNetworkTestingBlueprintFunctionLibrary_SwitchNetworkClusterForActor_Params params;
	params.TargetActor = TargetActor;
	params.NewOwner = NewOwner;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SetConnectionLastReceiveTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// APlayerController*             PlayerController               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          OffsetFromDriverTime           (Parm, ZeroConstructor, IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::SetConnectionLastReceiveTime(APlayerController* PlayerController, float OffsetFromDriverTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SetConnectionLastReceiveTime"));

	UNetworkTestingBlueprintFunctionLibrary_SetConnectionLastReceiveTime_Params params;
	params.PlayerController = PlayerController;
	params.OffsetFromDriverTime = OffsetFromDriverTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ResumePropertyTracking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::ResumePropertyTracking(AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ResumePropertyTracking"));

	UNetworkTestingBlueprintFunctionLibrary_ResumePropertyTracking_Params params;
	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.PausePropertyTrackingOnNextSend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::PausePropertyTrackingOnNextSend(AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.PausePropertyTrackingOnNextSend"));

	UNetworkTestingBlueprintFunctionLibrary_PausePropertyTrackingOnNextSend_Params params;
	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsComponentNetDormant
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ClientConnectionIdx            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// UActorComponent*               TargetComponent                (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::IsComponentNetDormant(int ClientConnectionIdx, UActorComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsComponentNetDormant"));

	UNetworkTestingBlueprintFunctionLibrary_IsComponentNetDormant_Params params;
	params.ClientConnectionIdx = ClientConnectionIdx;
	params.TargetComponent = TargetComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetRelevantFor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// AActor*                        TargetActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// APlayerController*             PlayerController               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::IsActorNetRelevantFor(AActor* TargetActor, APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetRelevantFor"));

	UNetworkTestingBlueprintFunctionLibrary_IsActorNetRelevantFor_Params params;
	params.TargetActor = TargetActor;
	params.PlayerController = PlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetDormant
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::IsActorNetDormant(AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetDormant"));

	UNetworkTestingBlueprintFunctionLibrary_IsActorNetDormant_Params params;
	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkClusterGlobal
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::IsActorInNetworkClusterGlobal(AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkClusterGlobal"));

	UNetworkTestingBlueprintFunctionLibrary_IsActorInNetworkClusterGlobal_Params params;
	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkCluster
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        NetworkClusterOwner            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::IsActorInNetworkCluster(AActor* TargetActor, AActor* NetworkClusterOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkCluster"));

	UNetworkTestingBlueprintFunctionLibrary_IsActorInNetworkCluster_Params params;
	params.TargetActor = TargetActor;
	params.NetworkClusterOwner = NetworkClusterOwner;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkClusterOnOwner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        LevelOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::IsActorInLevelNetworkClusterOnOwner(AActor* TargetActor, AActor* LevelOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkClusterOnOwner"));

	UNetworkTestingBlueprintFunctionLibrary_IsActorInLevelNetworkClusterOnOwner_Params params;
	params.TargetActor = TargetActor;
	params.LevelOwner = LevelOwner;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkCluster
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// FName                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::IsActorInLevelNetworkCluster(AActor* TargetActor, const FName& Level)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkCluster"));

	UNetworkTestingBlueprintFunctionLibrary_IsActorInLevelNetworkCluster_Params params;
	params.TargetActor = TargetActor;
	params.Level = Level;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.HasComponentReplicator
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ClientConnectionIdx            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// UActorComponent*               TargetComponent                (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::HasComponentReplicator(int ClientConnectionIdx, UActorComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.HasComponentReplicator"));

	UNetworkTestingBlueprintFunctionLibrary_HasComponentReplicator_Params params;
	params.ClientConnectionIdx = ClientConnectionIdx;
	params.TargetComponent = TargetComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.GetReliableBufferBunchCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UNetworkTestingBlueprintFunctionLibrary::GetReliableBufferBunchCount(AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.GetReliableBufferBunchCount"));

	UNetworkTestingBlueprintFunctionLibrary_GetReliableBufferBunchCount_Params params;
	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.FlushComponentNetDormancy
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// UActorComponent*               TargetComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::FlushComponentNetDormancy(UActorComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.FlushComponentNetDormancy"));

	UNetworkTestingBlueprintFunctionLibrary_FlushComponentNetDormancy_Params params;
	params.TargetComponent = TargetComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimerForPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// APlayerController*             PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::ClearRecentRelevanceTimerForPlayer(AActor* TargetActor, APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimerForPlayer"));

	UNetworkTestingBlueprintFunctionLibrary_ClearRecentRelevanceTimerForPlayer_Params params;
	params.TargetActor = TargetActor;
	params.PlayerController = PlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::ClearRecentRelevanceTimer(AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimer"));

	UNetworkTestingBlueprintFunctionLibrary_ClearRecentRelevanceTimer_Params params;
	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitWhileMigrationInProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FLatentActionInfo              LatentInfo                     (Parm)

void UServerMigrationBlueprintFunctionLibrary::WaitWhileMigrationInProgress(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitWhileMigrationInProgress"));

	UServerMigrationBlueprintFunctionLibrary_WaitWhileMigrationInProgress_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForPendingNetTraffic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FLatentActionInfo              LatentInfo                     (Parm)
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UServerMigrationBlueprintFunctionLibrary::WaitForPendingNetTraffic(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForPendingNetTraffic"));

	UServerMigrationBlueprintFunctionLibrary_WaitForPendingNetTraffic_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForMigrationCompletedEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FLatentActionInfo              LatentInfo                     (Parm)

void UServerMigrationBlueprintFunctionLibrary::WaitForMigrationCompletedEvent(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForMigrationCompletedEvent"));

	UServerMigrationBlueprintFunctionLibrary_WaitForMigrationCompletedEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForClientsToHaveActorChannel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FLatentActionInfo              LatentInfo                     (Parm)
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UServerMigrationBlueprintFunctionLibrary::WaitForClientsToHaveActorChannel(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForClientsToHaveActorChannel"));

	UServerMigrationBlueprintFunctionLibrary_WaitForClientsToHaveActorChannel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorToBuffer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UServerMigrationBlueprintFunctionLibrary::TestSerialiseActorToBuffer(AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorToBuffer"));

	UServerMigrationBlueprintFunctionLibrary_TestSerialiseActorToBuffer_Params params;
	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorGroupToBuffer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<AActor*>                ActorGroup                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UServerMigrationBlueprintFunctionLibrary::TestSerialiseActorGroupToBuffer(TArray<AActor*> ActorGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorGroupToBuffer"));

	UServerMigrationBlueprintFunctionLibrary_TestSerialiseActorGroupToBuffer_Params params;
	params.ActorGroup = ActorGroup;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorWithOffsetFromBuffer
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FVector                        Offset                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// AActor*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

AActor* UServerMigrationBlueprintFunctionLibrary::TestDeserialiseActorWithOffsetFromBuffer(UObject* WorldContextObject, TArray<unsigned char> Buffer, const FVector& Offset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorWithOffsetFromBuffer"));

	UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorWithOffsetFromBuffer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;
	params.Offset = Offset;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupWithOffsetFromBuffer
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FVector                        Offset                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<AActor*>                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<AActor*> UServerMigrationBlueprintFunctionLibrary::TestDeserialiseActorGroupWithOffsetFromBuffer(UObject* WorldContextObject, TArray<unsigned char> Buffer, const FVector& Offset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupWithOffsetFromBuffer"));

	UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorGroupWithOffsetFromBuffer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;
	params.Offset = Offset;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupFromBuffer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<AActor*>                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<AActor*> UServerMigrationBlueprintFunctionLibrary::TestDeserialiseActorGroupFromBuffer(UObject* WorldContextObject, TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupFromBuffer"));

	UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorGroupFromBuffer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorFromBuffer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// AActor*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

AActor* UServerMigrationBlueprintFunctionLibrary::TestDeserialiseActorFromBuffer(UObject* WorldContextObject, TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorFromBuffer"));

	UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorFromBuffer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestServerSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FServerSettings                Settings                       (ConstParm, Parm, OutParm, ReferenceParm)

void UServerMigrationBlueprintFunctionLibrary::SetServerMigrationTestServerSettings(UObject* WorldContextObject, const FServerSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestServerSettings"));

	UServerMigrationBlueprintFunctionLibrary_SetServerMigrationTestServerSettings_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Settings = Settings;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestClientSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FClientSettings                Settings                       (ConstParm, Parm, OutParm, ReferenceParm)

void UServerMigrationBlueprintFunctionLibrary::SetServerMigrationTestClientSettings(UObject* WorldContextObject, const FClientSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestClientSettings"));

	UServerMigrationBlueprintFunctionLibrary_SetServerMigrationTestClientSettings_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Settings = Settings;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetPacketSimulationSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            PacketLag                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            PacketLagVariance              (Parm, ZeroConstructor, IsPlainOldData)
// int                            PacketLoss                     (Parm, ZeroConstructor, IsPlainOldData)

void UServerMigrationBlueprintFunctionLibrary::SetPacketSimulationSettings(UObject* WorldContextObject, int PacketLag, int PacketLagVariance, int PacketLoss)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetPacketSimulationSettings"));

	UServerMigrationBlueprintFunctionLibrary_SetPacketSimulationSettings_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PacketLag = PacketLag;
	params.PacketLagVariance = PacketLagVariance;
	params.PacketLoss = PacketLoss;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ResumeReplication
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UServerMigrationBlueprintFunctionLibrary::ResumeReplication(AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ResumeReplication"));

	UServerMigrationBlueprintFunctionLibrary_ResumeReplication_Params params;
	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.RegisterPersistentDynamicActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// FString                        IdentificationName             (Parm, ZeroConstructor)

void UServerMigrationBlueprintFunctionLibrary::RegisterPersistentDynamicActor(AActor* TargetActor, const FString& IdentificationName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.RegisterPersistentDynamicActor"));

	UServerMigrationBlueprintFunctionLibrary_RegisterPersistentDynamicActor_Params params;
	params.TargetActor = TargetActor;
	params.IdentificationName = IdentificationName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.PauseReplication
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDropUnreliableRPCsWhilePaused (Parm, ZeroConstructor, IsPlainOldData)

void UServerMigrationBlueprintFunctionLibrary::PauseReplication(AActor* TargetActor, bool bDropUnreliableRPCsWhilePaused)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.PauseReplication"));

	UServerMigrationBlueprintFunctionLibrary_PauseReplication_Params params;
	params.TargetActor = TargetActor;
	params.bDropUnreliableRPCsWhilePaused = bDropUnreliableRPCsWhilePaused;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.HasActorChannelFromServer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServerMigrationBlueprintFunctionLibrary::HasActorChannelFromServer(AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.HasActorChannelFromServer"));

	UServerMigrationBlueprintFunctionLibrary_HasActorChannelFromServer_Params params;
	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveDormantActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// AActor*                        TargetActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServerMigrationBlueprintFunctionLibrary::ClientsHaveDormantActor(AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveDormantActor"));

	UServerMigrationBlueprintFunctionLibrary_ClientsHaveDormantActor_Params params;
	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveActorChannel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// AActor*                        TargetActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServerMigrationBlueprintFunctionLibrary::ClientsHaveActorChannel(AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveActorChannel"));

	UServerMigrationBlueprintFunctionLibrary_ClientsHaveActorChannel_Params params;
	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
