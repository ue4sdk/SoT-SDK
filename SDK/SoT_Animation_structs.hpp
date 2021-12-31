#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Animation_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Animation.CharacterAnimationIKUpdateParams
// 0x0040
struct FCharacterAnimationIKUpdateParams
{
	float                                              CurrentAlpha;                                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TranslationStrength;                                      // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationStrength;                                         // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FVector                                            Location;                                                 // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	FQuat                                              Orientation;                                              // 0x0020(0x0010) (BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EHIKEffectorSpace>                     EffectorSpace;                                            // 0x0030(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	FName                                              ParentBone;                                               // 0x0034(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Animation.LimbIK
// 0x0060
struct FLimbIK
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Animation.AnimDataEntryStructWrapper
// 0x0018
struct FAnimDataEntryStructWrapper
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Animation.AnimationDataStoreEntry
// 0x0018
struct FAnimationDataStoreEntry
{
	UClass*                                            AnimDataId;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	UAnimationData*                                    AnimData;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	UAnimationServerData*                              AnimServerData;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Animation.AnimationDataStoreLoadingEntry
// 0x0040
struct FAnimationDataStoreLoadingEntry
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
	UClass*                                            AnimDataId;                                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Animation.AnimationDataStoreAssetEntry
// 0x0018
struct FAnimationDataStoreAssetEntry
{
	UClass*                                            AnimDataId;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UClass*                                            AnimDataTypeCooked;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	UAnimationServerData*                              AnimServerData;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Animation.AnimationDataStoreAssetWeakReferenceEntry
// 0x0028
struct FAnimationDataStoreAssetWeakReferenceEntry
{
	UClass*                                            AnimDataId;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UClass>                            AnimData;                                                 // 0x0008(0x0020) (Edit)
};

// ScriptStruct Animation.CurveUpdateValues
// 0x000C
struct FCurveUpdateValues
{
	FName                                              CurveName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalValue;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Animation.CosmeticItems
// 0x0010
struct FCosmeticItems
{
	TArray<AActor*>                                    CosmeticItemArray;                                        // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Animation.CosmeticItemAnimationSetLoopData
// 0x0020
struct FCosmeticItemAnimationSetLoopData
{
	UAnimSequenceBase*                                 Into;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UAnimSequenceBase*                                 Loop;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                              IntoSyncGroup;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                              LoopSyncGroup;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Animation.CustomAnimationMontageId
// 0x0008
struct FCustomAnimationMontageId
{
	FName                                              CustomAnimationMontageId;                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Animation.CustomAnimationMontageComponentReplicatedData
// 0x000C
struct FCustomAnimationMontageComponentReplicatedData
{
	FCustomAnimationMontageId                          CustomMontageId;                                          // 0x0000(0x0008)
	int                                                AnimationCallId;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Animation.CustomAnimationMontageStagedLoopingData
// 0x0028
struct FCustomAnimationMontageStagedLoopingData
{
	UAnimMontage*                                      Into;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<UAnimMontage*>                              LoopAnims;                                                // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<UAnimMontage*>                              OutOfAnims;                                               // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Animation.CustomAnimationMontageDefinitionEntry
// 0x0018
struct FCustomAnimationMontageDefinitionEntry
{
	FName                                              MontageId;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	FStringAssetReference                              Definition;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Animation.ActorVelocityData
// 0x0018
struct FActorVelocityData
{
	FVector                                            ActorsVelocityVector;                                     // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActorSpeed;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsCharacterMoving;                                        // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              WantedMovementSpeed;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Animation.TransformBlendCurve
// 0x0500
struct FTransformBlendCurve
{
	bool                                               UseLocationCurve;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	FRuntimeVectorCurve                                LocationCurve;                                            // 0x0008(0x0170) (Edit)
	bool                                               UseRotationCurve;                                         // 0x0178(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	FRuntimeVectorCurve                                RotationCurve;                                            // 0x0180(0x0170) (Edit)
	bool                                               UseScaleCurve;                                            // 0x02F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02F1(0x0007) MISSED OFFSET
	FRuntimeVectorCurve                                ScaleCurve;                                               // 0x02F8(0x0170) (Edit)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0468(0x0008) MISSED OFFSET
	FTransform                                         SourceTransform;                                          // 0x0470(0x0030) (Edit, IsPlainOldData)
	FTransform                                         TargetTransform;                                          // 0x04A0(0x0030) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData04[0x30];                                      // 0x04D0(0x0030) MISSED OFFSET
};

// ScriptStruct Animation.WeightedAnimationData
// 0x0018
struct FWeightedAnimationData
{
	FStringAssetReference                              Animation;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              Weighting;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Animation.DockableInfo
// 0x0018
struct FDockableInfo
{
	FName                                              SocketName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	USceneComponent*                                   SceneComponent;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EDockableSocketOverlapUpdates>         ShouldOverlapsUpdateOnParentUpdate;                       // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Animation.HitReactionAnimationData
// 0x0008
struct FHitReactionAnimationData
{
	UBlendSpace1D*                                     HitReactBlendSpace;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Animation.EventCosmeticItemAttachmentSwitched
// 0x0008
struct FEventCosmeticItemAttachmentSwitched
{
	AActor*                                            Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Animation.EventCosmeticItemSpawnedOwnerNotification
// 0x0008
struct FEventCosmeticItemSpawnedOwnerNotification
{
	AActor*                                            CosmeticItemActor;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Animation.EventCosmeticItemSpawned
// 0x0010
struct FEventCosmeticItemSpawned
{
	AActor*                                            Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	UCosmeticItemAnimationSetDataAsset*                CosmeticData;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Animation.EventAnimationHappyReact
// 0x0001
struct FEventAnimationHappyReact
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Animation.EventHitReactAnimationFinished
// 0x0001
struct FEventHitReactAnimationFinished
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Animation.EventHitReactAnimationRequested
// 0x001C
struct FEventHitReactAnimationRequested
{
	FVector                                            HitNormal;                                                // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	FVector                                            HitVelocity;                                              // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterHitReactionAnimType>         ReactionAnimType;                                         // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct Animation.HitReactionAnimationState
// 0x0028
struct FHitReactionAnimationState
{
	float                                              Yaw;                                                      // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdditiveBlend;                                            // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterHitReactionAnimType>         ReactType;                                                // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ActivateNewHitReact;                                      // 0x0009(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E];                                      // 0x000A(0x001E) MISSED OFFSET
};

// ScriptStruct Animation.AnimationLookAtParams
// 0x000C
struct FAnimationLookAtParams
{
	float                                              ActivationSpeed;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalLimit;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalLimit;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Animation.AnimationLookAt
// 0x0098
struct FAnimationLookAt
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	FAnimationLookAtParams                             Params;                                                   // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	FVector                                            LookAtTarget;                                             // 0x0014(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IKLookAtActive;                                           // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x77];                                      // 0x0021(0x0077) MISSED OFFSET
};

// ScriptStruct Animation.EventAnimationLookAtUpdated
// 0x0001
struct FEventAnimationLookAtUpdated
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Animation.IKLookAtParams
// 0x000C
struct FIKLookAtParams
{
	float                                              ActivationSpeed;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalLimit;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalLimit;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Animation.AnimNode_WeightedLoadOnDemandSquencePlayer
// 0x0030 (0x0070 - 0x0040)
struct FAnimNode_WeightedLoadOnDemandSquencePlayer : public FAnimNode_AssetPlayerBase
{
	float                                              PlayRate;                                                 // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	UWeightedAnimSequenceLoadOnDemand*                 WeightedAnimSequenceLoadOnDemand;                         // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GroupIndex;                                               // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	UAnimSequence*                                     CurrentSequence;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	UAnimSequence*                                     NextSequence;                                             // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct Animation.EventCustomAnimationMontageExitRequested
// 0x000C
struct FEventCustomAnimationMontageExitRequested
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Animation.EventCustomAnimationMontageRequested
// 0x0008
struct FEventCustomAnimationMontageRequested
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Animation.CustomAnimationMontageStateMachine
// 0x00D8
struct FCustomAnimationMontageStateMachine
{
	UCustomAnimationMontageDefinitionDataAsset*        ActiveState;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	UCustomAnimationMontageDefinitionDataAsset*        PendingState;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	UAnimMontage*                                      ActiveMontage;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0018(0x00C0) MISSED OFFSET
};

// ScriptStruct Animation.EventPreviewCharacterAnimationRequest
// 0x0008
struct FEventPreviewCharacterAnimationRequest
{
	UAnimationAsset*                                   AnimationToPlay;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Animation.AnimationStateCompleteEvent
// 0x0008
struct FAnimationStateCompleteEvent
{
	UClass*                                            CompletedStateId;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Animation.WeightedAnimationTimeout
// 0x0014
struct FWeightedAnimationTimeout
{
	FFloatRange                                        TimeoutRange;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weighting;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Animation.WeightedAnimationTimeoutSelector
// 0x0010
struct FWeightedAnimationTimeoutSelector
{
	TArray<FWeightedAnimationTimeout>                  Weightings;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Animation.Docker
// 0x0050
struct FDocker
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
