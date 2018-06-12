// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_audio_wpn_shop_wsp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_audio_wpn_shop_wsp.BP_audio_wpn_shop_wsp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_audio_wpn_shop_wsp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_audio_wpn_shop_wsp.BP_audio_wpn_shop_wsp_C.UserConstructionScript");

	ABP_audio_wpn_shop_wsp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_audio_wpn_shop_wsp.BP_audio_wpn_shop_wsp_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_audio_wpn_shop_wsp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_audio_wpn_shop_wsp.BP_audio_wpn_shop_wsp_C.ReceiveBeginPlay");

	ABP_audio_wpn_shop_wsp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_audio_wpn_shop_wsp.BP_audio_wpn_shop_wsp_C.ExecuteUbergraph_BP_audio_wpn_shop_wsp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_audio_wpn_shop_wsp_C::ExecuteUbergraph_BP_audio_wpn_shop_wsp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_audio_wpn_shop_wsp.BP_audio_wpn_shop_wsp_C.ExecuteUbergraph_BP_audio_wpn_shop_wsp");

	ABP_audio_wpn_shop_wsp_C_ExecuteUbergraph_BP_audio_wpn_shop_wsp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
