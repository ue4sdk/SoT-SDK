#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_EmissaryFlotsam_MerchantAlliance_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EmissaryFlotsam_MerchantAlliance_ItemInfo.BP_EmissaryFlotsam_MerchantAlliance_ItemInfo_C
// 0x0008 (0x07A8 - 0x07A0)
class ABP_EmissaryFlotsam_MerchantAlliance_ItemInfo_C : public AEmissaryFlotsamItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_EmissaryFlotsam_MerchantAlliance_ItemInfo.BP_EmissaryFlotsam_MerchantAlliance_ItemInfo_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
