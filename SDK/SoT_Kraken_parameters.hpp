#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Kraken_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Kraken.KrakenTentacle.OnDamageToTentacle
struct AKrakenTentacle_OnDamageToTentacle_Params
{
	FImpactDamageEvent                                 ImpactDamageEvent;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Kraken.Murk.DeactivateMurkBP
struct AMurk_DeactivateMurkBP_Params
{
};

// Function Kraken.Murk.ActivateMurkBP
struct AMurk_ActivateMurkBP_Params
{
};

// Function Kraken.KrakenShipWrappingTentacle.OnRep_CurrentServerAnimationState
struct AKrakenShipWrappingTentacle_OnRep_CurrentServerAnimationState_Params
{
};

// Function Kraken.Kraken.Multicast_OnTentacleTakenDamage
struct AKraken_Multicast_OnTentacleTakenDamage_Params
{
};

// Function Kraken.Kraken.AddActorToKnownTargets
struct AKraken_AddActorToKnownTargets_Params
{
	AActor*                                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Kraken.KrakenHead.RequestState
struct AKrakenHead_RequestState_Params
{
	UClass*                                            NewState;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Kraken.KrakenHead.OnRep_IsDamageEnabled
struct AKrakenHead_OnRep_IsDamageEnabled_Params
{
};

// Function Kraken.KrakenHead.OnRep_HeadStateRequest
struct AKrakenHead_OnRep_HeadStateRequest_Params
{
};

// Function Kraken.KrakenHead.OnCoordinatedKrakenSpecialEvent
struct AKrakenHead_OnCoordinatedKrakenSpecialEvent_Params
{
	TEnumAsByte<ECoordinatedKrakenSpecialEventTypes>   InEventType;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Kraken.KrakenService.RequestKrakenWithLocation
struct AKrakenService_RequestKrakenWithLocation_Params
{
	FVector                                            SpawnLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	AActor*                                            SpawnedForActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Kraken.KrakenService.IsServiceInitialized
struct AKrakenService_IsServiceInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Kraken.KrakenService.IsKrakenActive
struct AKrakenService_IsKrakenActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Kraken.KrakenService.DismissKraken
struct AKrakenService_DismissKraken_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
