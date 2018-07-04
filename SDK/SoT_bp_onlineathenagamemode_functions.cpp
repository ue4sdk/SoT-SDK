// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bp_onlineathenagamemode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_onlineathenagamemode.BP_OnlineAthenaGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OnlineAthenaGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_onlineathenagamemode.BP_OnlineAthenaGameMode_C.UserConstructionScript");

	ABP_OnlineAthenaGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
