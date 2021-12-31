// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Castaway_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Castaway.BP_Castaway_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Castaway_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Castaway.BP_Castaway_C.UserConstructionScript"));

	ABP_Castaway_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Castaway.BP_Castaway_C.TriggerAudioEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWwiseEvent*             AudioEvent                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Castaway_C::TriggerAudioEvent(class UWwiseEvent* AudioEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Castaway.BP_Castaway_C.TriggerAudioEvent"));

	ABP_Castaway_C_TriggerAudioEvent_Params params;
	params.AudioEvent = AudioEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Castaway.BP_Castaway_C.StopCurrentAudioEvent
// (Event, Public, BlueprintEvent)

void ABP_Castaway_C::StopCurrentAudioEvent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Castaway.BP_Castaway_C.StopCurrentAudioEvent"));

	ABP_Castaway_C_StopCurrentAudioEvent_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Castaway.BP_Castaway_C.Multicast_TriggerAudioEvent
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EventIdx                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Castaway_C::Multicast_TriggerAudioEvent(int EventIdx)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Castaway.BP_Castaway_C.Multicast_TriggerAudioEvent"));

	ABP_Castaway_C_Multicast_TriggerAudioEvent_Params params;
	params.EventIdx = EventIdx;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Castaway.BP_Castaway_C.ResetVisibility
// (Event, Public, BlueprintEvent)

void ABP_Castaway_C::ResetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Castaway.BP_Castaway_C.ResetVisibility"));

	ABP_Castaway_C_ResetVisibility_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Castaway.BP_Castaway_C.ExecuteUbergraph_BP_Castaway
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Castaway_C::ExecuteUbergraph_BP_Castaway(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Castaway.BP_Castaway_C.ExecuteUbergraph_BP_Castaway"));

	ABP_Castaway_C_ExecuteUbergraph_BP_Castaway_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
