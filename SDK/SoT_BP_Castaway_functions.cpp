// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Castaway_classes.hpp"

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Castaway.BP_Castaway_C.TriggerAudioEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWwiseEvent*             AudioEvent                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Castaway_C::TriggerAudioEvent(class UWwiseEvent* AudioEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Castaway.BP_Castaway_C.TriggerAudioEvent"));

	struct
	{
		class UWwiseEvent*             AudioEvent;
	} params;

	params.AudioEvent = AudioEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Castaway.BP_Castaway_C.StopCurrentAudioEvent
// (Event, Public, BlueprintEvent)

void ABP_Castaway_C::StopCurrentAudioEvent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Castaway.BP_Castaway_C.StopCurrentAudioEvent"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Castaway.BP_Castaway_C.Multicast_TriggerAudioEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EventIdx                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Castaway_C::Multicast_TriggerAudioEvent(int EventIdx)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Castaway.BP_Castaway_C.Multicast_TriggerAudioEvent"));

	struct
	{
		int                            EventIdx;
	} params;

	params.EventIdx = EventIdx;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Castaway.BP_Castaway_C.ResetVisibility
// (Event, Public, BlueprintEvent)

void ABP_Castaway_C::ResetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Castaway.BP_Castaway_C.ResetVisibility"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Castaway.BP_Castaway_C.ExecuteUbergraph_BP_Castaway
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Castaway_C::ExecuteUbergraph_BP_Castaway(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Castaway.BP_Castaway_C.ExecuteUbergraph_BP_Castaway"));

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
