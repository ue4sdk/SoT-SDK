// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_cmn_torch_b_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cmn_torch_b.cmn_torch_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Acmn_torch_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function cmn_torch_b.cmn_torch_b_C.UserConstructionScript");

	Acmn_torch_b_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function cmn_torch_b.cmn_torch_b_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Acmn_torch_b_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function cmn_torch_b.cmn_torch_b_C.ReceiveBeginPlay");

	Acmn_torch_b_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function cmn_torch_b.cmn_torch_b_C.ExecuteUbergraph_cmn_torch_b
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Acmn_torch_b_C::ExecuteUbergraph_cmn_torch_b(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function cmn_torch_b.cmn_torch_b_C.ExecuteUbergraph_cmn_torch_b");

	Acmn_torch_b_C_ExecuteUbergraph_cmn_torch_b_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
