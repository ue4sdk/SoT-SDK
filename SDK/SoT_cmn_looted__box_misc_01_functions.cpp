// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_cmn_looted__box_misc_01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cmn_looted__box_misc_01.cmn_looted__box_misc_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Acmn_looted__box_misc_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function cmn_looted__box_misc_01.cmn_looted__box_misc_01_C.UserConstructionScript");

	Acmn_looted__box_misc_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
