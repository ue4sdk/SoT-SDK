// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Kraken_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Kraken.KrakenTentacle.OnDamageToTentacle
// (Final, Native, Public, HasOutParms)
// Parameters:
// FImpactDamageEvent             ImpactDamageEvent              (ConstParm, Parm, OutParm, ReferenceParm)

void AKrakenTentacle::OnDamageToTentacle(const FImpactDamageEvent& ImpactDamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Kraken.KrakenTentacle.OnDamageToTentacle"));

	AKrakenTentacle_OnDamageToTentacle_Params params;
	params.ImpactDamageEvent = ImpactDamageEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function Kraken.Murk.DeactivateMurkBP
// (Final, Native, Public, BlueprintCallable)

void AMurk::DeactivateMurkBP()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Kraken.Murk.DeactivateMurkBP"));

	AMurk_DeactivateMurkBP_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Kraken.Murk.ActivateMurkBP
// (Final, Native, Public, BlueprintCallable)

void AMurk::ActivateMurkBP()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Kraken.Murk.ActivateMurkBP"));

	AMurk_ActivateMurkBP_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Kraken.KrakenShipWrappingTentacle.OnRep_CurrentServerAnimationState
// (Final, Native, Private)

void AKrakenShipWrappingTentacle::OnRep_CurrentServerAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Kraken.KrakenShipWrappingTentacle.OnRep_CurrentServerAnimationState"));

	AKrakenShipWrappingTentacle_OnRep_CurrentServerAnimationState_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Kraken.Kraken.Multicast_OnTentacleTakenDamage
// (Final, Net, Native, Event, NetMulticast, Private)

void AKraken::Multicast_OnTentacleTakenDamage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Kraken.Kraken.Multicast_OnTentacleTakenDamage"));

	AKraken_Multicast_OnTentacleTakenDamage_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Kraken.Kraken.AddActorToKnownTargets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// AActor*                        Target                         (Parm, ZeroConstructor, IsPlainOldData)

void AKraken::AddActorToKnownTargets(AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Kraken.Kraken.AddActorToKnownTargets"));

	AKraken_AddActorToKnownTargets_Params params;
	params.Target = Target;

	UObject::ProcessEvent(fn, &params);
}


// Function Kraken.KrakenHead.RequestState
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UClass*                        NewState                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AKrakenHead::RequestState(UClass* NewState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Kraken.KrakenHead.RequestState"));

	AKrakenHead_RequestState_Params params;
	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function Kraken.KrakenHead.OnRep_IsDamageEnabled
// (Final, Native, Protected)

void AKrakenHead::OnRep_IsDamageEnabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Kraken.KrakenHead.OnRep_IsDamageEnabled"));

	AKrakenHead_OnRep_IsDamageEnabled_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Kraken.KrakenHead.OnRep_HeadStateRequest
// (Final, Native, Protected)

void AKrakenHead::OnRep_HeadStateRequest()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Kraken.KrakenHead.OnRep_HeadStateRequest"));

	AKrakenHead_OnRep_HeadStateRequest_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Kraken.KrakenHead.OnCoordinatedKrakenSpecialEvent
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<ECoordinatedKrakenSpecialEventTypes> InEventType                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AKrakenHead::OnCoordinatedKrakenSpecialEvent(TEnumAsByte<ECoordinatedKrakenSpecialEventTypes> InEventType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Kraken.KrakenHead.OnCoordinatedKrakenSpecialEvent"));

	AKrakenHead_OnCoordinatedKrakenSpecialEvent_Params params;
	params.InEventType = InEventType;

	UObject::ProcessEvent(fn, &params);
}


// Function Kraken.KrakenService.RequestKrakenWithLocation
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FVector                        SpawnLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// AActor*                        SpawnedForActor                (Parm, ZeroConstructor, IsPlainOldData)

void AKrakenService::RequestKrakenWithLocation(const FVector& SpawnLocation, AActor* SpawnedForActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Kraken.KrakenService.RequestKrakenWithLocation"));

	AKrakenService_RequestKrakenWithLocation_Params params;
	params.SpawnLocation = SpawnLocation;
	params.SpawnedForActor = SpawnedForActor;

	UObject::ProcessEvent(fn, &params);
}


// Function Kraken.KrakenService.IsServiceInitialized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKrakenService::IsServiceInitialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Kraken.KrakenService.IsServiceInitialized"));

	AKrakenService_IsServiceInitialized_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Kraken.KrakenService.IsKrakenActive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKrakenService::IsKrakenActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Kraken.KrakenService.IsKrakenActive"));

	AKrakenService_IsKrakenActive_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Kraken.KrakenService.DismissKraken
// (Native, Public, BlueprintCallable)

void AKrakenService::DismissKraken()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Kraken.KrakenService.DismissKraken"));

	AKrakenService_DismissKraken_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
