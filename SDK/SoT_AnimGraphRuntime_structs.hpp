#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_AnimGraphRuntime_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// 0x0090 (0x00C0 - 0x0030)
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
	class USkeletalMeshComponent*                      SourceMeshComponent;                                      // 0x0030(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bUseAttachedParent;                                       // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x87];                                      // 0x0039(0x0087) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// 0x0028 (0x0058 - 0x0030)
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                            // 0x0030(0x0018) (Edit, BlueprintVisible)
	float                                              Alpha;                                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x004C(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// 0x0048 (0x00A0 - 0x0058)
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x0058(0x000C) (Edit)
	TEnumAsByte<EComponentType>                        SourceComponent;                                          // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	class UCurveFloat*                                 DrivingCurve;                                             // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRange;                                                // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	float                                              RangeMin;                                                 // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeMax;                                                 // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMin;                                              // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMax;                                              // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              TargetBone;                                               // 0x0088(0x000C) (Edit)
	TEnumAsByte<EComponentType>                        TargetComponent;                                          // 0x0094(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	unsigned char                                      bAffectTargetTranslationX : 1;                            // 0x0098(0x0001) (Edit)
	unsigned char                                      bAffectTargetTranslationY : 1;                            // 0x0098(0x0001) (Edit)
	unsigned char                                      bAffectTargetTranslationZ : 1;                            // 0x0098(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationX : 1;                               // 0x0098(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationY : 1;                               // 0x0098(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationZ : 1;                               // 0x0098(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleX : 1;                                  // 0x0098(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleY : 1;                                  // 0x0098(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleZ : 1;                                  // 0x0099(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x2];                                       // 0x009A(0x0002) MISSED OFFSET
	TEnumAsByte<EDrivenBoneModificationMode>           ModificationMode;                                         // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// 0x0020 (0x0078 - 0x0058)
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x0058(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              TargetBone;                                               // 0x0064(0x000C) (Edit, BlueprintVisible)
	bool                                               bCopyTranslation;                                         // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyRotation;                                            // 0x0071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyScale;                                               // 0x0072(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0073(0x0005) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// 0x0078 (0x00D0 - 0x0058)
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	struct FTransform                                  EffectorTransform;                                        // 0x0060(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     EffectorTransformSpace;                                   // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FBoneReference                              EffectorTransformBone;                                    // 0x0094(0x000C) (Edit, BlueprintVisible)
	TEnumAsByte<EBoneRotationSource>                   EffectorRotationSource;                                   // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	struct FBoneReference                              TipBone;                                                  // 0x00A4(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              RootBone;                                                 // 0x00B0(0x000C) (Edit, BlueprintVisible)
	float                                              Precision;                                                // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebugDraw;                                         // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xB];                                       // 0x00C5(0x000B) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// 0x0048 (0x00A0 - 0x0058)
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RightHandFK;                                              // 0x0058(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftHandFK;                                               // 0x0064(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              RightHandIK;                                              // 0x0070(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftHandIK;                                               // 0x007C(0x000C) (Edit, BlueprintVisible)
	TArray<struct FBoneReference>                      IKBonesToMove;                                            // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              HandFKWeight;                                             // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// 0x0068 (0x00C0 - 0x0058)
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x0058(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              LookAtBone;                                               // 0x0064(0x000C) (Edit, BlueprintVisible)
	struct FVector                                     LookAtLocation;                                           // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxisOption>                           LookAtAxis;                                               // 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLookUpAxis;                                           // 0x007D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxisOption>                           LookUpAxis;                                               // 0x007E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x007F(0x0001) MISSED OFFSET
	float                                              LookAtClamp;                                              // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInterpolationBlend>                   InterpolationType;                                        // 0x0084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	float                                              InterpolationTime;                                        // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTriggerThreashold;                           // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebug;                                             // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2F];                                      // 0x0091(0x002F) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// 0x0038 (0x0090 - 0x0058)
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x0058(0x000C) (Edit, BlueprintVisible)
	struct FVector                                     Translation;                                              // 0x0064(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                          // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                // 0x008A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                         // 0x008B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                               // 0x008D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x008E(0x0002) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// 0x0038 (0x0090 - 0x0058)
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToObserve;                                            // 0x0058(0x000C) (Edit)
	TEnumAsByte<EBoneControlSpace>                     DisplaySpace;                                             // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeToRefPose;                                       // 0x0065(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0066(0x0002) MISSED OFFSET
	struct FVector                                     Translation;                                              // 0x0068(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0074(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0080(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// 0x0020 (0x0078 - 0x0058)
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TargetBone;                                               // 0x0058(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              SourceBone;                                               // 0x0064(0x000C) (Edit, BlueprintVisible)
	float                                              Multiplier;                                               // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneAxis>                             RotationAxisToRefer;                                      // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAdditive;                                              // 0x0075(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0076(0x0002) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// 0x0050 (0x00A8 - 0x0058)
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SpringBone;                                               // 0x0058(0x000C) (Edit, BlueprintVisible)
	bool                                               bLimitDisplacement;                                       // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	float                                              MaxDisplacement;                                          // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringStiffness;                                          // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringDamping;                                            // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ErrorResetThresh;                                         // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoZSpring;                                               // 0x0078(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bTranslateX;                                              // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTranslateY;                                              // 0x007A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTranslateZ;                                              // 0x007B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotateX;                                                 // 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotateY;                                                 // 0x007D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotateZ;                                                 // 0x007E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x29];                                      // 0x007F(0x0029) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// 0x0088 (0x00E0 - 0x0058)
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TrailBone;                                                // 0x0058(0x000C) (Edit, BlueprintVisible)
	int                                                ChainLength;                                              // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 ChainBoneAxis;                                            // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertChainBoneAxis;                                     // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitStretch;                                            // 0x006A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x006B(0x0001) MISSED OFFSET
	float                                              TrailRelaxation;                                          // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StretchLimit;                                             // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FakeVelocity;                                             // 0x0074(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bActorSpaceFakeVel;                                       // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5F];                                      // 0x0081(0x005F) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// 0x0048 (0x00A0 - 0x0058)
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              IKBone;                                                   // 0x0058(0x000C) (Edit, BlueprintVisible)
	struct FVector                                     EffectorLocation;                                         // 0x0064(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     JointTargetLocation;                                      // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   StretchLimits;                                            // 0x007C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       EffectorSpaceBoneName;                                    // 0x0084(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bTakeRotationFromEffectorSpace : 1;                       // 0x008C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bMaintainEffectorRelRot : 1;                              // 0x008C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAllowStretching : 1;                                     // 0x008C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                    // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     JointTargetLocationSpace;                                 // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0092(0x0002) MISSED OFFSET
	struct FName                                       JointTargetSpaceBoneName;                                 // 0x0094(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
