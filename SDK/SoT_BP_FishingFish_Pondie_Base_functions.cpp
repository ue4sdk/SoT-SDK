// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishingFish_Pondie_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FishingFish_Pondie_Base.BP_FishingFish_Pondie_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FishingFish_Pondie_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FishingFish_Pondie_Base.BP_FishingFish_Pondie_Base_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
