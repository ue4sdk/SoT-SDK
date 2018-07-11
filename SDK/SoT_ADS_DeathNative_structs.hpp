#pragma once

// Sea of Thieves (1.1.6) SDK

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

// AnimDataEntryStruct ADS_DeathNative.ADS_DeathNative
// 0x0020
struct FADS_DeathNative
{
	struct FAthenaAnimationDeathAnimData               DeathAnims_8_E3B58DCB4D02DFD47F317CA73709A563;            // 0x0000(0x0020) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
