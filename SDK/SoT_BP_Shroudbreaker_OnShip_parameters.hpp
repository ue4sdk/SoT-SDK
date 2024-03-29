#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shroudbreaker_OnShip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetShroudBreakerObjectEmitterComponent
struct ABP_Shroudbreaker_OnShip_C_GetShroudBreakerObjectEmitterComponent_Params
{
	UWwiseEmitterComponent*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetShipHullAudio
struct ABP_Shroudbreaker_OnShip_C_GetShipHullAudio_Params
{
	AShipHullAudio*                                    ShipHullAudioRef;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_ShroudBreakerDeactivate
struct ABP_Shroudbreaker_OnShip_C_OnRep_ShroudBreakerDeactivate_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_ShroudBreakerEffectsActive
struct ABP_Shroudbreaker_OnShip_C_OnRep_ShroudBreakerEffectsActive_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_MusicZoneActive
struct ABP_Shroudbreaker_OnShip_C_OnRep_MusicZoneActive_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.UnregisterShipEvent
struct ABP_Shroudbreaker_OnShip_C_UnregisterShipEvent_Params
{
	FObjectMessagingDispatcherHandle                   Dispatcher;                                               // (Parm, OutParm, ReferenceParm)
	FObjectMessagingHandle                             Handle;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetObjMsgDispatcher
struct ABP_Shroudbreaker_OnShip_C_GetObjMsgDispatcher_Params
{
	FObjectMessagingDispatcherHandle                   Dispatcher;                                               // (Parm, OutParm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.UserConstructionScript
struct ABP_Shroudbreaker_OnShip_C_UserConstructionScript_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ReceiveBeginPlay
struct ABP_Shroudbreaker_OnShip_C_ReceiveBeginPlay_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ReceiveEndPlay
struct ABP_Shroudbreaker_OnShip_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudbreakerActivated
struct ABP_Shroudbreaker_OnShip_C_OnShroudbreakerActivated_Params
{
	FShroudBreakerActivatedEvent                       Ev;                                                       // (Parm)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudbreakerDeactivated
struct ABP_Shroudbreaker_OnShip_C_OnShroudbreakerDeactivated_Params
{
	FShroudBreakerDeactivatedEvent                     Ev;                                                       // (Parm)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShipDestroyed
struct ABP_Shroudbreaker_OnShip_C_OnShipDestroyed_Params
{
	FEventShipDestroyed                                Ev;                                                       // (Parm)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnActivateEffects
struct ABP_Shroudbreaker_OnShip_C_OnActivateEffects_Params
{
	FShroudBreakerActivateEffectsEvent                 Ev;                                                       // (Parm)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnDeactivateEffects
struct ABP_Shroudbreaker_OnShip_C_OnDeactivateEffects_Params
{
	FShroudBreakerDeactivateEffectsEvent               Ev;                                                       // (Parm)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.PlayerEnteredTP
struct ABP_Shroudbreaker_OnShip_C_PlayerEnteredTP_Params
{
	FEventPlayerEnteredIslandVicinity                  Ev;                                                       // (Parm)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.PlayerLeftTP
struct ABP_Shroudbreaker_OnShip_C_PlayerLeftTP_Params
{
	FEventPlayerLeftIslandVicinity                     Ev;                                                       // (Parm)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRepFunctionDeactivateShroudBreaker
struct ABP_Shroudbreaker_OnShip_C_OnRepFunctionDeactivateShroudBreaker_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudBreakerActivationStateChange
struct ABP_Shroudbreaker_OnShip_C_OnShroudBreakerActivationStateChange_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 4 Activation
struct ABP_Shroudbreaker_OnShip_C_Stage_4_Activation_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 3 Activation
struct ABP_Shroudbreaker_OnShip_C_Stage_3_Activation_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 2 Activation
struct ABP_Shroudbreaker_OnShip_C_Stage_2_Activation_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage1Activation
struct ABP_Shroudbreaker_OnShip_C_Stage1Activation_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivate All VFX and SFX
struct ABP_Shroudbreaker_OnShip_C_Deactivate_All_VFX_and_SFX_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 4
struct ABP_Shroudbreaker_OnShip_C_Deactivation_Stage_4_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 3
struct ABP_Shroudbreaker_OnShip_C_Deactivation_Stage_3_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 2
struct ABP_Shroudbreaker_OnShip_C_Deactivation_Stage_2_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 1
struct ABP_Shroudbreaker_OnShip_C_Deactivation_Stage_1_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ExecuteUbergraph_BP_Shroudbreaker_OnShip
struct ABP_Shroudbreaker_OnShip_C_ExecuteUbergraph_BP_Shroudbreaker_OnShip_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
