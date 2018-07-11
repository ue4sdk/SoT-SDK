// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_GunPowderBarrel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MerchantCrate_GunPowderBarrel.BP_MerchantCrate_GunpowderBarrel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MerchantCrate_GunpowderBarrel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MerchantCrate_GunPowderBarrel.BP_MerchantCrate_GunpowderBarrel_C.UserConstructionScript");

	ABP_MerchantCrate_GunpowderBarrel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MerchantCrate_GunPowderBarrel.BP_MerchantCrate_GunpowderBarrel_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_MerchantCrate_GunpowderBarrel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MerchantCrate_GunPowderBarrel.BP_MerchantCrate_GunpowderBarrel_C.ReceiveBeginPlay");

	ABP_MerchantCrate_GunpowderBarrel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MerchantCrate_GunPowderBarrel.BP_MerchantCrate_GunpowderBarrel_C.ExecuteUbergraph_BP_MerchantCrate_GunpowderBarrel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MerchantCrate_GunpowderBarrel_C::ExecuteUbergraph_BP_MerchantCrate_GunpowderBarrel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MerchantCrate_GunPowderBarrel.BP_MerchantCrate_GunpowderBarrel_C.ExecuteUbergraph_BP_MerchantCrate_GunpowderBarrel");

	ABP_MerchantCrate_GunpowderBarrel_C_ExecuteUbergraph_BP_MerchantCrate_GunpowderBarrel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
