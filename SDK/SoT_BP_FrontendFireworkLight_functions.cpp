// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FrontendFireworkLight_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FrontendFireworkLight.BP_FrontendFireworkLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontendFireworkLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FrontendFireworkLight.BP_FrontendFireworkLight_C.UserConstructionScript"));

	ABP_FrontendFireworkLight_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FrontendFireworkLight.BP_FrontendFireworkLight_C.LightColours__FinishedFunc
// (BlueprintEvent)

void ABP_FrontendFireworkLight_C::LightColours__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FrontendFireworkLight.BP_FrontendFireworkLight_C.LightColours__FinishedFunc"));

	ABP_FrontendFireworkLight_C_LightColours__FinishedFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FrontendFireworkLight.BP_FrontendFireworkLight_C.LightColours__UpdateFunc
// (BlueprintEvent)

void ABP_FrontendFireworkLight_C::LightColours__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FrontendFireworkLight.BP_FrontendFireworkLight_C.LightColours__UpdateFunc"));

	ABP_FrontendFireworkLight_C_LightColours__UpdateFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FrontendFireworkLight.BP_FrontendFireworkLight_C.LightColours__Event Track__EventFunc
// (BlueprintEvent)

void ABP_FrontendFireworkLight_C::LightColours__Event_Track__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FrontendFireworkLight.BP_FrontendFireworkLight_C.LightColours__Event Track__EventFunc"));

	ABP_FrontendFireworkLight_C_LightColours__Event_Track__EventFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FrontendFireworkLight.BP_FrontendFireworkLight_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_FrontendFireworkLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FrontendFireworkLight.BP_FrontendFireworkLight_C.ReceiveBeginPlay"));

	ABP_FrontendFireworkLight_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FrontendFireworkLight.BP_FrontendFireworkLight_C.ExecuteUbergraph_BP_FrontendFireworkLight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontendFireworkLight_C::ExecuteUbergraph_BP_FrontendFireworkLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FrontendFireworkLight.BP_FrontendFireworkLight_C.ExecuteUbergraph_BP_FrontendFireworkLight"));

	ABP_FrontendFireworkLight_C_ExecuteUbergraph_BP_FrontendFireworkLight_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
