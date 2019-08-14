#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_Commodity_Gemstones_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_Commodity_Gemstones_ItemInfo.BP_MerchantCrate_Commodity_Gemstones_ItemInfo_C
// 0x0008 (0x0740 - 0x0738)
class ABP_MerchantCrate_Commodity_Gemstones_ItemInfo_C : public ABootyItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MerchantCrate_Commodity_Gemstones_ItemInfo.BP_MerchantCrate_Commodity_Gemstones_ItemInfo_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
