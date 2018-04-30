#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_GameplayTasks_classes.hpp"
#include "SoT_GameplayTags_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AIModule.BlackboardKeySelector
// 0x0028
struct FBlackboardKeySelector
{
	unsigned char                                      bNoneIsAllowedValue : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	TArray<class UBlackboardKeyType*>                  AllowedTypes;                                             // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	struct FName                                       SelectedKeyName;                                          // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      SelectedKeyType;                                          // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData)
	unsigned char                                      SelectedKeyID;                                            // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData)
};

// ScriptStruct AIModule.EnvNamedValue
// 0x0010
struct FEnvNamedValue
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       ParamName;                                                // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryParam>                        ParamType;                                                // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AIDataProviderValue
// 0x0020
struct FAIDataProviderValue
{
	struct FName                                       DataField;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UProperty*                                   CachedProperty;                                           // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAIDataProvider*                             DataBinding;                                              // 0x01E3(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct AIModule.AIDataProviderTypedValue
// 0x0008 (0x0028 - 0x0020)
struct FAIDataProviderTypedValue : public FAIDataProviderValue
{
	unsigned char                                      UnknownData00[0x1C3];                                     // 0x0020(0x01C3) MISSED OFFSET
	class UClass*                                      PropertyType;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AIDataProviderBoolValue
// 0x0008 (0x0030 - 0x0028)
struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue
{
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	bool                                               DefaultValue;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AIDataProviderFloatValue
// 0x0008 (0x0030 - 0x0028)
struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue
{
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              DefaultValue;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
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
	unsigned char                                      UnknownData00 : 1;                                        // 0x0000(0x0001)
	unsigned char                                      bSuccessfullySensed : 1;                                  // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	float                                              Age;                                                      // 0x01E3(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExpirationAge;                                            // 0x01E3(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x01E3(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StimulusLocation;                                         // 0x01E3(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReceiverLocation;                                         // 0x01E3(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // 0x01E3(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
// 0x0020
struct FActorPerceptionBlueprintInfo
{
	unsigned char                                      bIsHostile : 1;                                           // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x01E3(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIStimulus>                         LastSensedStimuli;                                        // 0x01E3(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AIModule.AIDamageEvent
// 0x0030
struct FAIDamageEvent
{
	class AActor*                                      Instigator;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	float                                              Amount;                                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AINoiseEvent
// 0x0030
struct FAINoiseEvent
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FVector                                     NoiseLocation;                                            // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Loudness;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AIPredictionEvent
// 0x0018
struct FAIPredictionEvent
{
	class AActor*                                      PredictedActor;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class AActor*                                      Requestor;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AITeamStimulusEvent
// 0x0038
struct FAITeamStimulusEvent
{
	class AActor*                                      Enemy;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class AActor*                                      Broadcaster;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AITouchEvent
// 0x0020
struct FAITouchEvent
{
	class AActor*                                      OtherActor;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class AActor*                                      TouchReceiver;                                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AISenseAffiliationFilter
// 0x0004
struct FAISenseAffiliationFilter
{
	unsigned char                                      UnknownData00 : 2;                                        // 0x0000(0x0001)
	unsigned char                                      bDetectFriendlies : 1;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	unsigned char                                      bDetectEnemies : 1;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bDetectNeutrals : 1;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct AIModule.BTDecoratorLogic
// 0x0004
struct FBTDecoratorLogic
{
	uint16_t                                           Number;                                                   // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E1];                                     // 0x0002(0x01E1) MISSED OFFSET
	TEnumAsByte<EBTDecoratorLogic>                     Operation;                                                // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.BTCompositeChild
// 0x0030
struct FBTCompositeChild
{
	TArray<struct FBTDecoratorLogic>                   DecoratorOps;                                             // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class UBTCompositeNode*                            ChildComposite;                                           // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBTTaskNode*                                 ChildTask;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UBTDecorator*>                        Decorators;                                               // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct AIModule.BehaviorTreeTemplateInfo
// 0x0018
struct FBehaviorTreeTemplateInfo
{
	class UBTCompositeNode*                            Template;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UBehaviorTree*                               Asset;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.BlackboardEntry
// 0x0018
struct FBlackboardEntry
{
	unsigned char                                      bInstanceSynced : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FName                                       EntryName;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlackboardKeyType*                          KeyType;                                                  // 0x01E3(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct AIModule.CrowdAvoidanceConfig
// 0x001C
struct FCrowdAvoidanceConfig
{
	unsigned char                                      AdaptiveDepth;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	float                                              VelocityBias;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DesiredVelocityWeight;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurrentVelocityWeight;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SideBiasWeight;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactTimeWeight;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactTimeRange;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CustomPatternIdx;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AdaptiveDivisions;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AdaptiveRings;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
// 0x0020
struct FCrowdAvoidanceSamplingPattern
{
	TArray<float>                                      Radii;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<float>                                      Angles;                                                   // 0x01E3(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AIModule.EnvQueryInstanceCache
// 0x0270
struct FEnvQueryInstanceCache
{
	class UEnvQuery*                                   Template;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x268];                                     // 0x0008(0x0268) MISSED OFFSET
};

// ScriptStruct AIModule.EnvTraceData
// 0x0038
struct FEnvTraceData
{
	bool                                               bUseSourceZAsEnd;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	int                                                VersionNum;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      NavigationFilter;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectDown;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectUp;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtentX;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtentY;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtentZ;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostProjectionVerticalOffset;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     SerializedChannel;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTraceShape>                        TraceShape;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvQueryTrace>                        TraceMode;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bTraceComplex : 1;                                        // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	bool                                               bUseUpDownAsAbsoluteZStartAndEnd;                         // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01 : 1;                                        // 0x01E3(0x0001)
	unsigned char                                      bOnlyBlockingHits : 1;                                    // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanTraceOnNavMesh : 1;                                   // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanTraceOnGeometry : 1;                                  // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanDisableTrace : 1;                                     // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanProjectDown : 1;                                      // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
};

// ScriptStruct AIModule.AIDataProviderIntValue
// 0x0008 (0x0030 - 0x0028)
struct FAIDataProviderIntValue : public FAIDataProviderTypedValue
{
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	int                                                DefaultValue;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.EnvDirection
// 0x0020
struct FEnvDirection
{
	TEnumAsByte<EEnvDirection>                         DirMode;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class UClass*                                      LineFrom;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LineTo;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Rotation;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
	float                                              TimeRemaining;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AISightEvent
// 0x0018
struct FAISightEvent
{
	class AActor*                                      Observer;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class AActor*                                      SeenActor;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.EnvBoolParam_DEPRECATED
// 0x000C
struct FEnvBoolParam_DEPRECATED
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	bool                                               Value;                                                    // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	int                                                Value;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	float                                              Value;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
	int                                                QueryID;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UClass*                                      ItemType;                                                 // 0x01E3(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                OptionIndex;                                              // 0x01E3(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.EnvQueryRequest
// 0x0158
struct FEnvQueryRequest
{
	class UWorld*                                      World;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UEnvQuery*                                   QueryTemplate;                                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     Owner;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
