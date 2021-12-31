#pragma once

// Sea of Thieves (2) SDK

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
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	FString                                            NodeName;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)
	UBehaviorTree*                                     TreeAsset;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	UBTCompositeNode*                                  ParentNode;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTNode"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTAuxiliaryNode"));
		return ptr;
	}

};


// Class AIModule.BTDecorator
// 0x0008 (0x0068 - 0x0060)
class UBTDecorator : public UBTAuxiliaryNode
{
public:
	unsigned char                                      UnknownData00 : 7;                                        // 0x0060(0x0001)
	unsigned char                                      bInverseCondition : 1;                                    // 0x0060(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	TEnumAsByte<EBTFlowAbortMode>                      FlowAbortMode;                                            // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0065(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTDecorator"));
		return ptr;
	}

};


// Class AIModule.BTDecorator_BlackboardBase
// 0x0028 (0x0090 - 0x0068)
class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
	FBlackboardKeySelector                             BlackboardKey;                                            // 0x0068(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTDecorator_BlackboardBase"));
		return ptr;
	}

};


// Class AIModule.BTService
// 0x0010 (0x0070 - 0x0060)
class UBTService : public UBTAuxiliaryNode
{
public:
	float                                              Interval;                                                 // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCallTickOnSearchStart : 1;                               // 0x0068(0x0001) (Edit)
	unsigned char                                      bRestartTimerOnEachActivation : 1;                        // 0x0068(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTService"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTTaskNode"));
		return ptr;
	}

};


// Class AIModule.BTTask_BlackboardBase
// 0x0028 (0x0088 - 0x0060)
class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	FBlackboardKeySelector                             BlackboardKey;                                            // 0x0060(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTTask_BlackboardBase"));
		return ptr;
	}

};


// Class AIModule.BTTask_RunEQSQuery
// 0x0020 (0x00A8 - 0x0088)
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
	UEnvQuery*                                         QueryTemplate;                                            // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FEnvNamedValue>                             QueryParams;                                              // 0x0090(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTTask_RunEQSQuery"));
		return ptr;
	}

};


// Class AIModule.BTTask_RotateToFaceBBEntry
// 0x0008 (0x0090 - 0x0088)
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	float                                              Precision;                                                // 0x0088(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTTask_RotateToFaceBBEntry"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryContext"));
		return ptr;
	}

};


// Class AIModule.EnvQueryNode
// 0x0008 (0x0030 - 0x0028)
class UEnvQueryNode : public UObject
{
public:
	int                                                VerNum;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryNode"));
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator
// 0x0020 (0x0050 - 0x0030)
class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	FString                                            OptionName;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               NonShippingOnly;                                          // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	UClass*                                            ItemType;                                                 // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryGenerator"));
		return ptr;
	}

};


// Class AIModule.EnvQueryTest
// 0x0140 (0x0170 - 0x0030)
class UEnvQueryTest : public UEnvQueryNode
{
public:
	int                                                TestOrder;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvTestPurpose>                       TestPurpose;                                              // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTestFilterOperator>                MultipleContextFilterOp;                                  // 0x0035(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTestScoreOperator>                 MultipleContextScoreOp;                                   // 0x0036(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTestFilterType>                    FilterType;                                               // 0x0037(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FAIDataProviderBoolValue                           BoolValue;                                                // 0x0038(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          FloatValueMin;                                            // 0x0068(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          FloatValueMax;                                            // 0x0098(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00C8(0x0001) MISSED OFFSET
	TEnumAsByte<EEnvTestScoreEquation>                 ScoringEquation;                                          // 0x00C9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMinType;                                             // 0x00CA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMaxType;                                             // 0x00CB(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	FAIDataProviderFloatValue                          ScoreClampMin;                                            // 0x00D0(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          ScoreClampMax;                                            // 0x0100(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          ScoringFactor;                                            // 0x0130(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0160(0x0008) MISSED OFFSET
	unsigned char                                      bWorkOnFloatValues : 1;                                   // 0x0168(0x0001)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0169(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryTest"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AIResourceInterface"));
		return ptr;
	}

};


// Class AIModule.PathFollowingComponent
// 0x01F0 (0x02B8 - 0x00C8)
class UPathFollowingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x00C8(0x0058) MISSED OFFSET
	UNavMovementComponent*                             MovementComp;                                             // 0x0120(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
	ANavigationData*                                   MyNavData;                                                // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xBC];                                      // 0x0138(0x00BC) MISSED OFFSET
	unsigned char                                      bUseVisibilityTestsSimplification : 1;                    // 0x01F4(0x0001) (Config)
	unsigned char                                      UnknownData03[0xC3];                                      // 0x01F5(0x00C3) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.PathFollowingComponent"));
		return ptr;
	}


	void OnActorBump(AActor* SelfActor, AActor* OtherActor, const FVector& NormalImpulse, const FHitResult& Hit);
	FVector GetPathDestination();
	TEnumAsByte<EPathFollowingAction> GetPathActionType();
};


// Class AIModule.AIAsyncTaskBlueprintProxy
// 0x0038 (0x0060 - 0x0028)
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
	FScriptMulticastDelegate                           OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnFail;                                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AIAsyncTaskBlueprintProxy"));
		return ptr;
	}


	void OnMoveCompleted(const FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> MovementResult);
};


// Class AIModule.AIBlueprintHelperLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AIBlueprintHelperLibrary"));
		return ptr;
	}


	static void UnlockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
	static APawn* SpawnAIFromClass(UObject* WorldContextObject, UClass* PawnClass, UBehaviorTree* BehaviorTree, const FVector& Location, const FRotator& Rotation, bool bNoCollisionFail);
	static void SendAIMessage(APawn* Target, const FName& Message, UObject* MessageSource, bool bSuccess);
	static void LockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
	static bool IsValidAIRotation(const FRotator& Rotation);
	static bool IsValidAILocation(const FVector& Location);
	static bool IsValidAIDirection(const FVector& DirectionVector);
	static UBlackboardComponent* GetBlackboard(AActor* Target);
	static AAIController* GetAIController(AActor* ControlledActor);
	static UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(UObject* WorldContextObject, APawn* Pawn, const FVector& Destination, AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
};


// Class AIModule.PawnActionsComponent
// 0x0038 (0x0100 - 0x00C8)
class UPawnActionsComponent : public UActorComponent
{
public:
	APawn*                                             ControlledPawn;                                           // 0x00C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<FPawnActionStack>                           ActionStacks;                                             // 0x00D0(0x0010) (ZeroConstructor)
	TArray<FPawnActionEvent>                           ActionEvents;                                             // 0x00E0(0x0010) (ZeroConstructor)
	UPawnAction*                                       CurrentAction;                                            // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.PawnActionsComponent"));
		return ptr;
	}


	bool K2_PushAction(UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, UObject* Instigator);
	static bool K2_PerformAction(APawn* Pawn, UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority);
	TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(UPawnAction* ActionToAbort);
	TEnumAsByte<EPawnActionAbortState> K2_AbortAction(UPawnAction* ActionToAbort);
};


// Class AIModule.AIPerceptionListenerInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPerceptionListenerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AIPerceptionListenerInterface"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BlackboardKeyType"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BehaviorTreeTypes"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.GenericTeamAgentInterface"));
		return ptr;
	}

};


// Class AIModule.AIController
// 0x0090 (0x04C0 - 0x0430)
class AAIController : public AController
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0430(0x0028) MISSED OFFSET
	unsigned char                                      bLOSflag : 1;                                             // 0x0458(0x0001)
	unsigned char                                      bSkipExtraLOSChecks : 1;                                  // 0x0458(0x0001)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x0458(0x0001)
	unsigned char                                      bWantsPlayerState : 1;                                    // 0x0458(0x0001)
	unsigned char                                      bDisableControlRotation : 1;                              // 0x0458(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0459(0x0007) MISSED OFFSET
	UPathFollowingComponent*                           PathFollowingComponent;                                   // 0x0460(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	UBrainComponent*                                   BrainComponent;                                           // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UAIPerceptionComponent*                            PerceptionComponent;                                      // 0x0470(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	UPawnActionsComponent*                             ActionsComp;                                              // 0x0478(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	UBlackboardComponent*                              Blackboard;                                               // 0x0480(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	UGameplayTasksComponent*                           CachedGameplayTasksComponent;                             // 0x0488(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0490(0x0010) MISSED OFFSET
	FScriptMulticastDelegate                           ReceiveMoveCompleted;                                     // 0x04A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x10];                                      // 0x04B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AIController"));
		return ptr;
	}


	bool UseBlackboard(UBlackboardData* BlackboardAsset, UBlackboardComponent** BlackboardComponent);
	void SetMoveBlockDetection(bool bEnable);
	bool RunBehaviorTree(UBehaviorTree* BTAsset);
	void OnUsingBlackBoard(UBlackboardComponent* BlackboardComp, UBlackboardData* BlackboardAsset);
	void OnPossess(APawn* PossessedPawn);
	void OnGameplayTaskResourcesClaimed(const FGameplayResourceSet& NewlyClaimed, const FGameplayResourceSet& FreshlyReleased);
	TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(const FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, UClass* FilterClass, bool bAllowPartialPath);
	TEnumAsByte<EPathFollowingRequestResult> MoveToActor(AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, UClass* FilterClass, bool bAllowPartialPath);
	void K2_SetFocus(AActor* NewFocus);
	void K2_SetFocalPoint(const FVector& FP);
	void K2_ClearFocus();
	bool HasPartialPath();
	UPathFollowingComponent* GetPathFollowingComponent();
	TEnumAsByte<EPathFollowingStatus> GetMoveStatus();
	FVector GetImmediateMoveDestination();
	AActor* GetFocusActor();
	FVector GetFocalPointOnActor(AActor* Actor);
	FVector GetFocalPoint();
	UAIPerceptionComponent* GetAIPerceptionComponent();
};


// Class AIModule.DetourCrowdAIController
// 0x0000 (0x04C0 - 0x04C0)
class ADetourCrowdAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.DetourCrowdAIController"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AIDataProvider"));
		return ptr;
	}

};


// Class AIModule.CustomDataProviderObject
// 0x0000 (0x0028 - 0x0028)
class UCustomDataProviderObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.CustomDataProviderObject"));
		return ptr;
	}

};


// Class AIModule.AIDataProvider_QueryParamFromCustomObjectProperty
// 0x0020 (0x0048 - 0x0028)
class UAIDataProvider_QueryParamFromCustomObjectProperty : public UAIDataProvider
{
public:
	FCustomDataProviderObjectPropertySelector          ObjectProperty;                                           // 0x0028(0x0010) (Edit)
	float                                              FloatValue;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AIDataProvider_QueryParamFromCustomObjectProperty"));
		return ptr;
	}

};


// Class AIModule.AIDataProvider_QueryParams
// 0x0018 (0x0040 - 0x0028)
class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
	FName                                              ParamName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AIDataProvider_QueryParams"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AIHotSpotManager"));
		return ptr;
	}

};


// Class AIModule.AISystem
// 0x00B0 (0x00F0 - 0x0040)
class UAISystem : public UAISystemBase
{
public:
	FStringClassReference                              PerceptionSystemClassName;                                // 0x0040(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	FStringClassReference                              HotSpotManagerClassName;                                  // 0x0050(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	float                                              AcceptanceRadius;                                         // 0x0060(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bFinishMoveOnGoalOverlap;                                 // 0x0064(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAcceptPartialPaths;                                      // 0x0065(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAllowStrafing;                                           // 0x0066(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bEnableBTAITasks;                                         // 0x0067(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	UBehaviorTreeManager*                              BehaviorTreeManager;                                      // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	UEnvQueryManager*                                  EnvironmentQueryManager;                                  // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	UAIPerceptionSystem*                               PerceptionSystem;                                         // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<UAIAsyncTaskBlueprintProxy*>                AllProxyObjects;                                          // 0x0080(0x0010) (ZeroConstructor, Transient)
	UAIHotSpotManager*                                 HotSpotManager;                                           // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0098(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISystem"));
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
	FColor                                             DebugDrawColor;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	FString                                            DebugName;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              DefaultExpirationAge;                                     // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EAISenseNotifyType>                    NotifyType;                                               // 0x0044(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	unsigned char                                      bWantsNewPawnNotification : 1;                            // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bAutoRegisterAllPawnsAsSources : 1;                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	UAIPerceptionSystem*                               PerceptionSystemInstance;                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x30];                                      // 0x0058(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISense"));
		return ptr;
	}

};


// Class AIModule.AIPerceptionSystem
// 0x0100 (0x0128 - 0x0028)
class UAIPerceptionSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	TArray<UAISense*>                                  Senses;                                                   // 0x0080(0x0010) (ZeroConstructor)
	float                                              PerceptionAgingRate;                                      // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x94];                                      // 0x0094(0x0094) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AIPerceptionSystem"));
		return ptr;
	}


	static void ReportPerceptionEvent(UObject* WorldContext, UAISenseEvent* PerceptionEvent);
	void ReportEvent(UAISenseEvent* PerceptionEvent);
	static bool RegisterPerceptionStimuliSource(UObject* WorldContext, UClass* Sense, AActor* Target);
	void OnPerceptionStimuliSourceEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	static UClass* GetSenseClassForStimulus(UObject* WorldContext, const FAIStimulus& Stimulus);
};


// Class AIModule.AIPerceptionComponent
// 0x0100 (0x01C8 - 0x00C8)
class UAIPerceptionComponent : public UActorComponent
{
public:
	float                                              HearingRange;                                             // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              LoSHearingRange;                                          // 0x00CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              SightRadius;                                              // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              LoseSightRadius;                                          // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              PeripheralVisionAngle;                                    // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	TArray<UAISenseConfig*>                            SensesConfig;                                             // 0x00E0(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	UClass*                                            DominantSense;                                            // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET
	AAIController*                                     AIOwner;                                                  // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x80];                                      // 0x0110(0x0080) MISSED OFFSET
	FScriptMulticastDelegate                           OnPerceptionUpdated;                                      // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnTargetPerceptionUpdated;                                // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x18];                                      // 0x01B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AIPerceptionComponent"));
		return ptr;
	}


	void RequestStimuliListenerUpdate();
	void OnOwnerEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	bool IsIgnored(AActor* Actor);
	void GetPerceivedHostileActors(TArray<AActor*>* OutActors);
	void GetPerceivedActors(UClass* SenseToUse, TArray<AActor*>* OutActors);
	bool GetActorsPerception(AActor* Actor, FActorPerceptionBlueprintInfo* Info);
};


// Class AIModule.AIPerceptionStimuliSourceComponent
// 0x0018 (0x00E0 - 0x00C8)
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	unsigned char                                      bAutoRegisterAsSource : 1;                                // 0x00C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	TArray<UClass*>                                    RegisterAsSourceForSenses;                                // 0x00D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AIPerceptionStimuliSourceComponent"));
		return ptr;
	}


	void UnregisterFromSense(UClass* SenseClass);
	void UnregisterFromPerceptionSystem();
	void RegisterWithPerceptionSystem();
	void RegisterForSense(UClass* SenseClass);
};


// Class AIModule.AIResource_Movement
// 0x0000 (0x0038 - 0x0038)
class UAIResource_Movement : public UGameplayTaskResource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AIResource_Movement"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AIResource_Logic"));
		return ptr;
	}

};


// Class AIModule.AISense_Blueprint
// 0x0028 (0x00B0 - 0x0088)
class UAISense_Blueprint : public UAISense
{
public:
	UClass*                                            ListenerDataType;                                         // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<UAIPerceptionComponent*>                    ListenerContainer;                                        // 0x0090(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<UAISenseEvent*>                             UnprocessedEvents;                                        // 0x00A0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISense_Blueprint"));
		return ptr;
	}


	float OnUpdate(TArray<UAISenseEvent*> EventsToProcess);
	void OnListenerUpdated(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);
	void OnListenerUnregistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);
	void OnListenerRegistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);
	void K2_OnNewPawn(APawn* NewPawn);
	void GetAllListenerComponents(TArray<UAIPerceptionComponent*>* ListenerComponents);
	void GetAllListenerActors(TArray<AActor*>* ListenerActors);
};


// Class AIModule.AISense_Damage
// 0x0010 (0x0098 - 0x0088)
class UAISense_Damage : public UAISense
{
public:
	TArray<FAIDamageEvent>                             RegisteredEvents;                                         // 0x0088(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISense_Damage"));
		return ptr;
	}


	static void ReportDamageEvent(UObject* WorldContext, AActor* DamagedActor, AActor* Instigator, float DamageAmount, const FVector& EventLocation, const FVector& HitLocation);
};


// Class AIModule.AISense_Hearing
// 0x0098 (0x0120 - 0x0088)
class UAISense_Hearing : public UAISense
{
public:
	int                                                MaxNoisesPerTick;                                         // 0x0088(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNoisesStored;                                          // 0x008C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	TArray<FAINoiseEvent>                              NoiseEventsArrayA;                                        // 0x0098(0x0010) (ZeroConstructor)
	TArray<FAINoiseEvent>                              NoiseEventsArrayB;                                        // 0x00A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET
	float                                              SpeedOfSoundSq;                                           // 0x00C8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x54];                                      // 0x00CC(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISense_Hearing"));
		return ptr;
	}


	static void ReportNoiseEvent(UObject* WorldContext, const FVector& NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, const FName& Tag);
};


// Class AIModule.AISense_Prediction
// 0x0010 (0x0098 - 0x0088)
class UAISense_Prediction : public UAISense
{
public:
	TArray<FAIPredictionEvent>                         RegisteredEvents;                                         // 0x0088(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISense_Prediction"));
		return ptr;
	}


	static void RequestPawnPredictionEvent(APawn* Requestor, AActor* PredictedActor, float PredictionTime);
	static void RequestControllerPredictionEvent(AAIController* Requestor, AActor* PredictedActor, float PredictionTime);
};


// Class AIModule.AISense_Sight
// 0x00C8 (0x0150 - 0x0088)
class UAISense_Sight : public UAISense
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0088(0x00B0) MISSED OFFSET
	int                                                MaxTracesPerTick;                                         // 0x0138(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HighImportanceQueryDistanceThreshold;                     // 0x013C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0140(0x0004) MISSED OFFSET
	float                                              MaxQueryImportance;                                       // 0x0144(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SightLimitQueryImportance;                                // 0x0148(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x014C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISense_Sight"));
		return ptr;
	}

};


// Class AIModule.AISense_Team
// 0x0010 (0x0098 - 0x0088)
class UAISense_Team : public UAISense
{
public:
	TArray<FAITeamStimulusEvent>                       RegisteredEvents;                                         // 0x0088(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISense_Team"));
		return ptr;
	}

};


// Class AIModule.AISense_Touch
// 0x0010 (0x0098 - 0x0088)
class UAISense_Touch : public UAISense
{
public:
	TArray<FAITouchEvent>                              RegisteredEvents;                                         // 0x0088(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISense_Touch"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISenseBlueprintListener"));
		return ptr;
	}

};


// Class AIModule.AISenseConfig
// 0x0008 (0x0030 - 0x0028)
class UAISenseConfig : public UObject
{
public:
	float                                              MaxAge;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bStartsEnabled : 1;                                       // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISenseConfig"));
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Blueprint
// 0x0008 (0x0038 - 0x0030)
class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:
	UClass*                                            Implementation;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISenseConfig_Blueprint"));
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Damage
// 0x0008 (0x0038 - 0x0030)
class UAISenseConfig_Damage : public UAISenseConfig
{
public:
	UClass*                                            Implementation;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISenseConfig_Damage"));
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Hearing
// 0x0018 (0x0048 - 0x0030)
class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
	UClass*                                            Implementation;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
	float                                              HearingRange;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoSHearingRange;                                          // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUseLoSHearing : 1;                                       // 0x0040(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	FAISenseAffiliationFilter                          DetectionByAffiliation;                                   // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISenseConfig_Hearing"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISenseConfig_Prediction"));
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Sight
// 0x0020 (0x0050 - 0x0030)
class UAISenseConfig_Sight : public UAISenseConfig
{
public:
	UClass*                                            Implementation;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
	float                                              SightRadius;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              LoseSightRadius;                                          // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PeripheralVisionAngleDegrees;                             // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	FAISenseAffiliationFilter                          DetectionByAffiliation;                                   // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoSuccessRangeFromLastSeenLocation;                     // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISenseConfig_Sight"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISenseConfig_Team"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISenseConfig_Touch"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISenseEvent"));
		return ptr;
	}

};


// Class AIModule.AISenseEvent_Damage
// 0x0030 (0x0058 - 0x0028)
class UAISenseEvent_Damage : public UAISenseEvent
{
public:
	FAIDamageEvent                                     Event;                                                    // 0x0028(0x0030) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISenseEvent_Damage"));
		return ptr;
	}

};


// Class AIModule.AISenseEvent_Hearing
// 0x0030 (0x0058 - 0x0028)
class UAISenseEvent_Hearing : public UAISenseEvent
{
public:
	FAINoiseEvent                                      Event;                                                    // 0x0028(0x0030) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISenseEvent_Hearing"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AISightTargetInterface"));
		return ptr;
	}

};


// Class AIModule.AITask
// 0x0008 (0x0060 - 0x0058)
class UAITask : public UGameplayTask
{
public:
	AAIController*                                     OwnerController;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AITask"));
		return ptr;
	}

};


// Class AIModule.AITask_MoveTo
// 0x0050 (0x00B0 - 0x0060)
class UAITask_MoveTo : public UAITask
{
public:
	FScriptMulticastDelegate                           OnRequestFailed;                                          // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnMoveFinished;                                           // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FVector                                            MoveGoalLocation;                                         // 0x0080(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x008C(0x000C) MISSED OFFSET
	AActor*                                            MoveGoalActor;                                            // 0x0098(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MoveAcceptanceRadius;                                     // 0x00A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldStopOnOverlap;                                     // 0x00A4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldAcceptPartialPath;                                 // 0x00A5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldUsePathfinding;                                    // 0x00A6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9];                                       // 0x00A7(0x0009) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.AITask_MoveTo"));
		return ptr;
	}


	static UAITask_MoveTo* AIMoveTo(AAIController* Controller, const FVector& GoalLocation, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic);
};


// Class AIModule.BrainComponent
// 0x0060 (0x0128 - 0x00C8)
class UBrainComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	UBlackboardComponent*                              BlackboardComp;                                           // 0x00D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	AAIController*                                     AIOwner;                                                  // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x00E0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BrainComponent"));
		return ptr;
	}


	void StopLogic(const FString& Reason);
	void RestartLogic();
};


// Class AIModule.BehaviorTreeComponent
// 0x0160 (0x0288 - 0x0128)
class UBehaviorTreeComponent : public UBrainComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0128(0x0020) MISSED OFFSET
	TArray<UBTNode*>                                   NodeInstances;                                            // 0x0148(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x130];                                     // 0x0158(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BehaviorTreeComponent"));
		return ptr;
	}


	void SetDynamicSubtree(const FGameplayTag& InjectTag, UBehaviorTree* BehaviorAsset);
	float GetTagCooldownEndTime(const FGameplayTag& CooldownTag);
	void AddCooldownTagDuration(const FGameplayTag& CooldownTag, float CoolDownDuration, bool bAddToExistingDuration);
};


// Class AIModule.BTCompositeNode
// 0x0030 (0x0088 - 0x0058)
class UBTCompositeNode : public UBTNode
{
public:
	TArray<FBTCompositeChild>                          Children;                                                 // 0x0058(0x0010) (ZeroConstructor)
	TArray<UBTService*>                                Services;                                                 // 0x0068(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTCompositeNode"));
		return ptr;
	}

};


// Class AIModule.BehaviorTree
// 0x0038 (0x0060 - 0x0028)
class UBehaviorTree : public UObject
{
public:
	UBTCompositeNode*                                  RootNode;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	UBlackboardData*                                   BlackboardAsset;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<UBTDecorator*>                              RootDecorators;                                           // 0x0038(0x0010) (ZeroConstructor)
	TArray<FBTDecoratorLogic>                          RootDecoratorOps;                                         // 0x0048(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BehaviorTree"));
		return ptr;
	}

};


// Class AIModule.BehaviorTreeManager
// 0x0028 (0x0050 - 0x0028)
class UBehaviorTreeManager : public UObject
{
public:
	int                                                MaxDebuggerSteps;                                         // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<FBehaviorTreeTemplateInfo>                  LoadedTemplates;                                          // 0x0030(0x0010) (ZeroConstructor)
	TArray<UBehaviorTreeComponent*>                    ActiveComponents;                                         // 0x0040(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BehaviorTreeManager"));
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Enum
// 0x0020 (0x0050 - 0x0030)
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
	UEnum*                                             EnumType;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FString                                            EnumName;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bIsEnumNameValid : 1;                                     // 0x0048(0x0001) (Edit, DisableEditOnInstance, EditConst)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BlackboardKeyType_Enum"));
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_NativeEnum
// 0x0018 (0x0048 - 0x0030)
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
public:
	FString                                            EnumName;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	UEnum*                                             EnumType;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BlackboardKeyType_NativeEnum"));
		return ptr;
	}

};


// Class AIModule.BlackboardData
// 0x0020 (0x0048 - 0x0028)
class UBlackboardData : public UDataAsset
{
public:
	UBlackboardData*                                   Parent;                                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FBlackboardEntry>                           Keys;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bHasSynchronizedKeys : 1;                                 // 0x0040(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BlackboardData"));
		return ptr;
	}

};


// Class AIModule.BlackboardComponent
// 0x0148 (0x0210 - 0x00C8)
class UBlackboardComponent : public UActorComponent
{
public:
	UBrainComponent*                                   BrainComp;                                                // 0x00C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	UBlackboardData*                                   BlackboardAsset;                                          // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x00D8(0x0020) MISSED OFFSET
	TArray<UBlackboardKeyType*>                        KeyInstances;                                             // 0x00F8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x108];                                     // 0x0108(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BlackboardComponent"));
		return ptr;
	}


	void SetValueAsVector(const FName& KeyName, const FVector& VectorValue);
	void SetValueAsString(const FName& KeyName, const FString& StringValue);
	void SetValueAsRotator(const FName& KeyName, const FRotator& VectorValue);
	void SetValueAsObject(const FName& KeyName, UObject* ObjectValue);
	void SetValueAsName(const FName& KeyName, const FName& NameValue);
	void SetValueAsInt(const FName& KeyName, int IntValue);
	void SetValueAsFloat(const FName& KeyName, float FloatValue);
	void SetValueAsEnum(const FName& KeyName, unsigned char EnumValue);
	void SetValueAsClass(const FName& KeyName, UClass* ClassValue);
	void SetValueAsBool(const FName& KeyName, bool BoolValue);
	bool IsVectorValueSet(const FName& KeyName);
	FVector GetValueAsVector(const FName& KeyName);
	FString GetValueAsString(const FName& KeyName);
	FRotator GetValueAsRotator(const FName& KeyName);
	UObject* GetValueAsObject(const FName& KeyName);
	FName GetValueAsName(const FName& KeyName);
	int GetValueAsInt(const FName& KeyName);
	float GetValueAsFloat(const FName& KeyName);
	unsigned char GetValueAsEnum(const FName& KeyName);
	UClass* GetValueAsClass(const FName& KeyName);
	bool GetValueAsBool(const FName& KeyName);
	bool GetRotationFromEntry(const FName& KeyName, FRotator* ResultRotation);
	bool GetLocationFromEntry(const FName& KeyName, FVector* ResultLocation);
	void ClearValueAsVector(const FName& KeyName);
	void ClearValueAsRotator(const FName& KeyName);
	void ClearValue(const FName& KeyName);
};


// Class AIModule.BlackboardKeyType_Bool
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BlackboardKeyType_Bool"));
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Class
// 0x0008 (0x0038 - 0x0030)
class UBlackboardKeyType_Class : public UBlackboardKeyType
{
public:
	UClass*                                            BaseClass;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BlackboardKeyType_Class"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BlackboardKeyType_Float"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BlackboardKeyType_Int"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BlackboardKeyType_Name"));
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Object
// 0x0008 (0x0038 - 0x0030)
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
	UClass*                                            BaseClass;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BlackboardKeyType_Object"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BlackboardKeyType_Rotator"));
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_String
// 0x0010 (0x0040 - 0x0030)
class UBlackboardKeyType_String : public UBlackboardKeyType
{
public:
	FString                                            StringValue;                                              // 0x0030(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BlackboardKeyType_String"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BlackboardKeyType_Vector"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTFunctionLibrary"));
		return ptr;
	}


	static void StopUsingExternalEvent(UBTNode* NodeOwner);
	static void StartUsingExternalEvent(UBTNode* NodeOwner, AActor* OwningActor);
	static void SetBlackboardValueAsVector(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, const FVector& Value);
	static void SetBlackboardValueAsString(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, const FString& Value);
	static void SetBlackboardValueAsRotator(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, const FRotator& Value);
	static void SetBlackboardValueAsObject(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, UObject* Value);
	static void SetBlackboardValueAsName(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, const FName& Value);
	static void SetBlackboardValueAsInt(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, int Value);
	static void SetBlackboardValueAsFloat(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, float Value);
	static void SetBlackboardValueAsEnum(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, unsigned char Value);
	static void SetBlackboardValueAsClass(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, UClass* Value);
	static void SetBlackboardValueAsBool(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, bool Value);
	static UBlackboardComponent* GetOwnersBlackboard(UBTNode* NodeOwner);
	static UBehaviorTreeComponent* GetOwnerComponent(UBTNode* NodeOwner);
	static FVector GetBlackboardValueAsVector(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
	static FString GetBlackboardValueAsString(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
	static FRotator GetBlackboardValueAsRotator(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
	static UObject* GetBlackboardValueAsObject(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
	static FName GetBlackboardValueAsName(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
	static int GetBlackboardValueAsInt(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
	static float GetBlackboardValueAsFloat(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
	static unsigned char GetBlackboardValueAsEnum(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
	static UClass* GetBlackboardValueAsClass(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
	static bool GetBlackboardValueAsBool(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
	static AActor* GetBlackboardValueAsActor(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
	static void ClearBlackboardValueAsVector(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
	static void ClearBlackboardValue(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
};


// Class AIModule.BTDecorator_Blackboard
// 0x0030 (0x00C0 - 0x0090)
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	int                                                IntValue;                                                 // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FString                                            StringValue;                                              // 0x0098(0x0010) (Edit, ZeroConstructor)
	FString                                            CachedDescription;                                        // 0x00A8(0x0010) (ZeroConstructor)
	unsigned char                                      OperationType;                                            // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBTBlackboardRestart>                  NotifyObserver;                                           // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTDecorator_Blackboard"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTDecorator_ConditionalLoop"));
		return ptr;
	}

};


// Class AIModule.BTDecorator_IsAtLocation
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseNavAgentGoalLocation;                                 // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0095(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTDecorator_IsAtLocation"));
		return ptr;
	}

};


// Class AIModule.BTDecorator_IsBBEntryOfClass
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
	UClass*                                            TestClass;                                                // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTDecorator_IsBBEntryOfClass"));
		return ptr;
	}

};


// Class AIModule.BTDecorator_BlueprintBase
// 0x0038 (0x00A0 - 0x0068)
class UBTDecorator_BlueprintBase : public UBTDecorator
{
public:
	AAIController*                                     AIOwner;                                                  // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	AActor*                                            ActorOwner;                                               // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<FName>                                      ObservedKeyNames;                                         // 0x0078(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x0098(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      bCheckConditionOnlyBlackBoardChanges : 1;                 // 0x0098(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIsObservingBB : 1;                                       // 0x0098(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTDecorator_BlueprintBase"));
		return ptr;
	}


	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
	void ReceiveObserverDeactivatedAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveObserverDeactivated(AActor* OwnerActor);
	void ReceiveObserverActivatedAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveObserverActivated(AActor* OwnerActor);
	void ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveExecutionStart(AActor* OwnerActor);
	void ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult);
	void ReceiveExecutionFinish(AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);
	void ReceiveConditionCheck(AActor* OwnerActor);
	bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);
	bool PerformConditionCheck(AActor* OwnerActor);
	bool IsDecoratorObserverActive();
	bool IsDecoratorExecutionActive();
	void FinishConditionCheck(bool bAllowExecution);
};


// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// 0x0068 (0x00D0 - 0x0068)
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
	FBlackboardKeySelector                             ActorToCheck;                                             // 0x0068(0x0028) (Edit)
	TEnumAsByte<EGameplayContainerMatchType>           TagsToMatch;                                              // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	FGameplayTagContainer                              GameplayTags;                                             // 0x0098(0x0028) (Edit)
	FString                                            CachedDescription;                                        // 0x00C0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTDecorator_CheckGameplayTagsOnActor"));
		return ptr;
	}

};


// Class AIModule.BTDecorator_CompareBBEntries
// 0x0058 (0x00C0 - 0x0068)
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
	TEnumAsByte<EBlackBoardEntryComparison>            Operator;                                                 // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	FBlackboardKeySelector                             BlackboardKeyA;                                           // 0x0070(0x0028) (Edit)
	FBlackboardKeySelector                             BlackboardKeyB;                                           // 0x0098(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTDecorator_CompareBBEntries"));
		return ptr;
	}

};


// Class AIModule.BTDecorator_ConeCheck
// 0x0088 (0x00F0 - 0x0068)
class UBTDecorator_ConeCheck : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	FBlackboardKeySelector                             ConeOrigin;                                               // 0x0070(0x0028) (Edit)
	FBlackboardKeySelector                             ConeDirection;                                            // 0x0098(0x0028) (Edit)
	FBlackboardKeySelector                             Observed;                                                 // 0x00C0(0x0028) (Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTDecorator_ConeCheck"));
		return ptr;
	}

};


// Class AIModule.BTDecorator_Cooldown
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_Cooldown : public UBTDecorator
{
public:
	float                                              CoolDownTime;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTDecorator_Cooldown"));
		return ptr;
	}

};


// Class AIModule.BTDecorator_DoesPathExist
// 0x0060 (0x00C8 - 0x0068)
class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
	FBlackboardKeySelector                             BlackboardKeyA;                                           // 0x0068(0x0028) (Edit)
	FBlackboardKeySelector                             BlackboardKeyB;                                           // 0x0090(0x0028) (Edit)
	unsigned char                                      bUseSelf : 1;                                             // 0x00B8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	TEnumAsByte<EPathExistanceQueryType>               PathQueryType;                                            // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	UClass*                                            FilterClass;                                              // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTDecorator_DoesPathExist"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTDecorator_ForceSuccess"));
		return ptr;
	}

};


// Class AIModule.BTDecorator_KeepInCone
// 0x0060 (0x00C8 - 0x0068)
class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	FBlackboardKeySelector                             ConeOrigin;                                               // 0x0070(0x0028) (Edit)
	FBlackboardKeySelector                             Observed;                                                 // 0x0098(0x0028) (Edit)
	unsigned char                                      bUseSelfAsOrigin : 1;                                     // 0x00C0(0x0001)
	unsigned char                                      bUseSelfAsObserved : 1;                                   // 0x00C0(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTDecorator_KeepInCone"));
		return ptr;
	}

};


// Class AIModule.BTDecorator_Loop
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_Loop : public UBTDecorator
{
public:
	int                                                NumLoops;                                                 // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInfiniteLoop;                                            // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTDecorator_Loop"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTDecorator_ReachedMoveGoal"));
		return ptr;
	}

};


// Class AIModule.BTDecorator_SetTagCooldown
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_SetTagCooldown : public UBTDecorator
{
public:
	FGameplayTag                                       CooldownTag;                                              // 0x0068(0x0008) (Edit)
	float                                              CoolDownDuration;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTDecorator_SetTagCooldown"));
		return ptr;
	}

};


// Class AIModule.BTDecorator_TagCooldown
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_TagCooldown : public UBTDecorator
{
public:
	FGameplayTag                                       CooldownTag;                                              // 0x0068(0x0008) (Edit)
	float                                              CoolDownDuration;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bActivatesCooldown;                                       // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0076(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTDecorator_TagCooldown"));
		return ptr;
	}

};


// Class AIModule.BTDecorator_TimeLimit
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_TimeLimit : public UBTDecorator
{
public:
	float                                              TimeLimit;                                                // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTDecorator_TimeLimit"));
		return ptr;
	}

};


// Class AIModule.BTService_BlackboardBase
// 0x0028 (0x0098 - 0x0070)
class UBTService_BlackboardBase : public UBTService
{
public:
	FBlackboardKeySelector                             BlackboardKey;                                            // 0x0070(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTService_BlackboardBase"));
		return ptr;
	}

};


// Class AIModule.BTService_DefaultFocus
// 0x0008 (0x00A0 - 0x0098)
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
public:
	unsigned char                                      FocusPriority;                                            // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTService_DefaultFocus"));
		return ptr;
	}

};


// Class AIModule.BTService_BlueprintBase
// 0x0028 (0x0098 - 0x0070)
class UBTService_BlueprintBase : public UBTService
{
public:
	AAIController*                                     AIOwner;                                                  // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	AActor*                                            ActorOwner;                                               // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x0090(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      bShowEventDetails : 1;                                    // 0x0090(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTService_BlueprintBase"));
		return ptr;
	}


	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
	void ReceiveSearchStartAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveSearchStart(AActor* OwnerActor);
	void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveDeactivation(AActor* OwnerActor);
	void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveActivation(AActor* OwnerActor);
	bool IsServiceActive();
};


// Class AIModule.BTComposite_Selector
// 0x0000 (0x0088 - 0x0088)
class UBTComposite_Selector : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTComposite_Selector"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTComposite_Sequence"));
		return ptr;
	}

};


// Class AIModule.BTComposite_SimpleParallel
// 0x0008 (0x0090 - 0x0088)
class UBTComposite_SimpleParallel : public UBTCompositeNode
{
public:
	TEnumAsByte<EBTParallelMode>                       FinishMode;                                               // 0x0088(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTComposite_SimpleParallel"));
		return ptr;
	}

};


// Class AIModule.BTTask_MoveDirectlyToward
// 0x0008 (0x0090 - 0x0088)
class UBTTask_MoveDirectlyToward : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0088(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bDisablePathUpdateOnGoalLocationChange : 1;               // 0x008C(0x0001) (Edit)
	unsigned char                                      bProjectVectorGoalToNavigation : 1;                       // 0x008C(0x0001) (Edit)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x008C(0x0001) (Edit)
	unsigned char                                      bStopOnOverlap : 1;                                       // 0x008C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x008D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTTask_MoveDirectlyToward"));
		return ptr;
	}

};


// Class AIModule.BTTask_MoveTo
// 0x0018 (0x00A0 - 0x0088)
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0088(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	UClass*                                            FilterClass;                                              // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x0098(0x0001) (Edit)
	unsigned char                                      bAllowPartialPath : 1;                                    // 0x0098(0x0001) (Edit)
	unsigned char                                      bStopOnOverlap : 1;                                       // 0x0098(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTTask_MoveTo"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryItemType"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryTypes"));
		return ptr;
	}

};


// Class AIModule.BTTask_BlueprintBase
// 0x0030 (0x0090 - 0x0060)
class UBTTask_BlueprintBase : public UBTTaskNode
{
public:
	AAIController*                                     AIOwner;                                                  // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	AActor*                                            ActorOwner;                                               // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x0088(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTTask_BlueprintBase"));
		return ptr;
	}


	void SetFinishOnMessageWithId(const FName& MessageName, int RequestID);
	void SetFinishOnMessage(const FName& MessageName);
	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveExecute(AActor* OwnerActor);
	void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveAbort(AActor* OwnerActor);
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
	float                                              Loudnes;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTTask_MakeNoise"));
		return ptr;
	}

};


// Class AIModule.PawnAction
// 0x0068 (0x0090 - 0x0028)
class UPawnAction : public UObject
{
public:
	UPawnAction*                                       ChildAction;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	UPawnAction*                                       ParentAction;                                             // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	UPawnActionsComponent*                             OwnerComponent;                                           // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	UObject*                                           Instigator;                                               // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	UBrainComponent*                                   BrainComp;                                                // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) MISSED OFFSET
	unsigned char                                      bAllowNewSameClassInstance : 1;                           // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bReplaceActiveSameClassInstance : 1;                      // 0x0078(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      bShouldPauseMovement : 1;                                 // 0x0078(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0079(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.PawnAction"));
		return ptr;
	}


	TEnumAsByte<EAIRequestPriority> GetActionPriority();
	void Finish(TEnumAsByte<EPawnActionResult> WithResult);
	static UPawnAction* CreateActionInstance(UObject* WorldContextObject, UClass* ActionClass);
};


// Class AIModule.BTTask_PawnActionBase
// 0x0000 (0x0060 - 0x0060)
class UBTTask_PawnActionBase : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTTask_PawnActionBase"));
		return ptr;
	}

};


// Class AIModule.BTTask_PushPawnAction
// 0x0008 (0x0068 - 0x0060)
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:
	UPawnAction*                                       Action;                                                   // 0x0060(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTTask_PushPawnAction"));
		return ptr;
	}

};


// Class AIModule.BTTask_PlayAnimation
// 0x0038 (0x0098 - 0x0060)
class UBTTask_PlayAnimation : public UBTTaskNode
{
public:
	UAnimationAsset*                                   AnimationToPlay;                                          // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x0068(0x0001) (Edit)
	unsigned char                                      bNonBlocking : 1;                                         // 0x0068(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	UBehaviorTreeComponent*                            MyOwnerComp;                                              // 0x0070(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	USkeletalMeshComponent*                            CachedSkelMesh;                                           // 0x0078(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0080(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTTask_PlayAnimation"));
		return ptr;
	}

};


// Class AIModule.BTTask_PlaySound
// 0x0008 (0x0068 - 0x0060)
class UBTTask_PlaySound : public UBTTaskNode
{
public:
	USoundCue*                                         SoundToPlay;                                              // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTTask_PlaySound"));
		return ptr;
	}

};


// Class AIModule.BTTask_RunBehavior
// 0x0008 (0x0068 - 0x0060)
class UBTTask_RunBehavior : public UBTTaskNode
{
public:
	UBehaviorTree*                                     BehaviorAsset;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTTask_RunBehavior"));
		return ptr;
	}

};


// Class AIModule.BTTask_RunBehaviorDynamic
// 0x0018 (0x0078 - 0x0060)
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	FGameplayTag                                       InjectionTag;                                             // 0x0060(0x0008) (Edit)
	UBehaviorTree*                                     DefaultBehaviorAsset;                                     // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UBehaviorTree*                                     BehaviorAsset;                                            // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTTask_RunBehaviorDynamic"));
		return ptr;
	}

};


// Class AIModule.BTTask_SetTagCooldown
// 0x0010 (0x0070 - 0x0060)
class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
	FGameplayTag                                       CooldownTag;                                              // 0x0060(0x0008) (Edit)
	bool                                               bAddToExistingDuration;                                   // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	float                                              CoolDownDuration;                                         // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTTask_SetTagCooldown"));
		return ptr;
	}

};


// Class AIModule.BTTask_Wait
// 0x0008 (0x0068 - 0x0060)
class UBTTask_Wait : public UBTTaskNode
{
public:
	float                                              WaitTime;                                                 // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTTask_Wait"));
		return ptr;
	}

};


// Class AIModule.BTTask_WaitBlackboardTime
// 0x0028 (0x0090 - 0x0068)
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:
	FBlackboardKeySelector                             BlackboardKey;                                            // 0x0068(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.BTTask_WaitBlackboardTime"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.CrowdAgentInterface"));
		return ptr;
	}

};


// Class AIModule.CrowdManager
// 0x00B8 (0x00E0 - 0x0028)
class UCrowdManager : public UObject
{
public:
	ANavigationData*                                   MyNavData;                                                // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<FCrowdAvoidanceConfig>                      AvoidanceConfig;                                          // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	TArray<FCrowdAvoidanceSamplingPattern>             SamplingPatterns;                                         // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	int                                                MaxAgents;                                                // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxAgentRadius;                                           // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAvoidedAgents;                                         // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAvoidedWalls;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              NavmeshCheckInterval;                                     // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PathOptimizationInterval;                                 // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00 : 3;                                        // 0x0068(0x0001)
	unsigned char                                      bResolveCollisions : 1;                                   // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x77];                                      // 0x0069(0x0077) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.CrowdManager"));
		return ptr;
	}

};


// Class AIModule.EnvQuery
// 0x0010 (0x0038 - 0x0028)
class UEnvQuery : public UObject
{
public:
	TArray<UEnvQueryOption*>                           Options;                                                  // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQuery"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryContext_BlueprintBase"));
		return ptr;
	}


	void ProvideSingleLocation(AActor* QuerierActor, FVector* ResultingLocation);
	void ProvideSingleActor(AActor* QuerierActor, AActor** ResultingActor);
	void ProvideLocationsSet(AActor* QuerierActor, TArray<FVector>* ResultingLocationSet);
	void ProvideActorsSet(AActor* QuerierActor, TArray<AActor*>* ResultingActorsSet);
};


// Class AIModule.EnvQueryContext_Item
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Item : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryContext_Item"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryContext_Querier"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.VisualLoggerExtension"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryDebugHelpers"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EQSQueryResultSourceInterface"));
		return ptr;
	}

};


// Class AIModule.EnvQueryInstanceBlueprintWrapper
// 0x0048 (0x0070 - 0x0028)
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	int                                                QueryID;                                                  // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0034(0x001C) MISSED OFFSET
	UClass*                                            ItemType;                                                 // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                OptionIndex;                                              // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	FScriptMulticastDelegate                           OnQueryFinishedEvent;                                     // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryInstanceBlueprintWrapper"));
		return ptr;
	}


	TArray<FVector> GetResultsAsLocations();
	TArray<AActor*> GetResultsAsActors();
	float GetItemScore(int ItemIndex);
	void EQSQueryDoneSignature__DelegateSignature(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
};


// Class AIModule.EnvQueryItemType_VectorBase
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryItemType_VectorBase"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryItemType_ActorBase"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryItemType_Actor"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryItemType_Direction"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryItemType_Point"));
		return ptr;
	}

};


// Class AIModule.EnvQueryManager
// 0x00E8 (0x0110 - 0x0028)
class UEnvQueryManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET
	TArray<FEnvQueryInstanceCache>                     InstanceCache;                                            // 0x0098(0x0010) (ZeroConstructor, Transient)
	TArray<UEnvQueryContext*>                          LocalContexts;                                            // 0x00A8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x58];                                      // 0x00B8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryManager"));
		return ptr;
	}


	static UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(UObject* WorldContext, UEnvQuery* QueryTemplate, UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, UClass* WrapperClass);
};


// Class AIModule.EnvQueryGenerator_ActorsOfClass
// 0x0040 (0x0090 - 0x0050)
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
	FAIDataProviderFloatValue                          SearchRadius;                                             // 0x0050(0x0030) (Edit, DisableEditOnInstance)
	UClass*                                            SearchedActorClass;                                       // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UClass*                                            SearchCenter;                                             // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryGenerator_ActorsOfClass"));
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_BlueprintBase
// 0x0050 (0x00A0 - 0x0050)
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
	FText                                              GeneratorsActionDescription;                              // 0x0050(0x0038) (Edit)
	UClass*                                            Context;                                                  // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UClass*                                            GeneratedItemType;                                        // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryGenerator_BlueprintBase"));
		return ptr;
	}


	UObject* GetQuerier();
	void DoItemGeneration(TArray<FVector> ContextLocations);
	void AddGeneratedVector(const FVector& GeneratedVector);
	void AddGeneratedActor(AActor* GeneratedActor);
};


// Class AIModule.EnvQueryGenerator_Composite
// 0x0018 (0x0068 - 0x0050)
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
public:
	TArray<UEnvQueryGenerator*>                        Generators;                                               // 0x0050(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	bool                                               bHasMatchingItemType;                                     // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryGenerator_Composite"));
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_ProjectedPoints
// 0x0040 (0x0090 - 0x0050)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	FEnvTraceData                                      ProjectionData;                                           // 0x0050(0x0040) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryGenerator_ProjectedPoints"));
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_Donut
// 0x0128 (0x01B8 - 0x0090)
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	FAIDataProviderFloatValue                          InnerRadius;                                              // 0x0090(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          OuterRadius;                                              // 0x00C0(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderIntValue                            NumberOfRings;                                            // 0x00F0(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderIntValue                            PointsPerRing;                                            // 0x0120(0x0030) (Edit, DisableEditOnInstance)
	FEnvDirection                                      ArcDirection;                                             // 0x0150(0x0020) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          ArcAngle;                                                 // 0x0170(0x0030) (Edit, DisableEditOnInstance)
	bool                                               RandomiseRadius;                                          // 0x01A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET
	UClass*                                            Center;                                                   // 0x01A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDefineArc : 1;                                           // 0x01B0(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryGenerator_Donut"));
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_OnCircle
// 0x0108 (0x0198 - 0x0090)
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
	FAIDataProviderFloatValue                          CircleRadius;                                             // 0x0090(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          SpaceBetween;                                             // 0x00C0(0x0030) (Edit, DisableEditOnInstance)
	FEnvDirection                                      ArcDirection;                                             // 0x00F0(0x0020) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          ArcAngle;                                                 // 0x0110(0x0030) (Edit, DisableEditOnInstance)
	float                                              AngleRadians;                                             // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	UClass*                                            CircleCenter;                                             // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FEnvTraceData                                      TraceData;                                                // 0x0150(0x0040) (Edit)
	unsigned char                                      bDefineArc : 1;                                           // 0x0190(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0191(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryGenerator_OnCircle"));
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_SimpleGrid
// 0x0068 (0x00F8 - 0x0090)
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	FAIDataProviderFloatValue                          GridSize;                                                 // 0x0090(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          SpaceBetween;                                             // 0x00C0(0x0030) (Edit, DisableEditOnInstance)
	UClass*                                            GenerateAround;                                           // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryGenerator_SimpleGrid"));
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_PathingGrid
// 0x0068 (0x0160 - 0x00F8)
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:
	FAIDataProviderBoolValue                           PathToItem;                                               // 0x00F8(0x0030) (Edit, DisableEditOnInstance)
	UClass*                                            NavigationFilter;                                         // 0x0128(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FAIDataProviderFloatValue                          ScanRangeMultiplier;                                      // 0x0130(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryGenerator_PathingGrid"));
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Distance
// 0x0010 (0x0180 - 0x0170)
class UEnvQueryTest_Distance : public UEnvQueryTest
{
public:
	TEnumAsByte<EEnvTestDistance>                      TestMode;                                                 // 0x0170(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	UClass*                                            DistanceTo;                                               // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryTest_Distance"));
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Dot
// 0x0048 (0x01B8 - 0x0170)
class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
	FEnvDirection                                      LineA;                                                    // 0x0170(0x0020) (Edit, DisableEditOnInstance)
	FEnvDirection                                      LineB;                                                    // 0x0190(0x0020) (Edit, DisableEditOnInstance)
	TEnumAsByte<EEnvTestDot>                           TestMode;                                                 // 0x01B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAbsoluteValue;                                           // 0x01B1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x01B2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryTest_Dot"));
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_GameplayTags
// 0x0030 (0x01A0 - 0x0170)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
public:
	TEnumAsByte<EGameplayContainerMatchType>           TagsToMatch;                                              // 0x0170(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	FGameplayTagContainer                              GameplayTags;                                             // 0x0178(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryTest_GameplayTags"));
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Pathfinding
// 0x00D8 (0x0248 - 0x0170)
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	TEnumAsByte<EEnvTestPathfinding>                   TestMode;                                                 // 0x0170(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	UClass*                                            Context;                                                  // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FAIDataProviderBoolValue                           PathFromContext;                                          // 0x0180(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderBoolValue                           SkipUnreachable;                                          // 0x01B0(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderIntValue                            MaxNumPathSegments;                                       // 0x01E0(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderBoolValue                           PassThroughUnreachable;                                   // 0x0210(0x0030) (Edit, DisableEditOnInstance)
	UClass*                                            FilterClass;                                              // 0x0240(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryTest_Pathfinding"));
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_PathfindingBatch
// 0x0030 (0x0278 - 0x0248)
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:
	FAIDataProviderFloatValue                          ScanRangeMultiplier;                                      // 0x0248(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryTest_PathfindingBatch"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryTest_Random"));
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Trace
// 0x00D8 (0x0248 - 0x0170)
class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
	FEnvTraceData                                      TraceData;                                                // 0x0170(0x0040) (Edit, DisableEditOnInstance)
	FAIDataProviderBoolValue                           TraceFromContext;                                         // 0x01B0(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          ItemHeightOffset;                                         // 0x01E0(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          ContextHeightOffset;                                      // 0x0210(0x0030) (Edit, DisableEditOnInstance)
	UClass*                                            Context;                                                  // 0x0240(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryTest_Trace"));
		return ptr;
	}

};


// Class AIModule.EnvQueryOption
// 0x0018 (0x0040 - 0x0028)
class UEnvQueryOption : public UObject
{
public:
	UEnvQueryGenerator*                                Generator;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<UEnvQueryTest*>                             Tests;                                                    // 0x0030(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EnvQueryOption"));
		return ptr;
	}

};


// Class AIModule.EQSRenderingComponent
// 0x0010 (0x05A0 - 0x0590)
class UEQSRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0590(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EQSRenderingComponent"));
		return ptr;
	}

};


// Class AIModule.EQSTestingPawn
// 0x0060 (0x0640 - 0x05E0)
class AEQSTestingPawn : public ACharacter
{
public:
	UEnvQuery*                                         QueryTemplate;                                            // 0x05E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FEnvNamedValue>                             QueryParams;                                              // 0x05E8(0x0010) (Edit, ZeroConstructor)
	float                                              TimeLimitPerStep;                                         // 0x05F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StepToDebugDraw;                                          // 0x05FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryHightlightMode>               HighlightMode;                                            // 0x0600(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0601(0x0003) MISSED OFFSET
	unsigned char                                      bDrawLabels : 1;                                          // 0x0604(0x0001) (Edit)
	unsigned char                                      bDrawFailedItems : 1;                                     // 0x0604(0x0001) (Edit)
	unsigned char                                      bReRunQueryOnlyOnFinishedMove : 1;                        // 0x0604(0x0001) (Edit)
	unsigned char                                      bShouldBeVisibleInGame : 1;                               // 0x0604(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0605(0x0003) MISSED OFFSET
	TEnumAsByte<EEnvQueryRunMode>                      QueryingMode;                                             // 0x0608(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x37];                                      // 0x0609(0x0037) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.EQSTestingPawn"));
		return ptr;
	}

};


// Class AIModule.CrowdFollowingComponent
// 0x0050 (0x0308 - 0x02B8)
class UCrowdFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B8(0x0008) MISSED OFFSET
	FVector                                            CrowdAgentMoveDirection;                                  // 0x02C0(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	UCharacterMovementComponent*                       CharacterMovement;                                        // 0x02D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	FNavAvoidanceMask                                  AvoidanceGroup;                                           // 0x02D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FNavAvoidanceMask                                  GroupsToAvoid;                                            // 0x02DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FNavAvoidanceMask                                  GroupsToIgnore;                                           // 0x02E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x24];                                      // 0x02E4(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.CrowdFollowingComponent"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.PawnAction_BlueprintBase"));
		return ptr;
	}


	void ActionTick(APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(APawn* ControlledPawn);
	void ActionResume(APawn* ControlledPawn);
	void ActionPause(APawn* ControlledPawn);
	void ActionFinished(APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
};


// Class AIModule.PawnAction_Move
// 0x0050 (0x00E0 - 0x0090)
class UPawnAction_Move : public UPawnAction
{
public:
	AActor*                                            GoalActor;                                                // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FVector                                            GoalLocation;                                             // 0x0098(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AcceptableRadius;                                         // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UClass*                                            FilterClass;                                              // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x00B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bFinishOnOverlap : 1;                                     // 0x00B0(0x0001)
	unsigned char                                      bUsePathfinding : 1;                                      // 0x00B0(0x0001)
	unsigned char                                      bAllowPartialPath : 1;                                    // 0x00B0(0x0001)
	unsigned char                                      bProjectGoalToNavigation : 1;                             // 0x00B0(0x0001)
	unsigned char                                      bUpdatePathToGoal : 1;                                    // 0x00B0(0x0001)
	unsigned char                                      bAbortChildActionOnPathChange : 1;                        // 0x00B0(0x0001)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x00B1(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.PawnAction_Move"));
		return ptr;
	}

};


// Class AIModule.PawnAction_Repeat
// 0x0020 (0x00B0 - 0x0090)
class UPawnAction_Repeat : public UPawnAction
{
public:
	UPawnAction*                                       ActionToRepeat;                                           // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	UPawnAction*                                       RecentActionCopy;                                         // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                 // 0x00A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00A1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.PawnAction_Repeat"));
		return ptr;
	}

};


// Class AIModule.PawnAction_Sequence
// 0x0028 (0x00B8 - 0x0090)
class UPawnAction_Sequence : public UPawnAction
{
public:
	TArray<UPawnAction*>                               ActionSequence;                                           // 0x0090(0x0010) (ZeroConstructor)
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                 // 0x00A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	UPawnAction*                                       RecentActionCopy;                                         // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.PawnAction_Sequence"));
		return ptr;
	}

};


// Class AIModule.PawnAction_Wait
// 0x0010 (0x00A0 - 0x0090)
class UPawnAction_Wait : public UPawnAction
{
public:
	float                                              TimeToWait;                                               // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0094(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.PawnAction_Wait"));
		return ptr;
	}

};


// Class AIModule.PawnSensingComponent
// 0x0048 (0x0110 - 0x00C8)
class UPawnSensingComponent : public UActorComponent
{
public:
	float                                              HearingThreshold;                                         // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LOSHearingThreshold;                                      // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SightRadius;                                              // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SensingInterval;                                          // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HearingMaxSoundAge;                                       // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableSensingUpdates : 1;                                // 0x00DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOnlySensePlayers : 1;                                    // 0x00DC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSeePawns : 1;                                            // 0x00DC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bHearNoises : 1;                                          // 0x00DC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xB];                                       // 0x00DD(0x000B) MISSED OFFSET
	FScriptMulticastDelegate                           OnSeePawn;                                                // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnHearNoise;                                              // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              PeripheralVisionAngle;                                    // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PeripheralVisionCosine;                                   // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIModule.PawnSensingComponent"));
		return ptr;
	}


	void SetSensingUpdatesEnabled(bool bEnabled);
	void SetSensingInterval(float NewSensingInterval);
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
	void SeePawnDelegate__DelegateSignature(APawn* Pawn);
	void HearNoiseDelegate__DelegateSignature(APawn* Instigator, const FVector& Location, float Volume);
	float GetPeripheralVisionCosine();
	float GetPeripheralVisionAngle();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
