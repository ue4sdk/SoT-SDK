#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DoubloonPouches_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DoubloonPouches_ItemInfo.BP_DoubloonPouches_ItemInfo_C
// 0x0010 (0x05F0 - 0x05E0)
class ABP_DoubloonPouches_ItemInfo_C : public ARewardableItemInfo
{
public:
	class UCollectorsChestPickUpFromSlotRewardComponent* CollectorsChestPickUpFromSlotReward;                      // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DoubloonPouches_ItemInfo.BP_DoubloonPouches_ItemInfo_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
