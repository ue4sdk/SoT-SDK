// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wandas_shop_cursed_sails_01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wandas_shop_cursed_sails_01.wandas_shop_cursed_sails_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awandas_shop_cursed_sails_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wandas_shop_cursed_sails_01.wandas_shop_cursed_sails_01_C.UserConstructionScript");

	Awandas_shop_cursed_sails_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
