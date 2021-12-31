#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AIModule_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AIModule.PathFollowingComponent.OnActorBump
struct UPathFollowingComponent_OnActorBump_Params
{
	AActor*                                            SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	FHitResult                                         Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AIModule.PathFollowingComponent.GetPathDestination
struct UPathFollowingComponent_GetPathDestination_Params
{
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.PathFollowingComponent.GetPathActionType
struct UPathFollowingComponent_GetPathActionType_Params
{
	TEnumAsByte<EPathFollowingAction>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
struct UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Params
{
	FAIRequestID                                       RequestID;                                                // (Parm)
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
struct UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params
{
	UAnimInstance*                                     AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUnlockMovement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UnlockAILogic;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
struct UAIBlueprintHelperLibrary_SpawnAIFromClass_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            PawnClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UBehaviorTree*                                     BehaviorTree;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FRotator                                           Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNoCollisionFail;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	APawn*                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
struct UAIBlueprintHelperLibrary_SendAIMessage_Params
{
	APawn*                                             Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              Message;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           MessageSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
struct UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params
{
	UAnimInstance*                                     AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMovement;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LockAILogic;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
struct UAIBlueprintHelperLibrary_IsValidAIRotation_Params
{
	FRotator                                           Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
struct UAIBlueprintHelperLibrary_IsValidAILocation_Params
{
	FVector                                            Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
struct UAIBlueprintHelperLibrary_IsValidAIDirection_Params
{
	FVector                                            DirectionVector;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
struct UAIBlueprintHelperLibrary_GetBlackboard_Params
{
	AActor*                                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	UBlackboardComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.GetAIController
struct UAIBlueprintHelperLibrary_GetAIController_Params
{
	AActor*                                            ControlledActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	AAIController*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
struct UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APawn*                                             Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AcceptanceRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopOnOverlap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	UAIAsyncTaskBlueprintProxy*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.PawnActionsComponent.K2_PushAction
struct UPawnActionsComponent_K2_PushAction_Params
{
	UPawnAction*                                       NewAction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIRequestPriority>                    Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.PawnActionsComponent.K2_PerformAction
struct UPawnActionsComponent_K2_PerformAction_Params
{
	APawn*                                             Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	UPawnAction*                                       Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIRequestPriority>                    Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.PawnActionsComponent.K2_ForceAbortAction
struct UPawnActionsComponent_K2_ForceAbortAction_Params
{
	UPawnAction*                                       ActionToAbort;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPawnActionAbortState>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.PawnActionsComponent.K2_AbortAction
struct UPawnActionsComponent_K2_AbortAction_Params
{
	UPawnAction*                                       ActionToAbort;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPawnActionAbortState>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.UseBlackboard
struct AAIController_UseBlackboard_Params
{
	UBlackboardData*                                   BlackboardAsset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	UBlackboardComponent*                              BlackboardComponent;                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.SetMoveBlockDetection
struct AAIController_SetMoveBlockDetection_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIController.RunBehaviorTree
struct AAIController_RunBehaviorTree_Params
{
	UBehaviorTree*                                     BTAsset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.OnUsingBlackBoard
struct AAIController_OnUsingBlackBoard_Params
{
	UBlackboardComponent*                              BlackboardComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	UBlackboardData*                                   BlackboardAsset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIController.OnPossess
struct AAIController_OnPossess_Params
{
	APawn*                                             PossessedPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
struct AAIController_OnGameplayTaskResourcesClaimed_Params
{
	FGameplayResourceSet                               NewlyClaimed;                                             // (Parm)
	FGameplayResourceSet                               FreshlyReleased;                                          // (Parm)
};

// Function AIModule.AIController.MoveToLocation
struct AAIController_MoveToLocation_Params
{
	FVector                                            Dest;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              AcceptanceRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopOnOverlap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePathfinding;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProjectDestinationToNavigation;                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanStrafe;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowPartialPath;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPathFollowingRequestResult>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.MoveToActor
struct AAIController_MoveToActor_Params
{
	AActor*                                            Goal;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AcceptanceRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopOnOverlap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePathfinding;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanStrafe;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowPartialPath;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPathFollowingRequestResult>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.K2_SetFocus
struct AAIController_K2_SetFocus_Params
{
	AActor*                                            NewFocus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIController.K2_SetFocalPoint
struct AAIController_K2_SetFocalPoint_Params
{
	FVector                                            FP;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIController.K2_ClearFocus
struct AAIController_K2_ClearFocus_Params
{
};

// Function AIModule.AIController.HasPartialPath
struct AAIController_HasPartialPath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.GetPathFollowingComponent
struct AAIController_GetPathFollowingComponent_Params
{
	UPathFollowingComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AIModule.AIController.GetMoveStatus
struct AAIController_GetMoveStatus_Params
{
	TEnumAsByte<EPathFollowingStatus>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.GetImmediateMoveDestination
struct AAIController_GetImmediateMoveDestination_Params
{
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.GetFocusActor
struct AAIController_GetFocusActor_Params
{
	AActor*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.GetFocalPointOnActor
struct AAIController_GetFocalPointOnActor_Params
{
	AActor*                                            Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.GetFocalPoint
struct AAIController_GetFocalPoint_Params
{
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.GetAIPerceptionComponent
struct AAIController_GetAIPerceptionComponent_Params
{
	UAIPerceptionComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AIModule.AISystem.AILoggingVerbose
struct UAISystem_AILoggingVerbose_Params
{
};

// Function AIModule.AISystem.AIIgnorePlayers
struct UAISystem_AIIgnorePlayers_Params
{
};

// Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
struct UAIPerceptionSystem_ReportPerceptionEvent_Params
{
	UObject*                                           WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	UAISenseEvent*                                     PerceptionEvent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIPerceptionSystem.ReportEvent
struct UAIPerceptionSystem_ReportEvent_Params
{
	UAISenseEvent*                                     PerceptionEvent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
struct UAIPerceptionSystem_RegisterPerceptionStimuliSource_Params
{
	UObject*                                           WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            Sense;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
struct UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
struct UAIPerceptionSystem_GetSenseClassForStimulus_Params
{
	UObject*                                           WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FAIStimulus                                        Stimulus;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	UClass*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
struct UAIPerceptionComponent_RequestStimuliListenerUpdate_Params
{
};

// Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
struct UAIPerceptionComponent_OnOwnerEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIPerceptionComponent.IsIgnored
struct UAIPerceptionComponent_IsIgnored_Params
{
	AActor*                                            Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
struct UAIPerceptionComponent_GetPerceivedHostileActors_Params
{
	TArray<AActor*>                                    OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function AIModule.AIPerceptionComponent.GetPerceivedActors
struct UAIPerceptionComponent_GetPerceivedActors_Params
{
	UClass*                                            SenseToUse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<AActor*>                                    OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function AIModule.AIPerceptionComponent.GetActorsPerception
struct UAIPerceptionComponent_GetActorsPerception_Params
{
	AActor*                                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FActorPerceptionBlueprintInfo                      Info;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
struct UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Params
{
	UClass*                                            SenseClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
struct UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Params
{
};

// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
struct UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Params
{
};

// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
struct UAIPerceptionStimuliSourceComponent_RegisterForSense_Params
{
	UClass*                                            SenseClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AISense_Blueprint.OnUpdate
struct UAISense_Blueprint_OnUpdate_Params
{
	TArray<UAISenseEvent*>                             EventsToProcess;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AISense_Blueprint.OnListenerUpdated
struct UAISense_Blueprint_OnListenerUpdated_Params
{
	AActor*                                            ActorListener;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	UAIPerceptionComponent*                            PerceptionComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AIModule.AISense_Blueprint.OnListenerUnregistered
struct UAISense_Blueprint_OnListenerUnregistered_Params
{
	AActor*                                            ActorListener;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	UAIPerceptionComponent*                            PerceptionComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AIModule.AISense_Blueprint.OnListenerRegistered
struct UAISense_Blueprint_OnListenerRegistered_Params
{
	AActor*                                            ActorListener;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	UAIPerceptionComponent*                            PerceptionComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AIModule.AISense_Blueprint.K2_OnNewPawn
struct UAISense_Blueprint_K2_OnNewPawn_Params
{
	APawn*                                             NewPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AISense_Blueprint.GetAllListenerComponents
struct UAISense_Blueprint_GetAllListenerComponents_Params
{
	TArray<UAIPerceptionComponent*>                    ListenerComponents;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function AIModule.AISense_Blueprint.GetAllListenerActors
struct UAISense_Blueprint_GetAllListenerActors_Params
{
	TArray<AActor*>                                    ListenerActors;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function AIModule.AISense_Damage.ReportDamageEvent
struct UAISense_Damage_ReportDamageEvent_Params
{
	UObject*                                           WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            EventLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AISense_Hearing.ReportNoiseEvent
struct UAISense_Hearing_ReportNoiseEvent_Params
{
	UObject*                                           WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            NoiseLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Loudness;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
struct UAISense_Prediction_RequestPawnPredictionEvent_Params
{
	APawn*                                             Requestor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            PredictedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PredictionTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
struct UAISense_Prediction_RequestControllerPredictionEvent_Params
{
	AAIController*                                     Requestor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            PredictedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PredictionTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AITask_MoveTo.AIMoveTo
struct UAITask_MoveTo_AIMoveTo_Params
{
	AAIController*                                     Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            GoalLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            GoalActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AcceptanceRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIOptionFlag>                         StopOnOverlap;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIOptionFlag>                         AcceptPartialPath;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePathfinding;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLockAILogic;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	UAITask_MoveTo*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BrainComponent.StopLogic
struct UBrainComponent_StopLogic_Params
{
	FString                                            Reason;                                                   // (Parm, ZeroConstructor)
};

// Function AIModule.BrainComponent.RestartLogic
struct UBrainComponent_RestartLogic_Params
{
};

// Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
struct UBehaviorTreeComponent_SetDynamicSubtree_Params
{
	FGameplayTag                                       InjectTag;                                                // (Parm)
	UBehaviorTree*                                     BehaviorAsset;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
struct UBehaviorTreeComponent_GetTagCooldownEndTime_Params
{
	FGameplayTag                                       CooldownTag;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
struct UBehaviorTreeComponent_AddCooldownTagDuration_Params
{
	FGameplayTag                                       CooldownTag;                                              // (Parm)
	float                                              CoolDownDuration;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsVector
struct UBlackboardComponent_SetValueAsVector_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FVector                                            VectorValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsString
struct UBlackboardComponent_SetValueAsString_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FString                                            StringValue;                                              // (Parm, ZeroConstructor)
};

// Function AIModule.BlackboardComponent.SetValueAsRotator
struct UBlackboardComponent_SetValueAsRotator_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FRotator                                           VectorValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsObject
struct UBlackboardComponent_SetValueAsObject_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	UObject*                                           ObjectValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsName
struct UBlackboardComponent_SetValueAsName_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FName                                              NameValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsInt
struct UBlackboardComponent_SetValueAsInt_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                IntValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsFloat
struct UBlackboardComponent_SetValueAsFloat_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              FloatValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsEnum
struct UBlackboardComponent_SetValueAsEnum_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	unsigned char                                      EnumValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsClass
struct UBlackboardComponent_SetValueAsClass_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	UClass*                                            ClassValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsBool
struct UBlackboardComponent_SetValueAsBool_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               BoolValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.IsVectorValueSet
struct UBlackboardComponent_IsVectorValueSet_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsVector
struct UBlackboardComponent_GetValueAsVector_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsString
struct UBlackboardComponent_GetValueAsString_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FString                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AIModule.BlackboardComponent.GetValueAsRotator
struct UBlackboardComponent_GetValueAsRotator_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FRotator                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsObject
struct UBlackboardComponent_GetValueAsObject_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	UObject*                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsName
struct UBlackboardComponent_GetValueAsName_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FName                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsInt
struct UBlackboardComponent_GetValueAsInt_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsFloat
struct UBlackboardComponent_GetValueAsFloat_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsEnum
struct UBlackboardComponent_GetValueAsEnum_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsClass
struct UBlackboardComponent_GetValueAsClass_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	UClass*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsBool
struct UBlackboardComponent_GetValueAsBool_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetRotationFromEntry
struct UBlackboardComponent_GetRotationFromEntry_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FRotator                                           ResultRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetLocationFromEntry
struct UBlackboardComponent_GetLocationFromEntry_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FVector                                            ResultLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.ClearValueAsVector
struct UBlackboardComponent_ClearValueAsVector_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.ClearValueAsRotator
struct UBlackboardComponent_ClearValueAsRotator_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.ClearValue
struct UBlackboardComponent_ClearValue_Params
{
	FName                                              KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
struct UBTFunctionLibrary_StopUsingExternalEvent_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
struct UBTFunctionLibrary_StartUsingExternalEvent_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            OwningActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
struct UBTFunctionLibrary_SetBlackboardValueAsVector_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	FVector                                            Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
struct UBTFunctionLibrary_SetBlackboardValueAsString_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	FString                                            Value;                                                    // (Parm, ZeroConstructor)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
struct UBTFunctionLibrary_SetBlackboardValueAsRotator_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	FRotator                                           Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
struct UBTFunctionLibrary_SetBlackboardValueAsObject_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	UObject*                                           Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
struct UBTFunctionLibrary_SetBlackboardValueAsName_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	FName                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
struct UBTFunctionLibrary_SetBlackboardValueAsInt_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
struct UBTFunctionLibrary_SetBlackboardValueAsFloat_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
struct UBTFunctionLibrary_SetBlackboardValueAsEnum_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	unsigned char                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
struct UBTFunctionLibrary_SetBlackboardValueAsClass_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	UClass*                                            Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
struct UBTFunctionLibrary_SetBlackboardValueAsBool_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
struct UBTFunctionLibrary_GetOwnersBlackboard_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UBlackboardComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetOwnerComponent
struct UBTFunctionLibrary_GetOwnerComponent_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UBehaviorTreeComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
struct UBTFunctionLibrary_GetBlackboardValueAsVector_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
struct UBTFunctionLibrary_GetBlackboardValueAsString_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	FString                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
struct UBTFunctionLibrary_GetBlackboardValueAsRotator_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	FRotator                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
struct UBTFunctionLibrary_GetBlackboardValueAsObject_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	UObject*                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
struct UBTFunctionLibrary_GetBlackboardValueAsName_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	FName                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
struct UBTFunctionLibrary_GetBlackboardValueAsInt_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
struct UBTFunctionLibrary_GetBlackboardValueAsFloat_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
struct UBTFunctionLibrary_GetBlackboardValueAsEnum_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
struct UBTFunctionLibrary_GetBlackboardValueAsClass_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	UClass*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
struct UBTFunctionLibrary_GetBlackboardValueAsBool_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
struct UBTFunctionLibrary_GetBlackboardValueAsActor_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	AActor*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
struct UBTFunctionLibrary_ClearBlackboardValueAsVector_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AIModule.BTFunctionLibrary.ClearBlackboardValue
struct UBTFunctionLibrary_ClearBlackboardValue_Params
{
	UBTNode*                                           NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
struct UBTDecorator_BlueprintBase_ReceiveTickAI_Params
{
	AAIController*                                     OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	APawn*                                             ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
struct UBTDecorator_BlueprintBase_ReceiveTick_Params
{
	AActor*                                            OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
struct UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params
{
	AAIController*                                     OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	APawn*                                             ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
struct UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params
{
	AActor*                                            OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
struct UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params
{
	AAIController*                                     OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	APawn*                                             ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
struct UBTDecorator_BlueprintBase_ReceiveObserverActivated_Params
{
	AActor*                                            OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
struct UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params
{
	AAIController*                                     OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	APawn*                                             ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
struct UBTDecorator_BlueprintBase_ReceiveExecutionStart_Params
{
	AActor*                                            OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
struct UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params
{
	AAIController*                                     OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	APawn*                                             ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBTNodeResult>                         NodeResult;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
struct UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Params
{
	AActor*                                            OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBTNodeResult>                         NodeResult;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveConditionCheck
struct UBTDecorator_BlueprintBase_ReceiveConditionCheck_Params
{
	AActor*                                            OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
struct UBTDecorator_BlueprintBase_PerformConditionCheckAI_Params
{
	AAIController*                                     OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	APawn*                                             ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
struct UBTDecorator_BlueprintBase_PerformConditionCheck_Params
{
	AActor*                                            OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
struct UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
struct UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.FinishConditionCheck
struct UBTDecorator_BlueprintBase_FinishConditionCheck_Params
{
	bool                                               bAllowExecution;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveTickAI
struct UBTService_BlueprintBase_ReceiveTickAI_Params
{
	AAIController*                                     OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	APawn*                                             ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveTick
struct UBTService_BlueprintBase_ReceiveTick_Params
{
	AActor*                                            OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
struct UBTService_BlueprintBase_ReceiveSearchStartAI_Params
{
	AAIController*                                     OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	APawn*                                             ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
struct UBTService_BlueprintBase_ReceiveSearchStart_Params
{
	AActor*                                            OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
struct UBTService_BlueprintBase_ReceiveDeactivationAI_Params
{
	AAIController*                                     OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	APawn*                                             ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
struct UBTService_BlueprintBase_ReceiveDeactivation_Params
{
	AActor*                                            OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
struct UBTService_BlueprintBase_ReceiveActivationAI_Params
{
	AAIController*                                     OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	APawn*                                             ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveActivation
struct UBTService_BlueprintBase_ReceiveActivation_Params
{
	AActor*                                            OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.IsServiceActive
struct UBTService_BlueprintBase_IsServiceActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
struct UBTTask_BlueprintBase_SetFinishOnMessageWithId_Params
{
	FName                                              MessageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RequestID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
struct UBTTask_BlueprintBase_SetFinishOnMessage_Params
{
	FName                                              MessageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
struct UBTTask_BlueprintBase_ReceiveTickAI_Params
{
	AAIController*                                     OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	APawn*                                             ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveTick
struct UBTTask_BlueprintBase_ReceiveTick_Params
{
	AActor*                                            OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
struct UBTTask_BlueprintBase_ReceiveExecuteAI_Params
{
	AAIController*                                     OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	APawn*                                             ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveExecute
struct UBTTask_BlueprintBase_ReceiveExecute_Params
{
	AActor*                                            OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
struct UBTTask_BlueprintBase_ReceiveAbortAI_Params
{
	AAIController*                                     OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	APawn*                                             ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveAbort
struct UBTTask_BlueprintBase_ReceiveAbort_Params
{
	AActor*                                            OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
struct UBTTask_BlueprintBase_IsTaskExecuting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.IsTaskAborting
struct UBTTask_BlueprintBase_IsTaskAborting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.FinishExecute
struct UBTTask_BlueprintBase_FinishExecute_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.FinishAbort
struct UBTTask_BlueprintBase_FinishAbort_Params
{
};

// Function AIModule.PawnAction.GetActionPriority
struct UPawnAction_GetActionPriority_Params
{
	TEnumAsByte<EAIRequestPriority>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.PawnAction.Finish
struct UPawnAction_Finish_Params
{
	TEnumAsByte<EPawnActionResult>                     WithResult;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.PawnAction.CreateActionInstance
struct UPawnAction_CreateActionInstance_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            ActionClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	UPawnAction*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
struct UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Params
{
	AActor*                                            QuerierActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            ResultingLocation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
struct UEnvQueryContext_BlueprintBase_ProvideSingleActor_Params
{
	AActor*                                            QuerierActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            ResultingActor;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
struct UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Params
{
	AActor*                                            QuerierActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FVector>                                    ResultingLocationSet;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
struct UEnvQueryContext_BlueprintBase_ProvideActorsSet_Params
{
	AActor*                                            QuerierActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<AActor*>                                    ResultingActorsSet;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
struct UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params
{
	TArray<FVector>                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
struct UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params
{
	TArray<AActor*>                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
struct UEnvQueryInstanceBlueprintWrapper_GetItemScore_Params
{
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
struct UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params
{
	UEnvQueryInstanceBlueprintWrapper*                 QueryInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.EnvQueryManager.RunEQSQuery
struct UEnvQueryManager_RunEQSQuery_Params
{
	UObject*                                           WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	UEnvQuery*                                         QueryTemplate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           Querier;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            WrapperClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	UEnvQueryInstanceBlueprintWrapper*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
struct UEnvQueryGenerator_BlueprintBase_GetQuerier_Params
{
	UObject*                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
struct UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Params
{
	TArray<FVector>                                    ContextLocations;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
struct UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params
{
	FVector                                            GeneratedVector;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
struct UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params
{
	AActor*                                            GeneratedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
struct UCrowdFollowingComponent_SuspendCrowdSteering_Params
{
	bool                                               bSuspend;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.PawnAction_BlueprintBase.ActionTick
struct UPawnAction_BlueprintBase_ActionTick_Params
{
	APawn*                                             ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.PawnAction_BlueprintBase.ActionStart
struct UPawnAction_BlueprintBase_ActionStart_Params
{
	APawn*                                             ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.PawnAction_BlueprintBase.ActionResume
struct UPawnAction_BlueprintBase_ActionResume_Params
{
	APawn*                                             ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.PawnAction_BlueprintBase.ActionPause
struct UPawnAction_BlueprintBase_ActionPause_Params
{
	APawn*                                             ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.PawnAction_BlueprintBase.ActionFinished
struct UPawnAction_BlueprintBase_ActionFinished_Params
{
	APawn*                                             ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPawnActionResult>                     WithResult;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
struct UPawnSensingComponent_SetSensingUpdatesEnabled_Params
{
	bool                                               bEnabled;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.PawnSensingComponent.SetSensingInterval
struct UPawnSensingComponent_SetSensingInterval_Params
{
	float                                              NewSensingInterval;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
struct UPawnSensingComponent_SetPeripheralVisionAngle_Params
{
	float                                              NewPeripheralVisionAngle;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
struct UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Params
{
	APawn*                                             Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
struct UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params
{
	APawn*                                             Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
struct UPawnSensingComponent_GetPeripheralVisionCosine_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
struct UPawnSensingComponent_GetPeripheralVisionAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
