// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Kraken_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Kraken.KrakenTentacle.OnDamageToTentacle
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FImpactDamageEvent      ImpactDamageEvent              (ConstParm, Parm, OutParm, ReferenceParm)

void AKrakenTentacle::OnDamageToTentacle(const struct FImpactDamageEvent& ImpactDamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Kraken.KrakenTentacle.OnDamageToTentacle"));

	struct
	{
		struct FImpactDamageEvent      ImpactDamageEvent;
	} params;

	params.ImpactDamageEvent = ImpactDamageEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function Kraken.KrakenShipWrappingTentacle.OnRep_CurrentServerAnimationState
// (Final, Native, Private)

void AKrakenShipWrappingTentacle::OnRep_CurrentServerAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Kraken.KrakenShipWrappingTentacle.OnRep_CurrentServerAnimationState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Kraken.Kraken.Multicast_OnTentacleTakenDamage
// (Final, Net, Native, Event, NetMulticast, Private)

void AKraken::Multicast_OnTentacleTakenDamage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Kraken.Kraken.Multicast_OnTentacleTakenDamage"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Kraken.Kraken.AddActorToKnownTargets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void AKraken::AddActorToKnownTargets(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Kraken.Kraken.AddActorToKnownTargets"));

	struct
	{
		class AActor*                  Target;
	} params;

	params.Target = Target;

	UObject::ProcessEvent(fn, &params);
}


// Function Kraken.KrakenService.RequestKrakenWithLocation
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 SpawnLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  SpawnedForActor                (Parm, ZeroConstructor, IsPlainOldData)

void AKrakenService::RequestKrakenWithLocation(const struct FVector& SpawnLocation, class AActor* SpawnedForActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Kraken.KrakenService.RequestKrakenWithLocation"));

	struct
	{
		struct FVector                 SpawnLocation;
		class AActor*                  SpawnedForActor;
	} params;

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

	struct
	{
		bool                           ReturnValue;
	} params;


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

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Kraken.KrakenService.DismissKraken
// (Native, Public, BlueprintCallable)

void AKrakenService::DismissKraken()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Kraken.KrakenService.DismissKraken"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
