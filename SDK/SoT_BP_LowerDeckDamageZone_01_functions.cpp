// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LowerDeckDamageZone_01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LowerDeckDamageZone_01.BP_LowerDeckDamageZone_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LowerDeckDamageZone_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LowerDeckDamageZone_01.BP_LowerDeckDamageZone_01_C.UserConstructionScript");

	ABP_LowerDeckDamageZone_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
