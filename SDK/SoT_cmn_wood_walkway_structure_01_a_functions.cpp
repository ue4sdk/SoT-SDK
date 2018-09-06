// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_cmn_wood_walkway_structure_01_a_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cmn_wood_walkway_structure_01_a.cmn_wood_walkway_structure_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Acmn_wood_walkway_structure_01_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function cmn_wood_walkway_structure_01_a.cmn_wood_walkway_structure_01_a_C.UserConstructionScript");

	Acmn_wood_walkway_structure_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
