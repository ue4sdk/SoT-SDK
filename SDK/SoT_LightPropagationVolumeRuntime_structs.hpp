#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LightPropagationVolumeRuntime.LightPropagationVolumeSettings
// 0x0070
struct FLightPropagationVolumeSettings
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
	unsigned char                                      bOverride_LPVSpecularOcclusionIntensity : 1;              // 0x01E3(0x0001) (BlueprintVisible)
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
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
