// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_sot_frontend_01_a_lighting_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function sot_frontend_01_a_lighting.sot_frontend_01_a_lighting_C.LightingTestEvent
// (Public, BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_lighting_C::LightingTestEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_lighting.sot_frontend_01_a_lighting_C.LightingTestEvent");

	Asot_frontend_01_a_lighting_C_LightingTestEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sot_frontend_01_a_lighting.sot_frontend_01_a_lighting_C.ExecuteUbergraph_sot_frontend_01_a_lighting
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_lighting_C::ExecuteUbergraph_sot_frontend_01_a_lighting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_lighting.sot_frontend_01_a_lighting_C.ExecuteUbergraph_sot_frontend_01_a_lighting");

	Asot_frontend_01_a_lighting_C_ExecuteUbergraph_sot_frontend_01_a_lighting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
