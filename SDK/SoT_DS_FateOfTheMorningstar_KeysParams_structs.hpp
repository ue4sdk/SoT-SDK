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

// UserDefinedStruct DS_FateOfTheMorningstar_KeysParams.DS_FateOfTheMorningstar_KeysParams
// 0x0050
struct FDS_FateOfTheMorningstar_KeysParams
{
	TAssetPtr<class AActor>                            KeyLocation_16_4EA884DF4E3E6786DD15E0ABB422D787;          // 0x0000(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      Key_20_88FE40C04880BC488110F29B895A50A0;                  // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            EliKeyLocation_23_1EAB58CB48F4C3D270BBD2BF28342D70;       // 0x0028(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      EliKey_26_F31B98BD4B44668651DE21BEABC039B0;               // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
