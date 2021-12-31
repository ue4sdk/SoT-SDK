#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_Commodity_TeaCrate_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_Commodity_TeaCrate_Wieldable.BP_MerchantCrate_Commodity_TeaCrate_Wieldable_C
// 0x0008 (0x0808 - 0x0800)
class ABP_MerchantCrate_Commodity_TeaCrate_Wieldable_C : public ABP_MerchantCrate_Commodity_Wieldable_Base_C
{
public:
	class UBoxComponent*                               HitVolume;                                                // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MerchantCrate_Commodity_TeaCrate_Wieldable.BP_MerchantCrate_Commodity_TeaCrate_Wieldable_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
