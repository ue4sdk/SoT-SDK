#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AIModule_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AIModule.BTNode
// 0x0030 (0x0058 - 0x0028)
class UBTNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class FString                                      NodeName;                                                 // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class UBehaviorTree*                               TreeAsset;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTNode");
		return ptr;
	}

};


// Class AIModule.BTAuxiliaryNode
// 0x0008 (0x0060 - 0x0058)
class UBTAuxiliaryNode : public UBTNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTAuxiliaryNode");
		return ptr;
	}

};


// Class AIModule.BTDecorator
// 0x0008 (0x0068 - 0x0060)
class UBTDecorator : public UBTAuxiliaryNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	unsigned char                                      UnknownData01 : 7;                                        // 0x01E3(0x0001)
	unsigned char                                      bInverseCondition : 1;                                    // 0x01E3(0x0001) (Edit)
	TEnumAsByte<EBTFlowAbortMode>                      FlowAbortMode;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator");
		return ptr;
	}

};


// Class AIModule.BTDecorator_BlackboardBase
// 0x0028 (0x0090 - 0x0068)
class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_BlackboardBase");
		return ptr;
	}

};


// Class AIModule.BTService
// 0x0010 (0x0070 - 0x0060)
class UBTService : public UBTAuxiliaryNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	float                                              Interval;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCallTickOnSearchStart : 1;                               // 0x01E3(0x0001) (Edit)
	unsigned char                                      bRestartTimerOnEachActivation : 1;                        // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService");
		return ptr;
	}

};


// Class AIModule.BTTaskNode
// 0x0008 (0x0060 - 0x0058)
class UBTTaskNode : public UBTNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTaskNode");
		return ptr;
	}

};


// Class AIModule.BTTask_BlackboardBase
// 0x0028 (0x0088 - 0x0060)
class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_BlackboardBase");
		return ptr;
	}

};


// Class AIModule.BTTask_RunEQSQuery
// 0x0020 (0x00A8 - 0x0088)
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	class UEnvQuery*                                   QueryTemplate;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RunEQSQuery");
		return ptr;
	}

};


// Class AIModule.EnvQueryContext
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext");
		return ptr;
	}

};


// Class AIModule.EnvQueryNode
// 0x0008 (0x0030 - 0x0028)
class UEnvQueryNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryNode");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator
// 0x0018 (0x0048 - 0x0030)
class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	class FString                                      OptionName;                                               // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      ItemType;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest
// 0x0140 (0x0170 - 0x0030)
class UEnvQueryTest : public UEnvQueryNode
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	int                                                TestOrder;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvTestPurpose>                       TestPurpose;                                              // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTestFilterOperator>                MultipleContextFilterOp;                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTestScoreOperator>                 MultipleContextScoreOp;                                   // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTestFilterType>                    FilterType;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderBoolValue                    BoolValue;                                                // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   FloatValueMin;                                            // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   FloatValueMax;                                            // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	TEnumAsByte<EEnvTestScoreEquation>                 ScoringEquation;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMinType;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMaxType;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderFloatValue                   ScoreClampMin;                                            // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ScoreClampMax;                                            // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ScoringFactor;                                            // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      bWorkOnFloatValues : 1;                                   // 0x01E3(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest");
		return ptr;
	}

};


// Class AIModule.AIResourceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIResourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIResourceInterface");
		return ptr;
	}

};


// Class AIModule.PathFollowingComponent
// 0x01C8 (0x0298 - 0x00D0)
class UPathFollowingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UNavMovementComponent*                       MovementComp;                                             // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class ANavigationData*                             MyNavData;                                                // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bUseVisibilityTestsSimplification : 1;                    // 0x01E3(0x0001) (Config)
	unsigned char                                      UnknownData01[0xB4];                                      // 0x01E4(0x00B4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PathFollowingComponent");
		return ptr;
	}


	void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	struct FVector GetPathDestination();
	TEnumAsByte<EPathFollowingAction> GetPathActionType();
};


// Class AIModule.AIAsyncTaskBlueprintProxy
// 0x0038 (0x0060 - 0x0028)
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIAsyncTaskBlueprintProxy");
		return ptr;
	}


	void OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> MovementResult);
};


// Class AIModule.AIBlueprintHelperLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIBlueprintHelperLibrary");
		return ptr;
	}


	void STATIC_UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
	class APawn* STATIC_SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail);
	void STATIC_SendAIMessage(class APawn* Target, const struct FName& Message, class UObject* MessageSource, bool bSuccess);
	void STATIC_LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
	bool STATIC_IsValidAIRotation(const struct FRotator& Rotation);
	bool STATIC_IsValidAILocation(const struct FVector& Location);
	bool STATIC_IsValidAIDirection(const struct FVector& DirectionVector);
	class UBlackboardComponent* STATIC_GetBlackboard(class AActor* Target);
	class AAIController* STATIC_GetAIController(class AActor* ControlledActor);
	class UAIAsyncTaskBlueprintProxy* STATIC_CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
};


// Class AIModule.PawnActionsComponent
// 0x0038 (0x0108 - 0x00D0)
class UPawnActionsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class APawn*                                       ControlledPawn;                                           // 0x01E3(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPawnActionStack>                    ActionStacks;                                             // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FPawnActionEvent>                    ActionEvents;                                             // 0x01E3(0x0010) (ZeroConstructor)
	class UPawnAction*                                 CurrentAction;                                            // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnActionsComponent");
		return ptr;
	}


	bool K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, class UObject* Instigator);
	bool STATIC_K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority);
	TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(class UPawnAction* ActionToAbort);
	TEnumAsByte<EPawnActionAbortState> K2_AbortAction(class UPawnAction* ActionToAbort);
};


// Class AIModule.AIPerceptionListenerInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPerceptionListenerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionListenerInterface");
		return ptr;
	}

};


// Class AIModule.BehaviorTreeTypes
// 0x0000 (0x0028 - 0x0028)
class UBehaviorTreeTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTreeTypes");
		return ptr;
	}

};


// Class AIModule.GenericTeamAgentInterface
// 0x0000 (0x0028 - 0x0028)
class UGenericTeamAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.GenericTeamAgentInterface");
		return ptr;
	}

};


// Class AIModule.AIController
// 0x0078 (0x0548 - 0x04D0)
class AAIController : public AController
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x04D0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIController");
		return ptr;
	}


	bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent);
	void SetMoveBlockDetection(bool bEnable);
	bool RunBehaviorTree(class UBehaviorTree* BTAsset);
	void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
	void OnPossess(class APawn* PossessedPawn);
	void OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased);
	TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	TEnumAsByte<EPathFollowingRequestResult> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	void K2_SetFocus(class AActor* NewFocus);
	void K2_SetFocalPoint(const struct FVector& FP);
	void K2_ClearFocus();
	bool HasPartialPath();
	class UPathFollowingComponent* GetPathFollowingComponent();
	TEnumAsByte<EPathFollowingStatus> GetMoveStatus();
	struct FVector GetImmediateMoveDestination();
	class AActor* GetFocusActor();
	struct FVector GetFocalPointOnActor(class AActor* Actor);
	struct FVector GetFocalPoint();
	class UAIPerceptionComponent* GetAIPerceptionComponent();
};


// Class AIModule.DetourCrowdAIController
// 0x0000 (0x0548 - 0x0548)
class ADetourCrowdAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.DetourCrowdAIController");
		return ptr;
	}

};


// Class AIModule.AIDataProvider
// 0x0000 (0x0028 - 0x0028)
class UAIDataProvider : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIDataProvider");
		return ptr;
	}

};


// Class AIModule.AIDataProvider_QueryParams
// 0x0018 (0x0040 - 0x0028)
class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FName                                       ParamName;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIDataProvider_QueryParams");
		return ptr;
	}

};


// Class AIModule.AIHotSpotManager
// 0x0000 (0x0028 - 0x0028)
class UAIHotSpotManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIHotSpotManager");
		return ptr;
	}

};


// Class AIModule.AISystem
// 0x00B0 (0x00F0 - 0x0040)
class UAISystem : public UAISystemBase
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FStringClassReference                       PerceptionSystemClassName;                                // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FStringClassReference                       HotSpotManagerClassName;                                  // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	float                                              AcceptanceRadius;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bFinishMoveOnGoalOverlap;                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAcceptPartialPaths;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAllowStrafing;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bEnableBTAITasks;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	class UBehaviorTreeManager*                        BehaviorTreeManager;                                      // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UEnvQueryManager*                            EnvironmentQueryManager;                                  // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAIPerceptionSystem*                         PerceptionSystem;                                         // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UAIAsyncTaskBlueprintProxy*>          AllProxyObjects;                                          // 0x01E3(0x0010) (ZeroConstructor, Transient)
	class UAIHotSpotManager*                           HotSpotManager;                                           // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISystem");
		return ptr;
	}


	void AILoggingVerbose();
	void AIIgnorePlayers();
};


// Class AIModule.AISense
// 0x0060 (0x0088 - 0x0028)
class UAISense : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FColor                                      DebugDrawColor;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class FString                                      DebugName;                                                // 0x01E3(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              DefaultExpirationAge;                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EAISenseNotifyType>                    NotifyType;                                               // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bWantsNewPawnNotification : 1;                            // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bAutoRegisterAllPawnsAsSources : 1;                       // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense");
		return ptr;
	}

};


// Class AIModule.AIPerceptionSystem
// 0x0100 (0x0128 - 0x0028)
class UAIPerceptionSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<class UAISense*>                            Senses;                                                   // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionSystem");
		return ptr;
	}


	void STATIC_ReportPerceptionEvent(class UObject* WorldContext, class UAISenseEvent* PerceptionEvent);
	void ReportEvent(class UAISenseEvent* PerceptionEvent);
	bool STATIC_RegisterPerceptionStimuliSource(class UObject* WorldContext, class UClass* Sense, class AActor* Target);
	void OnPerceptionStimuliSourceEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	class UClass* STATIC_GetSenseClassForStimulus(class UObject* WorldContext, const struct FAIStimulus& Stimulus);
};


// Class AIModule.AIPerceptionComponent
// 0x0100 (0x01D0 - 0x00D0)
class UAIPerceptionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	float                                              HearingRange;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              LoSHearingRange;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              SightRadius;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              LoseSightRadius;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              PeripheralVisionAngle;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	TArray<class UAISenseConfig*>                      SensesConfig;                                             // 0x01E3(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      DominantSense;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AAIController*                               AIOwner;                                                  // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPerceptionUpdated;                                      // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTargetPerceptionUpdated;                                // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionComponent");
		return ptr;
	}


	void RequestStimuliListenerUpdate();
	void OnOwnerEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	bool IsIgnored(class AActor* Actor);
	void GetPerceivedHostileActors(TArray<class AActor*>* OutActors);
	void GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	bool GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info);
};


// Class AIModule.AIPerceptionStimuliSourceComponent
// 0x0018 (0x00E8 - 0x00D0)
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	unsigned char                                      bAutoRegisterAsSource : 1;                                // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config)
	TArray<class UClass*>                              RegisterAsSourceForSenses;                                // 0x01E3(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionStimuliSourceComponent");
		return ptr;
	}


	void UnregisterFromSense(class UClass* SenseClass);
	void UnregisterFromPerceptionSystem();
	void RegisterWithPerceptionSystem();
	void RegisterForSense(class UClass* SenseClass);
};


// Class AIModule.AIResource_Movement
// 0x0000 (0x0038 - 0x0038)
class UAIResource_Movement : public UGameplayTaskResource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIResource_Movement");
		return ptr;
	}

};


// Class AIModule.AIResource_Logic
// 0x0000 (0x0038 - 0x0038)
class UAIResource_Logic : public UGameplayTaskResource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIResource_Logic");
		return ptr;
	}

};


// Class AIModule.AISense_Blueprint
// 0x0028 (0x00B0 - 0x0088)
class UAISense_Blueprint : public UAISense
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	class UClass*                                      ListenerDataType;                                         // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAIPerceptionComponent*>              ListenerContainer;                                        // 0x01E3(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class UAISenseEvent*>                       UnprocessedEvents;                                        // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Blueprint");
		return ptr;
	}


	float OnUpdate(TArray<class UAISenseEvent*> EventsToProcess);
	void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void K2_OnNewPawn(class APawn* NewPawn);
	void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents);
	void GetAllListenerActors(TArray<class AActor*>* ListenerActors);
};


// Class AIModule.AISense_Damage
// 0x0010 (0x0098 - 0x0088)
class UAISense_Damage : public UAISense
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	TArray<struct FAIDamageEvent>                      RegisteredEvents;                                         // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Damage");
		return ptr;
	}


	void STATIC_ReportDamageEvent(class UObject* WorldContext, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation);
};


// Class AIModule.AISense_Hearing
// 0x0098 (0x0120 - 0x0088)
class UAISense_Hearing : public UAISense
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	int                                                MaxNoisesPerTick;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNoisesStored;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FAINoiseEvent>                       NoiseEventsArrayA;                                        // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FAINoiseEvent>                       NoiseEventsArrayB;                                        // 0x01E3(0x0010) (ZeroConstructor)
	float                                              SpeedOfSoundSq;                                           // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Hearing");
		return ptr;
	}


	void STATIC_ReportNoiseEvent(class UObject* WorldContext, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const struct FName& Tag);
};


// Class AIModule.AISense_Prediction
// 0x0010 (0x0098 - 0x0088)
class UAISense_Prediction : public UAISense
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	TArray<struct FAIPredictionEvent>                  RegisteredEvents;                                         // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Prediction");
		return ptr;
	}


	void STATIC_RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);
	void STATIC_RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime);
};


// Class AIModule.AISense_Sight
// 0x00C8 (0x0150 - 0x0088)
class UAISense_Sight : public UAISense
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	int                                                MaxTracesPerTick;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HighImportanceQueryDistanceThreshold;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxQueryImportance;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SightLimitQueryImportance;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Sight");
		return ptr;
	}

};


// Class AIModule.AISense_Team
// 0x0010 (0x0098 - 0x0088)
class UAISense_Team : public UAISense
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	TArray<struct FAITeamStimulusEvent>                RegisteredEvents;                                         // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Team");
		return ptr;
	}

};


// Class AIModule.AISense_Touch
// 0x0010 (0x0098 - 0x0088)
class UAISense_Touch : public UAISense
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	TArray<struct FAITouchEvent>                       RegisteredEvents;                                         // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Touch");
		return ptr;
	}

};


// Class AIModule.AISenseBlueprintListener
// 0x0000 (0x00A8 - 0x00A8)
class UAISenseBlueprintListener : public UUserDefinedStruct
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseBlueprintListener");
		return ptr;
	}

};


// Class AIModule.AISenseConfig
// 0x0008 (0x0030 - 0x0028)
class UAISenseConfig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              MaxAge;                                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Blueprint
// 0x0008 (0x0038 - 0x0030)
class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	class UClass*                                      Implementation;                                           // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Blueprint");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Damage
// 0x0008 (0x0038 - 0x0030)
class UAISenseConfig_Damage : public UAISenseConfig
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	class UClass*                                      Implementation;                                           // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Damage");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Hearing
// 0x0018 (0x0048 - 0x0030)
class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	class UClass*                                      Implementation;                                           // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
	float                                              HearingRange;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoSHearingRange;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUseLoSHearing : 1;                                       // 0x01E3(0x0001)
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Hearing");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Prediction
// 0x0000 (0x0030 - 0x0030)
class UAISenseConfig_Prediction : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Prediction");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Sight
// 0x0020 (0x0050 - 0x0030)
class UAISenseConfig_Sight : public UAISenseConfig
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	class UClass*                                      Implementation;                                           // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
	float                                              SightRadius;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              LoseSightRadius;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PeripheralVisionAngleDegrees;                             // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoSuccessRangeFromLastSeenLocation;                     // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Sight");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Team
// 0x0000 (0x0030 - 0x0030)
class UAISenseConfig_Team : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Team");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Touch
// 0x0000 (0x0030 - 0x0030)
class UAISenseConfig_Touch : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Touch");
		return ptr;
	}

};


// Class AIModule.AISenseEvent
// 0x0000 (0x0028 - 0x0028)
class UAISenseEvent : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseEvent");
		return ptr;
	}

};


// Class AIModule.AISenseEvent_Damage
// 0x0030 (0x0058 - 0x0028)
class UAISenseEvent_Damage : public UAISenseEvent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseEvent_Damage");
		return ptr;
	}

};


// Class AIModule.AISenseEvent_Hearing
// 0x0030 (0x0058 - 0x0028)
class UAISenseEvent_Hearing : public UAISenseEvent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseEvent_Hearing");
		return ptr;
	}

};


// Class AIModule.AISightTargetInterface
// 0x0000 (0x0028 - 0x0028)
class UAISightTargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISightTargetInterface");
		return ptr;
	}

};


// Class AIModule.AITask
// 0x0008 (0x0060 - 0x0058)
class UAITask : public UGameplayTask
{
public:
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	class AAIController*                               OwnerController;                                          // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask");
		return ptr;
	}

};


// Class AIModule.AITask_MoveTo
// 0x0050 (0x00B0 - 0x0060)
class UAITask_MoveTo : public UAITask
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRequestFailed;                                          // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMoveFinished;                                           // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector                                     MoveGoalLocation;                                         // 0x01E3(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      MoveGoalActor;                                            // 0x01E3(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MoveAcceptanceRadius;                                     // 0x01E3(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldStopOnOverlap;                                     // 0x01E3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldAcceptPartialPath;                                 // 0x01E3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldUsePathfinding;                                    // 0x01E3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask_MoveTo");
		return ptr;
	}


	class UAITask_MoveTo* STATIC_AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic);
};


// Class AIModule.BrainComponent
// 0x0060 (0x0130 - 0x00D0)
class UBrainComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UBlackboardComponent*                        BlackboardComp;                                           // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AAIController*                               AIOwner;                                                  // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BrainComponent");
		return ptr;
	}


	void StopLogic(const class FString& Reason);
	void RestartLogic();
};


// Class AIModule.BehaviorTreeComponent
// 0x0138 (0x0268 - 0x0130)
class UBehaviorTreeComponent : public UBrainComponent
{
public:
	unsigned char                                      UnknownData00[0xB3];                                      // 0x0130(0x00B3) MISSED OFFSET
	TArray<class UBTNode*>                             NodeInstances;                                            // 0x01E3(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x75];                                      // 0x01F3(0x0075) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTreeComponent");
		return ptr;
	}


	void SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset);
	float GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag);
	void AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
};


// Class AIModule.BTCompositeNode
// 0x0030 (0x0088 - 0x0058)
class UBTCompositeNode : public UBTNode
{
public:
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	TArray<struct FBTCompositeChild>                   Children;                                                 // 0x01E3(0x0010) (ZeroConstructor)
	TArray<class UBTService*>                          Services;                                                 // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTCompositeNode");
		return ptr;
	}

};


// Class AIModule.BehaviorTree
// 0x0038 (0x0060 - 0x0028)
class UBehaviorTree : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UBTCompositeNode*                            RootNode;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlackboardData*                             BlackboardAsset;                                          // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UBTDecorator*>                        RootDecorators;                                           // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTree");
		return ptr;
	}

};


// Class AIModule.BehaviorTreeManager
// 0x0028 (0x0050 - 0x0028)
class UBehaviorTreeManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	int                                                MaxDebuggerSteps;                                         // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FBehaviorTreeTemplateInfo>           LoadedTemplates;                                          // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTreeManager");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType
// 0x0008 (0x0030 - 0x0028)
class UBlackboardKeyType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Enum
// 0x0020 (0x0050 - 0x0030)
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	class UEnum*                                       EnumType;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      EnumName;                                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Enum");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_NativeEnum
// 0x0018 (0x0048 - 0x0030)
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	class FString                                      EnumName;                                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_NativeEnum");
		return ptr;
	}

};


// Class AIModule.BlackboardData
// 0x0020 (0x0048 - 0x0028)
class UBlackboardData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UBlackboardData*                             Parent;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBlackboardEntry>                    Keys;                                                     // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardData");
		return ptr;
	}

};


// Class AIModule.BlackboardComponent
// 0x0148 (0x0218 - 0x00D0)
class UBlackboardComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UBrainComponent*                             BrainComp;                                                // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UBlackboardData*                             BlackboardAsset;                                          // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UBlackboardKeyType*>                  KeyInstances;                                             // 0x01E3(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x25];                                      // 0x01F3(0x0025) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardComponent");
		return ptr;
	}


	void SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue);
	void SetValueAsString(const struct FName& KeyName, const class FString& StringValue);
	void SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue);
	void SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue);
	void SetValueAsName(const struct FName& KeyName, const struct FName& NameValue);
	void SetValueAsInt(const struct FName& KeyName, int IntValue);
	void SetValueAsFloat(const struct FName& KeyName, float FloatValue);
	void SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue);
	void SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue);
	void SetValueAsBool(const struct FName& KeyName, bool BoolValue);
	bool IsVectorValueSet(const struct FName& KeyName);
	struct FVector GetValueAsVector(const struct FName& KeyName);
	class FString GetValueAsString(const struct FName& KeyName);
	struct FRotator GetValueAsRotator(const struct FName& KeyName);
	class UObject* GetValueAsObject(const struct FName& KeyName);
	struct FName GetValueAsName(const struct FName& KeyName);
	int GetValueAsInt(const struct FName& KeyName);
	float GetValueAsFloat(const struct FName& KeyName);
	unsigned char GetValueAsEnum(const struct FName& KeyName);
	class UClass* GetValueAsClass(const struct FName& KeyName);
	bool GetValueAsBool(const struct FName& KeyName);
	bool GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation);
	bool GetLocationFromEntry(const struct FName& KeyName, struct FVector* ResultLocation);
	void ClearValueAsVector(const struct FName& KeyName);
	void ClearValueAsRotator(const struct FName& KeyName);
	void ClearValue(const struct FName& KeyName);
};


// Class AIModule.BlackboardKeyType_Bool
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Bool");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Class
// 0x0008 (0x0038 - 0x0030)
class UBlackboardKeyType_Class : public UBlackboardKeyType
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Class");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Float
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Float : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Float");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Int
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Int : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Int");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Name
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Name : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Name");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Object
// 0x0008 (0x0038 - 0x0030)
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Object");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Rotator
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Rotator");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_String
// 0x0010 (0x0040 - 0x0030)
class UBlackboardKeyType_String : public UBlackboardKeyType
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_String");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Vector
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Vector");
		return ptr;
	}

};


// Class AIModule.BTFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTFunctionLibrary");
		return ptr;
	}


	void STATIC_StopUsingExternalEvent(class UBTNode* NodeOwner);
	void STATIC_StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);
	void STATIC_SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value);
	void STATIC_SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const class FString& Value);
	void STATIC_SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value);
	void STATIC_SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value);
	void STATIC_SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FName& Value);
	void STATIC_SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int Value);
	void STATIC_SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value);
	void STATIC_SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value);
	void STATIC_SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value);
	void STATIC_SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value);
	class UBlackboardComponent* STATIC_GetOwnersBlackboard(class UBTNode* NodeOwner);
	class UBehaviorTreeComponent* STATIC_GetOwnerComponent(class UBTNode* NodeOwner);
	struct FVector STATIC_GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class FString STATIC_GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FRotator STATIC_GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class UObject* STATIC_GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FName STATIC_GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	int STATIC_GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	float STATIC_GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	unsigned char STATIC_GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class UClass* STATIC_GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	bool STATIC_GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class AActor* STATIC_GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	void STATIC_ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	void STATIC_ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
};


// Class AIModule.BTDecorator_Blackboard
// 0x0030 (0x00C0 - 0x0090)
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	int                                                IntValue;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      StringValue;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class FString                                      CachedDescription;                                        // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      OperationType;                                            // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBTBlackboardRestart>                  NotifyObserver;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_Blackboard");
		return ptr;
	}

};


// Class AIModule.BTDecorator_ConditionalLoop
// 0x0000 (0x00C0 - 0x00C0)
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ConditionalLoop");
		return ptr;
	}

};


// Class AIModule.BTDecorator_IsAtLocation
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	float                                              AcceptableRadius;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseNavAgentGoalLocation;                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_IsAtLocation");
		return ptr;
	}

};


// Class AIModule.BTDecorator_IsBBEntryOfClass
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	class UClass*                                      TestClass;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_IsBBEntryOfClass");
		return ptr;
	}

};


// Class AIModule.BTDecorator_BlueprintBase
// 0x0038 (0x00A0 - 0x0068)
class UBTDecorator_BlueprintBase : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	class AAIController*                               AIOwner;                                                  // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FName>                               ObservedKeyNames;                                         // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x01E3(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      bCheckConditionOnlyBlackBoardChanges : 1;                 // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIsObservingBB : 1;                                       // 0x01E3(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_BlueprintBase");
		return ptr;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverDeactivated(class AActor* OwnerActor);
	void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverActivated(class AActor* OwnerActor);
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionStart(class AActor* OwnerActor);
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult);
	void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);
	void ReceiveConditionCheck(class AActor* OwnerActor);
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	bool PerformConditionCheck(class AActor* OwnerActor);
	bool IsDecoratorObserverActive();
	bool IsDecoratorExecutionActive();
	void FinishConditionCheck(bool bAllowExecution);
};


// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// 0x0068 (0x00D0 - 0x0068)
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	struct FBlackboardKeySelector                      ActorToCheck;                                             // 0x01E3(0x0028) (Edit)
	TEnumAsByte<EGameplayContainerMatchType>           TagsToMatch;                                              // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x01E3(0x0028) (Edit)
	class FString                                      CachedDescription;                                        // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_CheckGameplayTagsOnActor");
		return ptr;
	}

};


// Class AIModule.BTDecorator_CompareBBEntries
// 0x0058 (0x00C0 - 0x0068)
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	TEnumAsByte<EBlackBoardEntryComparison>            Operator;                                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      BlackboardKeyA;                                           // 0x01E3(0x0028) (Edit)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                           // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_CompareBBEntries");
		return ptr;
	}

};


// Class AIModule.BTDecorator_ConeCheck
// 0x0088 (0x00F0 - 0x0068)
class UBTDecorator_ConeCheck : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	float                                              ConeHalfAngle;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x01E3(0x0028) (Edit)
	struct FBlackboardKeySelector                      ConeDirection;                                            // 0x01E3(0x0028) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ConeCheck");
		return ptr;
	}

};


// Class AIModule.BTDecorator_Cooldown
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_Cooldown : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	float                                              CoolDownTime;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_Cooldown");
		return ptr;
	}

};


// Class AIModule.BTDecorator_DoesPathExist
// 0x0060 (0x00C8 - 0x0068)
class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKeyA;                                           // 0x01E3(0x0028) (Edit)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                           // 0x01E3(0x0028) (Edit)
	unsigned char                                      bUseSelf : 1;                                             // 0x01E3(0x0001)
	TEnumAsByte<EPathExistanceQueryType>               PathQueryType;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_DoesPathExist");
		return ptr;
	}

};


// Class AIModule.BTDecorator_ForceSuccess
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_ForceSuccess : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ForceSuccess");
		return ptr;
	}

};


// Class AIModule.BTDecorator_KeepInCone
// 0x0060 (0x00C8 - 0x0068)
class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	float                                              ConeHalfAngle;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x01E3(0x0028) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x01E3(0x0028) (Edit)
	unsigned char                                      bUseSelfAsOrigin : 1;                                     // 0x01E3(0x0001)
	unsigned char                                      bUseSelfAsObserved : 1;                                   // 0x01E3(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_KeepInCone");
		return ptr;
	}

};


// Class AIModule.BTDecorator_Loop
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_Loop : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	int                                                NumLoops;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInfiniteLoop;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_Loop");
		return ptr;
	}

};


// Class AIModule.BTDecorator_ReachedMoveGoal
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ReachedMoveGoal");
		return ptr;
	}

};


// Class AIModule.BTDecorator_SetTagCooldown
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_SetTagCooldown : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	struct FGameplayTag                                CooldownTag;                                              // 0x01E3(0x0008) (Edit)
	float                                              CooldownDuration;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_SetTagCooldown");
		return ptr;
	}

};


// Class AIModule.BTDecorator_TagCooldown
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_TagCooldown : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	struct FGameplayTag                                CooldownTag;                                              // 0x01E3(0x0008) (Edit)
	float                                              CooldownDuration;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bActivatesCooldown;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_TagCooldown");
		return ptr;
	}

};


// Class AIModule.BTDecorator_TimeLimit
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_TimeLimit : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	float                                              TimeLimit;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_TimeLimit");
		return ptr;
	}

};


// Class AIModule.BTService_BlackboardBase
// 0x0028 (0x0098 - 0x0070)
class UBTService_BlackboardBase : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_BlackboardBase");
		return ptr;
	}

};


// Class AIModule.BTService_DefaultFocus
// 0x0008 (0x00A0 - 0x0098)
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x14B];                                     // 0x0098(0x014B) MISSED OFFSET
	unsigned char                                      FocusPriority;                                            // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_DefaultFocus");
		return ptr;
	}

};


// Class AIModule.BTService_BlueprintBase
// 0x0028 (0x0098 - 0x0070)
class UBTService_BlueprintBase : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	class AAIController*                               AIOwner;                                                  // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x01E3(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      bShowEventDetails : 1;                                    // 0x01E3(0x0001) (Edit, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_BlueprintBase");
		return ptr;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveSearchStart(class AActor* OwnerActor);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveActivation(class AActor* OwnerActor);
	bool IsServiceActive();
};


// Class AIModule.BTComposite_Selector
// 0x0000 (0x0088 - 0x0088)
class UBTComposite_Selector : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTComposite_Selector");
		return ptr;
	}

};


// Class AIModule.BTComposite_Sequence
// 0x0000 (0x0088 - 0x0088)
class UBTComposite_Sequence : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTComposite_Sequence");
		return ptr;
	}

};


// Class AIModule.BTComposite_SimpleParallel
// 0x0008 (0x0090 - 0x0088)
class UBTComposite_SimpleParallel : public UBTCompositeNode
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	TEnumAsByte<EBTParallelMode>                       FinishMode;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTComposite_SimpleParallel");
		return ptr;
	}

};


// Class AIModule.BTTask_MoveDirectlyToward
// 0x0008 (0x0090 - 0x0088)
class UBTTask_MoveDirectlyToward : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	float                                              AcceptableRadius;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bDisablePathUpdateOnGoalLocationChange : 1;               // 0x01E3(0x0001) (Edit)
	unsigned char                                      bProjectVectorGoalToNavigation : 1;                       // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x01E3(0x0001) (Edit)
	unsigned char                                      bStopOnOverlap : 1;                                       // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_MoveDirectlyToward");
		return ptr;
	}

};


// Class AIModule.BTTask_MoveTo
// 0x0018 (0x00A0 - 0x0088)
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	float                                              AcceptableRadius;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAllowPartialPath : 1;                                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      bStopOnOverlap : 1;                                       // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_MoveTo");
		return ptr;
	}

};


// Class AIModule.BTTask_RotateToFaceBBEntry
// 0x0008 (0x0090 - 0x0088)
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	float                                              Precision;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RotateToFaceBBEntry");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType
// 0x0008 (0x0030 - 0x0028)
class UEnvQueryItemType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType");
		return ptr;
	}

};


// Class AIModule.EnvQueryTypes
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTypes");
		return ptr;
	}

};


// Class AIModule.BTTask_BlueprintBase
// 0x0030 (0x0090 - 0x0060)
class UBTTask_BlueprintBase : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	class AAIController*                               AIOwner;                                                  // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x01E3(0x0001) (Edit, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_BlueprintBase");
		return ptr;
	}


	void SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID);
	void SetFinishOnMessage(const struct FName& MessageName);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecute(class AActor* OwnerActor);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbort(class AActor* OwnerActor);
	bool IsTaskExecuting();
	bool IsTaskAborting();
	void FinishExecute(bool bSuccess);
	void FinishAbort();
};


// Class AIModule.BTTask_MakeNoise
// 0x0008 (0x0068 - 0x0060)
class UBTTask_MakeNoise : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	float                                              Loudnes;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_MakeNoise");
		return ptr;
	}

};


// Class AIModule.PawnAction
// 0x0068 (0x0090 - 0x0028)
class UPawnAction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UPawnAction*                                 ChildAction;                                              // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPawnAction*                                 ParentAction;                                             // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPawnActionsComponent*                       OwnerComponent;                                           // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UObject*                                     Instigator;                                               // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UBrainComponent*                             BrainComp;                                                // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      bAllowNewSameClassInstance : 1;                           // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bReplaceActiveSameClassInstance : 1;                      // 0x01E3(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction");
		return ptr;
	}


	TEnumAsByte<EAIRequestPriority> GetActionPriority();
	void Finish(TEnumAsByte<EPawnActionResult> WithResult);
	class UPawnAction* STATIC_CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);
};


// Class AIModule.BTTask_PawnActionBase
// 0x0000 (0x0060 - 0x0060)
class UBTTask_PawnActionBase : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PawnActionBase");
		return ptr;
	}

};


// Class AIModule.BTTask_PushPawnAction
// 0x0008 (0x0068 - 0x0060)
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	class UPawnAction*                                 Action;                                                   // 0x01E3(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PushPawnAction");
		return ptr;
	}

};


// Class AIModule.BTTask_PlayAnimation
// 0x0038 (0x0098 - 0x0060)
class UBTTask_PlayAnimation : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	class UAnimationAsset*                             AnimationToPlay;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x01E3(0x0001) (Edit)
	unsigned char                                      bNonBlocking : 1;                                         // 0x01E3(0x0001) (Edit)
	class UBehaviorTreeComponent*                      MyOwnerComp;                                              // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      CachedSkelMesh;                                           // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PlayAnimation");
		return ptr;
	}

};


// Class AIModule.BTTask_PlaySound
// 0x0008 (0x0068 - 0x0060)
class UBTTask_PlaySound : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	class USoundCue*                                   SoundToPlay;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PlaySound");
		return ptr;
	}

};


// Class AIModule.BTTask_RunBehavior
// 0x0008 (0x0068 - 0x0060)
class UBTTask_RunBehavior : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	class UBehaviorTree*                               BehaviorAsset;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RunBehavior");
		return ptr;
	}

};


// Class AIModule.BTTask_RunBehaviorDynamic
// 0x0018 (0x0078 - 0x0060)
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	struct FGameplayTag                                InjectionTag;                                             // 0x01E3(0x0008) (Edit)
	class UBehaviorTree*                               DefaultBehaviorAsset;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               BehaviorAsset;                                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RunBehaviorDynamic");
		return ptr;
	}

};


// Class AIModule.BTTask_SetTagCooldown
// 0x0010 (0x0070 - 0x0060)
class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	struct FGameplayTag                                CooldownTag;                                              // 0x01E3(0x0008) (Edit)
	bool                                               bAddToExistingDuration;                                   // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CooldownDuration;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_SetTagCooldown");
		return ptr;
	}

};


// Class AIModule.BTTask_Wait
// 0x0008 (0x0068 - 0x0060)
class UBTTask_Wait : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	float                                              WaitTime;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_Wait");
		return ptr;
	}

};


// Class AIModule.BTTask_WaitBlackboardTime
// 0x0028 (0x0090 - 0x0068)
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_WaitBlackboardTime");
		return ptr;
	}

};


// Class AIModule.CrowdAgentInterface
// 0x0000 (0x0028 - 0x0028)
class UCrowdAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.CrowdAgentInterface");
		return ptr;
	}

};


// Class AIModule.CrowdManager
// 0x00B8 (0x00E0 - 0x0028)
class UCrowdManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class ANavigationData*                             MyNavData;                                                // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FCrowdAvoidanceConfig>               AvoidanceConfig;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FCrowdAvoidanceSamplingPattern>      SamplingPatterns;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	int                                                MaxAgents;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxAgentRadius;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAvoidedAgents;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAvoidedWalls;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              NavmeshCheckInterval;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PathOptimizationInterval;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.CrowdManager");
		return ptr;
	}

};


// Class AIModule.EnvQuery
// 0x0010 (0x0038 - 0x0028)
class UEnvQuery : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQuery");
		return ptr;
	}

};


// Class AIModule.EnvQueryContext_BlueprintBase
// 0x0008 (0x0030 - 0x0028)
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext_BlueprintBase");
		return ptr;
	}


	void ProvideSingleLocation(class AActor* QuerierActor, struct FVector* ResultingLocation);
	void ProvideSingleActor(class AActor* QuerierActor, class AActor** ResultingActor);
	void ProvideLocationsSet(class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
	void ProvideActorsSet(class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet);
};


// Class AIModule.EnvQueryContext_Item
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Item : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Item");
		return ptr;
	}

};


// Class AIModule.EnvQueryContext_Querier
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Querier : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Querier");
		return ptr;
	}

};


// Class AIModule.VisualLoggerExtension
// 0x0000 (0x0028 - 0x0028)
class UVisualLoggerExtension : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.VisualLoggerExtension");
		return ptr;
	}

};


// Class AIModule.EnvQueryDebugHelpers
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryDebugHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryDebugHelpers");
		return ptr;
	}

};


// Class AIModule.EQSQueryResultSourceInterface
// 0x0000 (0x0028 - 0x0028)
class UEQSQueryResultSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EQSQueryResultSourceInterface");
		return ptr;
	}

};


// Class AIModule.EnvQueryInstanceBlueprintWrapper
// 0x0048 (0x0070 - 0x0028)
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	int                                                QueryID;                                                  // 0x01E3(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemType;                                                 // 0x01E3(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                OptionIndex;                                              // 0x01E3(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryInstanceBlueprintWrapper");
		return ptr;
	}


	TArray<struct FVector> GetResultsAsLocations();
	TArray<class AActor*> GetResultsAsActors();
	float GetItemScore(int ItemIndex);
	void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
};


// Class AIModule.EnvQueryItemType_VectorBase
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_VectorBase");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_ActorBase
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_ActorBase");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_Actor
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Actor");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_Direction
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Direction");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_Point
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Point");
		return ptr;
	}

};


// Class AIModule.EnvQueryManager
// 0x00E8 (0x0110 - 0x0028)
class UEnvQueryManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FEnvQueryInstanceCache>              InstanceCache;                                            // 0x01E3(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryManager");
		return ptr;
	}


	class UEnvQueryInstanceBlueprintWrapper* STATIC_RunEQSQuery(class UObject* WorldContext, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, class UClass* WrapperClass);
};


// Class AIModule.EnvQueryGenerator_ActorsOfClass
// 0x0040 (0x0088 - 0x0048)
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	struct FAIDataProviderFloatValue                   SearchRadius;                                             // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      SearchedActorClass;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SearchCenter;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ActorsOfClass");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_BlueprintBase
// 0x0050 (0x0098 - 0x0048)
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	struct FText                                       GeneratorsActionDescription;                              // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0048(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UClass*                                      Context;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GeneratedItemType;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_BlueprintBase");
		return ptr;
	}


	class UObject* GetQuerier();
	void DoItemGeneration(TArray<struct FVector> ContextLocations);
	void AddGeneratedVector(const struct FVector& GeneratedVector);
	void AddGeneratedActor(class AActor* GeneratedActor);
};


// Class AIModule.EnvQueryGenerator_Composite
// 0x0018 (0x0060 - 0x0048)
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	TArray<class UEnvQueryGenerator*>                  Generators;                                               // 0x01E3(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	bool                                               bHasMatchingItemType;                                     // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Composite");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_ProjectedPoints
// 0x0038 (0x0080 - 0x0048)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	struct FEnvTraceData                               ProjectionData;                                           // 0x01E3(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ProjectedPoints");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_Donut
// 0x0128 (0x01A8 - 0x0080)
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	unsigned char                                      UnknownData00[0x163];                                     // 0x0080(0x0163) MISSED OFFSET
	struct FAIDataProviderFloatValue                   InnerRadius;                                              // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   OuterRadius;                                              // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfRings;                                            // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     PointsPerRing;                                            // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               ArcDirection;                                             // 0x01E3(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	bool                                               RandomiseRadius;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Center;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDefineArc : 1;                                           // 0x01E3(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Donut");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_OnCircle
// 0x0100 (0x0180 - 0x0080)
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
	unsigned char                                      UnknownData00[0x163];                                     // 0x0080(0x0163) MISSED OFFSET
	struct FAIDataProviderFloatValue                   CircleRadius;                                             // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                             // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               ArcDirection;                                             // 0x01E3(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	float                                              AngleRadians;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      CircleCenter;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEnvTraceData                               TraceData;                                                // 0x01E3(0x0038) (Edit)
	unsigned char                                      bDefineArc : 1;                                           // 0x01E3(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_OnCircle");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_SimpleGrid
// 0x0068 (0x00E8 - 0x0080)
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	unsigned char                                      UnknownData00[0x163];                                     // 0x0080(0x0163) MISSED OFFSET
	struct FAIDataProviderFloatValue                   GridSize;                                                 // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                             // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      GenerateAround;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_SimpleGrid");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_PathingGrid
// 0x0068 (0x0150 - 0x00E8)
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:
	unsigned char                                      UnknownData00[0xFB];                                      // 0x00E8(0x00FB) MISSED OFFSET
	struct FAIDataProviderBoolValue                    PathToItem;                                               // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      NavigationFilter;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                      // 0x01E3(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_PathingGrid");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Distance
// 0x0010 (0x0180 - 0x0170)
class UEnvQueryTest_Distance : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x73];                                      // 0x0170(0x0073) MISSED OFFSET
	TEnumAsByte<EEnvTestDistance>                      TestMode;                                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DistanceTo;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Distance");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Dot
// 0x0048 (0x01B8 - 0x0170)
class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x73];                                      // 0x0170(0x0073) MISSED OFFSET
	struct FEnvDirection                               LineA;                                                    // 0x01E3(0x0020) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               LineB;                                                    // 0x01E3(0x0020) (Edit, DisableEditOnInstance)
	TEnumAsByte<EEnvTestDot>                           TestMode;                                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAbsoluteValue;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Dot");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_GameplayTags
// 0x0030 (0x01A0 - 0x0170)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x73];                                      // 0x0170(0x0073) MISSED OFFSET
	TEnumAsByte<EGameplayContainerMatchType>           TagsToMatch;                                              // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_GameplayTags");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Pathfinding
// 0x00D8 (0x0248 - 0x0170)
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x73];                                      // 0x0170(0x0073) MISSED OFFSET
	TEnumAsByte<EEnvTestPathfinding>                   TestMode;                                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Context;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderBoolValue                    PathFromContext;                                          // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderBoolValue                    SkipUnreachable;                                          // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     MaxNumPathSegments;                                       // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderBoolValue                    PassThroughUnreachable;                                   // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      FilterClass;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5D];                                      // 0x01EB(0x005D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Pathfinding");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_PathfindingBatch
// 0x0030 (0x0278 - 0x0248)
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0248(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_PathfindingBatch");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Random
// 0x0000 (0x0170 - 0x0170)
class UEnvQueryTest_Random : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Random");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Trace
// 0x00D0 (0x0240 - 0x0170)
class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x73];                                      // 0x0170(0x0073) MISSED OFFSET
	struct FEnvTraceData                               TraceData;                                                // 0x01E3(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderBoolValue                    TraceFromContext;                                         // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ItemHeightOffset;                                         // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ContextHeightOffset;                                      // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      Context;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x55];                                      // 0x01EB(0x0055) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Trace");
		return ptr;
	}

};


// Class AIModule.EnvQueryOption
// 0x0018 (0x0040 - 0x0028)
class UEnvQueryOption : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UEnvQueryGenerator*                          Generator;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryOption");
		return ptr;
	}

};


// Class AIModule.EQSRenderingComponent
// 0x0020 (0x0690 - 0x0670)
class UEQSRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0670(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EQSRenderingComponent");
		return ptr;
	}

};


// Class AIModule.EQSTestingPawn
// 0x0060 (0x06C0 - 0x0660)
class AEQSTestingPawn : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0660(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EQSTestingPawn");
		return ptr;
	}

};


// Class AIModule.CrowdFollowingComponent
// 0x0050 (0x02E8 - 0x0298)
class UCrowdFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0298(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.CrowdFollowingComponent");
		return ptr;
	}


	void SuspendCrowdSteering(bool bSuspend);
};


// Class AIModule.PawnAction_BlueprintBase
// 0x0000 (0x0090 - 0x0090)
class UPawnAction_BlueprintBase : public UPawnAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_BlueprintBase");
		return ptr;
	}


	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionPause(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
};


// Class AIModule.PawnAction_Move
// 0x0050 (0x00E0 - 0x0090)
class UPawnAction_Move : public UPawnAction
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	class AActor*                                      GoalActor;                                                // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GoalLocation;                                             // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AcceptableRadius;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bFinishOnOverlap : 1;                                     // 0x01E3(0x0001)
	unsigned char                                      bUsePathfinding : 1;                                      // 0x01E3(0x0001)
	unsigned char                                      bAllowPartialPath : 1;                                    // 0x01E3(0x0001)
	unsigned char                                      bProjectGoalToNavigation : 1;                             // 0x01E3(0x0001)
	unsigned char                                      bUpdatePathToGoal : 1;                                    // 0x01E3(0x0001)
	unsigned char                                      bAbortChildActionOnPathChange : 1;                        // 0x01E3(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Move");
		return ptr;
	}

};


// Class AIModule.PawnAction_Repeat
// 0x0020 (0x00B0 - 0x0090)
class UPawnAction_Repeat : public UPawnAction
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	class UPawnAction*                                 ActionToRepeat;                                           // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPawnAction*                                 RecentActionCopy;                                         // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Repeat");
		return ptr;
	}

};


// Class AIModule.PawnAction_Sequence
// 0x0028 (0x00B8 - 0x0090)
class UPawnAction_Sequence : public UPawnAction
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	TArray<class UPawnAction*>                         ActionSequence;                                           // 0x01E3(0x0010) (ZeroConstructor)
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnAction*                                 RecentActionCopy;                                         // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Sequence");
		return ptr;
	}

};


// Class AIModule.PawnAction_Wait
// 0x0010 (0x00A0 - 0x0090)
class UPawnAction_Wait : public UPawnAction
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	float                                              TimeToWait;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Wait");
		return ptr;
	}

};


// Class AIModule.PawnSensingComponent
// 0x0048 (0x0118 - 0x00D0)
class UPawnSensingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	float                                              HearingThreshold;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LOSHearingThreshold;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SightRadius;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SensingInterval;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HearingMaxSoundAge;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableSensingUpdates : 1;                                // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOnlySensePlayers : 1;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSeePawns : 1;                                            // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bHearNoises : 1;                                          // 0x01E3(0x0001) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnSeePawn;                                                // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHearNoise;                                              // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              PeripheralVisionAngle;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PeripheralVisionCosine;                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnSensingComponent");
		return ptr;
	}


	void SetSensingUpdatesEnabled(bool bEnabled);
	void SetSensingInterval(float NewSensingInterval);
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
	void SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume);
	float GetPeripheralVisionCosine();
	float GetPeripheralVisionAngle();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
