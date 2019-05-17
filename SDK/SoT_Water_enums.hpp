#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Water.EWaterQueryResult
enum class EWaterQueryResult : uint8_t
{
	EWaterQueryResult__Success     = 0,
	EWaterQueryResult__Failed      = 1,
	EWaterQueryResult__NoWater     = 2,
	EWaterQueryResult__EWaterQueryResult_MAX = 3
};


// Enum Water.EBuoyancyDragSampleType
enum class EBuoyancyDragSampleType : uint8_t
{
	EBuoyancyDragSampleType__Spherical = 0,
	EBuoyancyDragSampleType__Planar = 1,
	EBuoyancyDragSampleType__EBuoyancyDragSampleType_MAX = 2
};


// Enum Water.EBuoyancySampleType
enum class EBuoyancySampleType : uint8_t
{
	EBuoyancySampleType__Spherical = 0,
	EBuoyancySampleType__Cuboidal  = 1,
	EBuoyancySampleType__ProbeCurve = 2,
	EBuoyancySampleType__EBuoyancySampleType_MAX = 3
};


// Enum Water.EWaterSplashProbeType
enum class EWaterSplashProbeType : uint8_t
{
	EWaterSplashProbeType__ThresholdedRateOfChange = 0,
	EWaterSplashProbeType__StateChangeWaterToAir = 1,
	EWaterSplashProbeType__StateChangeAirToWater = 2,
	EWaterSplashProbeType__StateChangeAny = 3,
	EWaterSplashProbeType__Continuous = 4,
	EWaterSplashProbeType__EWaterSplashProbeType_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
