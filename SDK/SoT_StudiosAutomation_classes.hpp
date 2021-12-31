#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StudiosAutomation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class StudiosAutomation.TestLevelScriptActor
// 0x00C0 (0x0498 - 0x03D8)
class ATestLevelScriptActor : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET
	TEnumAsByte<ETestCategory>                         Category;                                                 // 0x03E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETestArea>                             Area;                                                     // 0x03E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               VisualTest;                                               // 0x03E2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RunInEditor;                                              // 0x03E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RunOnServer;                                              // 0x03E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresServices;                                         // 0x03E5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03E6(0x0002) MISSED OFFSET
	TArray<FTestLevelMetadataEntry>                    AdditionalMetadata;                                       // 0x03E8(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EPerformanceCaptureType>               CaptureType;                                              // 0x03F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETestAutomationPlayModeOverride>       PlayModeOverride;                                         // 0x03F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03FA(0x0002) MISSED OFFSET
	float                                              TestTimeout;                                              // 0x03FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TestPausedTimeout;                                        // 0x0400(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	TArray<FString>                                    VerboseLogCategories;                                     // 0x0408(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        ClientsRunning;                                           // 0x0418(0x0010) (Net, ZeroConstructor)
	TArray<int>                                        ClientIds;                                                // 0x0428(0x0010) (Net, ZeroConstructor)
	TArray<FClientPawnDetails>                         ClientPawns;                                              // 0x0438(0x0010) (Net, ZeroConstructor)
	TArray<AActor*>                                    SpawnedActors;                                            // 0x0448(0x0010) (Net, ZeroConstructor)
	int                                                NextSpawnedActorIndex;                                    // 0x0458(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3C];                                      // 0x045C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.TestLevelScriptActor"));
		return ptr;
	}


	static void YieldToServer(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo);
	void YieldToOriginalServer(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo);
	void YieldToDynamicServer(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, int ServerIndex);
	static void YieldToClient(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, int ClientId);
	static void WaitForPossessionAcknowledgement(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo);
	void WaitForOtherServers(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, int NumberOfServers);
	static void WaitForClients(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, int NumberOfClients);
	void TestTriggerServerMigration(TArray<AActor*> ActorGroup, int TargetServerIndex);
	bool TestCloseConnection(int ConnectionIdx);
	static void SyncClientServer(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, int NumClients, bool RegisterPawnsForMPTesting, bool ClearPawnInputBindings);
	static AActor* SpawnActorForMPTesting(UObject* WorldContextObject, UClass* ActorClass, const FVector& SpawnLocation, const FRotator& SpawnRotation);
	void SendServerMigrationTestValueInt32(int TestValue);
	static void RegisterPawnsForMPTesting(UObject* WorldContextObject);
	void RegisterActorForMPTestingRecursively(AActor* TargetActor);
	void RegisterActorForMPTesting(AActor* TargetActor);
	void PostTestCleanup();
	void OnServerMigrationTestValueInt32Received(int TestValue);
	void OnOutgoingServerMigrationStarted(const FGuid& MigrationId, TArray<APlayerController*> Players);
	void OnOutgoingServerMigrationCompleted(const FGuid& MigrationId);
	void OnOutgoingServerMigrationAborted(const FGuid& MigrationId);
	void OnIncomingServerMigrationStarted(const FGuid& MigrationId, int NumPlayers);
	void OnIncomingServerMigrationCompleted(const FGuid& MigrationId, TArray<APlayerController*> Players, TArray<AActor*> Actors);
	void OnIncomingServerMigrationAborted(const FGuid& MigrationId);
	void OnClientServerMigrationStarted(const FGuid& MigrationId);
	void OnClientServerMigrationCompleted(const FGuid& MigrationId);
	void OnClientServerMigrationAborted(const FGuid& MigrationId);
	int GetServerIndex(UObject* WorldContextObject);
	FString GetRemoteServerMigrationURL(int TargetServerIndex);
	int GetPlayerIndexFromClientId(int ClientId);
	int GetNumClientsForMultiplayerTest();
	int GetNumAutomationClients();
	APawn* GetClientPawn(int ClientId, int SplitScreenIndex);
	int GetClientId(bool ErrorOnFailure);
	void DoServerPostTestCleanup();
	static void ClearPawnInputBindings(UObject* WorldContextObject);
	void AddServerOnNewMap(const FString& Name, const FString& MapPath);
	void AddServer(const FString& Name);
	void AddClient(int Port, const FString& Name);
};


// Class StudiosAutomation.ActorThatLogsErrorWhenTicked
// 0x0000 (0x03D0 - 0x03D0)
class AActorThatLogsErrorWhenTicked : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.ActorThatLogsErrorWhenTicked"));
		return ptr;
	}

};


// Class StudiosAutomation.AutomationBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAutomationBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.AutomationBlueprintFunctionLibrary"));
		return ptr;
	}


	static void TestFinished(UObject* ContextObject);
	static void TestFailed(const FString& Message, UObject* ContextObject);
	static void TakeAutomationScreenshotAtCamera(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, ACameraActor* Camera, const FString& NameOverride, float DelayBeforeScreenshotSeconds);
	static void TakeAutomationScreenshot(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, const FString& Name);
	static void StepStarted(const FString& StepName);
	static void StepFinished();
	static void SetTestTimeoutAsFatal(bool TimeoutIsFatal);
	static void PreventGarbageCollection();
	static void OpenLevelWithGameMode(UObject* WorldContextObject, const FName& LevelName, UClass* GameMode, bool Absolute);
	static void LogPlatformMemoryStats();
	static bool IsTravelFinished(UObject* WorldContextObject);
	static bool IsFeatureToggleEnabled(const FName& FeatureToggleName);
	static bool IsEditor();
	static bool HasPerformanceDataBeenCaptured();
	static ATestLevelScriptActor* GetTestLevelScriptActor(bool ErrorOnFailure);
	static int GetPlayerId(APlayerState* State);
	static FString GetLevelUrl(UObject* WorldContextObject);
	static FString GetCurrentMapTestName();
	static void EndPerformanceCapture(bool DumpMemReport);
	static void DumpFullMemReportDelayed(int FrameDelay);
	static void DumpFullMemReport();
	static void DelayForFramesWithDesc(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, int NumFrames, const FString& Description);
	static void DelayForFrames(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, int NumFrames);
	static void CollectGarbageNow(bool FullPurge);
	static void BlockAsyncLoading(bool EnableBlock);
	static void BeginPerformanceCapture(const FString& FolderName, bool DumpMemReport, bool PreventGarbageCollection);
	static void AssertValue_Int(int Actual, TEnumAsByte<EComparisonMethod> ShouldBe, int Expected, const FString& What, UObject* ContextObject);
	static void AssertValue_Float(float Actual, TEnumAsByte<EComparisonMethod> ShouldBe, float Expected, const FString& What, UObject* ContextObject);
	static void AssertValue_DateTime(const FDateTime& Actual, TEnumAsByte<EComparisonMethod> ShouldBe, const FDateTime& Expected, const FString& What, UObject* ContextObject);
	static void AssertTrue(bool Condition, const FString& Message, UObject* ContextObject);
	static void AssertNotEqual_Vector(const FVector& Actual, const FVector& NotExpected, const FString& What, UObject* ContextObject);
	static void AssertNotEqual_Transform(const FTransform& Actual, const FTransform& NotExpected, const FString& What, UObject* ContextObject);
	static void AssertNotEqual_String(const FString& Actual, const FString& NotExpected, const FString& What, UObject* ContextObject);
	static void AssertNotEqual_Rotator(const FRotator& Actual, const FRotator& NotExpected, const FString& What, UObject* ContextObject);
	static void AssertIsValid(UObject* Object, const FString& Message, UObject* ContextObject);
	static void AssertIsNotValid(UObject* Object, const FString& Message, UObject* ContextObject);
	static void AssertFalse(bool Condition, const FString& Message, UObject* ContextObject);
	static void AssertErrorOccurred(const FString& ErrorMessage);
	static void AssertEqual_Vector2D(const FVector2D& Actual, const FVector2D& Expected, const FString& What, float Tolerance, UObject* ContextObject);
	static void AssertEqual_Vector(const FVector& Actual, const FVector& Expected, const FString& What, float Tolerance, UObject* ContextObject);
	static void AssertEqual_Transform(const FTransform& Actual, const FTransform& Expected, const FString& What, UObject* ContextObject);
	static void AssertEqual_String(const FString& Actual, const FString& Expected, const FString& What, UObject* ContextObject);
	static void AssertEqual_Rotator(const FRotator& Actual, const FRotator& Expected, const FString& What, UObject* ContextObject);
	static void AssertEqual_Float(float Actual, float Expected, const FString& What, float Tolerance, UObject* ContextObject);
	static void AddExpectedError(const FString& ErrorMessage);
};


// Class StudiosAutomation.AutomationLatentActionCallback
// 0x0038 (0x0060 - 0x0028)
class UAutomationLatentActionCallback : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.AutomationLatentActionCallback"));
		return ptr;
	}


	void LatentCallback(int Linkage);
};


// Class StudiosAutomation.BPNamedObjectMock
// 0x0000 (0x0028 - 0x0028)
class UBPNamedObjectMock : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.BPNamedObjectMock"));
		return ptr;
	}

};


// Class StudiosAutomation.DummyReplicatedActor
// 0x0000 (0x03D0 - 0x03D0)
class ADummyReplicatedActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.DummyReplicatedActor"));
		return ptr;
	}

};


// Class StudiosAutomation.MapFixtureTestGameMode
// 0x0000 (0x04C8 - 0x04C8)
class AMapFixtureTestGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.MapFixtureTestGameMode"));
		return ptr;
	}

};


// Class StudiosAutomation.ObjectWithSettableWorld
// 0x0008 (0x0030 - 0x0028)
class UObjectWithSettableWorld : public UObject
{
public:
	UWorld*                                            World;                                                    // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.ObjectWithSettableWorld"));
		return ptr;
	}

};


// Class StudiosAutomation.TestUObject
// 0x0000 (0x0028 - 0x0028)
class UTestUObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.TestUObject"));
		return ptr;
	}

};


// Class StudiosAutomation.OtherTestUObject
// 0x0000 (0x0028 - 0x0028)
class UOtherTestUObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.OtherTestUObject"));
		return ptr;
	}

};


// Class StudiosAutomation.RunUnitTestsCommandlet
// 0x0000 (0x0080 - 0x0080)
class URunUnitTestsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.RunUnitTestsCommandlet"));
		return ptr;
	}

};


// Class StudiosAutomation.TestablePlayerController
// 0x0000 (0x0728 - 0x0728)
class ATestablePlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.TestablePlayerController"));
		return ptr;
	}

};


// Class StudiosAutomation.TestablePlayerControllerInterface
// 0x0000 (0x0028 - 0x0028)
class UTestablePlayerControllerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.TestablePlayerControllerInterface"));
		return ptr;
	}

};


// Class StudiosAutomation.TestablePlayerControllerComponent
// 0x0020 (0x00E8 - 0x00C8)
class UTestablePlayerControllerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.TestablePlayerControllerComponent"));
		return ptr;
	}


	void YieldToServer();
	void PerformPostTestCleanup();
	void DisconnectClientFromTest();
};


// Class StudiosAutomation.TestAbstractActor
// 0x0000 (0x03D0 - 0x03D0)
class ATestAbstractActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.TestAbstractActor"));
		return ptr;
	}

};


// Class StudiosAutomation.TestSettings
// 0x0000 (0x0038 - 0x0038)
class UTestSettings : public UDeveloperSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.TestSettings"));
		return ptr;
	}

};


// Class StudiosAutomation.TextureAuditorSettings
// 0x0050 (0x0088 - 0x0038)
class UTextureAuditorSettings : public UTestSettings
{
public:
	TArray<FStringAssetReference>                      SpecificTexturesToNotAudit;                               // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	TArray<FDirectoryPath>                             TextureDirectoriesToNotAudit;                             // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	FTextureAuditorProperties                          DefaultTextureProperties;                                 // 0x0058(0x0020) (Edit, Config)
	TArray<FTextureAuditorGroupProperties>             PerTextureGroupPropertiesOverrides;                       // 0x0078(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.TextureAuditorSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
