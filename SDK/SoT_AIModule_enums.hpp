#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8_t
{
	EPathFollowingResult__Success  = 0,
	EPathFollowingResult__Blocked  = 1,
	EPathFollowingResult__OffPath  = 2,
	EPathFollowingResult__Aborted  = 3,
	EPathFollowingResult__Skipped  = 4,
	EPathFollowingResult__Invalid  = 5,
	EPathFollowingResult__EPathFollowingResult_MAX = 6
};


// Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8_t
{
	EEnvQueryStatus__Processing    = 0,
	EEnvQueryStatus__Success       = 1,
	EEnvQueryStatus__Failed        = 2,
	EEnvQueryStatus__Aborted       = 3,
	EEnvQueryStatus__OwnerLost     = 4,
	EEnvQueryStatus__MissingParam  = 5,
	EEnvQueryStatus__EEnvQueryStatus_MAX = 6
};


// Enum AIModule.EAILockSource
enum class EAILockSource : uint8_t
{
	EAILockSource__Animation       = 0,
	EAILockSource__Logic           = 1,
	EAILockSource__Script          = 2,
	EAILockSource__Gameplay        = 3,
	EAILockSource__MAX             = 4,
	EAILockSource__EAILockSource_MAX = 5
};


// Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8_t
{
	EAIRequestPriority__SoftScript = 0,
	EAIRequestPriority__Logic      = 1,
	EAIRequestPriority__HardScript = 2,
	EAIRequestPriority__Reaction   = 3,
	EAIRequestPriority__Ultimate   = 4,
	EAIRequestPriority__MAX        = 5,
	EAIRequestPriority__EAIRequestPriority_MAX = 6
};


// Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8_t
{
	EPawnActionEventType__Invalid  = 0,
	EPawnActionEventType__FailedToStart = 1,
	EPawnActionEventType__InstantAbort = 2,
	EPawnActionEventType__FinishedAborting = 3,
	EPawnActionEventType__FinishedExecution = 4,
	EPawnActionEventType__Push     = 5,
	EPawnActionEventType__EPawnActionEventType_MAX = 6
};


// Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8_t
{
	EPawnActionResult__NotStarted  = 0,
	EPawnActionResult__InProgress  = 1,
	EPawnActionResult__Success     = 2,
	EPawnActionResult__Failed      = 3,
	EPawnActionResult__Aborted     = 4,
	EPawnActionResult__EPawnActionResult_MAX = 5
};


// Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8_t
{
	EPawnActionAbortState__NeverStarted = 0,
	EPawnActionAbortState__NotBeingAborted = 1,
	EPawnActionAbortState__MarkPendingAbort = 2,
	EPawnActionAbortState__LatentAbortInProgress = 3,
	EPawnActionAbortState__AbortDone = 4,
	EPawnActionAbortState__MAX     = 5,
	EPawnActionAbortState__EPawnActionAbortState_MAX = 6
};


// Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8_t
{
	EAIOptionFlag__Default         = 0,
	EAIOptionFlag__Enable          = 1,
	EAIOptionFlag__Disable         = 2,
	EAIOptionFlag__MAX             = 3,
	EAIOptionFlag__EAIOptionFlag_MAX = 4
};


// Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8_t
{
	EPathFollowingRequestResult__Failed = 0,
	EPathFollowingRequestResult__AlreadyAtGoal = 1,
	EPathFollowingRequestResult__RequestSuccessful = 2,
	EPathFollowingRequestResult__EPathFollowingRequestResult_MAX = 3
};


// Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8_t
{
	EPathFollowingAction__Error    = 0,
	EPathFollowingAction__NoMove   = 1,
	EPathFollowingAction__DirectMove = 2,
	EPathFollowingAction__PartialPath = 3,
	EPathFollowingAction__PathToGoal = 4,
	EPathFollowingAction__EPathFollowingAction_MAX = 5
};


// Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8_t
{
	EPathFollowingStatus__Idle     = 0,
	EPathFollowingStatus__Waiting  = 1,
	EPathFollowingStatus__Paused   = 2,
	EPathFollowingStatus__Moving   = 3,
	EPathFollowingStatus__EPathFollowingStatus_MAX = 4
};


// Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8_t
{
	ETextKeyOperation__Equal       = 0,
	ETextKeyOperation__NotEqual    = 1,
	ETextKeyOperation__Contain     = 2,
	ETextKeyOperation__NotContain  = 3,
	ETextKeyOperation__ETextKeyOperation_MAX = 4
};


// Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8_t
{
	EArithmeticKeyOperation__Equal = 0,
	EArithmeticKeyOperation__NotEqual = 1,
	EArithmeticKeyOperation__Less  = 2,
	EArithmeticKeyOperation__LessOrEqual = 3,
	EArithmeticKeyOperation__Greater = 4,
	EArithmeticKeyOperation__GreaterOrEqual = 5,
	EArithmeticKeyOperation__EArithmeticKeyOperation_MAX = 6
};


// Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8_t
{
	EBasicKeyOperation__Set        = 0,
	EBasicKeyOperation__NotSet     = 1,
	EBasicKeyOperation__EBasicKeyOperation_MAX = 2
};


// Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8_t
{
	EBTFlowAbortMode__None         = 0,
	EBTFlowAbortMode__LowerPriority = 1,
	EBTFlowAbortMode__Self         = 2,
	EBTFlowAbortMode__Both         = 3,
	EBTFlowAbortMode__EBTFlowAbortMode_MAX = 4
};


// Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8_t
{
	EBTNodeResult__Succeeded       = 0,
	EBTNodeResult__Failed          = 1,
	EBTNodeResult__Aborted         = 2,
	EBTNodeResult__InProgress      = 3,
	EBTNodeResult__EBTNodeResult_MAX = 4
};


// Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8_t
{
	ETeamAttitude__Friendly        = 0,
	ETeamAttitude__Neutral         = 1,
	ETeamAttitude__Hostile         = 2,
	ETeamAttitude__Alliance        = 3,
	ETeamAttitude__ETeamAttitude_MAX = 4
};


// Enum AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8_t
{
	EAISenseNotifyType__OnEveryPerception = 0,
	EAISenseNotifyType__OnPerceptionChange = 1,
	EAISenseNotifyType__EAISenseNotifyType_MAX = 2
};


// Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8_t
{
	EAITaskPriority__Lowest        = 0,
	EAITaskPriority__Low           = 1,
	EAITaskPriority__AutonomousAI  = 2,
	EAITaskPriority__High          = 3,
	EAITaskPriority__Ultimate      = 4,
	EAITaskPriority__EAITaskPriority_MAX = 5
};


// Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8_t
{
	EBTDecoratorLogic__Invalid     = 0,
	EBTDecoratorLogic__Test        = 1,
	EBTDecoratorLogic__And         = 2,
	EBTDecoratorLogic__Or          = 3,
	EBTDecoratorLogic__Not         = 4,
	EBTDecoratorLogic__EBTDecoratorLogic_MAX = 5
};


// Enum AIModule.EBTChildIndex
enum class EBTChildIndex : uint8_t
{
	EBTChildIndex__FirstNode       = 0,
	EBTChildIndex__TaskNode        = 1,
	EBTChildIndex__EBTChildIndex_MAX = 2
};


// Enum AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8_t
{
	EBTBlackboardRestart__ValueChange = 0,
	EBTBlackboardRestart__ResultChange = 1,
	EBTBlackboardRestart__EBTBlackboardRestart_MAX = 2
};


// Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8_t
{
	EBlackBoardEntryComparison__Equal = 0,
	EBlackBoardEntryComparison__NotEqual = 1,
	EBlackBoardEntryComparison__EBlackBoardEntryComparison_MAX = 2
};


// Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8_t
{
	EPathExistanceQueryType__NavmeshRaycast2D = 0,
	EPathExistanceQueryType__HierarchicalQuery = 1,
	EPathExistanceQueryType__RegularPathFinding = 2,
	EPathExistanceQueryType__EPathExistanceQueryType_MAX = 3
};


// Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8_t
{
	EBTParallelMode__AbortBackground = 0,
	EBTParallelMode__WaitForBackground = 1,
	EBTParallelMode__EBTParallelMode_MAX = 2
};


// Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8_t
{
	EEnvQueryTestClamping__None    = 0,
	EEnvQueryTestClamping__SpecifiedValue = 1,
	EEnvQueryTestClamping__FilterThreshold = 2,
	EEnvQueryTestClamping__EEnvQueryTestClamping_MAX = 3
};


// Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8_t
{
	EEnvDirection__TwoPoints       = 0,
	EEnvDirection__Rotation        = 1,
	EEnvDirection__EEnvDirection_MAX = 2
};


// Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8_t
{
	EEnvTraceShape__Line           = 0,
	EEnvTraceShape__Box            = 1,
	EEnvTraceShape__Sphere         = 2,
	EEnvTraceShape__Capsule        = 3,
	EEnvTraceShape__EEnvTraceShape_MAX = 4
};


// Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8_t
{
	EEnvQueryTrace__None           = 0,
	EEnvQueryTrace__Navigation     = 1,
	EEnvQueryTrace__Geometry       = 2,
	EEnvQueryTrace__RejectGeometry = 3,
	EEnvQueryTrace__EEnvQueryTrace_MAX = 4
};


// Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8_t
{
	EEnvQueryParam__Float          = 0,
	EEnvQueryParam__Int            = 1,
	EEnvQueryParam__Bool           = 2,
	EEnvQueryParam__EEnvQueryParam_MAX = 3
};


// Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8_t
{
	EEnvQueryRunMode__SingleResult = 0,
	EEnvQueryRunMode__RandomBest5Pct = 1,
	EEnvQueryRunMode__RandomBest25Pct = 2,
	EEnvQueryRunMode__AllMatching  = 3,
	EEnvQueryRunMode__RandomFromAllMatching = 4,
	EEnvQueryRunMode__EEnvQueryRunMode_MAX = 5
};


// Enum AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8_t
{
	EEnvTestScoreOperator__AverageScore = 0,
	EEnvTestScoreOperator__MinScore = 1,
	EEnvTestScoreOperator__MaxScore = 2,
	EEnvTestScoreOperator__EEnvTestScoreOperator_MAX = 3
};


// Enum AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8_t
{
	EEnvTestFilterOperator__AllPass = 0,
	EEnvTestFilterOperator__AnyPass = 1,
	EEnvTestFilterOperator__EEnvTestFilterOperator_MAX = 2
};


// Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8_t
{
	EEnvTestCost__Low              = 0,
	EEnvTestCost__Medium           = 1,
	EEnvTestCost__High             = 2,
	EEnvTestCost__EEnvTestCost_MAX = 3
};


// Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8_t
{
	EEnvTestWeight__None           = 0,
	EEnvTestWeight__Square         = 1,
	EEnvTestWeight__Inverse        = 2,
	EEnvTestWeight__Unused         = 3,
	EEnvTestWeight__Constant       = 4,
	EEnvTestWeight__Skip           = 5,
	EEnvTestWeight__EEnvTestWeight_MAX = 6
};


// Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8_t
{
	EEnvTestScoreEquation__Linear  = 0,
	EEnvTestScoreEquation__Square  = 1,
	EEnvTestScoreEquation__InverseLinear = 2,
	EEnvTestScoreEquation__Constant = 3,
	EEnvTestScoreEquation__EEnvTestScoreEquation_MAX = 4
};


// Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8_t
{
	EEnvTestFilterType__Minimum    = 0,
	EEnvTestFilterType__Maximum    = 1,
	EEnvTestFilterType__Range      = 2,
	EEnvTestFilterType__Match      = 3,
	EEnvTestFilterType__EEnvTestFilterType_MAX = 4
};


// Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8_t
{
	EEnvTestPurpose__Filter        = 0,
	EEnvTestPurpose__Score         = 1,
	EEnvTestPurpose__FilterAndScore = 2,
	EEnvTestPurpose__EEnvTestPurpose_MAX = 3
};


// Enum AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8_t
{
	EPawnActionFailHandling__RequireSuccess = 0,
	EPawnActionFailHandling__IgnoreFailure = 1,
	EPawnActionFailHandling__EPawnActionFailHandling_MAX = 2
};


// Enum AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8_t
{
	EPawnSubActionTriggeringPolicy__CopyBeforeTriggering = 0,
	EPawnSubActionTriggeringPolicy__ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy__EPawnSubActionTriggeringPolicy_MAX = 2
};


// Enum AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8_t
{
	EEnvTestDistance__Distance3D   = 0,
	EEnvTestDistance__Distance2D   = 1,
	EEnvTestDistance__DistanceZ    = 2,
	EEnvTestDistance__EEnvTestDistance_MAX = 3
};


// Enum AIModule.EEnvTestDot
enum class EEnvTestDot : uint8_t
{
	EEnvTestDot__Dot3D             = 0,
	EEnvTestDot__Dot2D             = 1,
	EEnvTestDot__EEnvTestDot_MAX   = 2
};


// Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8_t
{
	EEnvTestPathfinding__PathExist = 0,
	EEnvTestPathfinding__PathCost  = 1,
	EEnvTestPathfinding__PathLength = 2,
	EEnvTestPathfinding__EEnvTestPathfinding_MAX = 3
};


// Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8_t
{
	EEnvQueryHightlightMode__All   = 0,
	EEnvQueryHightlightMode__Best5Pct = 1,
	EEnvQueryHightlightMode__Best25Pct = 2,
	EEnvQueryHightlightMode__EEnvQueryHightlightMode_MAX = 3
};


// Enum AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8_t
{
	EPawnActionMoveMode__UsePathfinding = 0,
	EPawnActionMoveMode__StraightLine = 1,
	EPawnActionMoveMode__EPawnActionMoveMode_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
