#pragma once

// Sea of Thieves (1.4) SDK

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
	struct FImpactDamageEvent                          ImpactDamageEvent;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
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
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Kraken.KrakenService.RequestKrakenWithLocation
struct AKrakenService_RequestKrakenWithLocation_Params
{
	struct FVector                                     SpawnLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      SpawnedForActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
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
