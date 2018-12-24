// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_OrderofsoulsShady_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_OrderofsoulsShady.BP_OrderofsoulsShady_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OrderofsoulsShady_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OrderofsoulsShady.BP_OrderofsoulsShady_C.UserConstructionScript");

	ABP_OrderofsoulsShady_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
