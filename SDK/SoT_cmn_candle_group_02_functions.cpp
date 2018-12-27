// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_cmn_candle_group_02_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cmn_candle_group_02.cmn_candle_group_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Acmn_candle_group_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function cmn_candle_group_02.cmn_candle_group_02_C.UserConstructionScript");

	Acmn_candle_group_02_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
