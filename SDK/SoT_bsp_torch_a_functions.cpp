// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_torch_a_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bsp_torch_a.bsp_torch_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Absp_torch_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bsp_torch_a.bsp_torch_a_C.UserConstructionScript"));

	Absp_torch_a_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function bsp_torch_a.bsp_torch_a_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Absp_torch_a_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bsp_torch_a.bsp_torch_a_C.ReceiveBeginPlay"));

	Absp_torch_a_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function bsp_torch_a.bsp_torch_a_C.ExecuteUbergraph_bsp_torch_a
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Absp_torch_a_C::ExecuteUbergraph_bsp_torch_a(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bsp_torch_a.bsp_torch_a_C.ExecuteUbergraph_bsp_torch_a"));

	Absp_torch_a_C_ExecuteUbergraph_bsp_torch_a_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
