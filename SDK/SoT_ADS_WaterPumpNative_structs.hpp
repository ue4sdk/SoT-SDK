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

// AnimDataEntryStruct ADS_WaterPumpNative.ADS_WaterPumpNative
// 0x0028
struct FADS_WaterPumpNative
{
	FAthenaAnimationWaterPumpAnimData                  WaterPump_5_C3B3D3934CED931AA0DDF4BFE901E9B0;             // 0x0000(0x0028) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
