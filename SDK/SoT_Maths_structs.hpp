#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Maths_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Maths.OrientedPoint
// 0x0018
struct FOrientedPoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Maths.RotationUpdateResult
// 0x0018
struct FRotationUpdateResult
{
	struct FRotator                                    UpdatedRotation;                                          // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpinAngle;                                                // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TiltAngle;                                                // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TiltDirection;                                            // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Maths.TimedBuffer
// 0x0018
struct FTimedBuffer
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Maths.WeightedProbabilityRange
// 0x0020
struct FWeightedProbabilityRange
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	uint32_t                                           Min;                                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Max;                                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Maths.WeightedProbabilityRangeOfRangesFloatPair
// 0x0008
struct FWeightedProbabilityRangeOfRangesFloatPair
{
	float                                              Min;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Maths.WeightedProbabilityRangeOfRanges
// 0x0010 (0x0030 - 0x0020)
struct FWeightedProbabilityRangeOfRanges : public FWeightedProbabilityRange
{
	TArray<struct FWeightedProbabilityRangeOfRangesFloatPair> SubRanges;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Maths.FixedStepInterpCurvePointVector2D
// 0x0010
struct FFixedStepInterpCurvePointVector2D
{
	struct FVector2D                                   OutVal;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Tangent;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Maths.FixedStepInterpCurveVector2D
// 0x0018
struct FFixedStepInterpCurveVector2D
{
	TArray<struct FFixedStepInterpCurvePointVector2D>  Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              StepTime;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsLooped;                                                 // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Maths.InertialSmoothedFloat
// 0x0010
struct FInertialSmoothedFloat
{
	float                                              AccelerationMagnitude;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentVelocity;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentValue;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Maths.SpatialOffset
// 0x0008
struct FSpatialOffset
{
	float                                              OffsetValue;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpatialOffsetMethod>                  OffsetMethod;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
