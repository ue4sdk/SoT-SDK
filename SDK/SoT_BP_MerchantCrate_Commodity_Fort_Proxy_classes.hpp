#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_Commodity_Fort_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_Commodity_Fort_Proxy.BP_MerchantCrate_Commodity_Fort_Proxy_C
// 0x0008 (0x0858 - 0x0850)
class ABP_MerchantCrate_Commodity_Fort_Proxy_C : public ABP_MerchantCrate_Commodity_Base_Proxy_C
{
public:
	class UInteractableComponent*                      Interactable;                                             // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MerchantCrate_Commodity_Fort_Proxy.BP_MerchantCrate_Commodity_Fort_Proxy_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
