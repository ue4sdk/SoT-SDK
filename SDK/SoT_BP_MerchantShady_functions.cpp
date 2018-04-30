// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantShady_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MerchantShady.BP_MerchantShady_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MerchantShady_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MerchantShady.BP_MerchantShady_C.UserConstructionScript");

	ABP_MerchantShady_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MerchantShady.BP_MerchantShady_C.PlayItemAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MerchantShady_C::PlayItemAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MerchantShady.BP_MerchantShady_C.PlayItemAnimation");

	ABP_MerchantShady_C_PlayItemAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MerchantShady.BP_MerchantShady_C.ExecuteUbergraph_BP_MerchantShady
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MerchantShady_C::ExecuteUbergraph_BP_MerchantShady(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MerchantShady.BP_MerchantShady_C.ExecuteUbergraph_BP_MerchantShady");

	ABP_MerchantShady_C_ExecuteUbergraph_BP_MerchantShady_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
