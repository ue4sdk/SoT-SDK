#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct WayfinderWobbleData.WayfinderWobbleData
// 0x0010
struct FWayfinderWobbleData
{
	class UCurveFloat*                                 AmplitudeCurve_4_DE059A8C4F225E8AC98A07B8257E5ED7;        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FrequencyCurve_8_34BC9AE445ECEAB2B660EBAC608C1CB1;        // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
