#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StudiosAutomation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StudiosAutomation.TestLevelScriptActor.YieldToServer
struct ATestLevelScriptActor_YieldToServer_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FLatentActionInfo                                  LatentInfo;                                               // (Parm)
};

// Function StudiosAutomation.TestLevelScriptActor.YieldToOriginalServer
struct ATestLevelScriptActor_YieldToOriginalServer_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FLatentActionInfo                                  LatentInfo;                                               // (Parm)
};

// Function StudiosAutomation.TestLevelScriptActor.YieldToDynamicServer
struct ATestLevelScriptActor_YieldToDynamicServer_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FLatentActionInfo                                  LatentInfo;                                               // (Parm)
	int                                                ServerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.YieldToClient
struct ATestLevelScriptActor_YieldToClient_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FLatentActionInfo                                  LatentInfo;                                               // (Parm)
	int                                                ClientId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.WaitForPossessionAcknowledgement
struct ATestLevelScriptActor_WaitForPossessionAcknowledgement_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FLatentActionInfo                                  LatentInfo;                                               // (Parm)
};

// Function StudiosAutomation.TestLevelScriptActor.WaitForOtherServers
struct ATestLevelScriptActor_WaitForOtherServers_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FLatentActionInfo                                  LatentInfo;                                               // (Parm)
	int                                                NumberOfServers;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.WaitForClients
struct ATestLevelScriptActor_WaitForClients_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FLatentActionInfo                                  LatentInfo;                                               // (Parm)
	int                                                NumberOfClients;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.TestTriggerServerMigration
struct ATestLevelScriptActor_TestTriggerServerMigration_Params
{
	TArray<AActor*>                                    ActorGroup;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                TargetServerIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.TestCloseConnection
struct ATestLevelScriptActor_TestCloseConnection_Params
{
	int                                                ConnectionIdx;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.SyncClientServer
struct ATestLevelScriptActor_SyncClientServer_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FLatentActionInfo                                  LatentInfo;                                               // (Parm)
	int                                                NumClients;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RegisterPawnsForMPTesting;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ClearPawnInputBindings;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.SpawnActorForMPTesting
struct ATestLevelScriptActor_SpawnActorForMPTesting_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	FRotator                                           SpawnRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.SendServerMigrationTestValueInt32
struct ATestLevelScriptActor_SendServerMigrationTestValueInt32_Params
{
	int                                                TestValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.RegisterPawnsForMPTesting
struct ATestLevelScriptActor_RegisterPawnsForMPTesting_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTestingRecursively
struct ATestLevelScriptActor_RegisterActorForMPTestingRecursively_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTesting
struct ATestLevelScriptActor_RegisterActorForMPTesting_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.PostTestCleanup
struct ATestLevelScriptActor_PostTestCleanup_Params
{
};

// Function StudiosAutomation.TestLevelScriptActor.OnServerMigrationTestValueInt32Received
struct ATestLevelScriptActor_OnServerMigrationTestValueInt32Received_Params
{
	int                                                TestValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationStarted
struct ATestLevelScriptActor_OnOutgoingServerMigrationStarted_Params
{
	FGuid                                              MigrationId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<APlayerController*>                         Players;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationCompleted
struct ATestLevelScriptActor_OnOutgoingServerMigrationCompleted_Params
{
	FGuid                                              MigrationId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationAborted
struct ATestLevelScriptActor_OnOutgoingServerMigrationAborted_Params
{
	FGuid                                              MigrationId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationStarted
struct ATestLevelScriptActor_OnIncomingServerMigrationStarted_Params
{
	FGuid                                              MigrationId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumPlayers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationCompleted
struct ATestLevelScriptActor_OnIncomingServerMigrationCompleted_Params
{
	FGuid                                              MigrationId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<APlayerController*>                         Players;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<AActor*>                                    Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationAborted
struct ATestLevelScriptActor_OnIncomingServerMigrationAborted_Params
{
	FGuid                                              MigrationId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationStarted
struct ATestLevelScriptActor_OnClientServerMigrationStarted_Params
{
	FGuid                                              MigrationId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationCompleted
struct ATestLevelScriptActor_OnClientServerMigrationCompleted_Params
{
	FGuid                                              MigrationId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationAborted
struct ATestLevelScriptActor_OnClientServerMigrationAborted_Params
{
	FGuid                                              MigrationId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.GetServerIndex
struct ATestLevelScriptActor_GetServerIndex_Params
{
	UObject*                                           WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.GetRemoteServerMigrationURL
struct ATestLevelScriptActor_GetRemoteServerMigrationURL_Params
{
	int                                                TargetServerIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function StudiosAutomation.TestLevelScriptActor.GetPlayerIndexFromClientId
struct ATestLevelScriptActor_GetPlayerIndexFromClientId_Params
{
	int                                                ClientId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.GetNumClientsForMultiplayerTest
struct ATestLevelScriptActor_GetNumClientsForMultiplayerTest_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.GetNumAutomationClients
struct ATestLevelScriptActor_GetNumAutomationClients_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.GetClientPawn
struct ATestLevelScriptActor_GetClientPawn_Params
{
	int                                                ClientId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SplitScreenIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	APawn*                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.GetClientId
struct ATestLevelScriptActor_GetClientId_Params
{
	bool                                               ErrorOnFailure;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.DoServerPostTestCleanup
struct ATestLevelScriptActor_DoServerPostTestCleanup_Params
{
};

// Function StudiosAutomation.TestLevelScriptActor.ClearPawnInputBindings
struct ATestLevelScriptActor_ClearPawnInputBindings_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.AddServerOnNewMap
struct ATestLevelScriptActor_AddServerOnNewMap_Params
{
	FString                                            Name;                                                     // (Parm, ZeroConstructor)
	FString                                            MapPath;                                                  // (Parm, ZeroConstructor)
};

// Function StudiosAutomation.TestLevelScriptActor.AddServer
struct ATestLevelScriptActor_AddServer_Params
{
	FString                                            Name;                                                     // (Parm, ZeroConstructor)
};

// Function StudiosAutomation.TestLevelScriptActor.AddClient
struct ATestLevelScriptActor_AddClient_Params
{
	int                                                Port;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            Name;                                                     // (Parm, ZeroConstructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFinished
struct UAutomationBlueprintFunctionLibrary_TestFinished_Params
{
	UObject*                                           ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFailed
struct UAutomationBlueprintFunctionLibrary_TestFailed_Params
{
	FString                                            Message;                                                  // (Parm, ZeroConstructor)
	UObject*                                           ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera
struct UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FLatentActionInfo                                  LatentInfo;                                               // (Parm)
	ACameraActor*                                      Camera;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            NameOverride;                                             // (Parm, ZeroConstructor)
	float                                              DelayBeforeScreenshotSeconds;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot
struct UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FLatentActionInfo                                  LatentInfo;                                               // (Parm)
	FString                                            Name;                                                     // (Parm, ZeroConstructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepStarted
struct UAutomationBlueprintFunctionLibrary_StepStarted_Params
{
	FString                                            StepName;                                                 // (Parm, ZeroConstructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepFinished
struct UAutomationBlueprintFunctionLibrary_StepFinished_Params
{
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.SetTestTimeoutAsFatal
struct UAutomationBlueprintFunctionLibrary_SetTestTimeoutAsFatal_Params
{
	bool                                               TimeoutIsFatal;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.PreventGarbageCollection
struct UAutomationBlueprintFunctionLibrary_PreventGarbageCollection_Params
{
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.OpenLevelWithGameMode
struct UAutomationBlueprintFunctionLibrary_OpenLevelWithGameMode_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            GameMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Absolute;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.LogPlatformMemoryStats
struct UAutomationBlueprintFunctionLibrary_LogPlatformMemoryStats_Params
{
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsTravelFinished
struct UAutomationBlueprintFunctionLibrary_IsTravelFinished_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsFeatureToggleEnabled
struct UAutomationBlueprintFunctionLibrary_IsFeatureToggleEnabled_Params
{
	FName                                              FeatureToggleName;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsEditor
struct UAutomationBlueprintFunctionLibrary_IsEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.HasPerformanceDataBeenCaptured
struct UAutomationBlueprintFunctionLibrary_HasPerformanceDataBeenCaptured_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetTestLevelScriptActor
struct UAutomationBlueprintFunctionLibrary_GetTestLevelScriptActor_Params
{
	bool                                               ErrorOnFailure;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	ATestLevelScriptActor*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetPlayerId
struct UAutomationBlueprintFunctionLibrary_GetPlayerId_Params
{
	APlayerState*                                      State;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetLevelUrl
struct UAutomationBlueprintFunctionLibrary_GetLevelUrl_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetCurrentMapTestName
struct UAutomationBlueprintFunctionLibrary_GetCurrentMapTestName_Params
{
	FString                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.EndPerformanceCapture
struct UAutomationBlueprintFunctionLibrary_EndPerformanceCapture_Params
{
	bool                                               DumpMemReport;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReportDelayed
struct UAutomationBlueprintFunctionLibrary_DumpFullMemReportDelayed_Params
{
	int                                                FrameDelay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReport
struct UAutomationBlueprintFunctionLibrary_DumpFullMemReport_Params
{
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFramesWithDesc
struct UAutomationBlueprintFunctionLibrary_DelayForFramesWithDesc_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FLatentActionInfo                                  LatentInfo;                                               // (Parm)
	int                                                NumFrames;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            Description;                                              // (Parm, ZeroConstructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFrames
struct UAutomationBlueprintFunctionLibrary_DelayForFrames_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FLatentActionInfo                                  LatentInfo;                                               // (Parm)
	int                                                NumFrames;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.CollectGarbageNow
struct UAutomationBlueprintFunctionLibrary_CollectGarbageNow_Params
{
	bool                                               FullPurge;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BlockAsyncLoading
struct UAutomationBlueprintFunctionLibrary_BlockAsyncLoading_Params
{
	bool                                               EnableBlock;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture
struct UAutomationBlueprintFunctionLibrary_BeginPerformanceCapture_Params
{
	FString                                            FolderName;                                               // (Parm, ZeroConstructor)
	bool                                               DumpMemReport;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PreventGarbageCollection;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Int
struct UAutomationBlueprintFunctionLibrary_AssertValue_Int_Params
{
	int                                                Actual;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EComparisonMethod>                     ShouldBe;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Expected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            What;                                                     // (Parm, ZeroConstructor)
	UObject*                                           ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Float
struct UAutomationBlueprintFunctionLibrary_AssertValue_Float_Params
{
	float                                              Actual;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EComparisonMethod>                     ShouldBe;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Expected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            What;                                                     // (Parm, ZeroConstructor)
	UObject*                                           ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_DateTime
struct UAutomationBlueprintFunctionLibrary_AssertValue_DateTime_Params
{
	FDateTime                                          Actual;                                                   // (Parm, ZeroConstructor)
	TEnumAsByte<EComparisonMethod>                     ShouldBe;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FDateTime                                          Expected;                                                 // (Parm, ZeroConstructor)
	FString                                            What;                                                     // (Parm, ZeroConstructor)
	UObject*                                           ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertTrue
struct UAutomationBlueprintFunctionLibrary_AssertTrue_Params
{
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            Message;                                                  // (Parm, ZeroConstructor)
	UObject*                                           ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Vector
struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_Vector_Params
{
	FVector                                            Actual;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            NotExpected;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FString                                            What;                                                     // (Parm, ZeroConstructor)
	UObject*                                           ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Transform
struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_Transform_Params
{
	FTransform                                         Actual;                                                   // (ConstParm, Parm, IsPlainOldData)
	FTransform                                         NotExpected;                                              // (ConstParm, Parm, IsPlainOldData)
	FString                                            What;                                                     // (Parm, ZeroConstructor)
	UObject*                                           ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_String
struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_String_Params
{
	FString                                            Actual;                                                   // (ConstParm, Parm, ZeroConstructor)
	FString                                            NotExpected;                                              // (ConstParm, Parm, ZeroConstructor)
	FString                                            What;                                                     // (Parm, ZeroConstructor)
	UObject*                                           ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Rotator
struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_Rotator_Params
{
	FRotator                                           Actual;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FRotator                                           NotExpected;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FString                                            What;                                                     // (Parm, ZeroConstructor)
	UObject*                                           ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsValid
struct UAutomationBlueprintFunctionLibrary_AssertIsValid_Params
{
	UObject*                                           Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            Message;                                                  // (Parm, ZeroConstructor)
	UObject*                                           ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsNotValid
struct UAutomationBlueprintFunctionLibrary_AssertIsNotValid_Params
{
	UObject*                                           Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            Message;                                                  // (Parm, ZeroConstructor)
	UObject*                                           ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertFalse
struct UAutomationBlueprintFunctionLibrary_AssertFalse_Params
{
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            Message;                                                  // (Parm, ZeroConstructor)
	UObject*                                           ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertErrorOccurred
struct UAutomationBlueprintFunctionLibrary_AssertErrorOccurred_Params
{
	FString                                            ErrorMessage;                                             // (Parm, ZeroConstructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector2D
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Vector2D_Params
{
	FVector2D                                          Actual;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FVector2D                                          Expected;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FString                                            What;                                                     // (Parm, ZeroConstructor)
	float                                              Tolerance;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Vector_Params
{
	FVector                                            Actual;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Expected;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FString                                            What;                                                     // (Parm, ZeroConstructor)
	float                                              Tolerance;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Transform
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Transform_Params
{
	FTransform                                         Actual;                                                   // (ConstParm, Parm, IsPlainOldData)
	FTransform                                         Expected;                                                 // (ConstParm, Parm, IsPlainOldData)
	FString                                            What;                                                     // (Parm, ZeroConstructor)
	UObject*                                           ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_String
struct UAutomationBlueprintFunctionLibrary_AssertEqual_String_Params
{
	FString                                            Actual;                                                   // (ConstParm, Parm, ZeroConstructor)
	FString                                            Expected;                                                 // (ConstParm, Parm, ZeroConstructor)
	FString                                            What;                                                     // (Parm, ZeroConstructor)
	UObject*                                           ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Rotator
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Rotator_Params
{
	FRotator                                           Actual;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FRotator                                           Expected;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FString                                            What;                                                     // (Parm, ZeroConstructor)
	UObject*                                           ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Float
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Float_Params
{
	float                                              Actual;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Expected;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FString                                            What;                                                     // (Parm, ZeroConstructor)
	float                                              Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AddExpectedError
struct UAutomationBlueprintFunctionLibrary_AddExpectedError_Params
{
	FString                                            ErrorMessage;                                             // (Parm, ZeroConstructor)
};

// Function StudiosAutomation.AutomationLatentActionCallback.LatentCallback
struct UAutomationLatentActionCallback_LatentCallback_Params
{
	int                                                Linkage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestablePlayerControllerComponent.YieldToServer
struct UTestablePlayerControllerComponent_YieldToServer_Params
{
};

// Function StudiosAutomation.TestablePlayerControllerComponent.PerformPostTestCleanup
struct UTestablePlayerControllerComponent_PerformPostTestCleanup_Params
{
};

// Function StudiosAutomation.TestablePlayerControllerComponent.DisconnectClientFromTest
struct UTestablePlayerControllerComponent_DisconnectClientFromTest_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
