#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ServerMigration_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ServerMigration.MigrationControlChannel
// 0x0048 (0x00B0 - 0x0068)
class UMigrationControlChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0068(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.MigrationControlChannel"));
		return ptr;
	}

};


// Class ServerMigration.MigrationRelevancyClusterActor
// 0x0000 (0x0430 - 0x0430)
class AMigrationRelevancyClusterActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.MigrationRelevancyClusterActor"));
		return ptr;
	}

};


// Class ServerMigration.NetworkTestingBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNetworkTestingBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.NetworkTestingBlueprintFunctionLibrary"));
		return ptr;
	}


	static void SwitchNetworkClusterForActor(class AActor* TargetActor, class AActor* NewOwner);
	static void SetConnectionLastReceiveTime(class APlayerController* PlayerController, float OffsetFromDriverTime);
	static void ResumePropertyTracking(class AActor* TargetActor);
	static void PausePropertyTrackingOnNextSend(class AActor* TargetActor);
	static bool IsComponentNetDormant(int ClientConnectionIdx, class UActorComponent* TargetComponent);
	static bool IsActorNetRelevantFor(class AActor* TargetActor, class APlayerController* PlayerController);
	static bool IsActorNetDormant(class AActor* TargetActor);
	static bool IsActorInNetworkClusterGlobal(class AActor* TargetActor);
	static bool IsActorInNetworkCluster(class AActor* TargetActor, class AActor* NetworkClusterOwner);
	static bool IsActorInLevelNetworkClusterOnOwner(class AActor* TargetActor, class AActor* LevelOwner);
	static bool IsActorInLevelNetworkCluster(class AActor* TargetActor, const struct FName& Level);
	static bool HasComponentReplicator(int ClientConnectionIdx, class UActorComponent* TargetComponent);
	static int GetReliableBufferBunchCount(class AActor* TargetActor);
	static bool FlushComponentNetDormancy(class UActorComponent* TargetComponent);
	static void ClearRecentRelevanceTimerForPlayer(class AActor* TargetActor, class APlayerController* PlayerController);
	static void ClearRecentRelevanceTimer(class AActor* TargetActor);
};


// Class ServerMigration.ServerMigrationBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UServerMigrationBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.ServerMigrationBlueprintFunctionLibrary"));
		return ptr;
	}


	static void WaitWhileMigrationInProgress(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	static void WaitForPendingNetTraffic(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor);
	static void WaitForMigrationCompletedEvent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	static void WaitForClientsToHaveActorChannel(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor);
	static TArray<unsigned char> TestSerialiseActorToBuffer(class AActor* TargetActor);
	static TArray<unsigned char> TestSerialiseActorGroupToBuffer(TArray<class AActor*> ActorGroup);
	static class AActor* TestDeserialiseActorWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset);
	static TArray<class AActor*> TestDeserialiseActorGroupWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset);
	static TArray<class AActor*> TestDeserialiseActorGroupFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer);
	static class AActor* TestDeserialiseActorFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer);
	static void SetServerMigrationTestServerSettings(class UObject* WorldContextObject, const struct FServerSettings& Settings);
	static void SetServerMigrationTestClientSettings(class UObject* WorldContextObject, const struct FClientSettings& Settings);
	static void SetPacketSimulationSettings(class UObject* WorldContextObject, int PacketLag, int PacketLagVariance, int PacketLoss);
	static void ResumeReplication(class AActor* TargetActor);
	static void RegisterPersistentDynamicActor(class AActor* TargetActor, const class FString& IdentificationName);
	static void PauseReplication(class AActor* TargetActor, bool bDropUnreliableRPCsWhilePaused);
	static bool HasActorChannelFromServer(class AActor* TargetActor);
	static bool ClientsHaveDormantActor(class AActor* TargetActor);
	static bool ClientsHaveActorChannel(class AActor* TargetActor);
};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorRef
// 0x0008 (0x0030 - 0x0028)
class UServerMigrationSerialisationDetailsTestsActorRef : public UObject
{
public:
	class AActor*                                      ActorReferenceWithMigrationMarkup;                        // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorRef"));
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay
// 0x0008 (0x0438 - 0x0430)
class AServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay : public AActor
{
public:
	class UPrimitiveComponent*                         PrimitiveComponent;                                       // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay"));
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithChild
// 0x0008 (0x0438 - 0x0430)
class AServerMigrationSerialisationDetailsTestsActorWithChild : public AActor
{
public:
	class UChildActorComponent*                        ChildActorComponent;                                      // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithChild"));
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithDynamicComponent
// 0x0018 (0x0448 - 0x0430)
class AServerMigrationSerialisationDetailsTestsActorWithDynamicComponent : public AActor
{
public:
	class UServerMigrationSerialisationDetailsTestsMigratableComponent* SubObject;                                                // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UServerMigrationSerialisationDetailsTestsMigratableComponent* ActorComponent;                                           // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UServerMigrationSerialisationDetailsTestsMigratableComponent* Subobject2;                                               // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithDynamicComponent"));
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithNetActorPtr
// 0x0018 (0x0448 - 0x0430)
class AServerMigrationSerialisationDetailsTestsActorWithNetActorPtr : public AActor
{
public:
	struct FNetActorPtr                                ActorPtr;                                                 // 0x0430(0x0014)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0444(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithNetActorPtr"));
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithUniqueNetId
// 0x0018 (0x0448 - 0x0430)
class AServerMigrationSerialisationDetailsTestsActorWithUniqueNetId : public AActor
{
public:
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0430(0x0018)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithUniqueNetId"));
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponent
// 0x0008 (0x00D0 - 0x00C8)
class UServerMigrationSerialisationDetailsTestsMigratableComponent : public UActorComponent
{
public:
	float                                              FloatWithMigrationMarkup;                                 // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntWithNoMarkup;                                          // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponent"));
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponentActor
// 0x0008 (0x0438 - 0x0430)
class AServerMigrationSerialisationDetailsTestsMigratableComponentActor : public AActor
{
public:
	class UServerMigrationSerialisationDetailsTestsMigratableComponent* ComponentWithMigrationMarkup;                             // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponentActor"));
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor
// 0x0008 (0x0438 - 0x0430)
class AServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor : public AActor
{
public:
	class UServerMigrationSerialisationDetailsTestsMigratableComponent* ComponentWithMigrationMarkup;                             // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor"));
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor
// 0x0008 (0x0438 - 0x0430)
class AServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0430(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor"));
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationActorWithRootComponentSimulatePhysicsEnabledByDefault
// 0x0000 (0x0430 - 0x0430)
class AServerMigrationSerialisationDetailsTestsMigrationActorWithRootComponentSimulatePhysicsEnabledByDefault : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationActorWithRootComponentSimulatePhysicsEnabledByDefault"));
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor
// 0x0008 (0x0438 - 0x0430)
class AServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor : public AActor
{
public:
	class UChildActorComponent*                        Component;                                                // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor"));
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor
// 0x0008 (0x0438 - 0x0430)
class AServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor : public AActor
{
public:
	struct FServerMigrationCustomMigrationSerialisationStruct TestStruct;                                               // 0x0430(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0434(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor"));
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor
// 0x0008 (0x0438 - 0x0430)
class AServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor : public AActor
{
public:
	class AActor*                                      DependentActor;                                           // 0x0430(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor"));
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationReferenceActor
// 0x0010 (0x0440 - 0x0430)
class AServerMigrationSerialisationDetailsTestsMigrationReferenceActor : public AActor
{
public:
	class AActor*                                      ActorReferenceWithMigrationMarkup;                        // 0x0430(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0438(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationReferenceActor"));
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsPropertyMarkup
// 0x0020 (0x0048 - 0x0028)
class UServerMigrationSerialisationDetailsTestsPropertyMarkup : public UObject
{
public:
	int                                                Int32NoMarkup;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolWithMigrationMarkup;                                  // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	class FString                                      StringWithSaveGameMarkup;                                 // 0x0030(0x0010) (ZeroConstructor, SaveGame)
	float                                              FloatWithMigrationAndReplicationMarkup;                   // 0x0040(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsPropertyMarkup"));
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsTArrayProperty
// 0x0010 (0x0038 - 0x0028)
class UServerMigrationSerialisationDetailsTestsTArrayProperty : public UObject
{
public:
	TArray<int>                                        IntegerArrayWithMigrationMarkup;                          // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsTArrayProperty"));
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsUStructProperty
// 0x0010 (0x0038 - 0x0028)
class UServerMigrationSerialisationDetailsTestsUStructProperty : public UObject
{
public:
	struct FServerMigrationSerialisationDetailsTestsUStruct SubStructWithMigrationMarkup;                             // 0x0028(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsUStructProperty"));
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSettings
// 0x0048 (0x0070 - 0x0028)
class UServerMigrationSettings : public UObject
{
public:
	int                                                MaxSimultaneousMigrations;                                // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class FString                                      TransportImplementation;                                  // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	int                                                ServerDefaultListenPort;                                  // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                ServerListenPortRangeSize;                                // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                AutomationServerDefaultListenPort;                        // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class FString                                      InstanceImplementation;                                   // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	float                                              MigrationConnectionTimeoutSeconds;                        // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              WaitForClientActorRemappingTimeoutLength;                 // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              WaitForTransferOwnershipAcknowledgementTimeoutLength;     // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DeserialisationTimeSliceLength;                           // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.ServerMigrationSettings"));
		return ptr;
	}

};


// Class ServerMigration.TestActorWithUObjectProperty
// 0x0008 (0x0438 - 0x0430)
class ATestActorWithUObjectProperty : public AActor
{
public:
	class UObject*                                     ObjectProperty;                                           // 0x0430(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.TestActorWithUObjectProperty"));
		return ptr;
	}

};


// Class ServerMigration.TestUObjectWithObjectProperty
// 0x0008 (0x0030 - 0x0028)
class UTestUObjectWithObjectProperty : public UObject
{
public:
	class UObject*                                     ObjectProperty;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServerMigration.TestUObjectWithObjectProperty"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
