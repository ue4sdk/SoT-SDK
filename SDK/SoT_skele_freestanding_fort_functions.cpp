// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_skele_freestanding_fort_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function skele_freestanding_fort.skele_freestanding_fort_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Askele_freestanding_fort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function skele_freestanding_fort.skele_freestanding_fort_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
