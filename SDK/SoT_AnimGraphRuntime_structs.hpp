#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// 0x0028 (0x0058 - 0x0030)
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FComponentSpacePoseLink                     ComponentPose;                                            // 0x01E3(0x0018) (Edit, BlueprintVisible)
	float                                              Alpha;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x01E3(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// 0x0048 (0x00A0 - 0x0058)
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	struct FBoneReference                              SourceBone;                                               // 0x01E3(0x000C) (Edit)
	TEnumAsByte<EComponentType>                        SourceComponent;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DrivingCurve;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRange;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeMin;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeMax;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMin;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMax;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              TargetBone;                                               // 0x01E3(0x000C) (Edit)
	TEnumAsByte<EComponentType>                        TargetComponent;                                          // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      bAffectTargetTranslationX : 1;                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleZ : 1;                                  // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAffectTargetTranslationY : 1;                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAffectTargetTranslationZ : 1;                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationX : 1;                               // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationY : 1;                               // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationZ : 1;                               // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleX : 1;                                  // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleY : 1;                                  // 0x01E3(0x0001) (Edit)
	TEnumAsByte<EDrivenBoneModificationMode>           ModificationMode;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// 0x0020 (0x0078 - 0x0058)
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	struct FBoneReference                              SourceBone;                                               // 0x01E3(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              TargetBone;                                               // 0x01E3(0x000C) (Edit, BlueprintVisible)
	bool                                               bCopyTranslation;                                         // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyRotation;                                            // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyScale;                                               // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// 0x0078 (0x00D0 - 0x0058)
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	struct FTransform                                  EffectorTransform;                                        // 0x01E3(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     EffectorTransformSpace;                                   // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              EffectorTransformBone;                                    // 0x01E3(0x000C) (Edit, BlueprintVisible)
	TEnumAsByte<EBoneRotationSource>                   EffectorRotationSource;                                   // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              TipBone;                                                  // 0x01E3(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              RootBone;                                                 // 0x01E3(0x000C) (Edit, BlueprintVisible)
	float                                              Precision;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebugDraw;                                         // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// 0x0048 (0x00A0 - 0x0058)
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	struct FBoneReference                              RightHandFK;                                              // 0x01E3(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftHandFK;                                               // 0x01E3(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              RightHandIK;                                              // 0x01E3(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftHandIK;                                               // 0x01E3(0x000C) (Edit, BlueprintVisible)
	TArray<struct FBoneReference>                      IKBonesToMove;                                            // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              HandFKWeight;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// 0x0068 (0x00C0 - 0x0058)
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	struct FBoneReference                              BoneToModify;                                             // 0x01E3(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              LookAtBone;                                               // 0x01E3(0x000C) (Edit, BlueprintVisible)
	struct FVector                                     LookAtLocation;                                           // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxisOption>                           LookAtAxis;                                               // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLookUpAxis;                                           // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxisOption>                           LookUpAxis;                                               // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtClamp;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInterpolationBlend>                   InterpolationType;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTriggerThreashold;                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebug;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// 0x0038 (0x0090 - 0x0058)
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	struct FBoneReference                              BoneToModify;                                             // 0x01E3(0x000C) (Edit, BlueprintVisible)
	struct FVector                                     Translation;                                              // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                          // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                         // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                               // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// 0x0038 (0x0090 - 0x0058)
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	struct FBoneReference                              BoneToObserve;                                            // 0x01E3(0x000C) (Edit)
	TEnumAsByte<EBoneControlSpace>                     DisplaySpace;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeToRefPose;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// 0x0020 (0x0078 - 0x0058)
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	struct FBoneReference                              TargetBone;                                               // 0x01E3(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              SourceBone;                                               // 0x01E3(0x000C) (Edit, BlueprintVisible)
	float                                              Multiplier;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneAxis>                             RotationAxisToRefer;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAdditive;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// 0x0050 (0x00A8 - 0x0058)
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	struct FBoneReference                              SpringBone;                                               // 0x01E3(0x000C) (Edit, BlueprintVisible)
	bool                                               bLimitDisplacement;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDisplacement;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringStiffness;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringDamping;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ErrorResetThresh;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoZSpring;                                               // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bTranslateX;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTranslateY;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTranslateZ;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotateX;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotateY;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotateZ;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// 0x0088 (0x00E0 - 0x0058)
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	struct FBoneReference                              TrailBone;                                                // 0x01E3(0x000C) (Edit, BlueprintVisible)
	int                                                ChainLength;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 ChainBoneAxis;                                            // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertChainBoneAxis;                                     // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitStretch;                                            // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TrailRelaxation;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StretchLimit;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FakeVelocity;                                             // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bActorSpaceFakeVel;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// 0x0048 (0x00A0 - 0x0058)
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	struct FBoneReference                              IKBone;                                                   // 0x01E3(0x000C) (Edit, BlueprintVisible)
	struct FVector                                     EffectorLocation;                                         // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     JointTargetLocation;                                      // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   StretchLimits;                                            // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       EffectorSpaceBoneName;                                    // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bTakeRotationFromEffectorSpace : 1;                       // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bMaintainEffectorRelRot : 1;                              // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAllowStretching : 1;                                     // 0x01E3(0x0001) (Edit, BlueprintVisible)
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     JointTargetLocationSpace;                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       JointTargetSpaceBoneName;                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_WheelHandler
// 0x0018 (0x0070 - 0x0058)
struct FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	class UWheeledVehicleMovementComponent*            VehicleSimComponent;                                      // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
