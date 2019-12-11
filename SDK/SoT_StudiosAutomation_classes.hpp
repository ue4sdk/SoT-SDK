#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StudiosAutomation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class StudiosAutomation.TestablePlayerController
// 0x0000 (0x0768 - 0x0768)
class ATestablePlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.TestablePlayerController"));
		return ptr;
	}


	void YieldToServer();
	void PerformPostTestCleanup();
	void DisconnectClientFromTest();
};


// Class StudiosAutomation.TestLevelScriptActor
// 0x00C0 (0x04D8 - 0x0418)
class ATestLevelScriptActor : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0418(0x0008) MISSED OFFSET
	TEnumAsByte<ETestCategory>                         Category;                                                 // 0x0420(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETestArea>                             Area;                                                     // 0x0421(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               VisualTest;                                               // 0x0422(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RunInEditor;                                              // 0x0423(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RunOnServer;                                              // 0x0424(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresServices;                                         // 0x0425(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0426(0x0002) MISSED OFFSET
	TArray<struct FTestLevelMetadataEntry>             AdditionalMetadata;                                       // 0x0428(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EPerformanceCaptureType>               CaptureType;                                              // 0x0438(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETestAutomationPlayModeOverride>       PlayModeOverride;                                         // 0x0439(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x043A(0x0002) MISSED OFFSET
	float                                              TestTimeout;                                              // 0x043C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TestPausedTimeout;                                        // 0x0440(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	TArray<class FString>                              VerboseLogCategories;                                     // 0x0448(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        ClientsRunning;                                           // 0x0458(0x0010) (Net, ZeroConstructor)
	TArray<int>                                        ClientIds;                                                // 0x0468(0x0010) (Net, ZeroConstructor)
	TArray<struct FClientPawnDetails>                  ClientPawns;                                              // 0x0478(0x0010) (Net, ZeroConstructor)
	TArray<class AActor*>                              SpawnedActors;                                            // 0x0488(0x0010) (Net, ZeroConstructor)
	int                                                NextSpawnedActorIndex;                                    // 0x0498(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3C];                                      // 0x049C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.TestLevelScriptActor"));
		return ptr;
	}


	static void YieldToServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void YieldToOriginalServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void YieldToDynamicServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int ServerIndex);
	static void YieldToClient(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int ClientId);
	static void WaitForPossessionAcknowledgement(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void WaitForOtherServers(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumberOfServers);
	static void WaitForClients(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumberOfClients);
	void TestTriggerServerMigration(TArray<class AActor*> ActorGroup, int TargetServerIndex);
	bool TestCloseConnection(int ConnectionIdx);
	static void SyncClientServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumClients, bool RegisterPawnsForMPTesting, bool ClearPawnInputBindings);
	static class AActor* SpawnActorForMPTesting(class UObject* WorldContextObject, class UClass* ActorClass, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	void SendServerMigrationTestValueInt32(int TestValue);
	static void RegisterPawnsForMPTesting(class UObject* WorldContextObject);
	void RegisterActorForMPTestingRecursively(class AActor* TargetActor);
	void RegisterActorForMPTesting(class AActor* TargetActor);
	void PostTestCleanup();
	void OnServerMigrationTestValueInt32Received(int TestValue);
	void OnOutgoingServerMigrationStarted(const struct FGuid& MigrationId, TArray<class APlayerController*> Players);
	void OnOutgoingServerMigrationCompleted(const struct FGuid& MigrationId);
	void OnOutgoingServerMigrationAborted(const struct FGuid& MigrationId);
	void OnIncomingServerMigrationStarted(const struct FGuid& MigrationId, int NumPlayers);
	void OnIncomingServerMigrationCompleted(const struct FGuid& MigrationId, TArray<class APlayerController*> Players, TArray<class AActor*> Actors);
	void OnIncomingServerMigrationAborted(const struct FGuid& MigrationId);
	void OnClientServerMigrationStarted(const struct FGuid& MigrationId);
	void OnClientServerMigrationCompleted(const struct FGuid& MigrationId);
	void OnClientServerMigrationAborted(const struct FGuid& MigrationId);
	int GetServerIndex(class UObject* WorldContextObject);
	class FString GetRemoteServerMigrationURL(int TargetServerIndex);
	int GetPlayerIndexFromClientId(int ClientId);
	int GetNumClientsForMultiplayerTest();
	int GetNumAutomationClients();
	class APawn* GetClientPawn(int ClientId, int SplitScreenIndex);
	int GetClientId(bool ErrorOnFailure);
	void DoServerPostTestCleanup();
	static void ClearPawnInputBindings(class UObject* WorldContextObject);
	void AddServer(const class FString& Name);
	void AddClient(int Port, const class FString& Name);
};


// Class StudiosAutomation.ActorThatLogsErrorWhenTicked
// 0x0000 (0x0410 - 0x0410)
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


	static void TestFinished(class UObject* ContextObject);
	static void TestFailed(const class FString& Message, class UObject* ContextObject);
	static void TakeAutomationScreenshotAtCamera(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ACameraActor* Camera, const class FString& NameOverride, float DelayBeforeScreenshotSeconds);
	static void TakeAutomationScreenshot(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const class FString& Name);
	static void StepStarted(const class FString& StepName);
	static void StepFinished();
	static void SetTestTimeoutAsFatal(bool TimeoutIsFatal);
	static void OpenLevelWithGameMode(class UObject* WorldContextObject, const struct FName& LevelName, class UClass* GameMode, bool Absolute);
	static bool IsTravelFinished(class UObject* WorldContextObject);
	static bool IsEditor();
	static bool HasPerformanceDataBeenCaptured();
	static class ATestLevelScriptActor* GetTestLevelScriptActor(bool ErrorOnFailure);
	static int GetPlayerId(class APlayerState* State);
	static class FString GetLevelUrl(class UObject* WorldContextObject);
	static class FString GetCurrentMapTestName();
	static void EndPerformanceCapture(bool DumpMemReport);
	static void DumpFullMemReportDelayed(int FrameDelay);
	static void DumpFullMemReport();
	static void DelayForFramesWithDesc(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumFrames, const class FString& Description);
	static void DelayForFrames(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumFrames);
	static void CollectGarbageNow(bool FullPurge);
	static void BlockAsyncLoading(bool EnableBlock);
	static void BeginPerformanceCapture(const class FString& FolderName, bool DumpMemReport, bool PreventGarbageCollection);
	static void AssertValue_Int(int Actual, TEnumAsByte<EComparisonMethod> ShouldBe, int Expected, const class FString& What, class UObject* ContextObject);
	static void AssertValue_Float(float Actual, TEnumAsByte<EComparisonMethod> ShouldBe, float Expected, const class FString& What, class UObject* ContextObject);
	static void AssertValue_DateTime(const struct FDateTime& Actual, TEnumAsByte<EComparisonMethod> ShouldBe, const struct FDateTime& Expected, const class FString& What, class UObject* ContextObject);
	static void AssertTrue(bool Condition, const class FString& Message, class UObject* ContextObject);
	static void AssertNotEqual_Vector(const struct FVector& Actual, const struct FVector& NotExpected, const class FString& What, class UObject* ContextObject);
	static void AssertNotEqual_Transform(const struct FTransform& Actual, const struct FTransform& NotExpected, const class FString& What, class UObject* ContextObject);
	static void AssertNotEqual_String(const class FString& Actual, const class FString& NotExpected, const class FString& What, class UObject* ContextObject);
	static void AssertNotEqual_Rotator(const struct FRotator& Actual, const struct FRotator& NotExpected, const class FString& What, class UObject* ContextObject);
	static void AssertIsValid(class UObject* Object, const class FString& Message, class UObject* ContextObject);
	static void AssertIsNotValid(class UObject* Object, const class FString& Message, class UObject* ContextObject);
	static void AssertFalse(bool Condition, const class FString& Message, class UObject* ContextObject);
	static void AssertErrorOccurred(const class FString& ErrorMessage);
	static void AssertEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& Expected, const class FString& What, float Tolerance, class UObject* ContextObject);
	static void AssertEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const class FString& What, float Tolerance, class UObject* ContextObject);
	static void AssertEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const class FString& What, class UObject* ContextObject);
	static void AssertEqual_String(const class FString& Actual, const class FString& Expected, const class FString& What, class UObject* ContextObject);
	static void AssertEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const class FString& What, class UObject* ContextObject);
	static void AssertEqual_Float(float Actual, float Expected, const class FString& What, float Tolerance, class UObject* ContextObject);
	static void AddExpectedError(const class FString& ErrorMessage);
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


// Class StudiosAutomation.MapFixtureTestGameMode
// 0x0000 (0x0508 - 0x0508)
class AMapFixtureTestGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.MapFixtureTestGameMode"));
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


// Class StudiosAutomation.TestAbstractActor
// 0x0000 (0x0410 - 0x0410)
class ATestAbstractActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StudiosAutomation.TestAbstractActor"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
