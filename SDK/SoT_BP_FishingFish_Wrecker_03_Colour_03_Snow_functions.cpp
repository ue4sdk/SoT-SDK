// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishingFish_Wrecker_03_Colour_03_Snow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FishingFish_Wrecker_03_Colour_03_Snow.BP_FishingFish_Wrecker_03_Colour_03_Snow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FishingFish_Wrecker_03_Colour_03_Snow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FishingFish_Wrecker_03_Colour_03_Snow.BP_FishingFish_Wrecker_03_Colour_03_Snow_C.UserConstructionScript"));

	ABP_FishingFish_Wrecker_03_Colour_03_Snow_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
