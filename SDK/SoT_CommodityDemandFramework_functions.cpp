// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CommodityDemandFramework_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CommodityDemandFramework.CommodityDemandService.OnRep_ActiveCommodityDemands
// (Final, RequiredAPI, Native, Private)

void ACommodityDemandService::OnRep_ActiveCommodityDemands()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CommodityDemandFramework.CommodityDemandService.OnRep_ActiveCommodityDemands"));

	ACommodityDemandService_OnRep_ActiveCommodityDemands_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
