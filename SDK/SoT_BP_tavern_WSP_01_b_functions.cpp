// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_tavern_WSP_01_b_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_tavern_WSP_01_b.BP_tavern_WSP_01_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_tavern_WSP_01_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_tavern_WSP_01_b.BP_tavern_WSP_01_b_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
