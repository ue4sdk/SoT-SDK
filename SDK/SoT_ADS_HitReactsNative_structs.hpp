#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// AnimDataEntryStruct ADS_HitReactsNative.ADS_HitReactsNative
// 0x0040
struct FADS_HitReactsNative
{
	struct FAthenaAnimationHitReactsAnimData           HitReacts_5_DC8106B64C5F1676B9DD179112A43691;             // 0x0000(0x0040) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
