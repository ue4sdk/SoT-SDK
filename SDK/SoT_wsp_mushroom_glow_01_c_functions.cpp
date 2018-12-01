// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_mushroom_glow_01_c_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_mushroom_glow_01_c.wsp_mushroom_glow_01_c_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_mushroom_glow_01_c_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_mushroom_glow_01_c.wsp_mushroom_glow_01_c_C.UserConstructionScript");

	Awsp_mushroom_glow_01_c_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
