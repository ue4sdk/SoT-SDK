#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_GameplayTags_classes.hpp"
#include "SoT_GameplayTasks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8_t
{
	EPathFollowingResult__Success  = 0,
	None                           = 1,
	EPathFollowingResult__Skipped  = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8_t
{
	EEnvQueryStatus__Processing    = 0,
	None                           = 1,
	EEnvQueryStatus__OwnerLost     = 2,
	None01                         = 3,
	NameProperty                   = 4,
	EQSQueryDoneSignature__DelegateSignature = 5
};


// Enum AIModule.EAILockSource
enum class EAILockSource : uint8_t
{
	EAILockSource__Animation       = 0,
	None                           = 1,
	IntProperty                    = 2,
	EAILockSource__MAX             = 3,
	None01                         = 4,
	EPawnActionResult__NotStarted  = 5
};


// Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8_t
{
	EAIRequestPriority__SoftScript = 0,
	None                           = 1,
	EAIRequestPriority__Ultimate   = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8_t
{
	EPawnActionEventType__Invalid  = 0,
	None                           = 1,
	EPawnActionEventType__FinishedExecution = 2,
	None01                         = 3
};


// Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8_t
{
	EPawnActionResult__NotStarted  = 0,
	None                           = 1,
	EPawnActionResult__Aborted     = 2,
	None01                         = 3,
	EPathFollowingAction__Error    = 4
};


// Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8_t
{
	EPawnActionAbortState__NeverStarted = 0,
	None                           = 1,
	EPawnActionAbortState__AbortDone = 2,
	None01                         = 3
};


// Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8_t
{
	EAIOptionFlag__Default         = 0,
	None                           = 1,
	EAIOptionFlag__EAIOptionFlag_MAX = 2,
	EBTNodeResult__Succeeded       = 3
};


// Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8_t
{
	EPathFollowingRequestResult__Failed = 0,
	None                           = 1,
	IntProperty                    = 2,
	ETaskResourceOverlapPolicy__StartOnTop = 3
};


// Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8_t
{
	EPathFollowingAction__Error    = 0,
	None                           = 1,
	EPathFollowingAction__PathToGoal = 2,
	None01                         = 3,
	EAITaskPriority__Lowest        = 4
};


// Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8_t
{
	EPathFollowingStatus__Idle     = 0,
	None                           = 1,
	EPathFollowingStatus__EPathFollowingStatus_MAX = 2,
	EEnvQueryRunMode__SingleResult = 3
};


// Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8_t
{
	EBTFlowAbortMode__None         = 0,
	None                           = 1,
	EBTFlowAbortMode__EBTFlowAbortMode_MAX = 2,
	EAIOptionFlag__Default         = 3
};


// Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8_t
{
	EBTNodeResult__Succeeded       = 0,
	None                           = 1,
	EBTNodeResult__EBTNodeResult_MAX = 2,
	EPathFollowingStatus__Idle     = 3
};


// Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8_t
{
	ETeamAttitude__Friendly        = 0,
	None                           = 1,
	IntProperty                    = 2,
	EBasicKeyOperation__Set        = 3
};


// Enum AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8_t
{
	EAISenseNotifyType__OnEveryPerception = 0,
	None                           = 1,
	IntProperty                    = 2
};


// Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8_t
{
	EAITaskPriority__Lowest        = 0,
	None                           = 1,
	EAITaskPriority__Ultimate      = 2,
	None01                         = 3,
	EBTDecoratorLogic__Invalid     = 4
};


// Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8_t
{
	EBTDecoratorLogic__Invalid     = 0,
	None                           = 1,
	EBTDecoratorLogic__Not         = 2,
	None01                         = 3
};


// Enum AIModule.EBTChildIndex
enum class EBTChildIndex : uint8_t
{
	EBTChildIndex__FirstNode       = 0,
	None                           = 1
};


// Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8_t
{
	ETextKeyOperation__Equal       = 0,
	None                           = 1,
	ETextKeyOperation__ETextKeyOperation_MAX = 2,
	EEnvQueryTrace__None           = 3
};


// Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8_t
{
	EArithmeticKeyOperation__Equal = 0,
	None                           = 1,
	IntProperty                    = 2,
	EArithmeticKeyOperation__Greater = 3,
	None01                         = 4,
	NameProperty                   = 5
};


// Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8_t
{
	EBasicKeyOperation__Set        = 0,
	None                           = 1
};


// Enum AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8_t
{
	EBTBlackboardRestart__ValueChange = 0,
	None                           = 1
};


// Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8_t
{
	EBlackBoardEntryComparison__Equal = 0,
	None                           = 1
};


// Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8_t
{
	EPathExistanceQueryType__NavmeshRaycast2D = 0,
	None                           = 1,
	EBlackBoardEntryComparison__Equal = 2
};


// Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8_t
{
	EBTParallelMode__AbortBackground = 0,
	None                           = 1
};


// Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8_t
{
	EEnvQueryTestClamping__None    = 0,
	None                           = 1,
	TRAVEL_Absolute                = 2
};


// Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8_t
{
	EEnvDirection__TwoPoints       = 0,
	None                           = 1
};


// Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8_t
{
	EEnvTraceShape__Line           = 0,
	None                           = 1,
	EEnvTraceShape__EEnvTraceShape_MAX = 2,
	EEnvTestScoreEquation__Linear  = 3
};


// Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8_t
{
	EEnvQueryTrace__None           = 0,
	None                           = 1,
	EEnvQueryTrace__EEnvQueryTrace_MAX = 2,
	EEnvTraceShape__Line           = 3
};


// Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8_t
{
	EEnvQueryParam__Float          = 0,
	None                           = 1,
	EBTChildIndex__FirstNode       = 2
};


// Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8_t
{
	EEnvQueryRunMode__SingleResult = 0,
	None                           = 1,
	EEnvQueryRunMode__EEnvQueryRunMode_MAX = 2,
	ETextKeyOperation__Equal       = 3
};


// Enum AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8_t
{
	EEnvTestScoreOperator__AverageScore = 0,
	None                           = 1,
	EEnvTestCost__Low              = 2
};


// Enum AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8_t
{
	EEnvTestFilterOperator__AllPass = 0,
	None                           = 1
};


// Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8_t
{
	EEnvTestCost__Low              = 0,
	None                           = 1,
	EPawnActionFailHandling__RequireSuccess = 2
};


// Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8_t
{
	EEnvTestWeight__None           = 0,
	None                           = 1,
	IntProperty                    = 2,
	EEnvTestWeight__Constant       = 3,
	None01                         = 4,
	NameProperty                   = 5
};


// Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8_t
{
	EEnvTestScoreEquation__Linear  = 0,
	None                           = 1,
	EEnvTestScoreEquation__EEnvTestScoreEquation_MAX = 2
};


// Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8_t
{
	EEnvTestFilterType__Minimum    = 0,
	None                           = 1,
	EEnvTestFilterType__EEnvTestFilterType_MAX = 2,
	EMovieCaptureType__AVI         = 3
};


// Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8_t
{
	EEnvTestPurpose__Filter        = 0,
	None                           = 1,
	EPawnSubActionTriggeringPolicy__CopyBeforeTriggering = 2
};


// Enum AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8_t
{
	EPawnActionFailHandling__RequireSuccess = 0,
	None                           = 1
};


// Enum AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8_t
{
	EPawnSubActionTriggeringPolicy__CopyBeforeTriggering = 0,
	None                           = 1
};


// Enum AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8_t
{
	EEnvTestDistance__Distance3D   = 0,
	None                           = 1,
	EEnvQueryHightlightMode__All   = 2
};


// Enum AIModule.EEnvTestDot
enum class EEnvTestDot : uint8_t
{
	EEnvTestDot__Dot3D             = 0,
	None                           = 1
};


// Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8_t
{
	EEnvTestPathfinding__PathExist = 0,
	None                           = 1,
	EDrivenBoneModificationMode__AddToInput = 2
};


// Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8_t
{
	EEnvQueryHightlightMode__All   = 0,
	None                           = 1,
	EEnvTestDot__Dot3D             = 2
};


// Enum AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8_t
{
	EPawnActionMoveMode__UsePathfinding = 0,
	None                           = 1
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AIModule.BlackboardKeySelector
// 0x0028
struct FBlackboardKeySelector
{
	TArray<class UBlackboardKeyType*>                  AllowedTypes;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	struct FName                                       SelectedKeyName;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      SelectedKeyType;                                          // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData)
	unsigned char                                      SelectedKeyID;                                            // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	unsigned char                                      bNoneIsAllowedValue : 1;                                  // 0x0024(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct AIModule.EnvNamedValue
// 0x0010
struct FEnvNamedValue
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryParam>                        ParamType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AIDataProviderValue
// 0x0020
struct FAIDataProviderValue
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UProperty*                                   CachedProperty;                                           // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAIDataProvider*                             DataBinding;                                              // 0x0010(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       DataField;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AIDataProviderTypedValue
// 0x0008 (0x0028 - 0x0020)
struct FAIDataProviderTypedValue : public FAIDataProviderValue
{
	class UClass*                                      PropertyType;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AIDataProviderBoolValue
// 0x0008 (0x0030 - 0x0028)
struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue
{
	bool                                               DefaultValue;                                             // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct AIModule.AIDataProviderFloatValue
// 0x0008 (0x0030 - 0x0028)
struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue
{
	float                                              DefaultValue;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AIModule.AIRequestID
// 0x0004
struct FAIRequestID
{
	uint32_t                                           RequestID;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.PawnActionStack
// 0x0008
struct FPawnActionStack
{
	class UPawnAction*                                 TopAction;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.PawnActionEvent
// 0x0018
struct FPawnActionEvent
{
	class UPawnAction*                                 Action;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AIModule.AIStimulus
// 0x003C
struct FAIStimulus
{
	float                                              Age;                                                      // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExpirationAge;                                            // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StimulusLocation;                                         // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReceiverLocation;                                         // 0x0018(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // 0x0024(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x002C(0x000C) MISSED OFFSET
	unsigned char                                      UnknownData01 : 1;                                        // 0x0038(0x0001)
	unsigned char                                      bSuccessfullySensed : 1;                                  // 0x0038(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
};

// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
// 0x0020
struct FActorPerceptionBlueprintInfo
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIStimulus>                         LastSensedStimuli;                                        // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      bIsHostile : 1;                                           // 0x0018(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct AIModule.AIDamageEvent
// 0x0030
struct FAIDamageEvent
{
	float                                              Amount;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AActor*                                      DamagedActor;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AINoiseEvent
// 0x0030
struct FAINoiseEvent
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FVector                                     NoiseLocation;                                            // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Loudness;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct AIModule.AIPredictionEvent
// 0x0018
struct FAIPredictionEvent
{
	class AActor*                                      Requestor;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      PredictedActor;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct AIModule.AITeamStimulusEvent
// 0x0038
struct FAITeamStimulusEvent
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	class AActor*                                      Broadcaster;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Enemy;                                                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AITouchEvent
// 0x0020
struct FAITouchEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	class AActor*                                      TouchReceiver;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AISenseAffiliationFilter
// 0x0004
struct FAISenseAffiliationFilter
{
	unsigned char                                      bDetectEnemies : 1;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bDetectNeutrals : 1;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bDetectFriendlies : 1;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct AIModule.BTDecoratorLogic
// 0x0004
struct FBTDecoratorLogic
{
	TEnumAsByte<EBTDecoratorLogic>                     Operation;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           Number;                                                   // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.BTCompositeChild
// 0x0030
struct FBTCompositeChild
{
	class UBTCompositeNode*                            ChildComposite;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBTTaskNode*                                 ChildTask;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UBTDecorator*>                        Decorators;                                               // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FBTDecoratorLogic>                   DecoratorOps;                                             // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AIModule.BehaviorTreeTemplateInfo
// 0x0018
struct FBehaviorTreeTemplateInfo
{
	class UBehaviorTree*                               Asset;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBTCompositeNode*                            Template;                                                 // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct AIModule.BlackboardEntry
// 0x0018
struct FBlackboardEntry
{
	struct FName                                       EntryName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlackboardKeyType*                          KeyType;                                                  // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bInstanceSynced : 1;                                      // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AIModule.CrowdAvoidanceConfig
// 0x001C
struct FCrowdAvoidanceConfig
{
	float                                              VelocityBias;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DesiredVelocityWeight;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurrentVelocityWeight;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SideBiasWeight;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactTimeWeight;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactTimeRange;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CustomPatternIdx;                                         // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AdaptiveDivisions;                                        // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AdaptiveRings;                                            // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AdaptiveDepth;                                            // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
// 0x0020
struct FCrowdAvoidanceSamplingPattern
{
	TArray<float>                                      Angles;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      Radii;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AIModule.EnvQueryInstanceCache
// 0x0280
struct FEnvQueryInstanceCache
{
	class UEnvQuery*                                   Template;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x278];                                     // 0x0008(0x0278) MISSED OFFSET
};

// ScriptStruct AIModule.EnvTraceData
// 0x0038
struct FEnvTraceData
{
	int                                                VersionNum;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      NavigationFilter;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectDown;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectUp;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtentX;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtentY;                                                  // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtentZ;                                                  // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostProjectionVerticalOffset;                             // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     SerializedChannel;                                        // 0x0029(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTraceShape>                        TraceShape;                                               // 0x002A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvQueryTrace>                        TraceMode;                                                // 0x002B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bTraceComplex : 1;                                        // 0x002C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bOnlyBlockingHits : 1;                                    // 0x002C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanTraceOnNavMesh : 1;                                   // 0x002C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanTraceOnGeometry : 1;                                  // 0x002C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanDisableTrace : 1;                                     // 0x002C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanProjectDown : 1;                                      // 0x002C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	bool                                               bUseUpDownAsAbsoluteZStartAndEnd;                         // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSourceZAsEnd;                                         // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct AIModule.AIDataProviderIntValue
// 0x0008 (0x0030 - 0x0028)
struct FAIDataProviderIntValue : public FAIDataProviderTypedValue
{
	int                                                DefaultValue;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AIModule.EnvDirection
// 0x0020
struct FEnvDirection
{
	class UClass*                                      LineFrom;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LineTo;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Rotation;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvDirection>                         DirMode;                                                  // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct AIModule.AIMoveRequest
// 0x0040
struct FAIMoveRequest
{
	class AActor*                                      GoalActor;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AIModule.GenericTeamId
// 0x0001
struct FGenericTeamId
{
	unsigned char                                      TeamID;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AIDataProviderStructValue
// 0x0010 (0x0030 - 0x0020)
struct FAIDataProviderStructValue : public FAIDataProviderValue
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct AIModule.IgnoreActorInfo
// 0x000C
struct FIgnoreActorInfo
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              TimeRemaining;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AISightEvent
// 0x0018
struct FAISightEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      SeenActor;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Observer;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.EnvBoolParam_DEPRECATED
// 0x000C
struct FEnvBoolParam_DEPRECATED
{
	bool                                               Value;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       ParamName;                                                // 0x0004(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AIModule.EnvBoolParam
// 0x0000 (0x000C - 0x000C)
struct FEnvBoolParam : public FEnvBoolParam_DEPRECATED
{

};

// ScriptStruct AIModule.EnvIntParam_DEPRECATED
// 0x000C
struct FEnvIntParam_DEPRECATED
{
	int                                                Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ParamName;                                                // 0x0004(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AIModule.EnvIntParam
// 0x0000 (0x000C - 0x000C)
struct FEnvIntParam : public FEnvIntParam_DEPRECATED
{

};

// ScriptStruct AIModule.EnvFloatParam_DEPRECATED
// 0x000C
struct FEnvFloatParam_DEPRECATED
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ParamName;                                                // 0x0004(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AIModule.EnvFloatParam
// 0x0000 (0x000C - 0x000C)
struct FEnvFloatParam : public FEnvFloatParam_DEPRECATED
{

};

// ScriptStruct AIModule.EnvQueryResult
// 0x0040
struct FEnvQueryResult
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	class UClass*                                      ItemType;                                                 // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0018(0x0014) MISSED OFFSET
	int                                                OptionIndex;                                              // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                QueryID;                                                  // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
};

// ScriptStruct AIModule.EnvQueryRequest
// 0x0168
struct FEnvQueryRequest
{
	class UEnvQuery*                                   QueryTemplate;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     Owner;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWorld*                                      World;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x150];                                     // 0x0018(0x0150) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
