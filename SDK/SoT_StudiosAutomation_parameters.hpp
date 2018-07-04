#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StudiosAutomation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StudiosAutomation.TestablePlayerController.YieldToServer
struct ATestablePlayerController_YieldToServer_Params
{
};

// Function StudiosAutomation.TestablePlayerController.PerformPostTestCleanup
struct ATestablePlayerController_PerformPostTestCleanup_Params
{
};

// Function StudiosAutomation.TestablePlayerController.DisconnectClientFromTest
struct ATestablePlayerController_DisconnectClientFromTest_Params
{
};

// Function StudiosAutomation.TestLevelScriptActor.YieldToServer
struct ATestLevelScriptActor_YieldToServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function StudiosAutomation.TestLevelScriptActor.YieldToOriginalServer
struct ATestLevelScriptActor_YieldToOriginalServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function StudiosAutomation.TestLevelScriptActor.YieldToDynamicServer
struct ATestLevelScriptActor_YieldToDynamicServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	int                                                ServerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.YieldToClient
struct ATestLevelScriptActor_YieldToClient_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	int                                                ClientId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.WaitForPossessionAcknowledgement
struct ATestLevelScriptActor_WaitForPossessionAcknowledgement_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function StudiosAutomation.TestLevelScriptActor.WaitForOtherServers
struct ATestLevelScriptActor_WaitForOtherServers_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	int                                                NumberOfServers;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.WaitForClients
struct ATestLevelScriptActor_WaitForClients_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	int                                                NumberOfClients;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.TestTriggerServerMigration
struct ATestLevelScriptActor_TestTriggerServerMigration_Params
{
	TArray<class AActor*>                              ActorGroup;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                TargetServerIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.SyncClientServer
struct ATestLevelScriptActor_SyncClientServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	int                                                NumClients;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RegisterPawnsForMPTesting;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ClearPawnInputBindings;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.SpawnActorForMPTesting
struct ATestLevelScriptActor_SpawnActorForMPTesting_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.SendServerMigrationTestValueInt32
struct ATestLevelScriptActor_SendServerMigrationTestValueInt32_Params
{
	int                                                TestValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.RegisterPawnsForMPTesting
struct ATestLevelScriptActor_RegisterPawnsForMPTesting_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTestingRecursively
struct ATestLevelScriptActor_RegisterActorForMPTestingRecursively_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTesting
struct ATestLevelScriptActor_RegisterActorForMPTesting_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
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
	struct FGuid                                       MigrationId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APlayerController*>                   Players;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationCompleted
struct ATestLevelScriptActor_OnOutgoingServerMigrationCompleted_Params
{
	struct FGuid                                       MigrationId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationAborted
struct ATestLevelScriptActor_OnOutgoingServerMigrationAborted_Params
{
	struct FGuid                                       MigrationId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationStarted
struct ATestLevelScriptActor_OnIncomingServerMigrationStarted_Params
{
	struct FGuid                                       MigrationId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumPlayers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationCompleted
struct ATestLevelScriptActor_OnIncomingServerMigrationCompleted_Params
{
	struct FGuid                                       MigrationId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APlayerController*>                   Players;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationAborted
struct ATestLevelScriptActor_OnIncomingServerMigrationAborted_Params
{
	struct FGuid                                       MigrationId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationStarted
struct ATestLevelScriptActor_OnClientServerMigrationStarted_Params
{
	struct FGuid                                       MigrationId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationCompleted
struct ATestLevelScriptActor_OnClientServerMigrationCompleted_Params
{
	struct FGuid                                       MigrationId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationAborted
struct ATestLevelScriptActor_OnClientServerMigrationAborted_Params
{
	struct FGuid                                       MigrationId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.GetServerIndex
struct ATestLevelScriptActor_GetServerIndex_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.GetRemoteServerMigrationURL
struct ATestLevelScriptActor_GetRemoteServerMigrationURL_Params
{
	int                                                TargetServerIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
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
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
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
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.TestLevelScriptActor.AddServer
struct ATestLevelScriptActor_AddServer_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function StudiosAutomation.TestLevelScriptActor.AddClient
struct ATestLevelScriptActor_AddClient_Params
{
	int                                                Port;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFinished
struct UAutomationBlueprintFunctionLibrary_TestFinished_Params
{
	class UObject*                                     ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFailed
struct UAutomationBlueprintFunctionLibrary_TestFailed_Params
{
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
	class UObject*                                     ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera
struct UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	class ACameraActor*                                Camera;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      NameOverride;                                             // (Parm, ZeroConstructor)
	float                                              DelayBeforeScreenshotSeconds;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot
struct UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepStarted
struct UAutomationBlueprintFunctionLibrary_StepStarted_Params
{
	class FString                                      StepName;                                                 // (Parm, ZeroConstructor)
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

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.OpenLevelWithGameMode
struct UAutomationBlueprintFunctionLibrary_OpenLevelWithGameMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GameMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Absolute;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsTravelFinished
struct UAutomationBlueprintFunctionLibrary_IsTravelFinished_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
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
	class ATestLevelScriptActor*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetPlayerId
struct UAutomationBlueprintFunctionLibrary_GetPlayerId_Params
{
	class APlayerState*                                State;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetLevelUrl
struct UAutomationBlueprintFunctionLibrary_GetLevelUrl_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetCurrentMapTestName
struct UAutomationBlueprintFunctionLibrary_GetCurrentMapTestName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.EndPerformanceCapture
struct UAutomationBlueprintFunctionLibrary_EndPerformanceCapture_Params
{
	bool                                               DumpMemReport;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReport
struct UAutomationBlueprintFunctionLibrary_DumpFullMemReport_Params
{
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFramesWithDesc
struct UAutomationBlueprintFunctionLibrary_DelayForFramesWithDesc_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	int                                                NumFrames;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Description;                                              // (Parm, ZeroConstructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFrames
struct UAutomationBlueprintFunctionLibrary_DelayForFrames_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	int                                                NumFrames;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BlockAsyncLoading
struct UAutomationBlueprintFunctionLibrary_BlockAsyncLoading_Params
{
	bool                                               EnableBlock;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture
struct UAutomationBlueprintFunctionLibrary_BeginPerformanceCapture_Params
{
	class FString                                      FolderName;                                               // (Parm, ZeroConstructor)
	bool                                               DumpMemReport;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PreventGarbageCollection;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Int
struct UAutomationBlueprintFunctionLibrary_AssertValue_Int_Params
{
	int                                                Actual;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EComparisonMethod>                     ShouldBe;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Expected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      What;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Float
struct UAutomationBlueprintFunctionLibrary_AssertValue_Float_Params
{
	float                                              Actual;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EComparisonMethod>                     ShouldBe;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Expected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      What;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_DateTime
struct UAutomationBlueprintFunctionLibrary_AssertValue_DateTime_Params
{
	struct FDateTime                                   Actual;                                                   // (Parm, ZeroConstructor)
	TEnumAsByte<EComparisonMethod>                     ShouldBe;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   Expected;                                                 // (Parm, ZeroConstructor)
	class FString                                      What;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertTrue
struct UAutomationBlueprintFunctionLibrary_AssertTrue_Params
{
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
	class UObject*                                     ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Vector
struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_Vector_Params
{
	struct FVector                                     Actual;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NotExpected;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      What;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Transform
struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_Transform_Params
{
	struct FTransform                                  Actual;                                                   // (ConstParm, Parm, IsPlainOldData)
	struct FTransform                                  NotExpected;                                              // (ConstParm, Parm, IsPlainOldData)
	class FString                                      What;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_String
struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_String_Params
{
	class FString                                      Actual;                                                   // (ConstParm, Parm, ZeroConstructor)
	class FString                                      NotExpected;                                              // (ConstParm, Parm, ZeroConstructor)
	class FString                                      What;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Rotator
struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_Rotator_Params
{
	struct FRotator                                    Actual;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NotExpected;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      What;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsValid
struct UAutomationBlueprintFunctionLibrary_AssertIsValid_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
	class UObject*                                     ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsNotValid
struct UAutomationBlueprintFunctionLibrary_AssertIsNotValid_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
	class UObject*                                     ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertFalse
struct UAutomationBlueprintFunctionLibrary_AssertFalse_Params
{
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
	class UObject*                                     ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertErrorOccurred
struct UAutomationBlueprintFunctionLibrary_AssertErrorOccurred_Params
{
	class FString                                      ErrorMessage;                                             // (Parm, ZeroConstructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector2D
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Vector2D_Params
{
	struct FVector2D                                   Actual;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Expected;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      What;                                                     // (Parm, ZeroConstructor)
	float                                              Tolerance;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Vector_Params
{
	struct FVector                                     Actual;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Expected;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      What;                                                     // (Parm, ZeroConstructor)
	float                                              Tolerance;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Transform
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Transform_Params
{
	struct FTransform                                  Actual;                                                   // (ConstParm, Parm, IsPlainOldData)
	struct FTransform                                  Expected;                                                 // (ConstParm, Parm, IsPlainOldData)
	class FString                                      What;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_String
struct UAutomationBlueprintFunctionLibrary_AssertEqual_String_Params
{
	class FString                                      Actual;                                                   // (ConstParm, Parm, ZeroConstructor)
	class FString                                      Expected;                                                 // (ConstParm, Parm, ZeroConstructor)
	class FString                                      What;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Rotator
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Rotator_Params
{
	struct FRotator                                    Actual;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Expected;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      What;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Float
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Float_Params
{
	float                                              Actual;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Expected;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      What;                                                     // (Parm, ZeroConstructor)
	float                                              Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AddExpectedError
struct UAutomationBlueprintFunctionLibrary_AddExpectedError_Params
{
	class FString                                      ErrorMessage;                                             // (Parm, ZeroConstructor)
};

// Function StudiosAutomation.AutomationLatentActionCallback.LatentCallback
struct UAutomationLatentActionCallback_LatentCallback_Params
{
	int                                                Linkage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
