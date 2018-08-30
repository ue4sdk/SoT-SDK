#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipwreckTreasureChest_ItemInfo_Rare-_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShipwreckTreasureChest_ItemInfo_Rare-.BP_ShipwreckTreasureChest_ItemInfo_Rare-_C
// 0x0008 (0x05B0 - 0x05A8)
class ABP_ShipwreckTreasureChest_ItemInfo_Rare__C : public ATreasureChestItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShipwreckTreasureChest_ItemInfo_Rare-.BP_ShipwreckTreasureChest_ItemInfo_Rare-_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
