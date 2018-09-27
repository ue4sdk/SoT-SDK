// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_bottle_hanging_light_a_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bsp_bottle_hanging_light_a.bsp_bottle_hanging_light_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Absp_bottle_hanging_light_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_bottle_hanging_light_a.bsp_bottle_hanging_light_a_C.UserConstructionScript");

	Absp_bottle_hanging_light_a_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
