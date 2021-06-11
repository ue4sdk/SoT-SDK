#pragma once

// Sea of Thieves (2.1) SDK

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

// AnimDataEntryStruct ADS_CannonNative.ADS_CannonNative
// 0x0038
struct FADS_CannonNative
{
	struct FAthenaAnimationCannonAnimData              Cannon_27_F70E24474F5C470823E14AA7216D9971;               // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FAthenaAnimationCannonConcealedAnimData     Concealed_26_5962372442FD72E46575E2999B01951D;            // 0x0028(0x0010) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
