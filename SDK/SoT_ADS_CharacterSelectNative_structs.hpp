#pragma once

// Sea of Thieves (1.4) SDK

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

// AnimDataEntryStruct ADS_CharacterSelectNative.ADS_CharacterSelectNative
// 0x0010
struct FADS_CharacterSelectNative
{
	TArray<struct FAthenaAnimationCharacterSelect>     CharacterSelect_41_79356B9543A918FE5739F99C97F7EC6A;      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
