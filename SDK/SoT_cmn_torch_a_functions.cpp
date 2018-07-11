// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_cmn_torch_a_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cmn_torch_a.cmn_torch_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Acmn_torch_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function cmn_torch_a.cmn_torch_a_C.UserConstructionScript");

	Acmn_torch_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cmn_torch_a.cmn_torch_a_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Acmn_torch_a_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function cmn_torch_a.cmn_torch_a_C.ReceiveBeginPlay");

	Acmn_torch_a_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cmn_torch_a.cmn_torch_a_C.ExecuteUbergraph_cmn_torch_a
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Acmn_torch_a_C::ExecuteUbergraph_cmn_torch_a(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function cmn_torch_a.cmn_torch_a_C.ExecuteUbergraph_cmn_torch_a");

	Acmn_torch_a_C_ExecuteUbergraph_cmn_torch_a_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
