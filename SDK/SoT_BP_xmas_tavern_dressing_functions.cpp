// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_xmas_tavern_dressing_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_xmas_tavern_dressing.BP_xmas_tavern_dressing_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_xmas_tavern_dressing_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_xmas_tavern_dressing.BP_xmas_tavern_dressing_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
