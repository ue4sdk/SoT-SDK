#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_Commodity_Ore_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_Commodity_Ore_Proxy.BP_MerchantCrate_Commodity_Ore_Proxy_C
// 0x0008 (0x08C0 - 0x08B8)
class ABP_MerchantCrate_Commodity_Ore_Proxy_C : public AMerchantCrateItemProxy
{
public:
	class UInteractableComponent*                      Interactable;                                             // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_MerchantCrate_Commodity_Ore_Proxy.BP_MerchantCrate_Commodity_Ore_Proxy_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
