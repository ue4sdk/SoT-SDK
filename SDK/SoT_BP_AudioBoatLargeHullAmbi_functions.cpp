// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AudioBoatLargeHullAmbi_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AudioBoatLargeHullAmbi.BP_AudioBoatLargeHullAmbi_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AudioBoatLargeHullAmbi_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AudioBoatLargeHullAmbi.BP_AudioBoatLargeHullAmbi_C.UserConstructionScript");

	ABP_AudioBoatLargeHullAmbi_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
