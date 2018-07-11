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

// AnimDataEntryStruct ADS_SailControlNative.ADS_SailControlNative
// 0x0048
struct FADS_SailControlNative
{
	struct FAthenaAnimationSailControlRaiseAnimData    SailControl_98_004EAAD34D237066F66CE5B8069CD10A;          // 0x0000(0x0048) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
