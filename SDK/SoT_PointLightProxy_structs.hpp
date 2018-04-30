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

// UserDefinedStruct PointLightProxy.PointLightProxy
// 0x0048
struct FPointLightProxy
{
	class FString                                      Name_10_851F67294F335D7442802DAF52D514FC;                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FTransform                                  Transform_2_CEB1B9CD49EF5103707C92B79555C55E;             // 0x01E3(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	class UMaterialInterface*                          Material_8_05258EB540EB1B9DDE1ED0A0DB714B5C;              // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
