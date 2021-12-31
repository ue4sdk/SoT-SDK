// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_shop_oos_01_a_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_shop_oos_01_a.BP_shop_oos_01_a_C.Set Magic Box Hidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Hidden                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_shop_oos_01_a_C::Set_Magic_Box_Hidden(bool Is_Hidden)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_shop_oos_01_a.BP_shop_oos_01_a_C.Set Magic Box Hidden"));

	ABP_shop_oos_01_a_C_Set_Magic_Box_Hidden_Params params;
	params.Is_Hidden = Is_Hidden;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_shop_oos_01_a.BP_shop_oos_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_shop_oos_01_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_shop_oos_01_a.BP_shop_oos_01_a_C.UserConstructionScript"));

	ABP_shop_oos_01_a_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
