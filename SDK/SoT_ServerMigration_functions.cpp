// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ServerMigration_classes.hpp"

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

void UNetworkTestingBlueprintFunctionLibrary::SwitchNetworkClusterForActor(class AActor* TargetActor, class AActor* NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SwitchNetworkClusterForActor"));

	struct
	{
		class AActor*                  TargetActor;
		class AActor*                  NewOwner;
	} params;

	params.TargetActor = TargetActor;
	params.NewOwner = NewOwner;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SetConnectionLastReceiveTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          OffsetFromDriverTime           (Parm, ZeroConstructor, IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::SetConnectionLastReceiveTime(class APlayerController* PlayerController, float OffsetFromDriverTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SetConnectionLastReceiveTime"));

	struct
	{
		class APlayerController*       PlayerController;
		float                          OffsetFromDriverTime;
	} params;

	params.PlayerController = PlayerController;
	params.OffsetFromDriverTime = OffsetFromDriverTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ResumePropertyTracking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::ResumePropertyTracking(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ResumePropertyTracking"));

	struct
	{
		class AActor*                  TargetActor;
	} params;

	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.PausePropertyTrackingOnNextSend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::PausePropertyTrackingOnNextSend(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.PausePropertyTrackingOnNextSend"));

	struct
	{
		class AActor*                  TargetActor;
	} params;

	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsComponentNetDormant
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ClientConnectionIdx            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         TargetComponent                (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::IsComponentNetDormant(int ClientConnectionIdx, class UActorComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsComponentNetDormant"));

	struct
	{
		int                            ClientConnectionIdx;
		class UActorComponent*         TargetComponent;
		bool                           ReturnValue;
	} params;

	params.ClientConnectionIdx = ClientConnectionIdx;
	params.TargetComponent = TargetComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetRelevantFor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::IsActorNetRelevantFor(class AActor* TargetActor, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetRelevantFor"));

	struct
	{
		class AActor*                  TargetActor;
		class APlayerController*       PlayerController;
		bool                           ReturnValue;
	} params;

	params.TargetActor = TargetActor;
	params.PlayerController = PlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetDormant
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::IsActorNetDormant(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetDormant"));

	struct
	{
		class AActor*                  TargetActor;
		bool                           ReturnValue;
	} params;

	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkClusterGlobal
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::IsActorInNetworkClusterGlobal(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkClusterGlobal"));

	struct
	{
		class AActor*                  TargetActor;
		bool                           ReturnValue;
	} params;

	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkCluster
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  NetworkClusterOwner            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::IsActorInNetworkCluster(class AActor* TargetActor, class AActor* NetworkClusterOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkCluster"));

	struct
	{
		class AActor*                  TargetActor;
		class AActor*                  NetworkClusterOwner;
		bool                           ReturnValue;
	} params;

	params.TargetActor = TargetActor;
	params.NetworkClusterOwner = NetworkClusterOwner;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkClusterOnOwner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  LevelOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::IsActorInLevelNetworkClusterOnOwner(class AActor* TargetActor, class AActor* LevelOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkClusterOnOwner"));

	struct
	{
		class AActor*                  TargetActor;
		class AActor*                  LevelOwner;
		bool                           ReturnValue;
	} params;

	params.TargetActor = TargetActor;
	params.LevelOwner = LevelOwner;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkCluster
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Level                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::IsActorInLevelNetworkCluster(class AActor* TargetActor, const struct FName& Level)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkCluster"));

	struct
	{
		class AActor*                  TargetActor;
		struct FName                   Level;
		bool                           ReturnValue;
	} params;

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
// class UActorComponent*         TargetComponent                (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::HasComponentReplicator(int ClientConnectionIdx, class UActorComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.HasComponentReplicator"));

	struct
	{
		int                            ClientConnectionIdx;
		class UActorComponent*         TargetComponent;
		bool                           ReturnValue;
	} params;

	params.ClientConnectionIdx = ClientConnectionIdx;
	params.TargetComponent = TargetComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.GetReliableBufferBunchCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UNetworkTestingBlueprintFunctionLibrary::GetReliableBufferBunchCount(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.GetReliableBufferBunchCount"));

	struct
	{
		class AActor*                  TargetActor;
		int                            ReturnValue;
	} params;

	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.FlushComponentNetDormancy
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActorComponent*         TargetComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::FlushComponentNetDormancy(class UActorComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.FlushComponentNetDormancy"));

	struct
	{
		class UActorComponent*         TargetComponent;
		bool                           ReturnValue;
	} params;

	params.TargetComponent = TargetComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimerForPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::ClearRecentRelevanceTimerForPlayer(class AActor* TargetActor, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimerForPlayer"));

	struct
	{
		class AActor*                  TargetActor;
		class APlayerController*       PlayerController;
	} params;

	params.TargetActor = TargetActor;
	params.PlayerController = PlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::ClearRecentRelevanceTimer(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimer"));

	struct
	{
		class AActor*                  TargetActor;
	} params;

	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitWhileMigrationInProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UServerMigrationBlueprintFunctionLibrary::WaitWhileMigrationInProgress(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitWhileMigrationInProgress"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForPendingNetTraffic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UServerMigrationBlueprintFunctionLibrary::WaitForPendingNetTraffic(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForPendingNetTraffic"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		class AActor*                  TargetActor;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForMigrationCompletedEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UServerMigrationBlueprintFunctionLibrary::WaitForMigrationCompletedEvent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForMigrationCompletedEvent"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForClientsToHaveActorChannel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UServerMigrationBlueprintFunctionLibrary::WaitForClientsToHaveActorChannel(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForClientsToHaveActorChannel"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		class AActor*                  TargetActor;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorToBuffer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UServerMigrationBlueprintFunctionLibrary::TestSerialiseActorToBuffer(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorToBuffer"));

	struct
	{
		class AActor*                  TargetActor;
		TArray<unsigned char>          ReturnValue;
	} params;

	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorGroupToBuffer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          ActorGroup                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UServerMigrationBlueprintFunctionLibrary::TestSerialiseActorGroupToBuffer(TArray<class AActor*> ActorGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorGroupToBuffer"));

	struct
	{
		TArray<class AActor*>          ActorGroup;
		TArray<unsigned char>          ReturnValue;
	} params;

	params.ActorGroup = ActorGroup;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorWithOffsetFromBuffer
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Offset                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UServerMigrationBlueprintFunctionLibrary::TestDeserialiseActorWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorWithOffsetFromBuffer"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<unsigned char>          Buffer;
		struct FVector                 Offset;
		class AActor*                  ReturnValue;
	} params;

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
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Offset                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UServerMigrationBlueprintFunctionLibrary::TestDeserialiseActorGroupWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupWithOffsetFromBuffer"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<unsigned char>          Buffer;
		struct FVector                 Offset;
		TArray<class AActor*>          ReturnValue;
	} params;

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
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UServerMigrationBlueprintFunctionLibrary::TestDeserialiseActorGroupFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupFromBuffer"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<unsigned char>          Buffer;
		TArray<class AActor*>          ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorFromBuffer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UServerMigrationBlueprintFunctionLibrary::TestDeserialiseActorFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorFromBuffer"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<unsigned char>          Buffer;
		class AActor*                  ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestServerSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FServerSettings         Settings                       (ConstParm, Parm, OutParm, ReferenceParm)

void UServerMigrationBlueprintFunctionLibrary::SetServerMigrationTestServerSettings(class UObject* WorldContextObject, const struct FServerSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestServerSettings"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FServerSettings         Settings;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Settings = Settings;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestClientSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FClientSettings         Settings                       (ConstParm, Parm, OutParm, ReferenceParm)

void UServerMigrationBlueprintFunctionLibrary::SetServerMigrationTestClientSettings(class UObject* WorldContextObject, const struct FClientSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestClientSettings"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FClientSettings         Settings;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Settings = Settings;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetPacketSimulationSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            PacketLag                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            PacketLagVariance              (Parm, ZeroConstructor, IsPlainOldData)
// int                            PacketLoss                     (Parm, ZeroConstructor, IsPlainOldData)

void UServerMigrationBlueprintFunctionLibrary::SetPacketSimulationSettings(class UObject* WorldContextObject, int PacketLag, int PacketLagVariance, int PacketLoss)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetPacketSimulationSettings"));

	struct
	{
		class UObject*                 WorldContextObject;
		int                            PacketLag;
		int                            PacketLagVariance;
		int                            PacketLoss;
	} params;

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
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UServerMigrationBlueprintFunctionLibrary::ResumeReplication(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ResumeReplication"));

	struct
	{
		class AActor*                  TargetActor;
	} params;

	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.RegisterPersistentDynamicActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  IdentificationName             (Parm, ZeroConstructor)

void UServerMigrationBlueprintFunctionLibrary::RegisterPersistentDynamicActor(class AActor* TargetActor, const class FString& IdentificationName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.RegisterPersistentDynamicActor"));

	struct
	{
		class AActor*                  TargetActor;
		class FString                  IdentificationName;
	} params;

	params.TargetActor = TargetActor;
	params.IdentificationName = IdentificationName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.PauseReplication
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDropUnreliableRPCsWhilePaused (Parm, ZeroConstructor, IsPlainOldData)

void UServerMigrationBlueprintFunctionLibrary::PauseReplication(class AActor* TargetActor, bool bDropUnreliableRPCsWhilePaused)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.PauseReplication"));

	struct
	{
		class AActor*                  TargetActor;
		bool                           bDropUnreliableRPCsWhilePaused;
	} params;

	params.TargetActor = TargetActor;
	params.bDropUnreliableRPCsWhilePaused = bDropUnreliableRPCsWhilePaused;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.HasActorChannelFromServer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServerMigrationBlueprintFunctionLibrary::HasActorChannelFromServer(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.HasActorChannelFromServer"));

	struct
	{
		class AActor*                  TargetActor;
		bool                           ReturnValue;
	} params;

	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveDormantActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServerMigrationBlueprintFunctionLibrary::ClientsHaveDormantActor(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveDormantActor"));

	struct
	{
		class AActor*                  TargetActor;
		bool                           ReturnValue;
	} params;

	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveActorChannel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServerMigrationBlueprintFunctionLibrary::ClientsHaveActorChannel(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveActorChannel"));

	struct
	{
		class AActor*                  TargetActor;
		bool                           ReturnValue;
	} params;

	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
