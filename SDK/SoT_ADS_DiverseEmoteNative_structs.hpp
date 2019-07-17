#pragma once

// Sea of Thieves (2.0) SDK

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

// AnimDataEntryStruct ADS_DiverseEmoteNative.ADS_DiverseEmoteNative
// 0x0010
struct FADS_DiverseEmoteNative
{
	TArray<struct FAthenaAnimationDiverseEmotes>       DiverseEmotes_95_BE3B02404F9F0DD7B00DAD9F675CF780;        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
