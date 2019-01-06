// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SunkenCurseArtefact_Ruby_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SunkenCurseArtefact_Ruby.BP_SunkenCurseArtefact_Ruby_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SunkenCurseArtefact_Ruby_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SunkenCurseArtefact_Ruby.BP_SunkenCurseArtefact_Ruby_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
