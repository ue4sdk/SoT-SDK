// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shroudbreaker_OnShip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_ShroudBreakerDeactivate
// (BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::OnRep_ShroudBreakerDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_ShroudBreakerDeactivate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_ShroudBreakerEffectsActive
// (BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::OnRep_ShroudBreakerEffectsActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_ShroudBreakerEffectsActive"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_MusicZoneActive
// (BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::OnRep_MusicZoneActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_MusicZoneActive"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.UnregisterShipEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle Dispatcher                     (Parm, OutParm, ReferenceParm)
// struct FObjectMessagingHandle  Handle                         (Parm, OutParm, ReferenceParm)

void ABP_Shroudbreaker_OnShip_C::UnregisterShipEvent(struct FObjectMessagingDispatcherHandle* Dispatcher, struct FObjectMessagingHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.UnregisterShipEvent"));

	struct
	{
		struct FObjectMessagingDispatcherHandle Dispatcher;
		struct FObjectMessagingHandle  Handle;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Dispatcher != nullptr)
		*Dispatcher = params.Dispatcher;
	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetObjMsgDispatcher
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle Dispatcher                     (Parm, OutParm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Shroudbreaker_OnShip_C::GetObjMsgDispatcher(struct FObjectMessagingDispatcherHandle* Dispatcher, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetObjMsgDispatcher"));

	struct
	{
		struct FObjectMessagingDispatcherHandle Dispatcher;
		bool                           Success;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Dispatcher != nullptr)
		*Dispatcher = params.Dispatcher;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Shroudbreaker_OnShip_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudbreakerActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShroudBreakerActivatedEvent Ev                             (Parm)

void ABP_Shroudbreaker_OnShip_C::OnShroudbreakerActivated(const struct FShroudBreakerActivatedEvent& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudbreakerActivated"));

	struct
	{
		struct FShroudBreakerActivatedEvent Ev;
	} params;

	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudbreakerDeactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShroudBreakerDeactivatedEvent Ev                             (Parm)

void ABP_Shroudbreaker_OnShip_C::OnShroudbreakerDeactivated(const struct FShroudBreakerDeactivatedEvent& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudbreakerDeactivated"));

	struct
	{
		struct FShroudBreakerDeactivatedEvent Ev;
	} params;

	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShipDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventShipDestroyed     Ev                             (Parm)

void ABP_Shroudbreaker_OnShip_C::OnShipDestroyed(const struct FEventShipDestroyed& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShipDestroyed"));

	struct
	{
		struct FEventShipDestroyed     Ev;
	} params;

	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnActivateEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShroudBreakerActivateEffectsEvent Ev                             (Parm)

void ABP_Shroudbreaker_OnShip_C::OnActivateEffects(const struct FShroudBreakerActivateEffectsEvent& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnActivateEffects"));

	struct
	{
		struct FShroudBreakerActivateEffectsEvent Ev;
	} params;

	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnDeactivateEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShroudBreakerDeactivateEffectsEvent Ev                             (Parm)

void ABP_Shroudbreaker_OnShip_C::OnDeactivateEffects(const struct FShroudBreakerDeactivateEffectsEvent& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnDeactivateEffects"));

	struct
	{
		struct FShroudBreakerDeactivateEffectsEvent Ev;
	} params;

	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.PlayerEnteredTP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerEnteredIslandVicinity Ev                             (Parm)

void ABP_Shroudbreaker_OnShip_C::PlayerEnteredTP(const struct FEventPlayerEnteredIslandVicinity& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.PlayerEnteredTP"));

	struct
	{
		struct FEventPlayerEnteredIslandVicinity Ev;
	} params;

	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.PlayerLeftTP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerLeftIslandVicinity Ev                             (Parm)

void ABP_Shroudbreaker_OnShip_C::PlayerLeftTP(const struct FEventPlayerLeftIslandVicinity& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.PlayerLeftTP"));

	struct
	{
		struct FEventPlayerLeftIslandVicinity Ev;
	} params;

	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRepFunctionDeactivateShroudBreaker
// (BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::OnRepFunctionDeactivateShroudBreaker()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRepFunctionDeactivateShroudBreaker"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudBreakerStateChange
// (Event, Public, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::OnShroudBreakerStateChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudBreakerStateChange"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.TestState
// (BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::TestState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.TestState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ExecuteUbergraph_BP_Shroudbreaker_OnShip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Shroudbreaker_OnShip_C::ExecuteUbergraph_BP_Shroudbreaker_OnShip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ExecuteUbergraph_BP_Shroudbreaker_OnShip"));

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
