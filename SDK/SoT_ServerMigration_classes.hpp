#pragma once

// Sea of Thieves (1.0.5) SDK

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
		static auto ptr = UObject::FindClass("Class ServerMigration.MigrationControlChannel");
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
		static auto ptr = UObject::FindClass("Class ServerMigration.NetworkTestingBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_SetConnectionLastReceiveTime(class APlayerController* PlayerController, float OffsetFromDriverTime);
	void STATIC_ResumePropertyTracking(class AActor* TargetActor);
	void STATIC_PausePropertyTrackingOnNextSend(class AActor* TargetActor);
	bool STATIC_IsActorNetRelevantFor(class AActor* TargetActor, class APlayerController* PlayerController);
	int STATIC_GetReliableBufferBunchCount(class AActor* TargetActor);
	void STATIC_ClearRecentRelevanceTimerForPlayer(class AActor* TargetActor, class APlayerController* PlayerController);
	void STATIC_ClearRecentRelevanceTimer(class AActor* TargetActor);
};


// Class ServerMigration.ServerMigrationBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UServerMigrationBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_WaitWhileMigrationInProgress(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void STATIC_WaitForPendingNetTraffic(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor);
	void STATIC_WaitForMigrationCompletedEvent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void STATIC_WaitForClientsToHaveActorChannel(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor);
	TArray<unsigned char> STATIC_TestSerialiseActorToBuffer(class AActor* TargetActor);
	TArray<unsigned char> STATIC_TestSerialiseActorGroupToBuffer(TArray<class AActor*> ActorGroup);
	class AActor* STATIC_TestDeserialiseActorWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset);
	TArray<class AActor*> STATIC_TestDeserialiseActorGroupWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset);
	TArray<class AActor*> STATIC_TestDeserialiseActorGroupFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer);
	class AActor* STATIC_TestDeserialiseActorFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer);
	void STATIC_SetServerMigrationTestServerSettings(class UObject* WorldContextObject, const struct FServerSettings& Settings);
	void STATIC_SetServerMigrationTestClientSettings(class UObject* WorldContextObject, const struct FClientSettings& Settings);
	void STATIC_SetPacketSimulationSettings(class UObject* WorldContextObject, int PacketLag, int PacketLagVariance, int PacketLoss);
	void STATIC_ResumeReplication(class AActor* TargetActor);
	void STATIC_RegisterPersistentDynamicActor(class AActor* TargetActor, const class FString& IdentificationName);
	void STATIC_PauseReplication(class AActor* TargetActor, bool bDropUnreliableRPCsWhilePaused);
	bool STATIC_HasActorChannelFromServer(class AActor* TargetActor);
	bool STATIC_ClientsHaveDormantActor(class AActor* TargetActor);
	bool STATIC_ClientsHaveActorChannel(class AActor* TargetActor);
};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorRef
// 0x0008 (0x0030 - 0x0028)
class UServerMigrationSerialisationDetailsTestsActorRef : public UObject
{
public:
	class AActor*                                      ActorReferenceWithMigrationMarkup;                        // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorRef");
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay
// 0x0008 (0x0478 - 0x0470)
class AServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay : public AActor
{
public:
	class UPrimitiveComponent*                         PrimitiveComponent;                                       // 0x0470(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay");
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithChild
// 0x0008 (0x0478 - 0x0470)
class AServerMigrationSerialisationDetailsTestsActorWithChild : public AActor
{
public:
	class UChildActorComponent*                        ChildActorComponent;                                      // 0x0470(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithChild");
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithNetActorPtr
// 0x0018 (0x0488 - 0x0470)
class AServerMigrationSerialisationDetailsTestsActorWithNetActorPtr : public AActor
{
public:
	struct FNetActorPtr                                ActorPtr;                                                 // 0x0470(0x0014)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0484(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithNetActorPtr");
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithUniqueNetId
// 0x0018 (0x0488 - 0x0470)
class AServerMigrationSerialisationDetailsTestsActorWithUniqueNetId : public AActor
{
public:
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0470(0x0018)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithUniqueNetId");
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponent
// 0x0008 (0x00D8 - 0x00D0)
class UServerMigrationSerialisationDetailsTestsMigratableComponent : public UActorComponent
{
public:
	float                                              FloatWithMigrationMarkup;                                 // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntWithNoMarkup;                                          // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponent");
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponentActor
// 0x0008 (0x0478 - 0x0470)
class AServerMigrationSerialisationDetailsTestsMigratableComponentActor : public AActor
{
public:
	class UServerMigrationSerialisationDetailsTestsMigratableComponent* ComponentWithMigrationMarkup;                             // 0x0470(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponentActor");
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor
// 0x0008 (0x0478 - 0x0470)
class AServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor : public AActor
{
public:
	class UServerMigrationSerialisationDetailsTestsMigratableComponent* ComponentWithMigrationMarkup;                             // 0x0470(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor");
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor
// 0x0008 (0x0478 - 0x0470)
class AServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor");
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor
// 0x0008 (0x0478 - 0x0470)
class AServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor : public AActor
{
public:
	class UChildActorComponent*                        Component;                                                // 0x0470(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor");
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor
// 0x0008 (0x0478 - 0x0470)
class AServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor : public AActor
{
public:
	struct FServerMigrationCustomMigrationSerialisationStruct TestStruct;                                               // 0x0470(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0474(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor");
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor
// 0x0008 (0x0478 - 0x0470)
class AServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor : public AActor
{
public:
	class AActor*                                      DependentActor;                                           // 0x0470(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor");
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationReferenceActor
// 0x0010 (0x0480 - 0x0470)
class AServerMigrationSerialisationDetailsTestsMigrationReferenceActor : public AActor
{
public:
	class AActor*                                      ActorReferenceWithMigrationMarkup;                        // 0x0470(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0478(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationReferenceActor");
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
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsPropertyMarkup");
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
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsTArrayProperty");
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
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsUStructProperty");
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
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
