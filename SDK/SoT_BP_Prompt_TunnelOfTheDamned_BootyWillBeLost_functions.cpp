// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.On Crew Entered Radius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCrewEnteredTunnelOfTheDamnedPortalProximityEvent Event                          (Parm)

void UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C::On_Crew_Entered_Radius(const struct FCrewEnteredTunnelOfTheDamnedPortalProximityEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.On Crew Entered Radius"));

	struct
	{
		struct FCrewEnteredTunnelOfTheDamnedPortalProximityEvent Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.RegisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.Crew Entered Tunnel of The Damned Portal Proximity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCrewEnteredTunnelOfTheDamnedPortalProximityEvent Event                          (Parm)

void UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C::Crew_Entered_Tunnel_of_The_Damned_Portal_Proximity(const struct FCrewEnteredTunnelOfTheDamnedPortalProximityEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.Crew Entered Tunnel of The Damned Portal Proximity"));

	struct
	{
		struct FCrewEnteredTunnelOfTheDamnedPortalProximityEvent Event;
	} params;

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
