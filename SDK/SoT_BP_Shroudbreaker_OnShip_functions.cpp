// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shroudbreaker_OnShip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetShroudBreakerObjectEmitterComponent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// UWwiseEmitterComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UWwiseEmitterComponent* ABP_Shroudbreaker_OnShip_C::GetShroudBreakerObjectEmitterComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetShroudBreakerObjectEmitterComponent"));

	ABP_Shroudbreaker_OnShip_C_GetShroudBreakerObjectEmitterComponent_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetShipHullAudio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// AShipHullAudio*                ShipHullAudioRef               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Shroudbreaker_OnShip_C::GetShipHullAudio(AShipHullAudio** ShipHullAudioRef)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetShipHullAudio"));

	ABP_Shroudbreaker_OnShip_C_GetShipHullAudio_Params params;

	UObject::ProcessEvent(fn, &params);

	if (ShipHullAudioRef != nullptr)
		*ShipHullAudioRef = params.ShipHullAudioRef;
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_ShroudBreakerDeactivate
// (BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::OnRep_ShroudBreakerDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_ShroudBreakerDeactivate"));

	ABP_Shroudbreaker_OnShip_C_OnRep_ShroudBreakerDeactivate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_ShroudBreakerEffectsActive
// (BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::OnRep_ShroudBreakerEffectsActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_ShroudBreakerEffectsActive"));

	ABP_Shroudbreaker_OnShip_C_OnRep_ShroudBreakerEffectsActive_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_MusicZoneActive
// (BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::OnRep_MusicZoneActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_MusicZoneActive"));

	ABP_Shroudbreaker_OnShip_C_OnRep_MusicZoneActive_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.UnregisterShipEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle Dispatcher                     (Parm, OutParm, ReferenceParm)
// FObjectMessagingHandle         Handle                         (Parm, OutParm, ReferenceParm)

void ABP_Shroudbreaker_OnShip_C::UnregisterShipEvent(FObjectMessagingDispatcherHandle* Dispatcher, FObjectMessagingHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.UnregisterShipEvent"));

	ABP_Shroudbreaker_OnShip_C_UnregisterShipEvent_Params params;

	UObject::ProcessEvent(fn, &params);

	if (Dispatcher != nullptr)
		*Dispatcher = params.Dispatcher;
	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetObjMsgDispatcher
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle Dispatcher                     (Parm, OutParm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Shroudbreaker_OnShip_C::GetObjMsgDispatcher(FObjectMessagingDispatcherHandle* Dispatcher, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetObjMsgDispatcher"));

	ABP_Shroudbreaker_OnShip_C_GetObjMsgDispatcher_Params params;

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

	ABP_Shroudbreaker_OnShip_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ReceiveBeginPlay"));

	ABP_Shroudbreaker_OnShip_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Shroudbreaker_OnShip_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ReceiveEndPlay"));

	ABP_Shroudbreaker_OnShip_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudbreakerActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FShroudBreakerActivatedEvent   Ev                             (Parm)

void ABP_Shroudbreaker_OnShip_C::OnShroudbreakerActivated(const FShroudBreakerActivatedEvent& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudbreakerActivated"));

	ABP_Shroudbreaker_OnShip_C_OnShroudbreakerActivated_Params params;
	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudbreakerDeactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FShroudBreakerDeactivatedEvent Ev                             (Parm)

void ABP_Shroudbreaker_OnShip_C::OnShroudbreakerDeactivated(const FShroudBreakerDeactivatedEvent& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudbreakerDeactivated"));

	ABP_Shroudbreaker_OnShip_C_OnShroudbreakerDeactivated_Params params;
	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShipDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEventShipDestroyed            Ev                             (Parm)

void ABP_Shroudbreaker_OnShip_C::OnShipDestroyed(const FEventShipDestroyed& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShipDestroyed"));

	ABP_Shroudbreaker_OnShip_C_OnShipDestroyed_Params params;
	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnActivateEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FShroudBreakerActivateEffectsEvent Ev                             (Parm)

void ABP_Shroudbreaker_OnShip_C::OnActivateEffects(const FShroudBreakerActivateEffectsEvent& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnActivateEffects"));

	ABP_Shroudbreaker_OnShip_C_OnActivateEffects_Params params;
	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnDeactivateEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FShroudBreakerDeactivateEffectsEvent Ev                             (Parm)

void ABP_Shroudbreaker_OnShip_C::OnDeactivateEffects(const FShroudBreakerDeactivateEffectsEvent& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnDeactivateEffects"));

	ABP_Shroudbreaker_OnShip_C_OnDeactivateEffects_Params params;
	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.PlayerEnteredTP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEventPlayerEnteredIslandVicinity Ev                             (Parm)

void ABP_Shroudbreaker_OnShip_C::PlayerEnteredTP(const FEventPlayerEnteredIslandVicinity& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.PlayerEnteredTP"));

	ABP_Shroudbreaker_OnShip_C_PlayerEnteredTP_Params params;
	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.PlayerLeftTP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEventPlayerLeftIslandVicinity Ev                             (Parm)

void ABP_Shroudbreaker_OnShip_C::PlayerLeftTP(const FEventPlayerLeftIslandVicinity& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.PlayerLeftTP"));

	ABP_Shroudbreaker_OnShip_C_PlayerLeftTP_Params params;
	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRepFunctionDeactivateShroudBreaker
// (BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::OnRepFunctionDeactivateShroudBreaker()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRepFunctionDeactivateShroudBreaker"));

	ABP_Shroudbreaker_OnShip_C_OnRepFunctionDeactivateShroudBreaker_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudBreakerActivationStateChange
// (Event, Protected, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::OnShroudBreakerActivationStateChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudBreakerActivationStateChange"));

	ABP_Shroudbreaker_OnShip_C_OnShroudBreakerActivationStateChange_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 4 Activation
// (BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::Stage_4_Activation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 4 Activation"));

	ABP_Shroudbreaker_OnShip_C_Stage_4_Activation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 3 Activation
// (BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::Stage_3_Activation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 3 Activation"));

	ABP_Shroudbreaker_OnShip_C_Stage_3_Activation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 2 Activation
// (BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::Stage_2_Activation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 2 Activation"));

	ABP_Shroudbreaker_OnShip_C_Stage_2_Activation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage1Activation
// (BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::Stage1Activation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage1Activation"));

	ABP_Shroudbreaker_OnShip_C_Stage1Activation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivate All VFX and SFX
// (BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::Deactivate_All_VFX_and_SFX()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivate All VFX and SFX"));

	ABP_Shroudbreaker_OnShip_C_Deactivate_All_VFX_and_SFX_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 4
// (BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::Deactivation_Stage_4()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 4"));

	ABP_Shroudbreaker_OnShip_C_Deactivation_Stage_4_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 3
// (BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::Deactivation_Stage_3()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 3"));

	ABP_Shroudbreaker_OnShip_C_Deactivation_Stage_3_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 2
// (BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::Deactivation_Stage_2()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 2"));

	ABP_Shroudbreaker_OnShip_C_Deactivation_Stage_2_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 1
// (BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_OnShip_C::Deactivation_Stage_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 1"));

	ABP_Shroudbreaker_OnShip_C_Deactivation_Stage_1_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ExecuteUbergraph_BP_Shroudbreaker_OnShip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Shroudbreaker_OnShip_C::ExecuteUbergraph_BP_Shroudbreaker_OnShip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ExecuteUbergraph_BP_Shroudbreaker_OnShip"));

	ABP_Shroudbreaker_OnShip_C_ExecuteUbergraph_BP_Shroudbreaker_OnShip_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
