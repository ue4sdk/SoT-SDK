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

// UserDefinedStruct DS_RevengeOfTheMorningstar_ChestParams.DS_RevengeOfTheMorningstar_ChestParams
// 0x0020
struct FDS_RevengeOfTheMorningstar_ChestParams
{
	class AActor*                                      ChestLocation_17_891BC7FB44F596D8934E5B922DA3D815;        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CollectorsChest_23_FE68D11845588F02E6C5D58C0FDE71D1;      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      CollectorsChestIstance_39_FC6DE71F44B5F40689F98E8B4A1AF6C9;// 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StoredItems_42_7A769E954255A5E0ABB155ABA292FC2F;          // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
