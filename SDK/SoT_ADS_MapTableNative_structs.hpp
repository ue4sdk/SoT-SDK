#pragma once

// Sea of Thieves (2) SDK

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

// AnimDataEntryStruct ADS_MapTableNative.ADS_MapTableNative
// 0x0030
struct FADS_MapTableNative
{
	FAthenaAnimationMapTable                           MapTable_2_D2EBB5D940EDD65D1412C299092E09FE;              // 0x0000(0x0030) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
