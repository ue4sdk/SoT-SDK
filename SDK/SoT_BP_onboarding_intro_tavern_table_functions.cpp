// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_onboarding_intro_tavern_table_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_onboarding_intro_tavern_table.BP_onboarding_intro_tavern_table_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_onboarding_intro_tavern_table_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_onboarding_intro_tavern_table.BP_onboarding_intro_tavern_table_C.UserConstructionScript");

	ABP_onboarding_intro_tavern_table_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
