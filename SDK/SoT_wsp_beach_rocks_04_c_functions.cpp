// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_beach_rocks_04_c_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_beach_rocks_04_c.wsp_beach_rocks_04_c_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_beach_rocks_04_c_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_beach_rocks_04_c.wsp_beach_rocks_04_c_C.UserConstructionScript");

	Awsp_beach_rocks_04_c_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
