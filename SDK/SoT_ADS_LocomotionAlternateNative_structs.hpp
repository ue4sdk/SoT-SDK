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

// AnimDataEntryStruct ADS_LocomotionAlternateNative.ADS_LocomotionAlternateNative
// 0x00F0
struct FADS_LocomotionAlternateNative
{
	struct FAthenaAnimationLocomotionAlternateAnimData Drunk_48_A586B449410EBBDE851BBD991F7C6A63;                // 0x0000(0x0050) (Edit, BlueprintVisible)
	struct FAthenaAnimationLocomotionAlternateAnimData Limp_49_5DAB2AC340B980B8EF92528FE62C5895;                 // 0x0050(0x0050) (Edit, BlueprintVisible)
	struct FAthenaAnimationLocomotionAlternateAnimData PegLeg_50_D8C2B28B4975F5BD98B483A8911DF23B;               // 0x00A0(0x0050) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
