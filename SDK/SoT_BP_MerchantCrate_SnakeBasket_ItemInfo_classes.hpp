#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_SnakeBasket_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_SnakeBasket_ItemInfo.BP_MerchantCrate_SnakeBasket_ItemInfo_C
// 0x0008 (0x05F8 - 0x05F0)
class ABP_MerchantCrate_SnakeBasket_ItemInfo_C : public AMerchantCrateItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_MerchantCrate_SnakeBasket_ItemInfo.BP_MerchantCrate_SnakeBasket_ItemInfo_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
