#pragma once

// Sea of Thieves (1.4) SDK

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
	bool                                               bEnableOverride;                                          // 0x0000(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceFullyRough;                                         // 0x0001(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceNonMetal;                                           // 0x0002(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceDisableLMDirectionality;                            // 0x0003(0x0001) (ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct MaterialShaderQualitySettings.ShaderQualityOverridesListItem
// 0x0020
struct FShaderQualityOverridesListItem
{
	class FString                                      RangeName;                                                // 0x0000(0x0010) (ZeroConstructor)
	class UBoolProperty*                               QualityProperty;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UShaderPlatformQualitySettings*              SettingContainer;                                         // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
