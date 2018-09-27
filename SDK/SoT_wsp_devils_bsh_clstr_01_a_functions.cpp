// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_devils_bsh_clstr_01_a_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_devils_bsh_clstr_01_a.wsp_devils_bsh_clstr_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_devils_bsh_clstr_01_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_devils_bsh_clstr_01_a.wsp_devils_bsh_clstr_01_a_C.UserConstructionScript");

	Awsp_devils_bsh_clstr_01_a_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
