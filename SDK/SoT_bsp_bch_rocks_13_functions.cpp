// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_bch_rocks_13_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bsp_bch_rocks_13.bsp_bch_rocks_12_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Absp_bch_rocks_12_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_bch_rocks_13.bsp_bch_rocks_12_C.UserConstructionScript");

	Absp_bch_rocks_12_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
