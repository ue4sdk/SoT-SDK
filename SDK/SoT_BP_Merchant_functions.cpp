// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Merchant_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Merchant.BP_Merchant_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Merchant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Merchant.BP_Merchant_C.UserConstructionScript"));

	ABP_Merchant_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Merchant.BP_Merchant_C.PlayItemAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Merchant_C::PlayItemAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Merchant.BP_Merchant_C.PlayItemAnimation"));

	ABP_Merchant_C_PlayItemAnimation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Merchant.BP_Merchant_C.ExecuteUbergraph_BP_Merchant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Merchant_C::ExecuteUbergraph_BP_Merchant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Merchant.BP_Merchant_C.ExecuteUbergraph_BP_Merchant"));

	ABP_Merchant_C_ExecuteUbergraph_BP_Merchant_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
