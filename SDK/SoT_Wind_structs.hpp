#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Maths_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Wind.WindServiceParams
// 0x0024
struct FWindServiceParams
{
	float                                              MaxBlendTimeBetweenChanges;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              MinAngleChange;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngleChange;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeChange;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeChange;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinWindMagnitude;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxWindMagnitude;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AbsoluteMaxWindMagnitude;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinBlendTimeBetweenChanges;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Wind.WindZoneTurbulence
// 0x0008
struct FWindZoneTurbulence
{
	float                                              Current;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              Base;                                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Wind.WindZoneParams
// 0x000C
struct FWindZoneParams
{
	float                                              TurbulenceScalar;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              OuterRadius;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Wind.WindTurbulenceParameters
// 0x0070
struct FWindTurbulenceParameters
{
	struct FWeightedProbabilityRangeOfRanges           CalmTime;                                                 // 0x0000(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FFloatRange                                 GustPower;                                                // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           GustTime;                                                 // 0x01E3(0x0030) (Edit, BlueprintVisible)
};

// ScriptStruct Wind.WindMagnitudeChanged
// 0x0001
struct FWindMagnitudeChanged
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Wind.WindDirectionChanged
// 0x0001
struct FWindDirectionChanged
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
