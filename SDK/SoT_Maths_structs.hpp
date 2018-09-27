#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Maths.EBuoyancyBlend
enum class EBuoyancyBlend : uint8_t
{
	EBuoyancyBlend__PrimaryToSecondary = 0,
	None                           = 1
};


// Enum Maths.EPlaneLineIntersectionType
enum class EPlaneLineIntersectionType : uint8_t
{
	EPlaneLineIntersectionType__IntersectionWithinLineSegment = 0,
	None                           = 1,
	EInteractionBlockReason__None  = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

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

// ScriptStruct Maths.InertialSmoothedFloat
// 0x0010
struct FInertialSmoothedFloat
{
	float                                              AccelerationMagnitude;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentVelocity;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentValue;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
