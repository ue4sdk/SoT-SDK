// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_torch_b_b_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_torch_b_b.wsp_torch_b_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_torch_b_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wsp_torch_b_b.wsp_torch_b_b_C.UserConstructionScript"));

	Awsp_torch_b_b_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function wsp_torch_b_b.wsp_torch_b_b_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Awsp_torch_b_b_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wsp_torch_b_b.wsp_torch_b_b_C.ReceiveBeginPlay"));

	Awsp_torch_b_b_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function wsp_torch_b_b.wsp_torch_b_b_C.ExecuteUbergraph_wsp_torch_b_b
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Awsp_torch_b_b_C::ExecuteUbergraph_wsp_torch_b_b(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wsp_torch_b_b.wsp_torch_b_b_C.ExecuteUbergraph_wsp_torch_b_b"));

	Awsp_torch_b_b_C_ExecuteUbergraph_wsp_torch_b_b_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
