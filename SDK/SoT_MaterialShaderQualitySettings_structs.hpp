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

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// 0x0004
struct FMaterialQualityOverrides
{
	bool                                               bForceDisableLMDirectionality;                            // 0x0000(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	bool                                               bEnableOverride;                                          // 0x01E3(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceFullyRough;                                         // 0x01E3(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceNonMetal;                                           // 0x01E3(0x0001) (ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct MaterialShaderQualitySettings.ShaderQualityOverridesListItem
// 0x0020
struct FShaderQualityOverridesListItem
{
	class UShaderPlatformQualitySettings*              SettingContainer;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class FString                                      RangeName;                                                // 0x01E3(0x0010) (ZeroConstructor)
	class UBoolProperty*                               QualityProperty;                                          // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
