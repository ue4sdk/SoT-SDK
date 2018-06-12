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

// AnimDataEntryStruct ADS_InteractionNative.ADS_InteractionNative
// 0x0010
struct FADS_InteractionNative
{
	TArray<struct FAthenaAnimationShopInteractionAnimations> Interaction_7_C3B3D3934CED931AA0DDF4BFE901E9B0;           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
