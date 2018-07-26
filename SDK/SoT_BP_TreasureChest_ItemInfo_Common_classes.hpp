#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_ItemInfo_Common_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureChest_ItemInfo_Common.BP_TreasureChest_ItemInfo_Common_C
// 0x0008 (0x05A0 - 0x0598)
class ABP_TreasureChest_ItemInfo_Common_C : public ATreasureChestItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TreasureChest_ItemInfo_Common.BP_TreasureChest_ItemInfo_Common_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
