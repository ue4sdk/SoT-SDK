// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SunkenCurseArtefact_Emerald_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SunkenCurseArtefact_Emerald.BP_SunkenCurseArtefact_Emerald_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SunkenCurseArtefact_Emerald_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SunkenCurseArtefact_Emerald.BP_SunkenCurseArtefact_Emerald_C.UserConstructionScript");

	ABP_SunkenCurseArtefact_Emerald_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
