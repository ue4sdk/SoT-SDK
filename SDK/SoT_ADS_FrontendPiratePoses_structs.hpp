#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_BP_LineUp_Animation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// AnimDataEntryStruct ADS_FrontendPiratePoses.ADS_FrontendPiratePoses
// 0x0010
struct FADS_FrontendPiratePoses
{
	TArray<struct FBP_LineUp_Animation>                Poses_3_564E3A8A40C5BF1FA007C298A241C6B6;                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
