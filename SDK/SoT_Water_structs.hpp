#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Maths_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Water.WaterInformation
// 0x0010
struct FWaterInformation
{
	bool                                               CanSwim;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class UClass*                                      WaterType;                                                // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct Water.FFTWaterPerformanceCountData
// 0x0008
struct FFFTWaterPerformanceCountData
{
	int                                                WaterInformationQueryCallCount;                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	int                                                WaterHeightQueryCallCount;                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Water.BuoyancyVolumeSample
// 0x0058
struct FBuoyancyVolumeSample
{
	float                                              FakeZOffsetGeneratorTimeScale;                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FVector                                     Offset;                                                   // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBuoyancySampleType>                   Type;                                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRelevantForSubmersionVolumeCalculation;                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scalar;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingScalar;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DistUnderwaterVSBuoyancyForce;                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DistUnderwaterVSBuoyancyForceSecondary;                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DistUnderwaterVSBuoyancyForceTertiary;                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FakeZOffsetGeneratorCurve;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FakeZOffsetAmp;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Water.BuoyancyDragSample
// 0x0030
struct FBuoyancyDragSample
{
	TEnumAsByte<EBuoyancyDragSampleType>               Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FVector                                     Offset;                                                   // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Tangent;                                                  // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficient;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Water.WaterBuoyancy
// 0x0058
struct FWaterBuoyancy
{
	float                                              QuadSubmersionTestSampleResolution;                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UPrimitiveComponent*                         PrimitiveComponent;                                       // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              OverallBuyoancyScalar;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingPerSample;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AdditionalAngularDampingWhenSubmerged;                    // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FBuoyancyVolumeSample>               VolumeSamples;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FBuoyancyDragSample>                 DragSamples;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 BuyoancySampleZSpeedVSDampeningScalar;                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Water.BuoyancySampleMovementConfigurationEntry
// 0x0018
struct FBuoyancySampleMovementConfigurationEntry
{
	class UCurveFloat*                                 BuoyancyScaleCurve;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FVector                                     SampleOffset;                                             // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Water.BuoyancySampleMovementConfiguration
// 0x0030
struct FBuoyancySampleMovementConfiguration
{
	float                                              Duration;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UCurveVector*                                CenterOfMassOffsetCurve;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBuoyancySampleMovementConfigurationEntry> SampleMoveData;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor)
	float                                              OverallBuoyancyScalar;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 OverallBuoyancyScalarBlendCurve;                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Water.BuoyancySampleMovement
// 0x0060
struct FBuoyancySampleMovement
{
	class UCurveFloat*                                 BuoyancyScalarCurve;                                      // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	TArray<struct FBuoyancySampleMovementConfiguration> Configurations;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Water.WaterSplashProbe
// 0x00C0
struct FWaterSplashProbe
{
	float                                              LocalOffsetAdjustmentDuration;                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class FString                                      ProbeDebugName;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FVector                                     LocalOffset;                                              // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RateOfChangeThreshold;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalOffsetAdjustment;                                    // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Water.WaterSplashProbesContainer
// 0x0018
struct FWaterSplashProbesContainer
{
	float                                              ProbeSamplingTime;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TArray<struct FWaterSplashProbe>                   Probes;                                                   // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Water.FFTWaterQueryResult
// 0x001C
struct FFFTWaterQueryResult
{
	TEnumAsByte<EWaterQueryResult>                     WaterQueryResult;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	float                                              Height;                                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Choppiness;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Water.FFTWaterTickFunction
// 0x0020 (0x0068 - 0x0048)
struct FFFTWaterTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
