#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_AIModule_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
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
	TArray<UBlackboardKeyType*>                        AllowedTypes;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	FName                                              SelectedKeyName;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	UClass*                                            SelectedKeyType;                                          // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData)
	unsigned char                                      SelectedKeyID;                                            // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	unsigned char                                      bNoneIsAllowedValue : 1;                                  // 0x0024(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct AIModule.EnvNamedValue
// 0x0010
struct FEnvNamedValue
{
	FName                                              ParamName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryParam>                        ParamType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AIDataProviderValue
// 0x0020
struct FAIDataProviderValue
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	UProperty*                                         CachedProperty;                                           // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	UAIDataProvider*                                   DataBinding;                                              // 0x0010(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	FName                                              DataField;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AIDataProviderTypedValue
// 0x0008 (0x0028 - 0x0020)
struct FAIDataProviderTypedValue : public FAIDataProviderValue
{
	UClass*                                            PropertyType;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
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
	UPawnAction*                                       TopAction;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.PawnActionEvent
// 0x0018
struct FPawnActionEvent
{
	UPawnAction*                                       Action;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AIModule.CustomDataProviderObjectPropertySelector
// 0x0010
struct FCustomDataProviderObjectPropertySelector
{
	UClass*                                            ObjectClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FName                                              PropertyName;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AIStimulus
// 0x003C
struct FAIStimulus
{
	float                                              Age;                                                      // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExpirationAge;                                            // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FVector                                            StimulusLocation;                                         // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FVector                                            ReceiverLocation;                                         // 0x0018(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FName                                              Tag;                                                      // 0x0024(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x002C(0x000C) MISSED OFFSET
	unsigned char                                      UnknownData01 : 1;                                        // 0x0038(0x0001)
	unsigned char                                      bSuccessfullySensed : 1;                                  // 0x0038(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
};

// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
// 0x0020
struct FActorPerceptionBlueprintInfo
{
	AActor*                                            Target;                                                   // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<FAIStimulus>                                LastSensedStimuli;                                        // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      bIsHostile : 1;                                           // 0x0018(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct AIModule.AIDamageEvent
// 0x0030
struct FAIDamageEvent
{
	float                                              Amount;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FVector                                            Location;                                                 // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FVector                                            HitLocation;                                              // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	AActor*                                            DamagedActor;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	AActor*                                            Instigator;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AINoiseEvent
// 0x0030
struct FAINoiseEvent
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	FVector                                            NoiseLocation;                                            // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Loudness;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	AActor*                                            Instigator;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FName                                              Tag;                                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct AIModule.AIPredictionEvent
// 0x0018
struct FAIPredictionEvent
{
	AActor*                                            Requestor;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	AActor*                                            PredictedActor;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct AIModule.AITeamStimulusEvent
// 0x0038
struct FAITeamStimulusEvent
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	AActor*                                            Broadcaster;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	AActor*                                            Enemy;                                                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AITouchEvent
// 0x0020
struct FAITouchEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	AActor*                                            TouchReceiver;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	AActor*                                            OtherActor;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
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
	UBTCompositeNode*                                  ChildComposite;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	UBTTaskNode*                                       ChildTask;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<UBTDecorator*>                              Decorators;                                               // 0x0010(0x0010) (ZeroConstructor)
	TArray<FBTDecoratorLogic>                          DecoratorOps;                                             // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AIModule.BehaviorTreeTemplateInfo
// 0x0018
struct FBehaviorTreeTemplateInfo
{
	UBehaviorTree*                                     Asset;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	UBTCompositeNode*                                  Template;                                                 // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct AIModule.BlackboardEntry
// 0x0018
struct FBlackboardEntry
{
	FName                                              EntryName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UBlackboardKeyType*                                KeyType;                                                  // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
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
// 0x0290
struct FEnvQueryInstanceCache
{
	UEnvQuery*                                         Template;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x288];                                     // 0x0008(0x0288) MISSED OFFSET
};

// ScriptStruct AIModule.EnvTraceData
// 0x0040
struct FEnvTraceData
{
	int                                                VersionNum;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	UClass*                                            NavigationFilter;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                              OverrideNavMesh;                                          // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectDown;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectUp;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtentX;                                                  // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtentY;                                                  // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtentZ;                                                  // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostProjectionVerticalOffset;                             // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     SerializedChannel;                                        // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTraceShape>                        TraceShape;                                               // 0x0032(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvQueryTrace>                        TraceMode;                                                // 0x0033(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bTraceComplex : 1;                                        // 0x0034(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bOnlyBlockingHits : 1;                                    // 0x0034(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanTraceOnNavMesh : 1;                                   // 0x0034(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanTraceOnGeometry : 1;                                  // 0x0034(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanDisableTrace : 1;                                     // 0x0034(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanProjectDown : 1;                                      // 0x0034(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	bool                                               bUseUpDownAsAbsoluteZStartAndEnd;                         // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSourceZAsEnd;                                         // 0x0039(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
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
	UClass*                                            LineFrom;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UClass*                                            LineTo;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UClass*                                            Rotation;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvDirection>                         DirMode;                                                  // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct AIModule.AIMoveRequest
// 0x0040
struct FAIMoveRequest
{
	AActor*                                            GoalActor;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
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
	AActor*                                            SeenActor;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	AActor*                                            Observer;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.EnvBoolParam_DEPRECATED
// 0x000C
struct FEnvBoolParam_DEPRECATED
{
	bool                                               Value;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	FName                                              ParamName;                                                // 0x0004(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
	FName                                              ParamName;                                                // 0x0004(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
	FName                                              ParamName;                                                // 0x0004(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
	UClass*                                            ItemType;                                                 // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0018(0x0014) MISSED OFFSET
	int                                                OptionIndex;                                              // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                QueryID;                                                  // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
};

// ScriptStruct AIModule.EnvQueryRequest
// 0x0170
struct FEnvQueryRequest
{
	UEnvQuery*                                         QueryTemplate;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	UObject*                                           Owner;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	UWorld*                                            World;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x158];                                     // 0x0018(0x0158) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
