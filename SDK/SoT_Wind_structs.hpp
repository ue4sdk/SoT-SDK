#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Maths_classes.hpp"
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
	float                                              MinAngleChange;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngleChange;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeChange;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeChange;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinWindMagnitude;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxWindMagnitude;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AbsoluteMaxWindMagnitude;                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinBlendTimeBetweenChanges;                               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxBlendTimeBetweenChanges;                               // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Wind.WindZoneTurbulence
// 0x0008
struct FWindZoneTurbulence
{
	float                                              Base;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Current;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Wind.WindZoneParams
// 0x0010
struct FWindZoneParams
{
	float                                              OuterRadius;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurbulenceScalar;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WindOnlyAffectsTrees;                                     // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Wind.WindTurbulenceParameters
// 0x0070
struct FWindTurbulenceParameters
{
	struct FFloatRange                                 GustPower;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           GustTime;                                                 // 0x0010(0x0030) (Edit, BlueprintVisible)
	struct FWeightedProbabilityRangeOfRanges           CalmTime;                                                 // 0x0040(0x0030) (Edit, BlueprintVisible)
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
