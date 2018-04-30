// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShadyOrderOfSoulsShop_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShadyOrderOfSoulsShop.BP_ShadyOrderOfSoulsShop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShadyOrderOfSoulsShop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShadyOrderOfSoulsShop.BP_ShadyOrderOfSoulsShop_C.UserConstructionScript");

	ABP_ShadyOrderOfSoulsShop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
