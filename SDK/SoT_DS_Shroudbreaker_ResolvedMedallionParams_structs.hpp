#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_Shroudbreaker_ResolvedMedallionParams.DS_Shroudbreaker_ResolvedMedallionParams
// 0x0038
struct FDS_Shroudbreaker_ResolvedMedallionParams
{
	class AActor*                                      MedallionLocation_8_8705C7C14D914F149E8248BFC2B66169;     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MedallionIsBuried_9_60E0E7D744381B57F8709DA091DD8BA3;     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UClass*                                      MedallionType_10_3849846145FE6EB5FB6CCBB9BF6E26E3;        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            SpawnerLocation_17_7D7D10C0426AED4203549DAFD2D657FE;      // 0x0018(0x0020) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
