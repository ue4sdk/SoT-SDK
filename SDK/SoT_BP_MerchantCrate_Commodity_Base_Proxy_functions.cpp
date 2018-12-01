// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_Commodity_Base_Proxy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MerchantCrate_Commodity_Base_Proxy.BP_MerchantCrate_Commodity_Base_Proxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MerchantCrate_Commodity_Base_Proxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MerchantCrate_Commodity_Base_Proxy.BP_MerchantCrate_Commodity_Base_Proxy_C.UserConstructionScript");

	ABP_MerchantCrate_Commodity_Base_Proxy_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
