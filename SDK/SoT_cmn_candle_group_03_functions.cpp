// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_cmn_candle_group_03_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cmn_candle_group_03.cmn_candle_group_03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Acmn_candle_group_03_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function cmn_candle_group_03.cmn_candle_group_03_C.UserConstructionScript");

	Acmn_candle_group_03_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
