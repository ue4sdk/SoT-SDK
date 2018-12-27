// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_torch_a_a_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_torch_a_a.wsp_torch_a_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_torch_a_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_torch_a_a.wsp_torch_a_a_C.UserConstructionScript");

	Awsp_torch_a_a_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function wsp_torch_a_a.wsp_torch_a_a_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Awsp_torch_a_a_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_torch_a_a.wsp_torch_a_a_C.ReceiveBeginPlay");

	Awsp_torch_a_a_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function wsp_torch_a_a.wsp_torch_a_a_C.ExecuteUbergraph_wsp_torch_a_a
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Awsp_torch_a_a_C::ExecuteUbergraph_wsp_torch_a_a(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_torch_a_a.wsp_torch_a_a_C.ExecuteUbergraph_wsp_torch_a_a");

	Awsp_torch_a_a_C_ExecuteUbergraph_wsp_torch_a_a_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
