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

// UserDefinedStruct DS_FateOfTheMorningstar_CagedKeyParams.DS_FateOfTheMorningstar_CagedKeyParams
// 0x0028
struct FDS_FateOfTheMorningstar_CagedKeyParams
{
	TAssetPtr<class AActor>                            CagedKeyLocation_15_4EA884DF4E3E6786DD15E0ABB422D787;     // 0x0000(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      CagedKey_18_FCD504714BFDAC0E67CD349AB204DE69;             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
