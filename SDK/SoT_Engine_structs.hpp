#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_InputCore_classes.hpp"
#include "SoT_SlateCore_classes.hpp"
#include "SoT_Slate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Engine.TickFunction
// 0x0048
struct FTickFunction
{
	float                                              TickInterval;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bTickEvenWhenPaused : 1;                                  // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEverTick : 1;                                         // 0x01E3(0x0001)
	unsigned char                                      bStartWithTickEnabled : 1;                                // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                          // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
};

// ScriptStruct Engine.ActorTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FActorTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RepMovement
// 0x0034
struct FRepMovement
{
	TEnumAsByte<ERotatorQuantization>                  RotationQuantizationLevel;                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FVector                                     LinearVelocity;                                           // 0x01E3(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x01E3(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x01E3(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x01E3(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bSimulatedPhysicSleep : 1;                                // 0x01E3(0x0001) (Transient)
	unsigned char                                      bRepPhysics : 1;                                          // 0x01E3(0x0001) (Transient)
	TEnumAsByte<EVectorQuantization>                   LocationQuantizationLevel;                                // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EVectorQuantization>                   VelocityQuantizationLevel;                                // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Engine.Vector_NetQuantize100
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize100 : public FVector
{

};

// ScriptStruct Engine.RepAttachment
// 0x0040
struct FRepAttachment
{
	class USceneComponent*                             AttachComponent;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class AActor*                                      AttachParent;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      LocationOffset;                                           // 0x01E3(0x000C)
	struct FVector_NetQuantize100                      RelativeScale3D;                                          // 0x01E3(0x000C)
	struct FRotator                                    RotationOffset;                                           // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ActorPtr
// 0x0008
struct FActorPtr
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.Vector_NetQuantize
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize : public FVector
{

};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantizeNormal : public FVector
{

};

// ScriptStruct Engine.HitResult
// 0x0080
struct FHitResult
{
	int                                                FaceIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	unsigned char                                      bBlockingHit : 1;                                         // 0x01E3(0x0001)
	unsigned char                                      bStartPenetrating : 1;                                    // 0x01E3(0x0001)
	float                                              Time;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         Location;                                                 // 0x01E3(0x000C)
	struct FVector_NetQuantize                         ImpactPoint;                                              // 0x01E3(0x000C)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x01E3(0x000C)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                             // 0x01E3(0x000C)
	struct FVector_NetQuantize                         TraceStart;                                               // 0x01E3(0x000C)
	struct FVector_NetQuantize                         TraceEnd;                                                 // 0x01E3(0x000C)
	float                                              PenetrationDepth;                                         // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Item;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPhysicalMaterial>            PhysMaterial;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ActorComponentTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FActorComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SimpleMemberReference
// 0x0020
struct FSimpleMemberReference
{
	struct FGuid                                       MemberGuid;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class UObject*                                     MemberParent;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MemberName;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimTickRecord
// 0x0040
struct FAnimTickRecord
{
	class UAnimationAsset*                             SourceAsset;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.AnimGroupInstance
// 0x0018
struct FAnimGroupInstance
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.ActiveVertexAnim
// 0x0010
struct FActiveVertexAnim
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UVertexAnimBase*                             VertAnim;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimLinkableElement
// 0x0030
struct FAnimLinkableElement
{
	class UAnimSequenceBase*                           LinkedSequence;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UAnimMontage*                                LinkedMontage;                                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SegmentIndex;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimLinkMethod>                       LinkMethod;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimLinkMethod>                       CachedLinkMethod;                                         // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              SegmentBeginTime;                                         // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SegmentLength;                                            // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LinkValue;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNotifyEvent
// 0x0078 (0x00A8 - 0x0030)
struct FAnimNotifyEvent : public FAnimLinkableElement
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	float                                              DisplayTime;                                              // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TriggerTimeOffset;                                        // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndTriggerTimeOffset;                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TriggerWeightThreshold;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       NotifyName;                                               // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimNotify*                                 Notify;                                                   // 0x01E3(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimNotifyState*                            NotifyStateClass;                                         // 0x01E3(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAnimLinkableElement                        EndLink;                                                  // 0x01E3(0x0030)
	bool                                               bConvertedFromBranchingPoint;                             // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMontageNotifyTickType>                MontageTickType;                                          // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NotifyTriggerChance;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENotifyFilterType>                     NotifyFilterType;                                         // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NotifyFilterLOD;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerOnDedicatedServer;                                // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TrackIndex;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RainPostProcessSettings
// 0x00C0
struct FRainPostProcessSettings
{
	float                                              RainSplashesMaxDistance2;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	unsigned char                                      bOverride_RainParticleTexture : 1;                        // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainParticleWindVelocity : 1;                   // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainMeshColumnDivision : 1;                     // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainSplashesPerSecond : 1;                      // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainMeshTexture : 1;                            // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainParticleWidth : 1;                          // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainMeshBrightness : 1;                         // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainSplashesPerSquareMetre : 1;                 // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainIntensity : 1;                              // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainParticleLength : 1;                         // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainBrightness : 1;                             // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainSplashesMaxPlacementAngle : 1;              // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainParticleAlpha : 1;                          // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainMeshScale : 1;                              // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainSplashData : 1;                             // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainTint : 1;                                   // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainCloseParticleAlphaReductionMultiplier : 1;  // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainMeshTextureScroll : 1;                      // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainSplashesMaxDistance1 : 1;                   // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainMeshEndRadiusScale : 1;                     // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainCloseParticleAlphaDistance : 1;             // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainMeshTextureTiling : 1;                      // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainMeshEndAlphaFade : 1;                       // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainSplashData2 : 1;                            // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainParticleDensity : 1;                        // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainMeshAlpha : 1;                              // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainParticleSpeed : 1;                          // 0x01E3(0x0001) (BlueprintVisible)
	float                                              RainAnimationFrameTime;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 6;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_RainMeshFadeDistance : 1;                       // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainSplashesMaxDistance2 : 1;                   // 0x01E3(0x0001) (BlueprintVisible)
	class UTexture*                                    RainParticleTexture;                                      // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    RainMeshTexture;                                          // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainIntensity;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainParticleAlpha;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainCloseParticleAlphaReductionMultiplier;                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainCloseParticleAlphaDistance;                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainParticleDensity;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainParticleSpeed;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RainParticleWindVelocity;                                 // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainParticleWidth;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainParticleLength;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RainMeshScale;                                            // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RainMeshTextureScroll;                                    // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RainMeshTextureTiling;                                    // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainMeshAlpha;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RainMeshRowDivision;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainMeshEndRadiusScale;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainMeshEndAlphaFade;                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainMeshFadeDistance;                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainMeshBrightness;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainBrightness;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                RainTint;                                                 // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RainMeshColumnDivision;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RainSplashesPerSecond;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainSplashesPerSquareMetre;                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainSplashesMaxPlacementAngle;                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleComputeShaderData*                  RainSplashData;                                           // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainSplashesMaxDistance1;                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleComputeShaderData*                  RainSplashData2;                                          // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02 : 7;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_RainMeshRowDivision : 1;                        // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainAnimationFrameTime : 1;                     // 0x01E3(0x0001) (BlueprintVisible)
};

// ScriptStruct Engine.LPVCascadeSettings
// 0x0070
struct FLPVCascadeSettings
{
	struct FTransform                                  LPVWorldRef;                                              // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	unsigned char                                      bOverride_LPVIntensity : 1;                               // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVSecondaryOcclusionIntensity : 1;             // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVDirectionalOcclusionIntensity : 1;           // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVSecondaryBounceIntensity : 1;                // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVDirectionalOcclusionRadius : 1;              // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVGeometryVolumeBias : 1;                      // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVDiffuseOcclusionExponent : 1;                // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVVplInjectionBias : 1;                        // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVSpecularOcclusionExponent : 1;               // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVEmissiveInjectionIntensity : 1;              // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVDiffuseOcclusionIntensity : 1;               // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_NumberOfPropagationSteps : 1;                   // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVSpecularOcclusionIntensity : 1;              // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bFreezeLPVUpdate : 1;                                     // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVSize : 1;                                    // 0x01E3(0x0001) (BlueprintVisible)
	float                                              LPVIntensity;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVVplInjectionBias;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSize;                                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSecondaryOcclusionIntensity;                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSecondaryBounceIntensity;                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVGeometryVolumeBias;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVEmissiveInjectionIntensity;                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionIntensity;                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionRadius;                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDiffuseOcclusionExponent;                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSpecularOcclusionExponent;                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDiffuseOcclusionIntensity;                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSpecularOcclusionIntensity;                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LPVNumberOfPropagationSteps;                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PlayerAmbientLightOverrideSettings
// 0x0018
struct FPlayerAmbientLightOverrideSettings
{
	float                                              LanternAmbienceBlendWithDefault;                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	unsigned char                                      OverrideBodyLightAmbience : 1;                            // 0x01E3(0x0001) (BlueprintVisible)
	float                                              BodyLightAmbienceLightFactor;                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BodyLightAmbienceBlendWithDefault;                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OverrideLanternAmbience : 1;                              // 0x01E3(0x0001) (BlueprintVisible)
	float                                              LanternAmbienceLightFactor;                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.WeightedBlendable
// 0x0010
struct FWeightedBlendable
{
	class UObject*                                     Object;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	float                                              Weight;                                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.WeightedBlendables
// 0x0010
struct FWeightedBlendables
{
	TArray<struct FWeightedBlendable>                  Array;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.PostProcessSettings
// 0x0530
struct FPostProcessSettings
{
	TArray<class UObject*>                             Blendables;                                               // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	unsigned char                                      bOverride_WhiteTemp : 1;                                  // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom5Size : 1;                                 // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVDirectionalOcclusionRadius : 1;              // 0x01E3(0x0001)
	unsigned char                                      bOverride_Bloom1Size : 1;                                 // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldMaxBokehSize : 1;                   // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionPower : 1;                      // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionMaxRoughness : 1;          // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFocalDistance : 1;                  // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmSaturation : 1;                             // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldSkyFocusDistance : 1;               // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_GrainJitter : 1;                                // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureHighPercent : 1;                    // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiRadius : 1;                 // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LensFlareIntensity : 1;                         // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      AmbientOcclusionHemiMaxDepthDownsample : 1;               // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseThisVolumeForLPVSettings : 1;                         // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTint : 1;                             // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_SceneColorTint : 1;                             // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiCombineBeforeBlur : 1;      // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      AmbientOcclusionRadiusInWS : 1;                           // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVGeometryVolumeBias : 1;                      // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionRoughnessScale : 1;        // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFstop : 1;                          // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTintBlend : 1;                        // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMinBrightness : 1;                  // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurAmount : 1;                           // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_SceneFringeIntensity : 1;                       // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionBias : 1;                       // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionIntensity : 1;                  // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      AmbientOcclusionHemiUseNormals : 1;                       // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom2Size : 1;                                 // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LensFlareTint : 1;                              // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_GaussianBlur : 1;                               // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom6Tint : 1;                                 // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_WhiteTint : 1;                                  // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiCombineWithMultiply : 1;    // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVDiffuseOcclusionExponent : 1;                // 0x01E3(0x0001)
	unsigned char                                      bOverride_DepthOfFieldNearBlurSize : 1;                   // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiBlurTolerance : 1;          // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerRed : 1;                        // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVVplInjectionBias : 1;                        // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom6Size : 1;                                 // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_SceneFringeSaturation : 1;                      // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerGreen : 1;                      // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LensFlareTints : 1;                             // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiUpsampleTolerance : 1;      // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturation : 1;                            // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurMax : 1;                              // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFarBlurSize : 1;                    // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurRadius : 1;                // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_MinOverdrawCount : 1;                           // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionQuality : 1;                    // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVSpecularOcclusionExponent : 1;               // 0x01E3(0x0001)
	unsigned char                                      bOverride_AutoExposureMaxBrightness : 1;                  // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionStaticFraction : 1;             // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTintAmount : 1;                       // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom2Tint : 1;                                 // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVEmissiveInjectionIntensity : 1;              // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ColorContrast : 1;                              // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerBlue : 1;                       // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurPerObjectSize : 1;                    // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmSlope : 1;                                  // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurAmount : 1;                // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientCubemapTint : 1;                         // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_MaxOverdrawCount : 1;                           // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiNoiseFilterTolerance : 1;   // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom3Tint : 1;                                 // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_BloomSizeScale : 1;                             // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVDiffuseOcclusionIntensity : 1;               // 0x01E3(0x0001)
	unsigned char                                      bOverride_AutoExposureSpeedUp : 1;                        // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldMethod : 1;                         // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LensFlareBokehSize : 1;                         // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionRadius : 1;                     // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipBlend : 1;                   // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVWorldRef : 1;                                // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipScale : 1;                   // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LensFlareBokehShape : 1;                        // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom3Size : 1;                                 // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmToe : 1;                                    // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmContrast : 1;                               // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldBokehShape : 1;                     // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ColorGamma : 1;                                 // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_MinOverdrawColour : 1;                          // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiRejectionFalloff : 1;       // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMaskIntensity : 1;                     // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ScreenPercentage : 1;                           // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureSpeedDown : 1;                      // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionFadeDistance : 1;               // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVSpecularOcclusionIntensity : 1;              // 0x01E3(0x0001)
	unsigned char                                      bOverride_DepthOfFieldFocalRegion : 1;                    // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientCubemapIntensity : 1;                    // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_IndirectLightingColor : 1;                      // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_MaxOverdrawColour : 1;                          // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipThreshold : 1;               // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AntiAliasingMethod : 1;                         // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldNearTransitionRegion : 1;           // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmShoulder : 1;                               // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ColorGain : 1;                                  // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionFadeRadius : 1;                 // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureBias : 1;                           // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVSize : 1;                                    // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiBias : 1;                   // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_BloomIntensity : 1;                             // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LensFlareThreshold : 1;                         // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmDynamicRange : 1;                           // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom4Tint : 1;                                 // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMaskTint : 1;                          // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldOcclusion : 1;                      // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_IndirectLightingIntensity : 1;                  // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ColorOffset : 1;                                // 0x01E3(0x0001) (BlueprintVisible)
	float                                              ScreenPercentage;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 6;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_FilmHealAmount : 1;                             // 0x01E3(0x0001) (BlueprintVisible)
	TEnumAsByte<EAntiAliasingMethod>                   AntiAliasingMethod;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02 : 6;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_FilmBlackClip : 1;                              // 0x01E3(0x0001) (BlueprintVisible)
	float                                              ScreenSpaceReflectionIntensity;                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03 : 6;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_BloomThreshold : 1;                             // 0x01E3(0x0001) (BlueprintVisible)
	float                                              ScreenSpaceReflectionQuality;                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04 : 6;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_Bloom4Size : 1;                                 // 0x01E3(0x0001) (BlueprintVisible)
	float                                              ScreenSpaceReflectionMaxRoughness;                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05 : 6;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_BloomDirtMask : 1;                              // 0x01E3(0x0001) (BlueprintVisible)
	float                                              SkyLightIntensityScale;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06 : 6;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_HistogramLogMin : 1;                            // 0x01E3(0x0001) (BlueprintVisible)
	float                                              SkyLightIntensityScaleForMinSpec;                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07 : 6;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_VignetteIntensity : 1;                          // 0x01E3(0x0001) (BlueprintVisible)
	float                                              SkyLightIntensityScaleInteriorInfluence;                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08 : 6;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_AmbientOcclusionDistance : 1;                   // 0x01E3(0x0001) (Deprecated)
	struct FLinearColor                                GlobalReflectionTint;                                     // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09 : 6;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_AmbientOcclusionHemiIntensity : 1;              // 0x01E3(0x0001) (BlueprintVisible)
	float                                              InsideAmbientColourForParticlesInfluence;                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10 : 6;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_AmbientOcclusionHemiMaxDepthDownsample : 1;     // 0x01E3(0x0001) (BlueprintVisible)
	struct FLinearColor                                InsideAmbientColourForParticles;                          // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11 : 6;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_LPVIntensity : 1;                               // 0x01E3(0x0001) (BlueprintVisible)
	struct FRainPostProcessSettings                    RainSettings;                                             // 0x01E3(0x00C0) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData12 : 6;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_LPVSecondaryOcclusionIntensity : 1;             // 0x01E3(0x0001) (BlueprintVisible)
	TArray<struct FLPVCascadeSettings>                 LPVSettings;                                              // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData13 : 6;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_ColorGradingIntensity : 1;                      // 0x01E3(0x0001) (BlueprintVisible)
	struct FPlayerAmbientLightOverrideSettings         PlayerAmbientLightOverrideSettings;                       // 0x01E3(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData14 : 6;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_DepthOfFieldFarTransitionRegion : 1;            // 0x01E3(0x0001) (BlueprintVisible)
	float                                              GaussianBlurIntensity;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15 : 6;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_DepthOfFieldColorThreshold : 1;                 // 0x01E3(0x0001) (BlueprintVisible)
	TEnumAsByte<EDisableShadowMapMethod>               DisableShadowMethod;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16 : 6;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_ScreenSpaceReflectionIntensity : 1;             // 0x01E3(0x0001) (BlueprintVisible)
	struct FWeightedBlendables                         WeightedBlendables;                                       // 0x01E3(0x0010) (Edit)
	unsigned char                                      UnknownData17 : 2;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_SkyLightIntensityScale : 1;                     // 0x01E3(0x0001) (BlueprintVisible)
	TEnumAsByte<EDepthOfFieldMethod>                   DepthOfFieldMethod;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18 : 2;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_DisableShadowMapMethod : 1;                     // 0x01E3(0x0001) (BlueprintVisible)
	float                                              WhiteTemp;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WhiteTint;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ColorSaturation;                                          // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ColorContrast;                                            // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ColorGamma;                                               // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ColorGain;                                                // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ColorOffset;                                              // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmWhitePoint;                                           // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmShadowTint;                                           // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmShadowTintBlend;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmShadowTintAmount;                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmSaturation;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerRed;                                      // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerGreen;                                    // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerBlue;                                     // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmContrast;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmToeAmount;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmHealAmount;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmDynamicRange;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmSlope;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmToe;                                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmShoulder;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmBlackClip;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmWhiteClip;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SceneColorTint;                                           // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SceneFringeIntensity;                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SceneFringeSaturation;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomIntensity;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomThreshold;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomSizeScale;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom1Size;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom2Size;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom3Size;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom4Size;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom5Size;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom6Size;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom1Tint;                                               // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom2Tint;                                               // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom3Tint;                                               // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom4Tint;                                               // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom5Tint;                                               // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom6Tint;                                               // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomDirtMaskIntensity;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BloomDirtMaskTint;                                        // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    BloomDirtMask;                                            // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVIntensity;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVVplInjectionBias;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSize;                                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSecondaryOcclusionIntensity;                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSecondaryBounceIntensity;                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVGeometryVolumeBias;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVEmissiveInjectionIntensity;                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionIntensity;                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  LPVWorldRef;                                              // 0x01E3(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              LPVDirectionalOcclusionRadius;                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDiffuseOcclusionExponent;                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSpecularOcclusionExponent;                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDiffuseOcclusionIntensity;                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSpecularOcclusionIntensity;                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AmbientCubemapTint;                                       // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientCubemapIntensity;                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureCube*                                AmbientCubemap;                                           // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureLowPercent;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureHighPercent;                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureMinBrightness;                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureMaxBrightness;                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureSpeedUp;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureSpeedDown;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureBias;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HistogramLogMin;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HistogramLogMax;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LensFlareIntensity;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LensFlareTint;                                            // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LensFlareBokehSize;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LensFlareThreshold;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    LensFlareBokehShape;                                      // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VignetteIntensity;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrainJitter;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrainIntensity;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionIntensity;                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionStaticFraction;                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionRadius;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionFadeDistance;                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionFadeRadius;                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionDistance;                                 // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AmbientOcclusionPower;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionBias;                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionQuality;                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionMipBlend;                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionMipScale;                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionMipThreshold;                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionHemiIntensity;                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionHemiPower;                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionHemiRadius;                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionHemiBlurTolerance;                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionHemiUpsampleTolerance;                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionHemiNoiseFilterTolerance;                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionHemiRejectionFalloff;                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionHemiBias;                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19 : 2;                                        // 0x01E3(0x0001)
	unsigned char                                      AmbientOcclusionHemiCombineBeforeBlur : 1;                // 0x01E3(0x0001) (Edit, BlueprintVisible)
	float                                              MinOverdrawCount;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxOverdrawCount;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MinOverdrawColour;                                        // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MaxOverdrawColour;                                        // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IndirectLightingColor;                                    // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IndirectLightingIntensity;                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColorGradingIntensity;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ColorGradingLUT;                                          // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LensFlareTints[0x8];                                      // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldDepthBlurAmount;                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldDepthBlurRadius;                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFstop;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFocalDistance;                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFocalRegion;                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldNearTransitionRegion;                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFarTransitionRegion;                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldScale;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldMaxBokehSize;                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldNearBlurSize;                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFarBlurSize;                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    DepthOfFieldBokehShape;                                   // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldOcclusion;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldColorThreshold;                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldSizeThreshold;                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldSkyFocusDistance;                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurAmount;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurMax;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurPerObjectSize;                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20 : 3;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverride_SkyLightIntensityScaleForMinSpec : 1;           // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      AmbientOcclusionHemiCombineWithMultiply : 1;              // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_SkyLightIntensityScaleInteriorInfluence : 1;    // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_GlobalReflectionTint : 1;                       // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_InsideAmbientColourForParticlesInfluence : 1;   // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmWhitePoint : 1;                             // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmToeAmount : 1;                              // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmWhiteClip : 1;                              // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom1Tint : 1;                                 // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom5Tint : 1;                                 // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureLowPercent : 1;                     // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_HistogramLogMax : 1;                            // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_GrainIntensity : 1;                             // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionRadiusInWS : 1;                 // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiPower : 1;                  // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiUseNormals : 1;             // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVDirectionalOcclusionIntensity : 1;           // 0x01E3(0x0001)
	unsigned char                                      bOverride_LPVSecondaryBounceIntensity : 1;                // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ColorGradingLUT : 1;                            // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldScale : 1;                          // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldSizeThreshold : 1;                  // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionQuality : 1;               // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_InsideAmbientColourForParticles : 1;            // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData21[0x34C];                                     // 0x01E4(0x034C) MISSED OFFSET
};

// ScriptStruct Engine.MinimalViewInfo
// 0x0580
struct FMinimalViewInfo
{
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0000(0x0530) (BlueprintVisible)
	struct FVector                                     Location;                                                 // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrthoWidth;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrthoNearClipPlane;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrthoFarClipPlane;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bConstrainAspectRatio : 1;                                // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseFieldOfViewForLOD : 1;                                // 0x01E3(0x0001) (Edit, BlueprintVisible)
	TEnumAsByte<ECameraProjectionMode>                 ProjectionMode;                                           // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PostProcessBlendWeight;                                   // 0x01E3(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x399];                                     // 0x01E7(0x0399) MISSED OFFSET
};

// ScriptStruct Engine.BasedMovementInfo
// 0x0030
struct FBasedMovementInfo
{
	bool                                               bServerHasVelocity;                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class UPrimitiveComponent*                         MovementBase;                                             // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      Location;                                                 // 0x01E3(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bServerHasBaseComponent;                                  // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeRotation;                                        // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RootMotionMovementParams
// 0x0040
struct FRootMotionMovementParams
{
	struct FTransform                                  RootMotionTransform;                                      // 0x0000(0x0030) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	bool                                               bHasRootMotion;                                           // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              BlendWeight;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.Vector_NetQuantize10
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize10 : public FVector
{

};

// ScriptStruct Engine.RepRootMotionMontage
// 0x0040
struct FRepRootMotionMontage
{
	bool                                               bRelativeRotation;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class UAnimMontage*                                AnimMontage;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       Location;                                                 // 0x01E3(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         MovementBase;                                             // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       MovementBaseBoneName;                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bRelativePosition;                                        // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// 0x0048
struct FSimulatedRootMotionReplicatedMove
{
	struct FRepRootMotionMontage                       RootMotion;                                               // 0x0000(0x0040)
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	float                                              Time;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MovementProperties
// 0x0004
struct FMovementProperties
{
	unsigned char                                      UnknownData00 : 4;                                        // 0x0000(0x0001)
	unsigned char                                      bCanFly : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	unsigned char                                      bCanCrouch : 1;                                           // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanJump : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanWalk : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanSwim : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.NavAgentProperties
// 0x001C (0x0020 - 0x0004)
struct FNavAgentProperties : public FMovementProperties
{
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AgentRadius;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AgentHeight;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AgentStepHeight;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavWalkingSearchHeightScale;                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavWalkingSearchRadiusScale;                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FindFloorResult
// 0x008C
struct FFindFloorResult
{
	struct FHitResult                                  HitResult;                                                // 0x0000(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      UnknownData00[0x163];                                     // 0x0080(0x0163) MISSED OFFSET
	unsigned char                                      bBlockingHit : 1;                                         // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bWalkableFloor : 1;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bLineTrace : 1;                                           // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	float                                              FloorDist;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              LineDist;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.NavAvoidanceMask
// 0x0004
struct FNavAvoidanceMask
{
	unsigned char                                      UnknownData00 : 7;                                        // 0x0000(0x0001)
	unsigned char                                      bGroup31 : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	unsigned char                                      bGroup0 : 1;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup8 : 1;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup16 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup24 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup1 : 1;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup9 : 1;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup17 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup25 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup2 : 1;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup10 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup18 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup26 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup3 : 1;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup11 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup19 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup27 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup4 : 1;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup12 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup20 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup28 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup5 : 1;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup13 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup21 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup29 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup6 : 1;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup14 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup22 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup30 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup7 : 1;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup15 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup23 : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Engine.CharacterMovementComponentPreClothTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FCharacterMovementComponentPreClothTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// 0x0018
struct FActiveForceFeedbackEffect
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	unsigned char                                      bLockOutgoing : 1;                                        // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	float                                              BlendTime;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunction;                                            // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendExp;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.UniqueNetIdRepl
// 0x0018
struct FUniqueNetIdRepl
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.LatentActionInfo
// 0x0018
struct FLatentActionInfo
{
	class UObject*                                     CallbackTarget;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	int                                                Linkage;                                                  // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UUID;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ExecutionFunction;                                        // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	struct FColor                                      Out;                                                      // 0x0000(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              In;                                                       // 0x01E3(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
};

// ScriptStruct Engine.StatColorMapping
// 0x0028
struct FStatColorMapping
{
	unsigned char                                      DisableBlend : 1;                                         // 0x0000(0x0001) (Config, GlobalConfig)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class FString                                      StatName;                                                 // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	TArray<struct FStatColorMapEntry>                  ColorMap;                                                 // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
};

// ScriptStruct Engine.GameNameRedirect
// 0x0020
struct FGameNameRedirect
{
	class FString                                      NewGameName;                                              // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class FString                                      OldGameName;                                              // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ClassRedirect
// 0x0058
struct FClassRedirect
{
	bool                                               InstanceOnly;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class FString                                      ObjectName;                                               // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      OldClassName;                                             // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      NewClassName;                                             // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      OldSubobjName;                                            // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      NewSubobjName;                                            // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PluginRedirect
// 0x0020
struct FPluginRedirect
{
	class FString                                      NewPluginName;                                            // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class FString                                      OldPluginName;                                            // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.StructRedirect
// 0x0020
struct FStructRedirect
{
	class FString                                      NewStructName;                                            // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class FString                                      OldStructName;                                            // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.DropNoteInfo
// 0x0028
struct FDropNoteInfo
{
	class FString                                      Comment;                                                  // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigidBodyErrorCorrection
// 0x001C
struct FRigidBodyErrorCorrection
{
	float                                              BodySpeedThresholdSq;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              LinearDeltaThresholdSq;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LinearInterpAlpha;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LinearRecipFixTime;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularDeltaThreshold;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularInterpAlpha;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularRecipFixTime;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NetDriverDefinition
// 0x0018
struct FNetDriverDefinition
{
	struct FName                                       DriverClassNameFallback;                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FName                                       DefName;                                                  // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DriverClassName;                                          // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GameClassShortName
// 0x0020
struct FGameClassShortName
{
	class FString                                      GameClassName;                                            // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class FString                                      ShortName;                                                // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.CollisionResponseContainer
// 0x0020
struct FCollisionResponseContainer
{
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel18;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	TEnumAsByte<ECollisionResponse>                    WorldStatic;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    WorldDynamic;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Pawn;                                                     // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Visibility;                                               // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Camera;                                                   // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    PhysicsBody;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Vehicle;                                                  // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Destructible;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel1;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel2;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel3;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel4;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel5;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel6;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel1;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel2;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel3;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel4;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel5;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel6;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel7;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel8;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel9;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel10;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel11;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel12;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel13;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel14;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel15;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel16;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel17;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ResponseChannel
// 0x000C
struct FResponseChannel
{
	TEnumAsByte<ECollisionResponse>                    Response;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FName                                       Channel;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollisionResponse
// 0x0030
struct FCollisionResponse
{
	TArray<struct FResponseChannel>                    ResponseArray;                                            // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FCollisionResponseContainer                 ResponseToChannels;                                       // 0x01E3(0x0020) (Transient)
};

// ScriptStruct Engine.MassPropertiesOverride
// 0x0024
struct FMassPropertiesOverride
{
	struct FRotator                                    COMRotatorOverride;                                       // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	struct FVector                                     InertiaTensorOverride;                                    // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     COMTranslationOverride;                                   // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.WalkableSlopeOverride
// 0x0008
struct FWalkableSlopeOverride
{
	float                                              WalkableSlopeAngle;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TEnumAsByte<EWalkableSlopeBehavior>                WalkableSlopeBehavior;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BodyInstance
// 0x0190
struct FBodyInstance
{
	TEnumAsByte<ECollisionChannel>                     ObjectType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	unsigned char                                      bLockXRotation : 1;                                       // 0x01E3(0x0001) (Edit)
	unsigned char                                      bUseCCD : 1;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bStartAwake : 1;                                          // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bLockYRotation : 1;                                       // 0x01E3(0x0001) (Edit)
	unsigned char                                      bNotifyRigidBodyCollision : 1;                            // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGenerateWakeEvents : 1;                                  // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bLockZRotation : 1;                                       // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSimulatePhysics : 1;                                     // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUpdateMassWhenScaleChanges : 1;                          // 0x01E3(0x0001)
	unsigned char                                      bOverrideMass : 1;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverrideMaxAngularVelocity : 1;                          // 0x01E3(0x0001)
	unsigned char                                      bLockTranslation : 1;                                     // 0x01E3(0x0001) (Edit)
	unsigned char                                      bOverrideMassProperties : 1;                              // 0x01E3(0x0001)
	unsigned char                                      bLockRotation : 1;                                        // 0x01E3(0x0001) (Edit)
	unsigned char                                      bEnableGravity : 1;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bLockXTranslation : 1;                                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      bUseAsyncScene : 1;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible)
	struct FVector                                     Scale3D;                                                  // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CollisionProfileName;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FCollisionResponse                          CollisionResponses;                                       // 0x01E3(0x0030) (Edit)
	unsigned char                                      UnknownData01 : 6;                                        // 0x01E3(0x0001)
	unsigned char                                      bAutoWeld : 1;                                            // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bLockYTranslation : 1;                                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      bOverrideMaxDepenetrationVelocity : 1;                    // 0x01E3(0x0001)
	float                                              MaxDepenetrationVelocity;                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MassInKg;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMassPropertiesOverride                     MassPropertiesOverride;                                   // 0x01E3(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              LinearDamping;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularDamping;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CustomDOFPlaneNormal;                                     // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     COMNudge;                                                 // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MassScale;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWalkableSlopeOverride                      WalkableSlopeOverride;                                    // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UPhysicalMaterial*                           PhysMaterialOverride;                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngularVelocity;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsBlendWeight;                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PositionSolverIterationCount;                             // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDominanceGroup>                       DominanceGroup;                                           // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	uint64_t                                           RigidActorSyncId;                                         // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              CustomSleepThresholdMultiplier;                           // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VelocitySolverIterationCount;                             // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESleepFamily>                          SleepFamily;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDOFMode>                              DOFMode;                                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	uint64_t                                           RigidActorAsyncId;                                        // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02 : 7;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverrideWalkableSlopeOnInstance : 1;                     // 0x01E3(0x0001)
	unsigned char                                      bLockZTranslation : 1;                                    // 0x01E3(0x0001) (Edit)
};

// ScriptStruct Engine.PrimitiveComponentPostPhysicsTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FPrimitiveComponentPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.OverlapInfo
// 0x0084
struct FOverlapInfo
{
	unsigned char                                      UnknownData00[0x84];                                      // 0x0000(0x0084) MISSED OFFSET
};

// ScriptStruct Engine.DebugDisplayProperty
// 0x0020
struct FDebugDisplayProperty
{
	class UClass*                                      WithinClass;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UObject*                                     Obj;                                                      // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CameraCacheEntry
// 0x0590
struct FCameraCacheEntry
{
	struct FMinimalViewInfo                            POV;                                                      // 0x0000(0x0580)
	float                                              TimeStamp;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3A9];                                     // 0x01E7(0x03A9) MISSED OFFSET
};

// ScriptStruct Engine.TViewTarget
// 0x05A0
struct FTViewTarget
{
	class APlayerState*                                PlayerState;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMinimalViewInfo                            POV;                                                      // 0x01E3(0x0580) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.GameModePrefix
// 0x0020
struct FGameModePrefix
{
	class FString                                      GameMode;                                                 // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class FString                                      Prefix;                                                   // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// 0x0044
struct FLightmassWorldInfoSettings
{
	unsigned char                                      bCompressLightmaps : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	float                                              StaticLightingLevelScale;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumIndirectLightingBounces;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IndirectLightingQuality;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IndirectLightingSmoothness;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      EnvironmentColor;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EnvironmentIntensity;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmissiveBoost;                                            // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseAmbientOcclusion : 1;                                 // 0x01E3(0x0001) (Edit)
	unsigned char                                      bGenerateAmbientOcclusionMaterialMask : 1;                // 0x01E3(0x0001) (Edit)
	float                                              DirectIlluminationOcclusionFraction;                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IndirectIlluminationOcclusionFraction;                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionExponent;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FullyOccludedSamplesFraction;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOcclusionDistance;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bVisualizeMaterialDiffuse : 1;                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bVisualizeAmbientOcclusion : 1;                           // 0x01E3(0x0001) (Edit)
	float                                              VolumeLightSamplePlacementScale;                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ReverbSettings
// 0x0018
struct FReverbSettings
{
	float                                              FadeTime;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	unsigned char                                      bApplyReverb : 1;                                         // 0x01E3(0x0001) (Edit, BlueprintVisible)
	TEnumAsByte<EReverbPreset>                         ReverbType;                                               // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UReverbEffect*                               ReverbEffect;                                             // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InteriorSettings
// 0x0024
struct FInteriorSettings
{
	float                                              InteriorLPFTime;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	unsigned char                                      bIsWorldSettings : 1;                                     // 0x01E3(0x0001)
	float                                              ExteriorVolume;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorTime;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorLPF;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorLPFTime;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorVolume;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorTime;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorLPF;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NetViewer
// 0x0028
struct FNetViewer
{
	struct FVector                                     ViewDir;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	class AActor*                                      InViewer;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      ViewTarget;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ViewLocation;                                             // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ExternalMip
// 0x0028
struct FExternalMip
{
	uint32_t                                           DecompressionFlags;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	uint32_t                                           SizeX;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SizeY;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           OffsetInFile;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           DataSizeOnDisk;                                           // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           DataSize;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PaintedVertex
// 0x0014
struct FPaintedVertex
{
	struct FColor                                      Color;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FPackedNormal                               Normal;                                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// 0x0028
struct FStaticMeshComponentLODInfo
{
	TArray<struct FPaintedVertex>                      PaintedVertices;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.LightmassPrimitiveSettings
// 0x0018
struct FLightmassPrimitiveSettings
{
	float                                              FullyOccludedSamplesFraction;                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	unsigned char                                      bUseTwoSidedLighting : 1;                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bShadowIndirectOnly : 1;                                  // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUseEmissiveForStaticLighting : 1;                        // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUseVertexNormalForHemisphereGather : 1;                  // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              EmissiveLightFalloffExponent;                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EmissiveLightExplicitInfluenceRadius;                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EmissiveBoost;                                            // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DebugTextInfo
// 0x0060
struct FDebugTextInfo
{
	float                                              FontScale;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class AActor*                                      SrcActor;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SrcActorOffset;                                           // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SrcActorDesiredOffset;                                    // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	class FString                                      DebugText;                                                // 0x01E3(0x0010) (ZeroConstructor)
	float                                              TimeRemaining;                                            // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Duration;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      TextColor;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAbsoluteLocation : 1;                                    // 0x01E3(0x0001)
	unsigned char                                      bKeepAttachedToActor : 1;                                 // 0x01E3(0x0001)
	unsigned char                                      bDrawShadow : 1;                                          // 0x01E3(0x0001)
	struct FVector                                     OrigActorLocation;                                        // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	class UFont*                                       Font;                                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// 0x0014
struct FLightmassMaterialInterfaceSettings
{
	unsigned char                                      UnknownData00 : 3;                                        // 0x0000(0x0001)
	unsigned char                                      bOverrideExportResolutionScale : 1;                       // 0x0000(0x0001)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	unsigned char                                      bCastShadowAsMasked : 1;                                  // 0x01E3(0x0001) (Edit, BlueprintVisible)
	float                                              EmissiveBoost;                                            // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExportResolutionScale;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverrideCastShadowAsMasked : 1;                          // 0x01E3(0x0001)
	unsigned char                                      bOverrideEmissiveBoost : 1;                               // 0x01E3(0x0001)
	unsigned char                                      bOverrideDiffuseBoost : 1;                                // 0x01E3(0x0001)
};

// ScriptStruct Engine.MaterialInput
// 0x0038
struct FMaterialInput
{
	int                                                GCC64_Padding;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UMaterialExpression*                         Expression;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                OutputIndex;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      InputName;                                                // 0x01E3(0x0010) (ZeroConstructor)
	int                                                Mask;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskR;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskG;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskB;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskA;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ColorMaterialInput
// 0x0008 (0x0040 - 0x0038)
struct FColorMaterialInput : public FMaterialInput
{
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	unsigned char                                      UseConstant : 1;                                          // 0x01E3(0x0001)
	struct FColor                                      Constant;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ScalarMaterialInput
// 0x0008 (0x0040 - 0x0038)
struct FScalarMaterialInput : public FMaterialInput
{
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	unsigned char                                      UseConstant : 1;                                          // 0x01E3(0x0001)
	float                                              Constant;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VectorMaterialInput
// 0x0010 (0x0048 - 0x0038)
struct FVectorMaterialInput : public FMaterialInput
{
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	unsigned char                                      UseConstant : 1;                                          // 0x01E3(0x0001)
	struct FVector                                     Constant;                                                 // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.Vector2MaterialInput
// 0x0010 (0x0048 - 0x0038)
struct FVector2MaterialInput : public FMaterialInput
{
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	unsigned char                                      UseConstant : 1;                                          // 0x01E3(0x0001)
	float                                              ConstantX;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ConstantY;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ExpressionInput
// 0x0038
struct FExpressionInput
{
	int                                                GCC64_Padding;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UMaterialExpression*                         Expression;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                OutputIndex;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      InputName;                                                // 0x01E3(0x0010) (ZeroConstructor)
	int                                                Mask;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskR;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskG;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskB;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskA;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialAttributesInput
// 0x0000 (0x0038 - 0x0038)
struct FMaterialAttributesInput : public FExpressionInput
{

};

// ScriptStruct Engine.MaterialFunctionInfo
// 0x0018
struct FMaterialFunctionInfo
{
	class UMaterialFunction*                           Function;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FGuid                                       StateId;                                                  // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// 0x0018
struct FMaterialParameterCollectionInfo
{
	class UMaterialParameterCollection*                ParameterCollection;                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FGuid                                       StateId;                                                  // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EmitterPointData
// 0x0030
struct FEmitterPointData
{
	struct FVector4                                    Orientation;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FVector4                                    Position;                                                 // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    InheritedVelocity;                                        // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ParticleSysParam
// 0x0050
struct FParticleSysParam
{
	TArray<struct FEmitterPointData>                   EmitterPoints;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleSysParamType>                 ParamType;                                                // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scalar;                                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scalar_Low;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector_Low;                                               // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialRelevance
// 0x0010
struct FMaterialRelevance
{
	uint32_t                                           bTranslucentBeforeTranslucency;                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	unsigned char                                      bOpaque : 1;                                              // 0x01E3(0x0001)
	unsigned char                                      bMasked : 1;                                              // 0x01E3(0x0001)
	unsigned char                                      bDistortion : 1;                                          // 0x01E3(0x0001)
	unsigned char                                      bSeparateTranslucency : 1;                                // 0x01E3(0x0001)
	unsigned char                                      bNormalTranslucency : 1;                                  // 0x01E3(0x0001)
	unsigned char                                      bDisableDepthTest : 1;                                    // 0x01E3(0x0001)
	unsigned char                                      bOutputsVelocityInBasePass : 1;                           // 0x01E3(0x0001)
	unsigned char                                      bUsesGlobalDistanceField : 1;                             // 0x01E3(0x0001)
	uint16_t                                           ShadingModelMask;                                         // 0x01E3(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOITTranslucencyRelevance : 1;                            // 0x01E3(0x0001)
	unsigned char                                      bOITAfterTranslucencyRelevance : 1;                       // 0x01E3(0x0001)
	unsigned char                                      bLowResTranslucencyRelevance : 1;                         // 0x01E3(0x0001)
	unsigned char                                      bLowResCloudsRelevance : 1;                               // 0x01E3(0x0001)
};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// 0x0050
struct FInstancedStaticMeshInstanceData
{
	struct FVector2D                                   ShadowmapUVBias;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FMatrix                                     Transform;                                                // 0x01E3(0x0040) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LightmapUVBias;                                           // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// 0x0008
struct FInstancedStaticMeshMappingInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.GeomSelection
// 0x000C
struct FGeomSelection
{
	int                                                SelectionIndex;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	int                                                Type;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FontParameterValue
// 0x0028
struct FFontParameterValue
{
	struct FGuid                                       ExpressionGUID;                                           // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFont*                                       FontValue;                                                // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FontPage;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ScalarParameterValue
// 0x001C
struct FScalarParameterValue
{
	struct FGuid                                       ExpressionGUID;                                           // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParameterValue;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TextureParameterValue
// 0x0020
struct FTextureParameterValue
{
	struct FGuid                                       ExpressionGUID;                                           // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ParameterValue;                                           // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VectorParameterValue
// 0x0028
struct FVectorParameterValue
{
	struct FGuid                                       ExpressionGUID;                                           // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ParameterValue;                                           // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// 0x0070
struct FMaterialInstanceBasePropertyOverrides
{
	float                                              TranslucencyDirectionalLightingIntensity;                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	bool                                               bOverride_BlendMode;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_ShadingModel;                                   // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_DitheredLODTransition;                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_TwoSided;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_TessellationMode;                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_LowResTranslucency;                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_SkyLightWhenOccluded;                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_CloudShadowInfluence;                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_LightColorInfluence;                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_AmbientLightColorInfluence;                     // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_LightIntensityInfluence;                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_AmbientLightIntensityInfluence;                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_AlternativeAmbientLightColorInfluence;          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_AlternativeAmbientLightIntensityInfluence;      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_EvaluateLightningAtParticleCenter;              // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_DontRenderWhenPlayerInsideShip;                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_ObjectFadeEnabled;                              // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_ObjectFadeRate;                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_ObjectFadeDistanceThreshold;                    // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_TranslucencyDirectionalLightingIntensity;       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OpacityMaskClipValue;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBlendMode>                            BlendMode;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMaterialShadingModel>                 ShadingModel;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TwoSided : 1;                                             // 0x01E3(0x0001) (Edit)
	TEnumAsByte<EMaterialTessellationMode>             D3D11TessellationMode;                                    // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ForceResolution : 1;                                      // 0x01E3(0x0001) (Edit)
	TEnumAsByte<ELowResTranslucencyCascade>            ForcedResolution;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DisableTransition : 1;                                    // 0x01E3(0x0001) (Edit)
	float                                              FirstSplitDistance;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SecondSplitDistance;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PopPerParticle : 1;                                       // 0x01E3(0x0001) (Edit)
	float                                              SkyLightWhenOccluded;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CloudShadowInfluence;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LightIntensityInfluence;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_OpacityMaskClipValue;                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AmbientLightIntensityInfluence;                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AmbientLightColorInfluence;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AlternativeAmbientLightIntensityInfluence;                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AlternativeAmbientLightColorInfluence;                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LightColorInfluence;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ObjectFadeRate;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ObjectFadeDistanceThreshold;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEvaluateLightningAtParticleCenter : 1;                   // 0x01E3(0x0001) (Edit)
	unsigned char                                      DitheredLODTransition : 1;                                // 0x01E3(0x0001) (Edit)
	unsigned char                                      bDontRenderWhenPlayerInsideShip : 1;                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      ObjectFadeEnabled : 1;                                    // 0x01E3(0x0001) (Edit)
};

// ScriptStruct Engine.ExpressionOutput
// 0x0028
struct FExpressionOutput
{
	int                                                MaskA;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class FString                                      OutputName;                                               // 0x01E3(0x0010) (ZeroConstructor)
	int                                                Mask;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskR;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskG;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskB;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EventGraphFastCallPair
// 0x0010
struct FEventGraphFastCallPair
{
	int                                                EventGraphCallOffset;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UFunction*                                   FunctionToPatch;                                          // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EdGraphPinType
// 0x0050
struct FEdGraphPinType
{
	bool                                               bIsWeakPointer;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class FString                                      PinCategory;                                              // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      PinSubCategory;                                           // 0x01E3(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class UObject>                      PinSubCategoryObject;                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSimpleMemberReference                      PinSubCategoryMemberReference;                            // 0x01E3(0x0020)
	bool                                               bIsArray;                                                 // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsReference;                                             // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsConst;                                                 // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              CullDistance;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              Size;                                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NavAgentSelector
// 0x0004
struct FNavAgentSelector
{
	unsigned char                                      UnknownData00 : 7;                                        // 0x0000(0x0001)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x01E3(0x0001) (Edit)
};

// ScriptStruct Engine.FOscillator
// 0x000C
struct FFOscillator
{
	TEnumAsByte<EInitialOscillatorOffset>              InitialOffset;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	float                                              Amplitude;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ROscillator
// 0x0024
struct FROscillator
{
	struct FFOscillator                                Roll;                                                     // 0x0000(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	struct FFOscillator                                Pitch;                                                    // 0x01E3(0x000C) (Edit)
	struct FFOscillator                                Yaw;                                                      // 0x01E3(0x000C) (Edit)
};

// ScriptStruct Engine.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                Z;                                                        // 0x0000(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	struct FFOscillator                                X;                                                        // 0x01E3(0x000C) (Edit)
	struct FFOscillator                                Y;                                                        // 0x01E3(0x000C) (Edit)
};

// ScriptStruct Engine.KeyHandleMap
// 0x0050
struct FKeyHandleMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.IndexedCurve
// 0x0058
struct FIndexedCurve
{
	struct FKeyHandleMap                               KeyHandlesToIndices;                                      // 0x0000(0x0050) (Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RichCurveKey
// 0x001C
struct FRichCurveKey
{
	float                                              LeaveTangentWeight;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                              // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentWeightMode>           TangentWeightMode;                                        // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArriveTangent;                                            // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ArriveTangentWeight;                                      // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangent;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RichCurve
// 0x0020 (0x0078 - 0x0058)
struct FRichCurve : public FIndexedCurve
{
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                        // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                       // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TArray<struct FRichCurveKey>                       Keys;                                                     // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	float                                              DefaultValue;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RuntimeFloatCurve
// 0x0080
struct FRuntimeFloatCurve
{
	class UCurveFloat*                                 ExternalCurve;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FRichCurve                                  EditorCurveData;                                          // 0x01E3(0x0078)
};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// 0x0088
struct FForceFeedbackChannelDetails
{
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0000(0x0080) (Edit)
	unsigned char                                      UnknownData00[0x163];                                     // 0x0080(0x0163) MISSED OFFSET
	unsigned char                                      bAffectsLeftLarge : 1;                                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAffectsLeftSmall : 1;                                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAffectsRightLarge : 1;                                   // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAffectsRightSmall : 1;                                   // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAffectsLeftTrigger : 1;                                  // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAffectsRightTrigger : 1;                                 // 0x01E3(0x0001) (Edit)
};

// ScriptStruct Engine.InterpGroupActorInfo
// 0x0018
struct FInterpGroupActorInfo
{
	TArray<class AActor*>                              Actors;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       ObjectName;                                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CameraCutInfo
// 0x0010
struct FCameraCutInfo
{
	float                                              TimeStamp;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NavigationFilterArea
// 0x0018
struct FNavigationFilterArea
{
	unsigned char                                      UnknownData00 : 2;                                        // 0x0000(0x0001)
	unsigned char                                      bOverrideEnteringCost : 1;                                // 0x0000(0x0001)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TravelCostOverride;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EnteringCostOverride;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsExcluded : 1;                                          // 0x01E3(0x0001) (Edit)
	unsigned char                                      bOverrideTravelCost : 1;                                  // 0x01E3(0x0001)
};

// ScriptStruct Engine.NavigationFilterFlags
// 0x0004
struct FNavigationFilterFlags
{
	unsigned char                                      UnknownData00 : 7;                                        // 0x0000(0x0001)
	unsigned char                                      bNavFlag15 : 1;                                           // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	unsigned char                                      bNavFlag0 : 1;                                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bNavFlag8 : 1;                                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bNavFlag1 : 1;                                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bNavFlag9 : 1;                                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bNavFlag2 : 1;                                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bNavFlag10 : 1;                                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      bNavFlag3 : 1;                                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bNavFlag11 : 1;                                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      bNavFlag4 : 1;                                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bNavFlag12 : 1;                                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      bNavFlag5 : 1;                                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bNavFlag13 : 1;                                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      bNavFlag6 : 1;                                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bNavFlag14 : 1;                                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      bNavFlag7 : 1;                                            // 0x01E3(0x0001) (Edit)
};

// ScriptStruct Engine.NavDataConfig
// 0x0028 (0x0048 - 0x0020)
struct FNavDataConfig : public FNavAgentProperties
{
	unsigned char                                      UnknownData00[0x1C3];                                     // 0x0020(0x01C3) MISSED OFFSET
	struct FColor                                      Color;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DefaultQueryExtent;                                       // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NavigationDataClass;                                      // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FStringClassReference                       NavigationDataClassName;                                  // 0x01E3(0x0010) (ZeroConstructor, Config)
};

// ScriptStruct Engine.SupportedAreaData
// 0x0020
struct FSupportedAreaData
{
	class UClass*                                      AreaClass;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class FString                                      AreaClassName;                                            // 0x01E3(0x0010) (ZeroConstructor)
	int                                                AreaID;                                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NavigationLinkBase
// 0x0030
struct FNavigationLinkBase
{
	unsigned char                                      UnknownData00 : 7;                                        // 0x0000(0x0001)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	float                                              LeftProjectHeight;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFallDownLength;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENavLinkDirection>                     Direction;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SnapRadius;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SnapHeight;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseSnapHeight : 1;                                       // 0x01E3(0x0001)
	unsigned char                                      bSnapToCheapestArea : 1;                                  // 0x01E3(0x0001) (Edit)
	class UClass*                                      AreaClass;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x01E3(0x0004) (Edit)
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x01E3(0x0001)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x01E3(0x0001)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x01E3(0x0001)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x01E3(0x0001)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x01E3(0x0001)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x01E3(0x0001)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x01E3(0x0001)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x01E3(0x0001)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x01E3(0x0001)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x01E3(0x0001)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x01E3(0x0001)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x01E3(0x0001)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x01E3(0x0001)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x01E3(0x0001)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x01E3(0x0001)
};

// ScriptStruct Engine.NavigationLink
// 0x0018 (0x0048 - 0x0030)
struct FNavigationLink : public FNavigationLinkBase
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FVector                                     Left;                                                     // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Right;                                                    // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NavigationSegmentLink
// 0x0030 (0x0060 - 0x0030)
struct FNavigationSegmentLink : public FNavigationLinkBase
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FVector                                     LeftStart;                                                // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeftEnd;                                                  // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightStart;                                               // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightEnd;                                                 // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BoneNode
// 0x0010
struct FBoneNode
{
	TEnumAsByte<EBoneTranslationRetargetingMode>       TranslationRetargetingMode;                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                ParentIndex;                                              // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct Engine.SkeletonToMeshLinkup
// 0x0020
struct FSkeletonToMeshLinkup
{
	TArray<int>                                        MeshToSkeletonTable;                                      // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<int>                                        SkeletonToMeshTable;                                      // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.SmartNameContainer
// 0x0050
struct FSmartNameContainer
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.AnimSlotGroup
// 0x0018
struct FAnimSlotGroup
{
	TArray<struct FName>                               SlotNames;                                                // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       GroupName;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMaterial
// 0x0010
struct FSkeletalMaterial
{
	bool                                               bEnableShadowCasting;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class UMaterialInterface*                          MaterialInterface;                                        // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.BoneMirrorInfo
// 0x0008
struct FBoneMirrorInfo
{
	TEnumAsByte<EAxis>                                 BoneFlipAxis;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	int                                                SourceIndex;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TriangleSortSettings
// 0x000C
struct FTriangleSortSettings
{
	struct FName                                       CustomLeftRightBoneName;                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	TEnumAsByte<ETriangleSortOption>                   TriangleSorting;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETriangleSortAxis>                     CustomLeftRightAxis;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BoneReference
// 0x000C
struct FBoneReference
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SimplygonChannelCastingSettings
// 0x0010
struct FSimplygonChannelCastingSettings
{
	bool                                               bFlipGreenChannel;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	TEnumAsByte<ESimplygonMaterialChannel>             MaterialChannel;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimplygonCasterType>                  Caster;                                                   // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimplygonColorChannels>               ColorChannels;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BitsPerChannel;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSRGB;                                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBakeVertexColors;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipBackfacingNormals;                                   // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTangentSpaceNormals;                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SimplygonMaterialLODSettings
// 0x0028
struct FSimplygonMaterialLODSettings
{
	bool                                               bPreferTwoSideMaterials;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	bool                                               bActive;                                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMaterialLODType>                      MaterialLODType;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAutomaticSizes;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimplygonTextureResolution>           TextureWidth;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimplygonTextureResolution>           TextureHeight;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimplygonTextureSamplingQuality>      SamplingQuality;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                GutterSpace;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimplygonTextureStrech>               TextureStrech;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReuseExistingCharts;                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSimplygonChannelCastingSettings>    ChannelsToCast;                                           // 0x01E3(0x0010) (ZeroConstructor)
	bool                                               bBakeVertexData;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBakeActorData;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowMultiMaterial;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// 0x0070
struct FSkeletalMeshOptimizationSettings
{
	struct FSimplygonMaterialLODSettings               MaterialLODSettings;                                      // 0x0000(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TEnumAsByte<ESkeletalMeshOptimizationType>         ReductionMethod;                                          // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              NumOfTrianglesPercentage;                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxDeviationPercentage;                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WeldingThreshold;                                         // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRecalcNormals;                                           // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              NormalsThreshold;                                         // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   SilhouetteImportance;                                     // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   TextureImportance;                                        // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   ShadingImportance;                                        // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   SkinningImportance;                                       // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              BoneReductionRatio;                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxBonesPerVertex;                                        // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FBoneReference>                      BonesToRemove;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor)
	int                                                BaseLODModel;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LODChainLastIndex;                                        // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bForceRebuild;                                            // 0x01E3(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.SimplygonRemeshingSettings
// 0x0050
struct FSimplygonRemeshingSettings
{
	struct FSimplygonMaterialLODSettings               MaterialLODSettings;                                      // 0x0000(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	bool                                               bActive;                                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ScreenSize;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecalculateNormals;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HardAngleThreshold;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MergeDistance;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseClippingPlane;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ClippingLevel;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AxisIndex;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPlaneNegativeHalfspace;                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMassiveLOD;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAggregateLOD;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// 0x0100
struct FSkeletalMeshLODInfo
{
	struct FSimplygonRemeshingSettings                 RemeshingSettings;                                        // 0x0000(0x0050) (Edit)
	unsigned char                                      UnknownData00[0x193];                                     // 0x0050(0x0193) MISSED OFFSET
	float                                              ScreenSize;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODHysteresis;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        LODMaterialMap;                                           // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<bool>                                       bEnableShadowCasting;                                     // 0x01E3(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FTriangleSortSettings>               TriangleSortSettings;                                     // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      bHasBeenSimplified : 1;                                   // 0x01E3(0x0001)
	struct FSkeletalMeshOptimizationSettings           ReductionSettings;                                        // 0x01E3(0x0070) (Edit)
};

// ScriptStruct Engine.DeformablesSettings
// 0x000C
struct FDeformablesSettings
{
	float                                              Damping;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              DistanceStiffness;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeStiffness;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ClothPhysicsProperties
// 0x0024
struct FClothPhysicsProperties
{
	float                                              SelfCollisionThickness;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              BendResistance;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShearResistance;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StretchLimit;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Drag;                                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InertiaBlend;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ClothingAssetData
// 0x0040
struct FClothingAssetData
{
	struct FClothPhysicsProperties                     PhysicsProperties;                                        // 0x0000(0x0024) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1BF];                                     // 0x0024(0x01BF) MISSED OFFSET
	struct FName                                       AssetName;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      ApexFileName;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor)
	bool                                               bClothPropertiesChanged;                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// 0x0010
struct FSkelMeshComponentLODInfo
{
	TArray<bool>                                       HiddenMaterials;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ConstrainComponentPropName
// 0x0008
struct FConstrainComponentPropName
{
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ConstraintInstance
// 0x0160
struct FConstraintInstance
{
	float                                              AngularDriveForceLimit;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	unsigned char                                      bDisableCollision : 1;                                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSwingLimitSoft : 1;                                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAngularBreakable : 1;                                    // 0x01E3(0x0001) (Edit)
	struct FName                                       ConstraintBone1;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ConstraintBone2;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos1;                                                     // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PriAxis1;                                                 // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecAxis1;                                                 // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos2;                                                     // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PriAxis2;                                                 // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecAxis2;                                                 // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 1;                                        // 0x01E3(0x0001)
	unsigned char                                      bEnableProjection : 1;                                    // 0x01E3(0x0001) (Edit)
	float                                              ProjectionLinearTolerance;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProjectionAngularTolerance;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               LinearXMotion;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               LinearYMotion;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               LinearZMotion;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LinearLimitSize;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLinearLimitSoft : 1;                                     // 0x01E3(0x0001) (Edit)
	float                                              LinearLimitStiffness;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LinearLimitDamping;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLinearBreakable : 1;                                     // 0x01E3(0x0001) (Edit)
	float                                              LinearBreakThreshold;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              AngularSwing1Motion;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              AngularTwistMotion;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              AngularSwing2Motion;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02 : 1;                                        // 0x01E3(0x0001)
	unsigned char                                      bTwistLimitSoft : 1;                                      // 0x01E3(0x0001) (Edit)
	float                                              Swing1LimitAngle;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TwistLimitAngle;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Swing2LimitAngle;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SwingLimitStiffness;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SwingLimitDamping;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TwistLimitStiffness;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TwistLimitDamping;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AngularRotationOffset;                                    // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             OwnerComponent;                                           // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              AngularBreakThreshold;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLinearXPositionDrive : 1;                                // 0x01E3(0x0001) (Edit)
	unsigned char                                      bLinearXVelocityDrive : 1;                                // 0x01E3(0x0001) (Edit)
	unsigned char                                      bLinearYPositionDrive : 1;                                // 0x01E3(0x0001) (Edit)
	unsigned char                                      bLinearYVelocityDrive : 1;                                // 0x01E3(0x0001) (Edit)
	unsigned char                                      bLinearZPositionDrive : 1;                                // 0x01E3(0x0001) (Edit)
	unsigned char                                      bLinearZVelocityDrive : 1;                                // 0x01E3(0x0001) (Edit)
	unsigned char                                      bLinearPositionDrive : 1;                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bLinearVelocityDrive : 1;                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector                                     LinearPositionTarget;                                     // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearVelocityTarget;                                     // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LinearDriveSpring;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LinearDriveDamping;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       JointName;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bSwingPositionDrive : 1;                                  // 0x01E3(0x0001) (Deprecated)
	unsigned char                                      bSwingVelocityDrive : 1;                                  // 0x01E3(0x0001) (Deprecated)
	unsigned char                                      bTwistPositionDrive : 1;                                  // 0x01E3(0x0001) (Deprecated)
	unsigned char                                      bTwistVelocityDrive : 1;                                  // 0x01E3(0x0001) (Deprecated)
	unsigned char                                      bAngularSlerpDrive : 1;                                   // 0x01E3(0x0001) (Deprecated)
	unsigned char                                      bAngularOrientationDrive : 1;                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bEnableSwingDrive : 1;                                    // 0x01E3(0x0001)
	float                                              LinearDriveForceLimit;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAngularVelocityDrive : 1;                                // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FQuat                                       AngularPositionTarget;                                    // 0x01E3(0x0010) (Deprecated, IsPlainOldData)
	TEnumAsByte<EAngularDriveMode>                     AngularDriveMode;                                         // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AngularOrientationTarget;                                 // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocityTarget;                                    // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AngularDriveSpring;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AngularDriveDamping;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03 : 7;                                        // 0x01E3(0x0001)
	unsigned char                                      bEnableTwistDrive : 1;                                    // 0x01E3(0x0001)
};

// ScriptStruct Engine.SingleAnimationPlayData
// 0x0020
struct FSingleAnimationPlayData
{
	float                                              SavedPlayRate;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UAnimationAsset*                             AnimToPlay;                                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVertexAnimation*                            VertexAnimToPlay;                                         // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSavedLooping : 1;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSavedPlaying : 1;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible)
	float                                              SavedPosition;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InterpControlPoint
// 0x001C
struct FInterpControlPoint
{
	bool                                               bPositionIsRelative;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FVector                                     PositionControlPoint;                                     // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.WheelSetup
// 0x0020
struct FWheelSetup
{
	struct FVector                                     AdditionalOffset;                                         // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	class UClass*                                      WheelClass;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ReplicatedVehicleState
// 0x0014
struct FReplicatedVehicleState
{
	int                                                CurrentGear;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              SteeringInput;                                            // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BrakeInput;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HandbrakeInput;                                           // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VehicleInputRate
// 0x0008
struct FVehicleInputRate
{
	float                                              FallRate;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              RiseRate;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VehicleEngineData
// 0x0098
struct FVehicleEngineData
{
	float                                              DampingRateZeroThrottleClutchDisengaged;                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FRuntimeFloatCurve                          TorqueCurve;                                              // 0x01E3(0x0080) (Edit)
	float                                              MaxRPM;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MOI;                                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingRateFullThrottle;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingRateZeroThrottleClutchEngaged;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VehicleDifferential4WData
// 0x001C
struct FVehicleDifferential4WData
{
	float                                              RearBias;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TEnumAsByte<EVehicleDifferential4W>                DifferentialType;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrontRearSplit;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrontLeftRightSplit;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RearLeftRightSplit;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CentreBias;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrontBias;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VehicleGearData
// 0x000C
struct FVehicleGearData
{
	float                                              UpRatio;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              Ratio;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DownRatio;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VehicleTransmissionData
// 0x0030
struct FVehicleTransmissionData
{
	float                                              ClutchStrength;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	bool                                               bUseGearAutoBox;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GearSwitchTime;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GearAutoBoxLatency;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FinalRatio;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FVehicleGearData>                    ForwardGears;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor)
	float                                              ReverseGearRatio;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeutralGearUpRatio;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AtmospherePrecomputeParameters
// 0x002C
struct FAtmospherePrecomputeParameters
{
	int                                                InscatterNuNum;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              DensityHeight;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DecayHeight;                                              // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                MaxScatteringOrder;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TransmittanceTexWidth;                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TransmittanceTexHeight;                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IrradianceTexWidth;                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IrradianceTexHeight;                                      // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InscatterAltitudeSampleNum;                               // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                InscatterMuNum;                                           // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InscatterMuSNum;                                          // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AttenuationSettings
// 0x00C0
struct FAttenuationSettings
{
	float                                              LPFRadiusMax;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	unsigned char                                      bAttenuate : 1;                                           // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSpatialize : 1;                                          // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAttenuateWithLPF : 1;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible)
	TEnumAsByte<ESoundDistanceModel>                   DistanceAlgorithm;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          CustomAttenuationCurve;                                   // 0x01E3(0x0080) (Edit, BlueprintVisible)
	TEnumAsByte<ESoundDistanceCalc>                    DistanceType;                                             // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EAttenuationShape>                     AttenuationShape;                                         // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              dBAttenuationAtMax;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OmniRadius;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESoundSpatializationAlgorithm>         SpatializationAlgorithm;                                  // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiusMin;                                                // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              RadiusMax;                                                // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     AttenuationShapeExtents;                                  // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConeOffset;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FalloffDistance;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPFRadiusMin;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AudioComponentParam
// 0x0020
struct FAudioComponentParam
{
	class USoundWave*                                  SoundWaveParam;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FName                                       ParamName;                                                // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatParam;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BoolParam;                                                // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IntParam;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	bool                                               bUseAreaShadowsForStationaryLight;                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	float                                              IndirectLightingSaturation;                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShadowExponent;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// 0x0004 (0x0010 - 0x000C)
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	float                                              LightSourceAngle;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LightmassPointLightSettings
// 0x0000 (0x000C - 0x000C)
struct FLightmassPointLightSettings : public FLightmassLightSettings
{

};

// ScriptStruct Engine.NavGraphNode
// 0x0018
struct FNavGraphNode
{
	class UObject*                                     Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.FFTWaterComponentWaveParticleType
// 0x0038
struct FFFTWaterComponentWaveParticleType
{
	class UParticleComputeShaderData*                  ParticleComputeShaderData;                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FVector2D                                   SpawnRadiusRange;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FoamRange;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HeightRange;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   AngleRange;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CalmWaterDampeningFactorRange;                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FFTWaterComponentIntersectParticleType
// 0x0040
struct FFFTWaterComponentIntersectParticleType
{
	class UParticleComputeShaderData*                  ParticleComputeShaderData;                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FVector2D                                   VelocityRange;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FoamRange;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeHorizontalVelocityWeight;                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalDirectionFromVolumeWeight;                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalRandomVelocityWeight;                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeVerticalVelocityWeight;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VerticalRandomVelocityWeight;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WaterVelocityWeight;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VelocityScaling;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnderwaterParticles : 1;                                  // 0x01E3(0x0001) (Edit)
};

// ScriptStruct Engine.FFTWaterComponentParticleParams
// 0x01D8
struct FFFTWaterComponentParticleParams
{
	struct FFFTWaterComponentIntersectParticleType     IntersectionParticles[0x2];                               // 0x0000(0x0040) (Edit)
	unsigned char                                      UnknownData00[0x163];                                     // 0x0080(0x0163) MISSED OFFSET
	int                                                MaxParticlesPerFrame;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFFTWaterComponentWaveParticleType          WaveParticles[0x6];                                       // 0x01E3(0x0038) (Edit)
};

// ScriptStruct Engine.FFTWaterComponentParams
// 0x0298
struct FFFTWaterComponentParams
{
	float                                              ExtendedPlaneFadeDistance;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FLinearColor                                AmbientColour;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                WaterColour;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShallowWaterColour;                                       // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackLitColour;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FoamColour;                                               // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FoamHighlightColour;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FresnelPower;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpecularBrightness;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FoamBrightness;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReflectionBrightness;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FoamFadeStart;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FoamFadeEnd;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DEBUG_Wireframe : 1;                                      // 0x01E3(0x0001) (Edit)
	float                                              Size;                                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WindSpeed;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WindSpeedInEditor;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CarrierWaveAmplitude;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CarrierWaveWaveLength;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CarrierWavePropagationSpeed;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HorizonFadeDistance;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HorizonDarkenStart;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HorizonDarkenRange;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CloudShadowDarkenStart;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CloudShadowDarkenRange;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CausticsDepth;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    FoamColourTex;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFFTWaterComponentParticleParams            ParticleParams;                                           // 0x01E3(0x01D8) (Edit)
	float                                              ExtendedPlaneSize;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB1];                                      // 0x01E7(0x00B1) MISSED OFFSET
};

// ScriptStruct Engine.MurkyRegion
// 0x001C
struct FMurkyRegion
{
	float                                              Density;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	bool                                               Enabled;                                                  // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialSpriteElement
// 0x0028
struct FMaterialSpriteElement
{
	class UCurveFloat*                                 DistanceToSizeCurve;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UMaterialInterface*                          Material;                                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DistanceToOpacityCurve;                                   // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSizeIsInScreenSpace : 1;                                 // 0x01E3(0x0001) (Edit, BlueprintVisible)
	float                                              BaseSizeX;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseSizeY;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MergedCollisionComponentStaticMeshInstanceData
// 0x0040
struct FMergedCollisionComponentStaticMeshInstanceData
{
	int                                                OwningActorCrc32;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FTransform                                  RelativeTransform;                                        // 0x01E3(0x0030) (Edit, EditConst, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.FractureEffect
// 0x0010
struct FFractureEffect
{
	class USoundBase*                                  Sound;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UParticleSystem*                             ParticleSystem;                                           // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NameIndexPair
// 0x000C
struct FNameIndexPair
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.FlatWaterMeshTextureOverride
// 0x000C (0x0018 - 0x000C)
struct FFlatWaterMeshTextureOverride : public FNameIndexPair
{
	class UTexture*                                    Texture;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.InstancedCoverageMeshLOD
// 0x0008
struct FInstancedCoverageMeshLOD
{
	float                                              DistanceToLOD;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              LODReduction;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SplineMeshParams
// 0x0058
struct FSplineMeshParams
{
	struct FVector2D                                   EndOffset;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FVector                                     StartPos;                                                 // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartTangent;                                             // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   StartScale;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartRoll;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   StartOffset;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndTangent;                                               // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   EndScale;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndRoll;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ParticleSystemLOD
// 0x0001
struct FParticleSystemLOD
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.LODSoloTrack
// 0x0010
struct FLODSoloTrack
{
	TArray<unsigned char>                              SoloEnableSetting;                                        // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Engine.NamedEmitterMaterial
// 0x0010
struct FNamedEmitterMaterial
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EngineShowFlagsSetting
// 0x0018
struct FEngineShowFlagsSetting
{
	bool                                               Enabled;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class FString                                      ShowFlagName;                                             // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.TimelineEventEntry
// 0x0014
struct FTimelineEventEntry
{
	struct FScriptDelegate                             EventFunc;                                                // 0x0000(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	float                                              Time;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TimelineVectorTrack
// 0x0030
struct FTimelineVectorTrack
{
	class UStructProperty*                             VectorProperty;                                           // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UCurveVector*                                VectorCurve;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x01E3(0x0014) (ZeroConstructor, InstancedReference)
	struct FName                                       VectorPropertyName;                                       // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TimelineFloatTrack
// 0x0030
struct FTimelineFloatTrack
{
	class UFloatProperty*                              FloatProperty;                                            // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UCurveFloat*                                 FloatCurve;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x01E3(0x0014) (ZeroConstructor, InstancedReference)
	struct FName                                       FloatPropertyName;                                        // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TimelineLinearColorTrack
// 0x0030
struct FTimelineLinearColorTrack
{
	class UStructProperty*                             LinearColorProperty;                                      // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UCurveLinearColor*                           LinearColorCurve;                                         // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x01E3(0x0014) (ZeroConstructor, InstancedReference)
	struct FName                                       LinearColorPropertyName;                                  // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.Timeline
// 0x0098
struct FTimeline
{
	class UByteProperty*                               DirectionProperty;                                        // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	TEnumAsByte<ETimelineLengthMode>                   LengthMode;                                               // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              Length;                                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bLooping : 1;                                             // 0x01E3(0x0001)
	unsigned char                                      bReversePlayback : 1;                                     // 0x01E3(0x0001)
	unsigned char                                      bPlaying : 1;                                             // 0x01E3(0x0001)
	float                                              PlayRate;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTimelineEventEntry>                 Events;                                                   // 0x01E3(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineVectorTrack>                InterpVectors;                                            // 0x01E3(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineFloatTrack>                 InterpFloats;                                             // 0x01E3(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineLinearColorTrack>           InterpLinearColors;                                       // 0x01E3(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             TimelinePostUpdateFunc;                                   // 0x01E3(0x0014) (ZeroConstructor, InstancedReference, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             TimelineFinishedFunc;                                     // 0x01E3(0x0014) (ZeroConstructor, InstancedReference, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UObject>                      PropertySetObject;                                        // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       DirectionPropertyName;                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.AnimCurveBase
// 0x0018
struct FAnimCurveBase
{
	int                                                CurveTypeFlags;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       LastObservedName;                                         // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FloatCurve
// 0x0078 (0x0090 - 0x0018)
struct FFloatCurve : public FAnimCurveBase
{
	unsigned char                                      UnknownData00[0x1CB];                                     // 0x0018(0x01CB) MISSED OFFSET
	struct FRichCurve                                  FloatCurve;                                               // 0x01E3(0x0078)
};

// ScriptStruct Engine.RawCurveTracks
// 0x0010
struct FRawCurveTracks
{
	TArray<struct FFloatCurve>                         FloatCurves;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimSegment
// 0x0020
struct FAnimSegment
{
	int                                                LoopingCount;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UAnimSequenceBase*                           AnimReference;                                            // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartPos;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              AnimStartTime;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimEndTime;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimPlayRate;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimTrack
// 0x0010
struct FAnimTrack
{
	TArray<struct FAnimSegment>                        AnimSegments;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.CompositeSection
// 0x0028 (0x0058 - 0x0030)
struct FCompositeSection : public FAnimLinkableElement
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FName                                       SectionName;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       NextSectionName;                                          // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMetaData*>                       MetaData;                                                 // 0x01E3(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct Engine.SlotAnimationTrack
// 0x0018
struct FSlotAnimationTrack
{
	struct FAnimTrack                                  AnimTrack;                                                // 0x0000(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       SlotName;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BranchingPoint
// 0x0010 (0x0040 - 0x0030)
struct FBranchingPoint : public FAnimLinkableElement
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FName                                       EventName;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DisplayTime;                                              // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TriggerTimeOffset;                                        // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BranchingPointMarker
// 0x000C
struct FBranchingPointMarker
{
	TEnumAsByte<EAnimNotifyEventType>                  NotifyEventType;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	int                                                NotifyIndex;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TriggerTime;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TrackToSkeletonMap
// 0x0008
struct FTrackToSkeletonMap
{
	int                                                BoneTreeIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	int                                                SkeletonIndex;                                            // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct Engine.TranslationTrack
// 0x0020
struct FTranslationTrack
{
	TArray<float>                                      Times;                                                    // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<struct FVector>                             PosKeys;                                                  // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.RotationTrack
// 0x0020
struct FRotationTrack
{
	TArray<float>                                      Times;                                                    // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<struct FQuat>                               RotKeys;                                                  // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ScaleTrack
// 0x0020
struct FScaleTrack
{
	TArray<float>                                      Times;                                                    // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<struct FVector>                             ScaleKeys;                                                // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.CompressedOffsetData
// 0x0018
struct FCompressedOffsetData
{
	int                                                StripSize;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TArray<int>                                        OffsetData;                                               // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BlendParameter
// 0x0020
struct FBlendParameter
{
	int                                                GridNum;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class FString                                      DisplayName;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
	float                                              Min;                                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InterpolationParameter
// 0x0008
struct FInterpolationParameter
{
	TEnumAsByte<EFilterInterpolationType>              InterpolationType;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	float                                              InterpolationTime;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PerBoneInterpolation
// 0x0010
struct FPerBoneInterpolation
{
	float                                              InterpolationSpeedPerSec;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FBoneReference                              BoneReference;                                            // 0x01E3(0x000C) (Edit)
};

// ScriptStruct Engine.BlendSample
// 0x0018
struct FBlendSample
{
	struct FVector                                     SampleValue;                                              // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	class UAnimSequence*                               Animation;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EditorElement
// 0x0018
struct FEditorElement
{
	float                                              Weights[0x3];                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	int                                                Indices[0x3];                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlendSampleData
// 0x0020
struct FBlendSampleData
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	int                                                SampleDataIndex;                                          // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalWeight;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlendFilter
// 0x0090
struct FBlendFilter
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct Engine.AnimSetMeshLinkup
// 0x0010
struct FAnimSetMeshLinkup
{
	TArray<int>                                        BoneToTrackTable;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.FilePath
// 0x0010
struct FFilePath
{
	class FString                                      FilePath;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// 0x0018
struct FEditorMapPerformanceTestDefinition
{
	int                                                TestTimer;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FFilePath                                   PerformanceTestmap;                                       // 0x01E3(0x0010) (Edit, Config)
};

// ScriptStruct Engine.ImportFactorySettingValues
// 0x0020
struct FImportFactorySettingValues
{
	class FString                                      Value;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class FString                                      SettingName;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// 0x0020
struct FEditorImportWorkflowDefinition
{
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FFilePath                                   ImportFilePath;                                           // 0x01E3(0x0010) (Edit, Config)
};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// 0x0150
struct FBuildPromotionImportWorkflowSettings
{
	TArray<struct FEditorImportWorkflowDefinition>     OtherAssetsToImport;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FEditorImportWorkflowDefinition             Diffuse;                                                  // 0x01E3(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Normal;                                                   // 0x01E3(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             StaticMesh;                                               // 0x01E3(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             ReimportStaticMesh;                                       // 0x01E3(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             BlendShapeMesh;                                           // 0x01E3(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             MorphMesh;                                                // 0x01E3(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             SkeletalMesh;                                             // 0x01E3(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Animation;                                                // 0x01E3(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Sound;                                                    // 0x01E3(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             SurroundSound;                                            // 0x01E3(0x0020) (Edit, Config)
};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// 0x0060
struct FBuildPromotionOpenAssetSettings
{
	struct FFilePath                                   TextureAsset;                                             // 0x0000(0x0010) (Edit, Config)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FFilePath                                   BlueprintAsset;                                           // 0x01E3(0x0010) (Edit, Config)
	struct FFilePath                                   MaterialAsset;                                            // 0x01E3(0x0010) (Edit, Config)
	struct FFilePath                                   ParticleSystemAsset;                                      // 0x01E3(0x0010) (Edit, Config)
	struct FFilePath                                   SkeletalMeshAsset;                                        // 0x01E3(0x0010) (Edit, Config)
	struct FFilePath                                   StaticMeshAsset;                                          // 0x01E3(0x0010) (Edit, Config)
};

// ScriptStruct Engine.BuildPromotionBlueprintSettings
// 0x0020
struct FBuildPromotionBlueprintSettings
{
	struct FFilePath                                   SecondMeshPath;                                           // 0x0000(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FFilePath                                   FirstMeshPath;                                            // 0x01E3(0x0010) (Edit)
};

// ScriptStruct Engine.DirectoryPath
// 0x0010
struct FDirectoryPath
{
	class FString                                      path;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// 0x0020
struct FBuildPromotionNewProjectSettings
{
	class FString                                      NewProjectNameOverride;                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FDirectoryPath                              NewProjectFolderOverride;                                 // 0x01E3(0x0010) (Edit)
};

// ScriptStruct Engine.BuildPromotionTestSettings
// 0x0210
struct FBuildPromotionTestSettings
{
	struct FFilePath                                   SourceControlMaterial;                                    // 0x0000(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FFilePath                                   DefaultStaticMeshAsset;                                   // 0x01E3(0x0010) (Edit)
	struct FBuildPromotionImportWorkflowSettings       ImportWorkflow;                                           // 0x01E3(0x0150) (Edit)
	struct FBuildPromotionOpenAssetSettings            OpenAssets;                                               // 0x01E3(0x0060) (Edit)
	struct FBuildPromotionBlueprintSettings            BlueprintSettings;                                        // 0x01E3(0x0020) (Edit)
	struct FBuildPromotionNewProjectSettings           NewProjectSettings;                                       // 0x01E3(0x0020) (Edit)
	unsigned char                                      UnknownData01[0xD];                                       // 0x0203(0x000D) MISSED OFFSET
};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// 0x0030
struct FMaterialEditorPromotionSettings
{
	struct FFilePath                                   DefaultNormalTexture;                                     // 0x0000(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FFilePath                                   DefaultMaterialAsset;                                     // 0x01E3(0x0010) (Edit)
	struct FFilePath                                   DefaultDiffuseTexture;                                    // 0x01E3(0x0010) (Edit)
};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// 0x0010
struct FParticleEditorPromotionSettings
{
	struct FFilePath                                   DefaultParticleAsset;                                     // 0x0000(0x0010) (Edit)
};

// ScriptStruct Engine.OpenTestAsset
// 0x0018
struct FOpenTestAsset
{
	bool                                               bSkipTestWhenUnAttended;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FFilePath                                   AssetToOpen;                                              // 0x01E3(0x0010) (Edit)
};

// ScriptStruct Engine.ExternalToolDefinition
// 0x0060
struct FExternalToolDefinition
{
	struct FDirectoryPath                              ScriptDirectory;                                          // 0x0000(0x0010) (Edit, Config)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class FString                                      ToolName;                                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FFilePath                                   ExecutablePath;                                           // 0x01E3(0x0010) (Edit, Config)
	class FString                                      CommandLineOptions;                                       // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FDirectoryPath                              WorkingDirectory;                                         // 0x01E3(0x0010) (Edit, Config)
	class FString                                      ScriptExtension;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.EditorImportExportTestDefinition
// 0x0038
struct FEditorImportExportTestDefinition
{
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FFilePath                                   ImportFilePath;                                           // 0x01E3(0x0010) (Edit, Config)
	class FString                                      ExportFileExtension;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bSkipExport;                                              // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct Engine.LaunchOnTestSettings
// 0x0020
struct FLaunchOnTestSettings
{
	class FString                                      DeviceID;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FFilePath                                   LaunchOnTestmap;                                          // 0x01E3(0x0010) (Edit, Config)
};

// ScriptStruct Engine.NavAvoidanceData
// 0x003C
struct FNavAvoidanceData
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct Engine.AnimGroupInfo
// 0x0018
struct FAnimGroupInfo
{
	struct FLinearColor                                Color;                                                    // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TableRowBase
// 0x0001
struct FTableRowBase
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.DialogueContext
// 0x0018
struct FDialogueContext
{
	TArray<class UDialogueVoice*>                      Targets;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class UDialogueVoice*                              Speaker;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollisionResponseTemplate
// 0x0060
struct FCollisionResponseTemplate
{
	bool                                               bCanModify;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectTypeName;                                           // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FResponseChannel>                    CustomResponses;                                          // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      HelpMessage;                                              // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.CustomChannelSetup
// 0x0010
struct FCustomChannelSetup
{
	bool                                               bStaticObject;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    DefaultResponse;                                          // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bTraceType;                                               // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CustomProfile
// 0x0018
struct FCustomProfile
{
	TArray<struct FResponseChannel>                    CustomResponses;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.Redirector
// 0x0010
struct FRedirector
{
	struct FName                                       NewName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FName                                       OldName;                                                  // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GenericStruct
// 0x0004
struct FGenericStruct
{
	int                                                Data;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollisionProfileName
// 0x0008
struct FCollisionProfileName
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TimerHandle
// 0x0004
struct FTimerHandle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.DebugFloatHistory
// 0x0020
struct FDebugFloatHistory
{
	bool                                               bAutoAdjustMinMax;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	TArray<float>                                      Samples;                                                  // 0x01E3(0x0010) (ZeroConstructor, Transient)
	float                                              MaxSamples;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FormatTextArgument
// 0x0070
struct FFormatTextArgument
{
	struct FText                                       TextValue;                                                // 0x0000(0x0018) (Edit, BlueprintVisible, DisableEditOnTemplate)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FText                                       ArgumentName;                                             // 0x01E3(0x0018) (Edit, BlueprintVisible, DisableEditOnTemplate)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0038(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct Engine.BakedStateExitTransition
// 0x0028
struct FBakedStateExitTransition
{
	TArray<int>                                        PoseEvaluatorLinks;                                       // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	int                                                CanTakeDelegateIndex;                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CustomResultNodeIndex;                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TransitionIndex;                                          // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StateSequencePlayerToQueryIndex;                          // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bDesiredTransitionReturnValue;                            // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BakedAnimationState
// 0x0050
struct FBakedAnimationState
{
	bool                                               CanBeReEntered;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FName                                       StateName;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       PathedStateName;                                          // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FBakedStateExitTransition>           Transitions;                                              // 0x01E3(0x0010) (ZeroConstructor)
	int                                                StateRootNodeIndex;                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartNotify;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndNotify;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FullyBlendedNotify;                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsAConduit;                                              // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                EntryRuleNodeIndex;                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        PlayerNodeIndices;                                        // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimationStateBase
// 0x0008
struct FAnimationStateBase
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// 0x0030 (0x0038 - 0x0008)
struct FAnimationTransitionBetweenStates : public FAnimationStateBase
{
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	int                                                PreviousState;                                            // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NextState;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CrossfadeDuration;                                        // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartNotify;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndNotify;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InterruptNotify;                                          // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAlphaBlendOption>                     BlendMode;                                                // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CustomCurve;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETransitionLogicType>                  LogicType;                                                // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BakedAnimationStateMachine
// 0x0030
struct FBakedAnimationStateMachine
{
	TArray<struct FAnimationTransitionBetweenStates>   Transitions;                                              // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       MachineName;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                InitialState;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FBakedAnimationState>                States;                                                   // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.KShapeElem
// 0x0020
struct FKShapeElem
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.KSphereElem
// 0x0050 (0x0070 - 0x0020)
struct FKSphereElem : public FKShapeElem
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FMatrix                                     TM;                                                       // 0x01E3(0x0040) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     Center;                                                   // 0x01E3(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.KBoxElem
// 0x0070 (0x0090 - 0x0020)
struct FKBoxElem : public FKShapeElem
{
	float                                              Z;                                                        // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FMatrix                                     TM;                                                       // 0x01E3(0x0040) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     Center;                                                   // 0x01E3(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FQuat                                       Orientation;                                              // 0x01E3(0x0010) (Edit, EditConst, IsPlainOldData)
	float                                              X;                                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Y;                                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.KSphylElem
// 0x0070 (0x0090 - 0x0020)
struct FKSphylElem : public FKShapeElem
{
	float                                              Length;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FMatrix                                     TM;                                                       // 0x01E3(0x0040) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     Center;                                                   // 0x01E3(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FQuat                                       Orientation;                                              // 0x01E3(0x0010) (Edit, EditConst, IsPlainOldData)
	float                                              Radius;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.KConvexElem
// 0x0070 (0x0090 - 0x0020)
struct FKConvexElem : public FKShapeElem
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	TArray<struct FVector>                             VertexData;                                               // 0x01E3(0x0010) (ZeroConstructor)
	struct FBox                                        ElemBox;                                                  // 0x01E3(0x001C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.KAggregateGeom
// 0x0048
struct FKAggregateGeom
{
	TArray<struct FKConvexElem>                        ConvexElems;                                              // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<struct FKSphereElem>                        SphereElems;                                              // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKBoxElem>                           BoxElems;                                                 // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKSphylElem>                         SphylElems;                                               // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.CircleElement2D
// 0x000C
struct FCircleElement2D
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FVector2D                                   Center;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.BoxElement2D
// 0x0014
struct FBoxElement2D
{
	float                                              Angle;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FVector2D                                   Center;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Width;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Height;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.ConvexElement2D
// 0x0010
struct FConvexElement2D
{
	TArray<struct FVector2D>                           VertexData;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AggregateGeometry2D
// 0x0030
struct FAggregateGeometry2D
{
	TArray<struct FConvexElement2D>                    ConvexElements;                                           // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<struct FCircleElement2D>                    CircleElements;                                           // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FBoxElement2D>                       BoxElements;                                              // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.BranchFilter
// 0x000C
struct FBranchFilter
{
	int                                                BlendDepth;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InputBlendPose
// 0x0010
struct FInputBlendPose
{
	TArray<struct FBranchFilter>                       BranchFilters;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.BuilderPoly
// 0x0020
struct FBuilderPoly
{
	int                                                PolyFlags;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TArray<int>                                        VertexIndices;                                            // 0x01E3(0x0010) (ZeroConstructor)
	int                                                Direction;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemName;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CanvasUVTri
// 0x0060
struct FCanvasUVTri
{
	struct FLinearColor                                V2_Color;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FVector2D                                   V0_Pos;                                                   // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V0_UV;                                                    // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                V0_Color;                                                 // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V1_Pos;                                                   // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V1_UV;                                                    // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                V1_Color;                                                 // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V2_Pos;                                                   // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V2_UV;                                                    // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FractureMaterial
// 0x0024
struct FFractureMaterial
{
	int                                                InteriorElementIndex;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FVector2D                                   UVScale;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UVOffset;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Tangent;                                                  // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UAngle;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DestructibleChunkParameters
// 0x0004
struct FDestructibleChunkParameters
{
	bool                                               bDoNotCrumble;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	bool                                               bIsSupportChunk;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoNotFracture;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoNotDamage;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AudioQualitySettings
// 0x0040
struct FAudioQualitySettings
{
	int                                                MaxChannels;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0004(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct Engine.PhysicalSurfaceName
// 0x000C
struct FPhysicalSurfaceName
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	TEnumAsByte<EPhysicalSurface>                      Type;                                                     // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DominanceGroupPair
// 0x000C
struct FDominanceGroupPair
{
	int                                                SecondDominanceValue;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TEnumAsByte<EDominanceGroup>                       FirstGroupId;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDominanceGroup>                       SecondGroupId;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FirstDominanceValue;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DominanceGroupName
// 0x000C
struct FDominanceGroupName
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	TEnumAsByte<EDominanceGroup>                       Type;                                                     // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TextureLODGroup
// 0x0038
struct FTextureLODGroup
{
	int                                                TextureQualityReduction;                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TEnumAsByte<ETextureGroup>                         Group;                                                    // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                LODBias;                                                  // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumStreamedMips;                                          // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureMipGenSettings>                MipGenSettings;                                           // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                MinLODSize;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxLODSize;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MinMagFilter;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MipFilter;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DialogueContextMapping
// 0x0028
struct FDialogueContextMapping
{
	class UDialogueSoundWaveProxy*                     Proxy;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FDialogueContext                            Context;                                                  // 0x01E3(0x0018) (Edit)
	class USoundWave*                                  SoundWave;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// 0x0018
struct FBlueprintComponentDelegateBinding
{
	struct FName                                       FunctionNameToBind;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FName                                       ComponentPropertyName;                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DelegatePropertyName;                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// 0x0004
struct FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00 : 2;                                        // 0x0000(0x0001)
	unsigned char                                      bOverrideParentBinding : 1;                               // 0x0000(0x0001)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	unsigned char                                      bConsumeInput : 1;                                        // 0x01E3(0x0001)
	unsigned char                                      bExecuteWhenPaused : 1;                                   // 0x01E3(0x0001)
};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// 0x0014 (0x0018 - 0x0004)
struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       InputActionName;                                          // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionNameToBind;                                       // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// 0x0010 (0x0014 - 0x0004)
struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       InputAxisName;                                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionNameToBind;                                       // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// 0x002C (0x0030 - 0x0004)
struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FKey                                        AxisKey;                                                  // 0x01E3(0x0020)
	struct FName                                       FunctionNameToBind;                                       // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// 0x003C (0x0040 - 0x0004)
struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FInputChord                                 InputChord;                                               // 0x01E3(0x0028)
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionNameToBind;                                       // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// 0x000C (0x0010 - 0x0004)
struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionNameToBind;                                       // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FontImportOptionsData
// 0x00B0
struct FFontImportOptionsData
{
	float                                              DistanceFieldScanRadiusScale;                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class FString                                      FontName;                                                 // 0x01E3(0x0010) (Edit, ZeroConstructor)
	float                                              Height;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableAntialiasing : 1;                                  // 0x01E3(0x0001) (Edit)
	unsigned char                                      bEnableBold : 1;                                          // 0x01E3(0x0001) (Edit)
	unsigned char                                      bEnableItalic : 1;                                        // 0x01E3(0x0001) (Edit)
	unsigned char                                      bEnableUnderline : 1;                                     // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAlphaOnly : 1;                                           // 0x01E3(0x0001) (Edit)
	TEnumAsByte<EFontImportCharacterSet>               CharacterSet;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      Chars;                                                    // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class FString                                      UnicodeRange;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class FString                                      CharsFilePath;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class FString                                      CharsFileWildcard;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bCreatePrintableOnly : 1;                                 // 0x01E3(0x0001) (Edit)
	unsigned char                                      bIncludeASCIIRange : 1;                                   // 0x01E3(0x0001) (Edit)
	struct FLinearColor                                ForegroundColor;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableDropShadow : 1;                                    // 0x01E3(0x0001) (Edit)
	int                                                TexturePageWidth;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TexturePageMaxHeight;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                XPadding;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                YPadding;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxTop;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxBottom;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxRight;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxLeft;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableLegacyMode : 1;                                    // 0x01E3(0x0001) (Edit)
	int                                                Kerning;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseDistanceFieldAlpha : 1;                               // 0x01E3(0x0001) (Edit)
	int                                                DistanceFieldScaleFactor;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FontCharacter
// 0x0018
struct FFontCharacter
{
	int                                                VerticalOffset;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	int                                                StartU;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StartV;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                USize;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                VSize;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TextureIndex;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.HapticFeedbackDetails
// 0x0100
struct FHapticFeedbackDetails
{
	struct FRuntimeFloatCurve                          Amplitude;                                                // 0x0000(0x0080) (Edit)
	unsigned char                                      UnknownData00[0x163];                                     // 0x0080(0x0163) MISSED OFFSET
	struct FRuntimeFloatCurve                          Frequency;                                                // 0x01E3(0x0080) (Edit)
};

// ScriptStruct Engine.HIKBoneTransform
// 0x0030
struct FHIKBoneTransform
{
	struct FVector                                     Scale;                                                    // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	int                                                BoneID;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Orientation;                                              // 0x01E3(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct Engine.HIKBoneMapping
// 0x000C
struct FHIKBoneMapping
{
	int                                                HumanIKBone;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       UnrealBoneName;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ComponentKey
// 0x0020
struct FComponentKey
{
	struct FGuid                                       AssociatedGuid;                                           // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class UClass*                                      OwnerClass;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SCSVariableName;                                          // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ComponentOverrideRecord
// 0x0028
struct FComponentOverrideRecord
{
	struct FComponentKey                               ComponentKey;                                             // 0x0000(0x0020)
	unsigned char                                      UnknownData00[0x1C3];                                     // 0x0020(0x01C3) MISSED OFFSET
	class UActorComponent*                             ComponentTemplate;                                        // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Engine.KeyBind
// 0x0038
struct FKeyBind
{
	unsigned char                                      UnknownData00 : 7;                                        // 0x0000(0x0001)
	unsigned char                                      bIgnoreCmd : 1;                                           // 0x0000(0x0001) (Config)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FKey                                        Key;                                                      // 0x01E3(0x0020) (Config)
	class FString                                      Command;                                                  // 0x01E3(0x0010) (ZeroConstructor, Config)
	unsigned char                                      Control : 1;                                              // 0x01E3(0x0001) (Config)
	unsigned char                                      Shift : 1;                                                // 0x01E3(0x0001) (Config)
	unsigned char                                      Alt : 1;                                                  // 0x01E3(0x0001) (Config)
	unsigned char                                      Cmd : 1;                                                  // 0x01E3(0x0001) (Config)
	unsigned char                                      bIgnoreCtrl : 1;                                          // 0x01E3(0x0001) (Config)
	unsigned char                                      bIgnoreShift : 1;                                         // 0x01E3(0x0001) (Config)
	unsigned char                                      bIgnoreAlt : 1;                                           // 0x01E3(0x0001) (Config)
};

// ScriptStruct Engine.InputAxisProperties
// 0x0010
struct FInputAxisProperties
{
	unsigned char                                      bInvert : 1;                                              // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	float                                              DeadZone;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Sensitivity;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Exponent;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InputAxisConfigEntry
// 0x0018
struct FInputAxisConfigEntry
{
	struct FInputAxisProperties                        AxisProperties;                                           // 0x0000(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       AxisKeyName;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.InputActionKeyMapping
// 0x0030
struct FInputActionKeyMapping
{
	unsigned char                                      UnknownData00 : 3;                                        // 0x0000(0x0001)
	unsigned char                                      bCmd : 1;                                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FName                                       ActionName;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // 0x01E3(0x0020) (Edit)
	unsigned char                                      bShift : 1;                                               // 0x01E3(0x0001) (Edit)
	unsigned char                                      bCtrl : 1;                                                // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAlt : 1;                                                 // 0x01E3(0x0001) (Edit)
};

// ScriptStruct Engine.InputAxisKeyMapping
// 0x0030
struct FInputAxisKeyMapping
{
	float                                              Scale;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       AxisName;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // 0x01E3(0x0020) (Edit)
};

// ScriptStruct Engine.InputCombinedAxisKeyMapping
// 0x0058
struct FInputCombinedAxisKeyMapping
{
	float                                              CircularDeadZoneUpperBound;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       AxisName;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKey                                        KeyX;                                                     // 0x01E3(0x0020) (Edit)
	struct FKey                                        KeyY;                                                     // 0x01E3(0x0020) (Edit)
	float                                              Scale;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CircularDeadZoneLowerBound;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveEdEntry
// 0x0038
struct FCurveEdEntry
{
	float                                              ClampHigh;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UObject*                                     CurveObject;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      CurveColor;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      CurveName;                                                // 0x01E3(0x0010) (ZeroConstructor)
	int                                                bHideCurve;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bColorCurve;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bFloatingPointColorCurve;                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bClamp;                                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClampLow;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveEdTab
// 0x0030
struct FCurveEdTab
{
	float                                              ViewEndOutput;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class FString                                      TabName;                                                  // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FCurveEdEntry>                       Curves;                                                   // 0x01E3(0x0010) (ZeroConstructor)
	float                                              ViewStartInput;                                           // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ViewEndInput;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ViewStartOutput;                                          // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	unsigned char                                      Value : 1;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	float                                              Time;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DirectorTrackCut
// 0x0014
struct FDirectorTrackCut
{
	int                                                ShotNumber;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              Time;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TransitionTime;                                           // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetCamGroup;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EventTrackKey
// 0x000C
struct FEventTrackKey
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	float                                              Time;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimControlTrackKey
// 0x0020
struct FAnimControlTrackKey
{
	unsigned char                                      UnknownData00 : 1;                                        // 0x0000(0x0001)
	unsigned char                                      bReverse : 1;                                             // 0x0000(0x0001)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	float                                              StartTime;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AnimSeq;                                                  // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              AnimStartOffset;                                          // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnimEndOffset;                                            // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnimPlayRate;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x01E3(0x0001)
};

// ScriptStruct Engine.InterpLookupPoint
// 0x000C
struct FInterpLookupPoint
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       GroupName;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InterpLookupTrack
// 0x0010
struct FInterpLookupTrack
{
	TArray<struct FInterpLookupPoint>                  Points;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	int                                                ClipIDNumber;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              Time;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ToggleTrackKey
// 0x0008
struct FToggleTrackKey
{
	TEnumAsByte<ETrackToggleAction>                    ToggleAction;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	float                                              Time;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundTrackKey
// 0x0018
struct FSoundTrackKey
{
	class USoundBase*                                  Sound;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	float                                              Time;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VisibilityTrackKey
// 0x0008
struct FVisibilityTrackKey
{
	TEnumAsByte<EVisibilityTrackCondition>             ActiveCondition;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	float                                              Time;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVisibilityTrackAction>                Action;                                                   // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PrimitiveMaterialRef
// 0x0018
struct FPrimitiveMaterialRef
{
	int                                                ElementIndex;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UPrimitiveComponent*                         Primitive;                                                // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Engine.LayerActorStats
// 0x0010
struct FLayerActorStats
{
	int                                                Total;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UClass*                                      Type;                                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CustomInput
// 0x0048
struct FCustomInput
{
	struct FExpressionInput                            Input;                                                    // 0x0000(0x0038) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	class FString                                      InputName;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.FunctionExpressionInput
// 0x0050
struct FFunctionExpressionInput
{
	struct FExpressionInput                            Input;                                                    // 0x0000(0x0038) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	class UMaterialExpressionFunctionInput*            ExpressionInput;                                          // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGuid                                       ExpressionInputId;                                        // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FunctionExpressionOutput
// 0x0040
struct FFunctionExpressionOutput
{
	struct FExpressionOutput                           Output;                                                   // 0x0000(0x0028) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UMaterialExpressionFunctionOutput*           ExpressionOutput;                                         // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGuid                                       ExpressionOutputId;                                       // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollectionParameterBase
// 0x0018
struct FCollectionParameterBase
{
	struct FGuid                                       Id;                                                       // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollectionScalarParameter
// 0x0004 (0x001C - 0x0018)
struct FCollectionScalarParameter : public FCollectionParameterBase
{
	unsigned char                                      UnknownData00[0x1CB];                                     // 0x0018(0x01CB) MISSED OFFSET
	float                                              DefaultValue;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollectionVectorParameter
// 0x0010 (0x0028 - 0x0018)
struct FCollectionVectorParameter : public FCollectionParameterBase
{
	unsigned char                                      UnknownData00[0x1CB];                                     // 0x0018(0x01CB) MISSED OFFSET
	struct FLinearColor                                DefaultValue;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NavCollisionCylinder
// 0x0014
struct FNavCollisionCylinder
{
	float                                              Height;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FVector                                     Offset;                                                   // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NavCollisionBox
// 0x0018
struct FNavCollisionBox
{
	struct FVector                                     Extent;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	struct FVector                                     Offset;                                                   // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DistributionLookupTable
// 0x0028
struct FDistributionLookupTable
{
	unsigned char                                      LockFlag;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	unsigned char                                      Op;                                                       // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      EntryCount;                                               // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      EntryStride;                                              // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubEntryStride;                                           // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeBias;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Values;                                                   // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.RawDistribution
// 0x0028
struct FRawDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0028) (ZeroConstructor)
};

// ScriptStruct Engine.RawDistributionVector
// 0x0010 (0x0038 - 0x0028)
struct FRawDistributionVector : public FRawDistribution
{
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              MinValue;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class UDistributionVector*                         Distribution;                                             // 0x01E3(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)
};

// ScriptStruct Engine.RawDistributionFloat
// 0x0010 (0x0038 - 0x0028)
struct FRawDistributionFloat : public FRawDistribution
{
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              MinValue;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class UDistributionFloat*                          Distribution;                                             // 0x01E3(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)
};

// ScriptStruct Engine.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	unsigned char                                      UnknownData00 : 2;                                        // 0x0000(0x0001)
	unsigned char                                      bLock : 1;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	unsigned char                                      bModify : 1;                                              // 0x01E3(0x0001) (Edit)
	unsigned char                                      bScale : 1;                                               // 0x01E3(0x0001) (Edit)
};

// ScriptStruct Engine.ParticleRandomSeedInfo
// 0x0020
struct FParticleRandomSeedInfo
{
	TArray<int>                                        RandomSeeds;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGetSeedFromInstance : 1;                                 // 0x01E3(0x0001) (Edit)
	unsigned char                                      bInstanceSeedIsIndex : 1;                                 // 0x01E3(0x0001) (Edit)
	unsigned char                                      bResetSeedOnEmitterLooping : 1;                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      bRandomlySelectSeedArray : 1;                             // 0x01E3(0x0001) (Edit)
};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// 0x0028
struct FParticleEvent_GenerateInfo
{
	TArray<class UParticleModuleEventSendToGame*>      ParticleModuleEventsToSendToGame;                         // 0x0000(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TEnumAsByte<EParticleEventType>                    Type;                                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Frequency;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ParticleFrequency;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      FirstTimeOnly : 1;                                        // 0x01E3(0x0001) (Edit)
	unsigned char                                      LastTimeOnly : 1;                                         // 0x01E3(0x0001) (Edit)
	unsigned char                                      UseReflectedImpactVector : 1;                             // 0x01E3(0x0001) (Edit)
	unsigned char                                      bUseOrbitOffset : 1;                                      // 0x01E3(0x0001) (Edit)
	struct FName                                       CustomName;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LocationBoneSocketInfo
// 0x0014
struct FLocationBoneSocketInfo
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	struct FName                                       BoneSocketName;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PrimitiveSphereEmitterAngleRanges
// 0x0010
struct FPrimitiveSphereEmitterAngleRanges
{
	struct FVector2D                                   VerticalAngle;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FVector2D                                   HorizontalAngle;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	unsigned char                                      UnknownData00 : 2;                                        // 0x0000(0x0001)
	unsigned char                                      bUseEmitterTime : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	unsigned char                                      bProcessDuringSpawn : 1;                                  // 0x01E3(0x0001) (Edit)
	unsigned char                                      bProcessDuringUpdate : 1;                                 // 0x01E3(0x0001) (Edit)
};

// ScriptStruct Engine.EmitterDynamicParameter
// 0x0050
struct FEmitterDynamicParameter
{
	struct FRawDistributionFloat                       ParamValue;                                               // 0x0000(0x0038) (Edit)
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FName                                       ParamName;                                                // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bUseEmitterTime : 1;                                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSpawnTimeOnly : 1;                                       // 0x01E3(0x0001) (Edit)
	TEnumAsByte<EEmitterDynamicParameterValue>         ValueMethod;                                              // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bScaleVelocityByParamValue : 1;                           // 0x01E3(0x0001) (Edit)
};

// ScriptStruct Engine.ParticleBurst
// 0x0010
struct FParticleBurst
{
	TEnumAsByte<EBurstGroup>                           Group;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	int                                                Count;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CountLow;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// 0x0070
struct FGPUSpriteLocalVectorFieldInfo
{
	unsigned char                                      UnknownData00 : 3;                                        // 0x0000(0x0001)
	unsigned char                                      bTileZ : 1;                                               // 0x0000(0x0001)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class UVectorField*                                Field;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x01E3(0x0030) (IsPlainOldData)
	struct FRotator                                    MinInitialRotation;                                       // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    MaxInitialRotation;                                       // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationRate;                                             // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Tightness;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIgnoreComponentTransform : 1;                            // 0x01E3(0x0001)
	unsigned char                                      bTileX : 1;                                               // 0x01E3(0x0001)
	unsigned char                                      bTileY : 1;                                               // 0x01E3(0x0001)
};

// ScriptStruct Engine.FloatDistribution
// 0x0028
struct FFloatDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0028) (ZeroConstructor)
};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// 0x02D0
struct FGPUSpriteEmitterInfo
{
	struct FVector4                                    MurkyColorScale;                                          // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class UParticleModuleRequired*                     RequiredModule;                                           // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleModuleSpawn*                        SpawnModule;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleModuleSpawnPerUnit*                 SpawnPerUnitModule;                                       // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleModuleSpawnRepeatPerPoint*          SpawnRepeatPerPointModule;                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleComputeShaderData*                  ParticleComputeData;                                      // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UParticleModule*>                     SpawnModules;                                             // 0x01E3(0x0010) (ZeroConstructor)
	struct FGPUSpriteLocalVectorFieldInfo              LocalVectorField;                                         // 0x01E3(0x0070)
	struct FFloatDistribution                          VectorFieldScale;                                         // 0x01E3(0x0028) (ZeroConstructor)
	struct FFloatDistribution                          DragCoefficient;                                          // 0x01E3(0x0028) (ZeroConstructor)
	struct FFloatDistribution                          DragLocalVelocityCoefficient;                             // 0x01E3(0x0028) (ZeroConstructor)
	struct FFloatDistribution                          PointAttractorStrength;                                   // 0x01E3(0x0028) (ZeroConstructor)
	struct FFloatDistribution                          Resilience;                                               // 0x01E3(0x0028) (ZeroConstructor)
	struct FVector                                     ConstantAcceleration;                                     // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PointAttractorPosition;                                   // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              PointAttractorRadiusSq;                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitOffsetBase;                                          // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitOffsetRange;                                         // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InvMaxSize;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              InvRotationRateScale;                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxLifetime;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxParticleCount;                                         // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleScreenAlignment>              ScreenAlignment;                                          // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleAxisLock>                     LockAxisFlag;                                             // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableCollision : 1;                                     // 0x01E3(0x0001)
	unsigned char                                      bNeedsVectorFields : 1;                                   // 0x01E3(0x0001)
	TEnumAsByte<EParticleCollisionMode>                CollisionMode;                                            // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FRawDistributionVector                      DynamicColor;                                             // 0x01E3(0x0038)
	struct FRawDistributionFloat                       DynamicAlpha;                                             // 0x01E3(0x0038)
	struct FRawDistributionVector                      DynamicColorScale;                                        // 0x01E3(0x0038)
	struct FRawDistributionFloat                       DynamicAlphaScale;                                        // 0x01E3(0x0038)
	unsigned char                                      UnknownData01[0xB5];                                      // 0x021B(0x00B5) MISSED OFFSET
};

// ScriptStruct Engine.GPUSpriteResourceData
// 0x0530
struct FGPUSpriteResourceData
{
	float                                              AlignmentInheritedVelocityScale;                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TArray<struct FColor>                              QuantizedMiscSamples;                                     // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedDynamicParamSamples;                             // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedSimulationAttrSamples;                           // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedSizeOverVelocitySamples;                         // 0x01E3(0x0010) (ZeroConstructor)
	struct FVector4                                    ColorScale;                                               // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorBias;                                                // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    MiscScale;                                                // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    MiscBias;                                                 // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    DynParamScale;                                            // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    DynParamBias;                                             // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    MurkyColorScale;                                          // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SimulationAttrCurveScale;                                 // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SimulationAttrCurveBias;                                  // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SizeOverVelocityScale;                                    // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SizeOverVelocityBias;                                     // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SubImageSize;                                             // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SizeBySpeed;                                              // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstantAcceleration;                                     // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitOffsetBase;                                          // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitOffsetRange;                                         // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitFrequencyBase;                                       // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitFrequencyRange;                                      // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitPhaseBase;                                           // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitPhaseRange;                                          // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              GlobalVectorFieldScale;                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GlobalVectorFieldTightness;                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PerParticleVectorFieldScale;                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PerParticleVectorFieldBias;                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficientScale;                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficientBias;                                      // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DragLocalVelocityScale;                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DragLocalVelocityBias;                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ResilienceScale;                                          // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ResilienceBias;                                           // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FColor>                              QuantizedColorSamples;                                    // 0x01E3(0x0010) (ZeroConstructor)
	float                                              CollisionRadiusBias;                                      // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionTimeBias;                                        // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OneMinusFriction;                                         // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RotationRateScale;                                        // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadiusScale;                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AlphaThreshold;                                           // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleScreenAlignment>              ScreenAlignment;                                          // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleAxisLock>                     LockAxisFlag;                                             // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PivotOffset;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              CameraMotionBlurAmount;                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x349];                                     // 0x01E7(0x0349) MISSED OFFSET
};

// ScriptStruct Engine.TireFrictionScalePair
// 0x0010
struct FTireFrictionScalePair
{
	float                                              FrictionScale;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UTireType*                                   TireType;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DelegateArray
// 0x0010
struct FDelegateArray
{
	TArray<struct FScriptDelegate>                     Delegates;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PurchaseInfo
// 0x0040
struct FPurchaseInfo
{
	class FString                                      DisplayPrice;                                             // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class FString                                      Identifier;                                               // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      DisplayName;                                              // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      DisplayDescription;                                       // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.RigTransformConstraint
// 0x0010
struct FRigTransformConstraint
{
	float                                              Weight;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TEnumAsByte<EConstraintTransform>                  TranformType;                                             // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ParentSpace;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TransformBaseConstraint
// 0x0010
struct FTransformBaseConstraint
{
	TArray<struct FRigTransformConstraint>             TransformConstraints;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.TransformBase
// 0x0028
struct FTransformBase
{
	struct FTransformBaseConstraint                    Constraints[0x2];                                         // 0x0000(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x1C3];                                     // 0x0020(0x01C3) MISSED OFFSET
	struct FName                                       Node;                                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.Node
// 0x0060
struct FNode
{
	bool                                               bAdvanced;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ParentName;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x01E3(0x0030) (IsPlainOldData)
	class FString                                      DisplayName;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.BPVariableMetaDataEntry
// 0x0018
struct FBPVariableMetaDataEntry
{
	class FString                                      DataValue;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       DataKey;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DestructibleDamageParameters
// 0x001C
struct FDestructibleDamageParameters
{
	float                                              ImpactResistance;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              DamageThreshold;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageSpread;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableImpactDamage;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactDamage;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DefaultImpactDamageDepth;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCustomImpactResistance;                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DestructibleDebrisParameters
// 0x002C
struct FDestructibleDebrisParameters
{
	struct FBox                                        ValidBounds;                                              // 0x0000(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C7];                                     // 0x001C(0x01C7) MISSED OFFSET
	float                                              DebrisLifetimeMin;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DebrisLifetimeMax;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DebrisMaxSeparationMin;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DebrisMaxSeparationMax;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DestructibleAdvancedParameters
// 0x0010
struct FDestructibleAdvancedParameters
{
	float                                              FractureImpulseScale;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              DamageCap;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactVelocityThreshold;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxChunkSpeed;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DestructibleSpecialHierarchyDepths
// 0x0014
struct FDestructibleSpecialHierarchyDepths
{
	int                                                EssentialDepth;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	int                                                SupportDepth;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinimumFractureDepth;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebris;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DebrisDepth;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DestructibleDepthParameters
// 0x0001
struct FDestructibleDepthParameters
{
	TEnumAsByte<EImpactDamageOverride>                 ImpactDamageOverride;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DestructibleParametersFlag
// 0x0004
struct FDestructibleParametersFlag
{
	unsigned char                                      bFormExtendedStructures : 1;                              // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	unsigned char                                      bAccumulateDamage : 1;                                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAssetDefinedSupport : 1;                                 // 0x01E3(0x0001) (Edit)
	unsigned char                                      bWorldSupport : 1;                                        // 0x01E3(0x0001) (Edit)
	unsigned char                                      bDebrisTimeout : 1;                                       // 0x01E3(0x0001) (Edit)
	unsigned char                                      bDebrisMaxSeparation : 1;                                 // 0x01E3(0x0001) (Edit)
	unsigned char                                      bCrumbleSmallestChunks : 1;                               // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAccurateRaycasts : 1;                                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      bUseValidBounds : 1;                                      // 0x01E3(0x0001) (Edit)
};

// ScriptStruct Engine.DestructibleParameters
// 0x0088
struct FDestructibleParameters
{
	struct FDestructibleParametersFlag                 Flags;                                                    // 0x0000(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FDestructibleDamageParameters               DamageParameters;                                         // 0x01E3(0x001C) (Edit)
	struct FDestructibleDebrisParameters               DebrisParameters;                                         // 0x01E3(0x002C) (Edit)
	struct FDestructibleAdvancedParameters             AdvancedParameters;                                       // 0x01E3(0x0010) (Edit)
	struct FDestructibleSpecialHierarchyDepths         SpecialHierarchyDepths;                                   // 0x01E3(0x0014) (Edit)
	TArray<struct FDestructibleDepthParameters>        DepthParameters;                                          // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.SoundGroup
// 0x0020
struct FSoundGroup
{
	float                                              DecompressedDuration;                                     // 0x0000(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TEnumAsByte<ESoundGroup>                           SoundGroup;                                               // 0x01E3(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	class FString                                      DisplayName;                                              // 0x01E3(0x0010) (ZeroConstructor, Config)
	unsigned char                                      bAlwaysDecompressOnLoad : 1;                              // 0x01E3(0x0001) (Config)
};

// ScriptStruct Engine.SubtitleCue
// 0x0040
struct FSubtitleCue
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x01E3(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0004(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct Engine.LocalizedSubtitle
// 0x0028
struct FLocalizedSubtitle
{
	unsigned char                                      UnknownData00 : 2;                                        // 0x0000(0x0001)
	unsigned char                                      bSingleLine : 1;                                          // 0x0000(0x0001)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class FString                                      LanguageExt;                                              // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FSubtitleCue>                        Subtitles;                                                // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      bMature : 1;                                              // 0x01E3(0x0001)
	unsigned char                                      bManualWordWrap : 1;                                      // 0x01E3(0x0001)
};

// ScriptStruct Engine.SoundClassProperties
// 0x0024
struct FSoundClassProperties
{
	TEnumAsByte<EAudioOutputTarget>                    OutputTarget;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	float                                              Volume;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StereoBleed;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LFEBleed;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VoiceCenterChannelVolume;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadioFilterVolume;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadioFilterVolumeThreshold;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplyEffects : 1;                                        // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAlwaysPlay : 1;                                          // 0x01E3(0x0001) (Edit)
	unsigned char                                      bIsUISound : 1;                                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      bIsMusic : 1;                                             // 0x01E3(0x0001) (Edit)
	unsigned char                                      bReverb : 1;                                              // 0x01E3(0x0001) (Edit)
	unsigned char                                      bCenterChannelOnly : 1;                                   // 0x01E3(0x0001) (Edit)
	unsigned char                                      bApplyAmbientVolumes : 1;                                 // 0x01E3(0x0001) (Edit)
};

// ScriptStruct Engine.PassiveSoundMixModifier
// 0x0010
struct FPassiveSoundMixModifier
{
	float                                              MaxVolumeThreshold;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class USoundMix*                                   SoundMix;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinVolumeThreshold;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AudioEQEffect
// 0x0028
struct FAudioEQEffect
{
	float                                              LFGain;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              HFFrequency;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HFGain;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MFCutoffFrequency;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MFBandwidth;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MFGain;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LFFrequency;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundClassAdjuster
// 0x0018
struct FSoundClassAdjuster
{
	float                                              VoiceCenterChannelVolumeAdjuster;                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class USoundClass*                                 SoundClassObject;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeAdjuster;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchAdjuster;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplyToChildren : 1;                                     // 0x01E3(0x0001) (Edit)
};

// ScriptStruct Engine.DialogueWaveParameter
// 0x0020
struct FDialogueWaveParameter
{
	struct FDialogueContext                            Context;                                                  // 0x0000(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x1CB];                                     // 0x0018(0x01CB) MISSED OFFSET
	class UDialogueWave*                               DialogueWave;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DistanceDatum
// 0x0014
struct FDistanceDatum
{
	float                                              Volume;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              FadeInDistanceStart;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeInDistanceEnd;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDistanceStart;                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDistanceEnd;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ModulatorContinuousParams
// 0x0020
struct FModulatorContinuousParams
{
	TEnumAsByte<EModulationParamMode>                  ParamMode;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinInput;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInput;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinOutput;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOutput;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// 0x0024
struct FSubsurfaceProfileStruct
{
	struct FLinearColor                                FalloffColor;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	float                                              ScatterRadius;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SubsurfaceColor;                                          // 0x01E3(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTTrackBase
// 0x000C
struct FTTTrackBase
{
	bool                                               bIsExternalCurve;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FName                                       TrackName;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTEventTrack
// 0x000C (0x0018 - 0x000C)
struct FTTEventTrack : public FTTTrackBase
{
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	class UCurveFloat*                                 CurveKeys;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTFloatTrack
// 0x000C (0x0018 - 0x000C)
struct FTTFloatTrack : public FTTTrackBase
{
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	class UCurveFloat*                                 CurveFloat;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTVectorTrack
// 0x000C (0x0018 - 0x000C)
struct FTTVectorTrack : public FTTTrackBase
{
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	class UCurveVector*                                CurveVector;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTLinearColorTrack
// 0x000C (0x0018 - 0x000C)
struct FTTLinearColorTrack : public FTTTrackBase
{
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	class UCurveLinearColor*                           CurveLinearColor;                                         // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TouchInputControl
// 0x0078
struct FTouchInputControl
{
	struct FKey                                        AltInputKey;                                              // 0x0000(0x0020) (Edit)
	unsigned char                                      UnknownData00[0x1C3];                                     // 0x0020(0x01C3) MISSED OFFSET
	class UTexture2D*                                  Image1;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Image2;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Center;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   VisualSize;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ThumbSize;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InteractionSize;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InputScale;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKey                                        MainInputKey;                                             // 0x01E3(0x0020) (Edit)
};

// ScriptStruct Engine.VectorDistribution
// 0x0028
struct FVectorDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0028) (ZeroConstructor)
};

// ScriptStruct Engine.Vector4Distribution
// 0x0028
struct FVector4Distribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0028) (ZeroConstructor)
};

// ScriptStruct Engine.PlatformInterfaceData
// 0x0030
struct FPlatformInterfaceData
{
	class UObject*                                     ObjectValue;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FName                                       DataName;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlatformInterfaceDataType>            Type;                                                     // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      StringValue;                                              // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// 0x0038
struct FPlatformInterfaceDelegateResult
{
	struct FPlatformInterfaceData                      Data;                                                     // 0x0000(0x0030)
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	bool                                               bSuccessful;                                              // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FastArraySerializerItem
// 0x0008
struct FFastArraySerializerItem
{
	int                                                ReplicationKey;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	int                                                ReplicationID;                                            // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.FastArraySerializer
// 0x00A8
struct FFastArraySerializer
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct Engine.NetActorPtr
// 0x0014
struct FNetActorPtr
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.ExposedValueCopyRecord
// 0x0068
struct FExposedValueCopyRecord
{
	class UBoolProperty*                               CachedBoolDestProperty;                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UProperty*                                   SourceProperty;                                           // 0x01E3(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       SourcePropertyName;                                       // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceSubPropertyName;                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SourceArrayIndex;                                         // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class UProperty*                                   DestProperty;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                DestArrayIndex;                                           // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPostCopyOperation>                    PostCopyOperation;                                        // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	class UBoolProperty*                               CachedBoolSourceProperty;                                 // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.ExposedValueHandler
// 0x0028
struct FExposedValueHandler
{
	TArray<struct FExposedValueCopyRecord>             CopyRecords;                                              // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       BoundFunction;                                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_Base
// 0x0030
struct FAnimNode_Base
{
	struct FExposedValueHandler                        EvaluateGraphExposedInputs;                               // 0x0000(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.InputScaleBias
// 0x0008
struct FInputScaleBias
{
	float                                              Bias;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              Scale;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PoseLinkBase
// 0x0018
struct FPoseLinkBase
{
	int                                                LinkID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.ComponentSpacePoseLink
// 0x0000 (0x0018 - 0x0018)
struct FComponentSpacePoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.ExposureSettings
// 0x0008
struct FExposureSettings
{
	bool                                               bFixed;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	int                                                LogOffset;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.URL
// 0x0070
struct FURL
{
	int                                                Valid;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class FString                                      Protocol;                                                 // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      Host;                                                     // 0x01E3(0x0010) (ZeroConstructor)
	int                                                Port;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      Map;                                                      // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      RedirectURL;                                              // 0x01E3(0x0010) (ZeroConstructor)
	TArray<class FString>                              Op;                                                       // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      Portal;                                                   // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.TickPrerequisite
// 0x0010
struct FTickPrerequisite
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.DepthFieldGlowInfo
// 0x0024
struct FDepthFieldGlowInfo
{
	struct FVector2D                                   GlowInnerRadius;                                          // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	unsigned char                                      bEnableGlow : 1;                                          // 0x01E3(0x0001) (BlueprintVisible)
	struct FLinearColor                                GlowColor;                                                // 0x01E3(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   GlowOuterRadius;                                          // 0x01E3(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FontRenderInfo
// 0x0028
struct FFontRenderInfo
{
	struct FDepthFieldGlowInfo                         GlowInfo;                                                 // 0x0000(0x0024) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x1BF];                                     // 0x0024(0x01BF) MISSED OFFSET
	unsigned char                                      bClipText : 1;                                            // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bEnableShadow : 1;                                        // 0x01E3(0x0001) (BlueprintVisible)
};

// ScriptStruct Engine.ComponentReference
// 0x0018
struct FComponentReference
{
	struct FName                                       ComponentProperty;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class AActor*                                      OtherActor;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

// ScriptStruct Engine.DamageEvent
// 0x0010
struct FDamageEvent
{
	class UClass*                                      DamageTypeClass;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RadialDamageParams
// 0x0014
struct FRadialDamageParams
{
	float                                              DamageFalloff;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              BaseDamage;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumDamage;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RadialDamageEvent
// 0x0030 (0x0040 - 0x0010)
struct FRadialDamageEvent : public FDamageEvent
{
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FRadialDamageParams                         Params;                                                   // 0x01E3(0x0014)
	struct FVector                                     Origin;                                                   // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          ComponentHits;                                            // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PointDamageEvent
// 0x0090 (0x00A0 - 0x0010)
struct FPointDamageEvent : public FDamageEvent
{
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	float                                              Damage;                                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ShotDirection;                                            // 0x01E3(0x000C)
	struct FHitResult                                  HitInfo;                                                  // 0x01E3(0x0080)
};

// ScriptStruct Engine.CollisionMergingSettings
// 0x0001
struct FCollisionMergingSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.MeshMergingSettings
// 0x0030
struct FMeshMergingSettings
{
	TArray<float>                                      LODScreenSizes;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	bool                                               bGenerateLightMapUV;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TargetLightMapUVChannel;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TargetLightMapResolution;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bImportVertexColors;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPivotPointAtZero;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMergePhysicsData;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMergeMaterials;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bExportNormalMap;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bExportMetallicMap;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bExportRoughnessMap;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bExportSpecularMap;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MergedMaterialAtlasResolution;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollisionMerging;                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRelativeTransform;                                    // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMergeRelativeToFirstComponent;                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDuplicateLODs;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialSimplificationSettings
// 0x0044
struct FMaterialSimplificationSettings
{
	struct FIntPoint                                   SpecularMapSize;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FIntPoint                                   BaseColorMapSize;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNormalMap;                                               // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   NormalMapSize;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MetallicConstant;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMetallicMap;                                             // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   MetallicMapSize;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RoughnessConstant;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRoughnessMap;                                            // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   RoughnessMapSize;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpecularConstant;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecularMap;                                             // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshProxySettings
// 0x0070
struct FMeshProxySettings
{
	bool                                               bPlaneNegativeHalfspace;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	int                                                ScreenSize;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMaterialSimplificationSettings             Material;                                                 // 0x01E3(0x0044) (Edit)
	int                                                TextureWidth;                                             // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                TextureHeight;                                            // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bExportNormalMap;                                         // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bExportMetallicMap;                                       // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bExportRoughnessMap;                                      // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bExportSpecularMap;                                       // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bRecalculateNormals;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HardAngleThreshold;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MergeDistance;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseClippingPlane;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ClippingLevel;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AxisIndex;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PresortedBillboardsParams
// 0x0008
struct FPresortedBillboardsParams
{
	int                                                NumDirections;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TEnumAsByte<EPresortedBillboardsMode>              Mode;                                                     // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshBuildSettings
// 0x0040
struct FMeshBuildSettings
{
	class UStaticMesh*                                 DistanceFieldReplacementMesh;                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	bool                                               bUseMikkTSpace;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecomputeNormals;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecomputeTangents;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveDegenerates;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBuildAdjacencyBuffer;                                    // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFullPrecisionUVs;                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateLightmapUVs;                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPresortedBillboardsParams                  PresortedBillboardsParams;                                // 0x01E3(0x0008) (Edit)
	int                                                MinLightmapResolution;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SrcLightmapIndex;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DstLightmapIndex;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BuildScale;                                               // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     BuildScale3D;                                             // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFieldResolutionScale;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateDistanceFieldAsIfTwoSided;                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshReductionSettings
// 0x0058
struct FMeshReductionSettings
{
	bool                                               bForceRebuild;                                            // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	float                                              PercentTriangles;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDeviation;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WeldingThreshold;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HardAngleThreshold;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                SilhouetteImportance;                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                TextureImportance;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                ShadingImportance;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecalculateNormals;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BaseLODModel;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateUniqueLightmapUVs;                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepSymmetry;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bVisibilityAided;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCullOccluded;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                VisibilityAggressiveness;                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSimplygonMaterialLODSettings               MaterialLODSettings;                                      // 0x01E3(0x0028) (Edit)
	TEnumAsByte<EMeshFeatureImportance>                VertexColorImportance;                                    // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.POV
// 0x001C
struct FPOV
{
	float                                              FOV;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimUpdateRateParameters
// 0x0030
struct FAnimUpdateRateParameters
{
	TArray<float>                                      BaseVisibleDistanceFactorThesholds;                       // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	int                                                UpdateRate;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EvaluationRate;                                           // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInterpolateSkippedFrames;                                // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSkipUpdate;                                              // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSkipEvaluation;                                          // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              TickedPoseOffestTime;                                     // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AdditionalTime;                                           // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                BaseNonRenderedUpdateRate;                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimSlotDesc
// 0x000C
struct FAnimSlotDesc
{
	int                                                NumChannels;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       SlotName;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimSlotInfo
// 0x0018
struct FAnimSlotInfo
{
	TArray<float>                                      ChannelWeights;                                           // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       SlotName;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MTDResult
// 0x0010
struct FMTDResult
{
	float                                              Distance;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FVector                                     Direction;                                                // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.OverlapResult
// 0x0018
struct FOverlapResult
{
	unsigned char                                      bBlockingHit : 1;                                         // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Engine.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	unsigned char                                      UnknownData00 : 2;                                        // 0x0000(0x0001)
	unsigned char                                      bInitialized : 1;                                         // 0x0000(0x0001)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	unsigned char                                      bDistributionEnabled : 1;                                 // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bForceContentExport : 1;                                  // 0x01E3(0x0001) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.LightmassDebugOptions
// 0x0010
struct FLightmassDebugOptions
{
	float                                              ExecutionTimeDivisor;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	unsigned char                                      bDebugMode : 1;                                           // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bStatsEnabled : 1;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGatherBSPSurfacesAcrossComponents : 1;                   // 0x01E3(0x0001) (Edit, BlueprintVisible)
	float                                              CoplanarTolerance;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseImmediateImport : 1;                                  // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseRandomColors : 1;                                     // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bImmediateProcessMappings : 1;                            // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bColorBordersGreen : 1;                                   // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSortMappings : 1;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bColorByExecutionTime : 1;                                // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDumpBinaryFiles : 1;                                     // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDebugMaterials : 1;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPadMappings : 1;                                         // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDebugPaddings : 1;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOnlyCalcDebugTexelMappings : 1;                          // 0x01E3(0x0001) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.BasedPosition
// 0x0038
struct FBasedPosition
{
	struct FVector                                     CachedTransPosition;                                      // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	class AActor*                                      Base;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CachedBaseLocation;                                       // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CachedBaseRotation;                                       // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigidBodyContactInfo
// 0x0030
struct FRigidBodyContactInfo
{
	class UPhysicalMaterial*                           PhysMaterial[0x2];                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FVector                                     ContactPosition;                                          // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ContactNormal;                                            // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              ContactPenetration;                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollisionImpactData
// 0x0028
struct FCollisionImpactData
{
	struct FVector                                     TotalFrictionImpulse;                                     // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	TArray<struct FRigidBodyContactInfo>               ContactInfos;                                             // 0x01E3(0x0010) (ZeroConstructor)
	struct FVector                                     TotalNormalImpulse;                                       // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigidBodyState
// 0x0040
struct FRigidBodyState
{
	unsigned char                                      Flags;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FVector_NetQuantize100                      Position;                                                 // 0x01E3(0x000C)
	struct FQuat                                       Quaternion;                                               // 0x01E3(0x0010) (IsPlainOldData)
	struct FVector_NetQuantize100                      LinVel;                                                   // 0x01E3(0x000C)
	struct FVector_NetQuantize100                      AngVel;                                                   // 0x01E3(0x000C)
};

// ScriptStruct Engine.EditedDocumentInfo
// 0x0018
struct FEditedDocumentInfo
{
	float                                              SavedZoomAmount;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UObject*                                     EditedObject;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SavedViewOffset;                                          // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BPInterfaceDescription
// 0x0018
struct FBPInterfaceDescription
{
	TArray<class UEdGraph*>                            Graphs;                                                   // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class UClass*                                      Interface;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BPVariableDescription
// 0x00E0
struct FBPVariableDescription
{
	class FString                                      DefaultValue;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       VarName;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       VarGuid;                                                  // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FEdGraphPinType                             VarType;                                                  // 0x01E3(0x0050) (Edit)
	class FString                                      FriendlyName;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FText                                       Category;                                                 // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01F3(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	uint64_t                                           PropertyFlags;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RepNotifyFunc;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBPVariableMetaDataEntry>            MetaDataArray;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.MemberReference
// 0x0038
struct FMemberReference
{
	bool                                               bWasDeprecated;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class UObject*                                     MemberParent;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      MemberScope;                                              // 0x01E3(0x0010) (ZeroConstructor)
	struct FName                                       MemberName;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MemberGuid;                                               // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bSelfContext;                                             // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SceneComponentCachedVelocityAggregateTickFunction
// 0x0010 (0x0058 - 0x0048)
struct FSceneComponentCachedVelocityAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.LatentActionManager
// 0x00F0
struct FLatentActionManager
{
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0000(0x00F0) MISSED OFFSET
};

// ScriptStruct Engine.EndClothSimulationFunction
// 0x0008 (0x0050 - 0x0048)
struct FEndClothSimulationFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StartClothSimulationFunction
// 0x0008 (0x0050 - 0x0048)
struct FStartClothSimulationFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.EndPhysicsTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StartPhysicsTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FStartPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LevelViewportInfo
// 0x0020
struct FLevelViewportInfo
{
	bool                                               CamUpdated;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FVector                                     CamPosition;                                              // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CamRotation;                                              // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              CamOrthoZoom;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LevelSimplificationDetails
// 0x00AC
struct FLevelSimplificationDetails
{
	bool                                               bGenerateLandscapeSpecularMap;                            // 0x0000(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	bool                                               bCreatePackagePerAsset;                                   // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProxyPixelSize;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMaterialSimplificationSettings             StaticMeshMaterial;                                       // 0x01E3(0x0044) (Edit)
	bool                                               bOverrideLandscapeExportLOD;                              // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                LandscapeExportLOD;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMaterialSimplificationSettings             LandscapeMaterial;                                        // 0x01E3(0x0044) (Edit)
	bool                                               bRemoveDownwardFacingTriangles;                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CullAngleThreshold;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBakeFoliageToLandscape;                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBakeGrassToLandscape;                                    // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateMeshNormalMap;                                   // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateMeshMetallicMap;                                 // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateMeshRoughnessMap;                                // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateMeshSpecularMap;                                 // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeNormalMap;                              // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeMetallicMap;                            // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeRoughnessMap;                           // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct Engine.StreamableTextureInstance
// 0x0014
struct FStreamableTextureInstance
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.DynamicTextureInstance
// 0x0014 (0x0028 - 0x0014)
struct FDynamicTextureInstance : public FStreamableTextureInstance
{
	float                                              OriginalRadius;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UTexture2D*                                  Texture;                                                  // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bAttached;                                                // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.IntegralKey
// 0x0008
struct FIntegralKey
{
	int                                                Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              Time;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.IntegralCurve
// 0x0018 (0x0070 - 0x0058)
struct FIntegralCurve : public FIndexedCurve
{
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	TArray<struct FIntegralKey>                        Keys;                                                     // 0x01E3(0x0010) (Edit, ZeroConstructor)
	int                                                DefaultValue;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDefaultValueBeforeFirstKey;                           // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NameCurveKey
// 0x000C
struct FNameCurveKey
{
	struct FName                                       Value;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	float                                              Time;                                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NameCurve
// 0x0010 (0x0068 - 0x0058)
struct FNameCurve : public FIndexedCurve
{
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	TArray<struct FNameCurveKey>                       Keys;                                                     // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.MergedCollisionActorsSimplification
// 0x000C
struct FMergedCollisionActorsSimplification
{
	int                                                MinNumberOfComponentsToMerge;                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FCollisionMergingSettings                   MergeCollisionSettings;                                   // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxBoundRadius;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.HierarchicalSimplification
// 0x00B8
struct FHierarchicalSimplification
{
	struct FMeshMergingSettings                        MergeSetting;                                             // 0x0000(0x0030) (Edit)
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	bool                                               bSimplifyMesh;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DrawDistance;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DesiredBoundRadius;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DesiredFillingPercentage;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinNumberOfActorsToBuild;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMeshProxySettings                          ProxySetting;                                             // 0x01E3(0x0070) (Edit)
};

// ScriptStruct Engine.NavGraphEdge
// 0x0018
struct FNavGraphEdge
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.PreviewAttachedObjectPair
// 0x0030
struct FPreviewAttachedObjectPair
{
	struct FName                                       AttachedTo;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	TAssetPtr<class UObject>                           AttachedObject;                                           // 0x01E3(0x0020)
	class UObject*                                     Object;                                                   // 0x01E3(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct Engine.PreviewAssetAttachContainer
// 0x0010
struct FPreviewAssetAttachContainer
{
	TArray<struct FPreviewAttachedObjectPair>          AttachedObjects;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.SmartNameMapping
// 0x0068
struct FSmartNameMapping
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct Engine.NameMapping
// 0x0010
struct FNameMapping
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FName                                       NodeName;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigConfiguration
// 0x0018
struct FRigConfiguration
{
	TArray<struct FNameMapping>                        BoneMappingTable;                                         // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class URig*                                        Rig;                                                      // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BoneReductionSetting
// 0x0010
struct FBoneReductionSetting
{
	TArray<struct FName>                               BonesToRemove;                                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ReferencePose
// 0x0018
struct FReferencePose
{
	TArray<struct FTransform>                          ReferencePose;                                            // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       PoseName;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TriIndices
// 0x000C
struct FTriIndices
{
	int                                                v2;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	int                                                v0;                                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                v1;                                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TriMeshCollisionData
// 0x0038
struct FTriMeshCollisionData
{
	unsigned char                                      bFlipNormals : 1;                                         // 0x0000(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	TArray<struct FVector>                             Vertices;                                                 // 0x01E3(0x0010) (ZeroConstructor, Transient)
	TArray<struct FTriIndices>                         Indices;                                                  // 0x01E3(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Engine.MorphTargetMap
// 0x0010
struct FMorphTargetMap
{
	class UMorphTarget*                                MorphTarget;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BoneMirrorExport
// 0x0014
struct FBoneMirrorExport
{
	TEnumAsByte<EAxis>                                 BoneFlipAxis;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceBoneName;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationGroupReference
// 0x000C
struct FAnimationGroupReference
{
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FName                                       GroupName;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimExtractContext
// 0x0008
struct FAnimExtractContext
{
	float                                              CurrentTime;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	bool                                               bExtractRootMotion;                                       // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SpriteCategoryInfo
// 0x0078
struct FSpriteCategoryInfo
{
	struct FText                                       Description;                                              // 0x0000(0x0018)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FName                                       Category;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x01E3(0x0018)
	unsigned char                                      UnknownData02[0x20];                                      // 0x01EB(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct Engine.AnimNotifyTrack
// 0x0028
struct FAnimNotifyTrack
{
	struct FLinearColor                                TrackColor;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       TrackName;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VectorCurve
// 0x0168 (0x0180 - 0x0018)
struct FVectorCurve : public FAnimCurveBase
{
	unsigned char                                      UnknownData00[0x1CB];                                     // 0x0018(0x01CB) MISSED OFFSET
	struct FRichCurve                                  FloatCurves[0x3];                                         // 0x01E3(0x0078)
};

// ScriptStruct Engine.TransformCurve
// 0x0480 (0x0498 - 0x0018)
struct FTransformCurve : public FAnimCurveBase
{
	unsigned char                                      UnknownData00[0x1CB];                                     // 0x0018(0x01CB) MISSED OFFSET
	struct FVectorCurve                                TranslationCurve;                                         // 0x01E3(0x0180)
	struct FVectorCurve                                RotationCurve;                                            // 0x01E3(0x0180)
	struct FVectorCurve                                ScaleCurve;                                               // 0x01E3(0x0180)
	unsigned char                                      UnknownData01[0x135];                                     // 0x0363(0x0135) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponentPreClothTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FSkeletalMeshComponentPreClothTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.WaterSimPlane
// 0x0030
struct FWaterSimPlane
{
	float                                              FFTBasePlaneHeight;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UClass*                                      WaterId;                                                  // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WaterOwner;                                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FPlane                                      NonFFTPlane;                                              // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFFT;                                                  // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BatchedPoint
// 0x0028
struct FBatchedPoint
{
	unsigned char                                      DepthPriority;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              PointSize;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RemainingLifeTime;                                        // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BatchedLine
// 0x0034
struct FBatchedLine
{
	unsigned char                                      DepthPriority;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FVector                                     Start;                                                    // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RemainingLifeTime;                                        // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TexturePlatformData
// 0x0028
struct FTexturePlatformData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.TextureSource
// 0x0080
struct FTextureSource
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct Engine.ClusterNode
// 0x0028
struct FClusterNode
{
	int                                                LastInstance;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FVector                                     BoundMin;                                                 // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                FirstChild;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoundMax;                                                 // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                LastChild;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FirstInstance;                                            // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ParticleSystemAggregateTickFunction
// 0x0030 (0x0078 - 0x0048)
struct FParticleSystemAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	class UParticleSystemAggregateTickSettings*        Settings;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RootMotionExtractionStep
// 0x0010
struct FRootMotionExtractionStep
{
	float                                              EndPosition;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UAnimSequence*                               AnimSequence;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              StartPosition;                                            // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AlphaBlend
// 0x0030
struct FAlphaBlend
{
	float                                              BlendedValue;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TEnumAsByte<EAlphaBlendOption>                     BlendOption;                                              // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BeginValue;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DesiredValue;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CustomCurve;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AlphaLerp;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AlphaBlend;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AlphaTarget;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlendTimeRemaining;                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationTransitionRule
// 0x0010
struct FAnimationTransitionRule
{
	int                                                TransitionIndex;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       RuleToExecute;                                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               TransitionReturnVal;                                      // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationState
// 0x0020 (0x0028 - 0x0008)
struct FAnimationState : public FAnimationStateBase
{
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	TArray<struct FAnimationTransitionRule>            Transitions;                                              // 0x01E3(0x0010) (ZeroConstructor)
	int                                                StateRootNodeIndex;                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartNotify;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndNotify;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FullyBlendedNotify;                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SlotEvaluationPose
// 0x0048
struct FSlotEvaluationPose
{
	float                                              Weight;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TEnumAsByte<EAdditiveAnimationType>                AdditiveType;                                             // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PerBoneBlendWeight
// 0x0008
struct FPerBoneBlendWeight
{
	float                                              BlendWeight;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	int                                                SourceIndex;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PerBoneBlendWeights
// 0x0010
struct FPerBoneBlendWeights
{
	TArray<struct FPerBoneBlendWeight>                 BoneBlendWeights;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.A2Pose
// 0x0010
struct FA2Pose
{
	TArray<struct FTransform>                          Bones;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.A2CSPose
// 0x0018 (0x0028 - 0x0010)
struct FA2CSPose : public FA2Pose
{
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<unsigned char>                              ComponentSpaceFlags;                                      // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimMontageInstance
// 0x00A0
struct FAnimMontageInstance
{
	float                                              PlayRate;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UAnimMontage*                                Montage;                                                  // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              DesiredWeight;                                            // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DefaultBlendTimeMultiplier;                               // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<int>                                        NextSections;                                             // 0x01E3(0x0010) (ZeroConstructor)
	TArray<int>                                        PrevSections;                                             // 0x01E3(0x0010) (ZeroConstructor)
	bool                                               bPlaying;                                                 // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimNotifyEvent>                    ActiveStateBranchingPoints;                               // 0x01E3(0x0010) (ZeroConstructor, Transient)
	float                                              Position;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CompressedTrack
// 0x0038
struct FCompressedTrack
{
	float                                              Ranges[0x3];                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	TArray<unsigned char>                              ByteStream;                                               // 0x01E3(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x01E3(0x0010) (ZeroConstructor)
	float                                              Mins[0x3];                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveTrack
// 0x0018
struct FCurveTrack
{
	TArray<float>                                      CurveWeights;                                             // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       CurveName;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RawAnimSequenceTrack
// 0x0030
struct FRawAnimSequenceTrack
{
	TArray<struct FVector>                             ScaleKeys;                                                // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<struct FVector>                             PosKeys;                                                  // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FQuat>                               RotKeys;                                                  // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimSequenceTrackContainer
// 0x0020
struct FAnimSequenceTrackContainer
{
	TArray<struct FName>                               TrackNames;                                               // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<struct FRawAnimSequenceTrack>               AnimationTracks;                                          // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.GridBlendSample
// 0x001C
struct FGridBlendSample
{
	float                                              BlendWeight;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FEditorElement                              GridElement;                                              // 0x01E3(0x0018)
};

// ScriptStruct Engine.AssetImportInfo
// 0x0001
struct FAssetImportInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// 0x0018
struct FAnimParentNodeAssetOverride
{
	struct FGuid                                       ParentNodeGuid;                                           // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class UAnimationAsset*                             NewAsset;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DataTableCategoryHandle
// 0x0018
struct FDataTableCategoryHandle
{
	struct FName                                       RowContents;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UDataTable*                                  DataTable;                                                // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ColumnName;                                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DataTableRowHandle
// 0x0010
struct FDataTableRowHandle
{
	struct FName                                       RowName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UDataTable*                                  DataTable;                                                // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintDebugData
// 0x0001
struct FBlueprintDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.PointerToUberGraphFrame
// 0x0008
struct FPointerToUberGraphFrame
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// 0x0140
struct FDebuggingInfoForSingleFunction
{
	unsigned char                                      UnknownData00[0x140];                                     // 0x0000(0x0140) MISSED OFFSET
};

// ScriptStruct Engine.NodeToCodeAssociation
// 0x0014
struct FNodeToCodeAssociation
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.AnimBlueprintDebugData
// 0x0001
struct FAnimBlueprintDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.AnimationFrameSnapshot
// 0x0001
struct FAnimationFrameSnapshot
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.StateMachineDebugData
// 0x00B0
struct FStateMachineDebugData
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct Engine.WrappedStringElement
// 0x0018
struct FWrappedStringElement
{
	struct FVector2D                                   LineExtent;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class FString                                      Value;                                                    // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.TextSizingParameters
// 0x0028
struct FTextSizingParameters
{
	struct FVector2D                                   SpacingAdjust;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	float                                              DrawX;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DrawY;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DrawXL;                                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DrawYL;                                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scaling;                                                  // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFont*                                       DrawFont;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CanvasIcon
// 0x0018
struct FCanvasIcon
{
	float                                              VL;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UTexture*                                    Texture;                                                  // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              U;                                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              V;                                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UL;                                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AutoCompleteNode
// 0x0028
struct FAutoCompleteNode
{
	TArray<int>                                        AutoCompleteListIndices;                                  // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	int                                                IndexChar;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// 0x01E8
struct FRuntimeCurveLinearColor
{
	class UCurveLinearColor*                           ExternalCurve;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FRichCurve                                  ColorCurves[0x4];                                         // 0x01E3(0x0078)
};

// ScriptStruct Engine.CurveTableRowHandle
// 0x0010
struct FCurveTableRowHandle
{
	struct FName                                       RowName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UCurveTable*                                 CurveTable;                                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GraphReference
// 0x0020
struct FGraphReference
{
	struct FGuid                                       GraphGuid;                                                // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class UEdGraph*                                    MacroGraph;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlueprint*                                  GraphBlueprint;                                           // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EdGraphSchemaAction
// 0x00C8
struct FEdGraphSchemaAction
{
	int                                                SectionID;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FText                                       MenuDescription;                                          // 0x01E3(0x0018)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0004(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class FString                                      TooltipDescription;                                       // 0x01E3(0x0010) (ZeroConstructor)
	struct FText                                       Category;                                                 // 0x01E3(0x0018)
	unsigned char                                      UnknownData02[0x20];                                      // 0x01F3(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       Keywords;                                                 // 0x01E3(0x0018)
	unsigned char                                      UnknownData03[0x20];                                      // 0x021B(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                Grouping;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// 0x0008 (0x00D0 - 0x00C8)
struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
{
	unsigned char                                      UnknownData00[0x11B];                                     // 0x00C8(0x011B) MISSED OFFSET
	class UEdGraphNode*                                NodeTemplate;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ScreenMessageString
// 0x0028
struct FScreenMessageString
{
	float                                              CurrentTimeDisplayed;                                     // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	uint64_t                                           Key;                                                      // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class FString                                      ScreenMessage;                                            // 0x01E3(0x0010) (ZeroConstructor, Transient)
	struct FColor                                      DisplayColor;                                             // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeToDisplay;                                            // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// 0x0038
struct FFullyLoadedPackagesInfo
{
	TArray<class UObject*>                             LoadedObjects;                                            // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TEnumAsByte<EFullyLoadPackageType>                 FullyLoadType;                                            // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	class FString                                      Tag;                                                      // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FName>                               PackagesToLoad;                                           // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.LevelStreamingStatus
// 0x0010
struct FLevelStreamingStatus
{
	uint32_t                                           LODIndex;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       PackageName;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShouldBeLoaded : 1;                                      // 0x01E3(0x0001)
	unsigned char                                      bShouldBeVisible : 1;                                     // 0x01E3(0x0001)
};

// ScriptStruct Engine.NamedNetDriver
// 0x0010
struct FNamedNetDriver
{
	class UNetDriver*                                  NetDriver;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.WorldContext
// 0x0298
struct FWorldContext
{
	TArray<struct FNamedNetDriver>                     ActiveNetDrivers;                                         // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FURL                                        LastURL;                                                  // 0x01E3(0x0070)
	struct FURL                                        LastRemoteURL;                                            // 0x01E3(0x0070)
	class UPendingNetGame*                             PendingNetGame;                                           // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FFullyLoadedPackagesInfo>            PackagesToFullyLoad;                                      // 0x01E3(0x0010) (ZeroConstructor)
	TArray<class ULevel*>                              LoadedLevelsForPendingMapChange;                          // 0x01E3(0x0010) (ZeroConstructor)
	TArray<class UObjectReferencer*>                   ObjectReferencers;                                        // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FLevelStreamingStatus>               PendingLevelStreamingStatusUpdates;                       // 0x01E3(0x0010) (ZeroConstructor)
	class UGameViewportClient*                         GameViewport;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGameInstance*                               OwningGameInstance;                                       // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xAD];                                      // 0x01EB(0x00AD) MISSED OFFSET
};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// 0x0010
struct FActiveHapticFeedbackEffect
{
	class UHapticFeedbackEffect*                       HapticEffect;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PoseLink
// 0x0000 (0x0018 - 0x0018)
struct FPoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.AnimNode_HIKBase
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_HIKBase : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FComponentSpacePoseLink                     HIKSettings;                                              // 0x01E3(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.HIKElements
// 0x0058
struct FHIKElements
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct Engine.InterpEdSelKey
// 0x0018
struct FInterpEdSelKey
{
	float                                              UnsnappedPosition;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UInterpGroup*                                Group;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInterpTrack*                                Track;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                KeyIndex;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CameraPreviewInfo
// 0x0030
struct FCameraPreviewInfo
{
	class APawn*                                       PawnInst;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UClass*                                      PawnClass;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AnimSeq;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x01E3(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x01E3(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.SubTrackGroup
// 0x0028
struct FSubTrackGroup
{
	unsigned char                                      UnknownData00 : 1;                                        // 0x0000(0x0001)
	unsigned char                                      bIsSelected : 1;                                          // 0x0000(0x0001) (Transient)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class FString                                      GroupName;                                                // 0x01E3(0x0010) (ZeroConstructor)
	TArray<int>                                        TrackIndices;                                             // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      bIsCollapsed : 1;                                         // 0x01E3(0x0001)
};

// ScriptStruct Engine.SupportedSubTrackInfo
// 0x0020
struct FSupportedSubTrackInfo
{
	int                                                GroupIndex;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UClass*                                      SupportedClass;                                           // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      SubTrackName;                                             // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ClientReceiveData
// 0x0040
struct FClientReceiveData
{
	class UObject*                                     OptionalObject;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class APlayerController*                           LocalPC;                                                  // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MessageType;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MessageIndex;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      MessageString;                                            // 0x01E3(0x0010) (ZeroConstructor)
	class APlayerState*                                RelatedPlayerState_2;                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_3;                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ParticleCurvePair
// 0x0018
struct FParticleCurvePair
{
	class UObject*                                     CurveObject;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class FString                                      CurveName;                                                // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BeamTargetData
// 0x000C
struct FBeamTargetData
{
	float                                              TargetPercentage;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       TargetName;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ParticleSystemReplayFrame
// 0x0010
struct FParticleSystemReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// 0x0010
struct FParticleEmitterReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StreamedAudioPlatformData
// 0x0020
struct FStreamedAudioPlatformData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.SoundClassEditorData
// 0x0008
struct FSoundClassEditorData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// 0x0028
struct FAssetEditorOrbitCameraPosition
{
	struct FRotator                                    CamOrbitRotation;                                         // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	bool                                               bIsSet;                                                   // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CamOrbitPoint;                                            // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CamOrbitZoom;                                             // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshSectionInfoMap
// 0x0050
struct FMeshSectionInfoMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.MeshSectionInfo
// 0x0008
struct FMeshSectionInfo
{
	bool                                               bCastShadow;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	int                                                MaterialIndex;                                            // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticMeshSourceModel
// 0x00F8
struct FStaticMeshSourceModel
{
	float                                              MaxDeviation;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FMeshBuildSettings                          BuildSettings;                                            // 0x01E3(0x0040) (Edit)
	struct FMeshReductionSettings                      ReductionSettings;                                        // 0x01E3(0x0058) (Edit)
	struct FSimplygonRemeshingSettings                 RemeshingSettings;                                        // 0x01E3(0x0050) (Edit)
	int                                                OverriddenLightMapRes;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistance;                                              // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              ScreenSize;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// 0x001C
struct FStaticMeshOptimizationSettings
{
	unsigned char                                      ShadingImportance;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	TEnumAsByte<EOptimizationType>                     ReductionMethod;                                          // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              NumOfTrianglesPercentage;                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxDeviationPercentage;                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WeldingThreshold;                                         // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRecalcNormals;                                           // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              NormalsThreshold;                                         // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SilhouetteImportance;                                     // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TextureImportance;                                        // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_ApplyAdditive
// 0x0040 (0x0070 - 0x0030)
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FPoseLink                                   Base;                                                     // 0x01E3(0x0018) (Edit, BlueprintVisible)
	struct FPoseLink                                   Additive;                                                 // 0x01E3(0x0018) (Edit, BlueprintVisible)
	float                                              Alpha;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x01E3(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// 0x0010 (0x0040 - 0x0030)
struct FAnimNode_AssetPlayerBase : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	bool                                               bIgnoreForRelevancyTest;                                  // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendWeight;                                              // 0x01E3(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              InternalTimeAccumulator;                                  // 0x01E3(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_BlendListBase
// 0x0078 (0x00A8 - 0x0030)
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	TArray<struct FPoseLink>                           BlendPose;                                                // 0x01E3(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<float>                                      BlendTime;                                                // 0x01E3(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TEnumAsByte<EAlphaBlendOption>                     BlendType;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CustomBlendCurve;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAlphaBlend>                         Blends;                                                   // 0x01E3(0x0010) (ZeroConstructor)
	TArray<float>                                      BlendWeights;                                             // 0x01E3(0x0010) (ZeroConstructor)
	TArray<float>                                      RemainingBlendTimes;                                      // 0x01E3(0x0010) (ZeroConstructor)
	int                                                LastActiveChildIndex;                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_BlendListByBool
// 0x0008 (0x00B0 - 0x00A8)
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
	unsigned char                                      UnknownData00[0x13B];                                     // 0x00A8(0x013B) MISSED OFFSET
	bool                                               bActiveValue;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_BlendListByEnum
// 0x0018 (0x00C0 - 0x00A8)
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
	unsigned char                                      UnknownData00[0x13B];                                     // 0x00A8(0x013B) MISSED OFFSET
	TArray<int>                                        EnumToPoseIndex;                                          // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      ActiveEnumValue;                                          // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_BlendListByInt
// 0x0008 (0x00B0 - 0x00A8)
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
	unsigned char                                      UnknownData00[0x13B];                                     // 0x00A8(0x013B) MISSED OFFSET
	int                                                ActiveChildIndex;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_BlendListByObject
// 0x0018 (0x00C0 - 0x00A8)
struct FAnimNode_BlendListByObject : public FAnimNode_BlendListBase
{
	unsigned char                                      UnknownData00[0x13B];                                     // 0x00A8(0x013B) MISSED OFFSET
	class UClass*                                      ActiveTypeValue;                                          // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ObjectToPoseIndex;                                        // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.AnimNode_BlendSpacePlayer
// 0x00C8 (0x0108 - 0x0040)
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	float                                              X;                                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             BlendSpace;                                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GroupIndex;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FBlendFilter                                BlendFilter;                                              // 0x01E3(0x0090)
	TArray<struct FBlendSampleData>                    BlendSampleDataCache;                                     // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimNode_BlendSpaceEvaluator
// 0x0008 (0x0110 - 0x0108)
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
	unsigned char                                      UnknownData00[0xDB];                                      // 0x0108(0x00DB) MISSED OFFSET
	float                                              NormalizedTime;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_HIKFloorContact
// 0x0078 (0x00C0 - 0x0048)
struct FAnimNode_HIKFloorContact : public FAnimNode_HIKBase
{
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	bool                                               FeetContact;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HandsContact;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FingersContact;                                           // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ToesContact;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKFeetContactType>                   FeetContactType;                                          // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKHandsContactType>                  HandsContactType;                                         // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceUp;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceDown;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NbRays;                                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootRadius;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Smoothing;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FCollisionResponseContainer                 OverrideRaycastCollisionResponse;                         // 0x01E3(0x0020) (Edit, BlueprintVisible)
	float                                              FeetHeight;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeetBack;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeetMiddle;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeetFront;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeetInSide;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeetOutSide;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HandsHeight;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HandsBack;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HandsMiddle;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HandsFront;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HandsInSide;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HandsOutSide;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_HIKLookAt
// 0x0040 (0x0088 - 0x0048)
struct FAnimNode_HIKLookAt : public FAnimNode_HIKBase
{
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	float                                              Alpha;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetPosition;                                           // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChestContribution;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               XYOnly;                                                   // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKLookAtLimits>                      Limits;                                                   // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LimitsHorizontalAngle;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LimitsVerticalAngle;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActivationSpeed;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetPositionSpeed;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKLookAtInterpolation>               InterpolationMode;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_HIKOffset
// 0x0018 (0x0060 - 0x0048)
struct FAnimNode_HIKOffset : public FAnimNode_HIKBase
{
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	float                                              Alpha;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReachT;                                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKEffector>                          Effector;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKEffectorSpace>                     EffectorSpace;                                            // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_HIKPin
// 0x0010 (0x0058 - 0x0048)
struct FAnimNode_HIKPin : public FAnimNode_HIKBase
{
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	float                                              Alpha;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PinTStrength;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PinRStrength;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKEffector>                          Effector;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_HIKPlant
// 0x0018 (0x0060 - 0x0048)
struct FAnimNode_HIKPlant : public FAnimNode_HIKBase
{
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	float                                              Alpha;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HipsLevel;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProjectionDistance;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PullFeetInsteadOfAnkles;                                  // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsQuadruped;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChestLevel;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PullHandsInsteadOfWrists;                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_HIKPull
// 0x0008 (0x0050 - 0x0048)
struct FAnimNode_HIKPull : public FAnimNode_HIKBase
{
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	float                                              Alpha;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKEffector>                          Effector;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_HIKReach
// 0x0038 (0x0080 - 0x0048)
struct FAnimNode_HIKReach : public FAnimNode_HIKBase
{
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	float                                              Alpha;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReachT;                                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReachR;                                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Orientation;                                              // 0x01E3(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EHIKEffector>                          Effector;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKEffectorSpace>                     EffectorSpace;                                            // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParentBone;                                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_HIKReachRotator
// 0x0028 (0x0070 - 0x0048)
struct FAnimNode_HIKReachRotator : public FAnimNode_HIKBase
{
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	float                                              Alpha;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReachT;                                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReachR;                                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKEffector>                          Effector;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKEffectorSpace>                     EffectorSpace;                                            // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_HIKRelativePlant
// 0x0050 (0x0098 - 0x0048)
struct FAnimNode_HIKRelativePlant : public FAnimNode_HIKBase
{
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	float                                              Alpha;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Depth;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HipsRotationFactor;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChestRotationFactor;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceUp;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceDown;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NbRays;                                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootRadius;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FCollisionResponseContainer                 OverrideRaycastCollisionResponse;                         // 0x01E3(0x0020) (Edit, BlueprintVisible)
	float                                              DeltaTime;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Smoothing;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_HIKResist
// 0x0008 (0x0050 - 0x0048)
struct FAnimNode_HIKResist : public FAnimNode_HIKBase
{
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	float                                              Alpha;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKEffector>                          Effector;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_HIKSetProperty
// 0x0008 (0x0050 - 0x0048)
struct FAnimNode_HIKSetProperty : public FAnimNode_HIKBase
{
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	TEnumAsByte<EHIKProperty>                          Property;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_HIKSolve
// 0x0038 (0x0080 - 0x0048)
struct FAnimNode_HIKSolve : public FAnimNode_HIKBase
{
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	float                                              Alpha;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FComponentSpacePoseLink                     InputFKPose;                                              // 0x01E3(0x0018) (Edit, BlueprintVisible)
	bool                                               enablePullEngine;                                         // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               enableBodyPartSolving;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               enableLODSolver;                                          // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               enableLegsSNS;                                            // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               enableArmsSNS;                                            // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               boneLengthFromInputPose;                                  // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveLeftShoulder;                                // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveRightShoulder;                               // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveLeftArm;                                     // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveRightArm;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveLeftLeg;                                     // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveRightLeg;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveLeftHand;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveRightHand;                                   // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveLeftFoot;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveRightFoot;                                   // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveHead;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveSpine;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               checkOutputPoseContainsNaNs;                              // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_HIKTest
// 0x0010 (0x0058 - 0x0048)
struct FAnimNode_HIKTest : public FAnimNode_HIKBase
{
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	float                                              Alpha;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Param;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_LayeredBoneBlend
// 0x0070 (0x00A0 - 0x0030)
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FPoseLink                                   BasePose;                                                 // 0x01E3(0x0018) (Edit, BlueprintVisible)
	TArray<struct FPoseLink>                           BlendPoses;                                               // 0x01E3(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<struct FInputBlendPose>                     LayerSetup;                                               // 0x01E3(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<float>                                      BlendWeights;                                             // 0x01E3(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	bool                                               bMeshSpaceRotationBlend;                                  // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECurveBlendOption>                     CurveBlendOption;                                         // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_MeshSpaceRefPose
// 0x0000 (0x0030 - 0x0030)
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{

};

// ScriptStruct Engine.AnimNode_RefPose
// 0x0008 (0x0038 - 0x0030)
struct FAnimNode_RefPose : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	TEnumAsByte<ERefPoseType>                          RefPoseType;                                              // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_Root
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_Root : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FPoseLink                                   Result;                                                   // 0x01E3(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.AnimNode_RotateRootBone
// 0x0030 (0x0060 - 0x0030)
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FPoseLink                                   BasePose;                                                 // 0x01E3(0x0018) (Edit, BlueprintVisible)
	float                                              Pitch;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    MeshToComponent;                                          // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_RotationOffsetBlendSpace
// 0x0018 (0x0120 - 0x0108)
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
	unsigned char                                      UnknownData00[0xDB];                                      // 0x0108(0x00DB) MISSED OFFSET
	struct FPoseLink                                   BasePose;                                                 // 0x01E3(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// 0x0060 (0x0090 - 0x0030)
struct FAnimNode_SaveCachedPose : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	int16_t                                            LastInitializedContextCounter;                            // 0x01E3(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	int16_t                                            LastCacheBonesContextCounter;                             // 0x01E3(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	int16_t                                            LastUpdatedContextCounter;                                // 0x01E3(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	int16_t                                            LastEvaluatedContextCounter;                              // 0x01E3(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	struct FPoseLink                                   Pose;                                                     // 0x01E3(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.AnimNode_SequenceEvaluator
// 0x0010 (0x0050 - 0x0040)
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	class UAnimSequenceBase*                           Sequence;                                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplicitTime;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// 0x0018 (0x0058 - 0x0040)
struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase
{
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	class UAnimSequenceBase*                           Sequence;                                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoopAnimation;                                           // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GroupIndex;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_Slot
// 0x0030 (0x0060 - 0x0030)
struct FAnimNode_Slot : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FPoseLink                                   Source;                                                   // 0x01E3(0x0018) (Edit, BlueprintVisible)
	struct FName                                       SlotName;                                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int16_t                                            LastSlotNodeInitializationCounter;                        // 0x01E3(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_StateMachine
// 0x0078 (0x00A8 - 0x0030)
struct FAnimNode_StateMachine : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	int                                                StateMachineIndexInClass;                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxTransitionsPerFrame;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CurrentState;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationPotentialTransition
// 0x0010
struct FAnimationPotentialTransition
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// 0x0090
struct FAnimationActiveTransitionEntry
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// 0x0050 (0x0080 - 0x0030)
struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	TEnumAsByte<EEvaluatorDataSource>                  DataSource;                                               // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEvaluatorMode>                        EvaluatorMode;                                            // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FramesToCachePose;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CacheFramesRemaining;                                     // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_TransitionResult
// 0x0010 (0x0040 - 0x0030)
struct FAnimNode_TransitionResult : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	bool                                               bCanEnterTransition;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationNode_TwoWayBlend
// 0x0040 (0x0070 - 0x0030)
struct FAnimationNode_TwoWayBlend : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FPoseLink                                   A;                                                        // 0x01E3(0x0018) (Edit, BlueprintVisible)
	struct FPoseLink                                   B;                                                        // 0x01E3(0x0018) (Edit, BlueprintVisible)
	float                                              Alpha;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x01E3(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_UseCachedPose : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FPoseLink                                   LinkToCachingNode;                                        // 0x01E3(0x0018)
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FPoseLink                                   LocalPose;                                                // 0x01E3(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FComponentSpacePoseLink                     ComponentPose;                                            // 0x01E3(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.DummySpacerCameraTypes
// 0x0001
struct FDummySpacerCameraTypes
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.NetTimeStampCalculator
// 0x0068
struct FNetTimeStampCalculator
{
	uint16_t                                           PackedTimeStamp;                                          // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x66];                                      // 0x0002(0x0066) MISSED OFFSET
};

// ScriptStruct Engine.StreamableManager
// 0x00A8
struct FStreamableManager
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct Engine.ServerMigrationTelemetryFailedData
// 0x0010
struct FServerMigrationTelemetryFailedData
{
	class FString                                      Stage;                                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Engine.ServerMigrationTelemetryActorData
// 0x0028
struct FServerMigrationTelemetryActorData
{
	int                                                Count;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TAssetPtr<class UClass>                            ActorClass;                                               // 0x01E3(0x0020) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Engine.ServerMigrationTelemetrySucceededData
// 0x0020
struct FServerMigrationTelemetrySucceededData
{
	int                                                ActorSerialisationBytes;                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TArray<struct FServerMigrationTelemetryActorData>  ActorDetails;                                             // 0x01E3(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              TotalTime;                                                // 0x01E3(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumClients;                                               // 0x01E3(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumActorsMigrated;                                        // 0x01E3(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ReplicatedPhysicsState
// 0x0050
struct FReplicatedPhysicsState
{
	bool                                               Initialized;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FRepMovement                                ReplicatedMovement;                                       // 0x01E3(0x0034)
	class UPrimitiveComponent*                         MovementBase;                                             // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             AttachParent;                                             // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Attached;                                                 // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RepTransform
// 0x0018
struct FRepTransform
{
	struct FRotator                                    Rotation;                                                 // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x01E3(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.ReplicatedTransformState
// 0x0030
struct FReplicatedTransformState
{
	bool                                               Attached;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FRepTransform                               ReplicatedMovement;                                       // 0x01E3(0x0018)
	class UPrimitiveComponent*                         MovementBase;                                             // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             AttachParent;                                             // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Engine.SkelMeshMergeMorphTarget
// 0x000C
struct FSkelMeshMergeMorphTarget
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
