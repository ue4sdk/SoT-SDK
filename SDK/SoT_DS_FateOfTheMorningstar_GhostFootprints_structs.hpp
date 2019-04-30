#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_FateOfTheMorningstar_GhostFootprints.DS_FateOfTheMorningstar_GhostFootprints
// 0x0028
struct FDS_FateOfTheMorningstar_GhostFootprints
{
	TAssetPtr<class AActor>                            GhostFootprintLocation_77_22F2FB574324025974655BB8C89A96CE;// 0x0000(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      GhostFootprint_80_475B2160494962624E17359B51FB1B02;       // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
