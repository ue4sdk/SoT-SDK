// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.On Crew Entered Radius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FCrewEnteredTunnelOfTheDamnedPortalProximityEvent Event                          (Parm)

void UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C::On_Crew_Entered_Radius(const FCrewEnteredTunnelOfTheDamnedPortalProximityEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.On Crew Entered Radius"));

	UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C_On_Crew_Entered_Radius_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.Evaluate"));

	UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.RegisterOtherEvents_Implementable"));

	UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C_RegisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.UnregisterOtherEvents_Implementable"));

	UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C_UnregisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.Crew Entered Tunnel of The Damned Portal Proximity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FCrewEnteredTunnelOfTheDamnedPortalProximityEvent Event                          (Parm)

void UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C::Crew_Entered_Tunnel_of_The_Damned_Portal_Proximity(const FCrewEnteredTunnelOfTheDamnedPortalProximityEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.Crew Entered Tunnel of The Damned Portal Proximity"));

	UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C_Crew_Entered_Tunnel_of_The_Damned_Portal_Proximity_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.ExecuteUbergraph_BP_Prompt_TunnelOfTheDamned_BootyWillBeLost
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C::ExecuteUbergraph_BP_Prompt_TunnelOfTheDamned_BootyWillBeLost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.ExecuteUbergraph_BP_Prompt_TunnelOfTheDamned_BootyWillBeLost"));

	UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C_ExecuteUbergraph_BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
