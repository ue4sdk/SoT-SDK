// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShovelHole_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShovelHole.BP_ShovelHole_C.SetFadeInParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShovelHole_C::SetFadeInParameters(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShovelHole.BP_ShovelHole_C.SetFadeInParameters");

	ABP_ShovelHole_C_SetFadeInParameters_Params params;
	params.FadeTime = FadeTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ShovelHole.BP_ShovelHole_C.SetFadeOutParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShovelHole_C::SetFadeOutParameters(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShovelHole.BP_ShovelHole_C.SetFadeOutParameters");

	ABP_ShovelHole_C_SetFadeOutParameters_Params params;
	params.FadeTime = FadeTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ShovelHole.BP_ShovelHole_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShovelHole_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShovelHole.BP_ShovelHole_C.UserConstructionScript");

	ABP_ShovelHole_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ShovelHole.BP_ShovelHole_C.OnStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHoleState>        InState                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShovelHole_C::OnStateChanged(TEnumAsByte<EHoleState> InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShovelHole.BP_ShovelHole_C.OnStateChanged");

	ABP_ShovelHole_C_OnStateChanged_Params params;
	params.InState = InState;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ShovelHole.BP_ShovelHole_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_ShovelHole_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShovelHole.BP_ShovelHole_C.ReceiveBeginPlay");

	ABP_ShovelHole_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ShovelHole.BP_ShovelHole_C.ExecuteUbergraph_BP_ShovelHole
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShovelHole_C::ExecuteUbergraph_BP_ShovelHole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShovelHole.BP_ShovelHole_C.ExecuteUbergraph_BP_ShovelHole");

	ABP_ShovelHole_C_ExecuteUbergraph_BP_ShovelHole_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
