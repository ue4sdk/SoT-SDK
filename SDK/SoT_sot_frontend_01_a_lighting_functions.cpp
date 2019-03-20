// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_sot_frontend_01_a_lighting_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function sot_frontend_01_a_lighting.sot_frontend_01_a_lighting_C.LightingTestEvent
// (Public, BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_lighting_C::LightingTestEvent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a_lighting.sot_frontend_01_a_lighting_C.LightingTestEvent"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_lighting.sot_frontend_01_a_lighting_C.ExecuteUbergraph_sot_frontend_01_a_lighting
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_lighting_C::ExecuteUbergraph_sot_frontend_01_a_lighting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a_lighting.sot_frontend_01_a_lighting_C.ExecuteUbergraph_sot_frontend_01_a_lighting"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
