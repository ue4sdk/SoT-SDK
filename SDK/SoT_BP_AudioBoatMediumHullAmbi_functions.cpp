// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AudioBoatMediumHullAmbi_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AudioBoatMediumHullAmbi.BP_AudioBoatMediumHullAmbi_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AudioBoatMediumHullAmbi_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AudioBoatMediumHullAmbi.BP_AudioBoatMediumHullAmbi_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
