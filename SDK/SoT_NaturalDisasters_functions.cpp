// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NaturalDisasters_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NaturalDisasters.AshenLordAshCloud.UpdatePostSettingsBP
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAshenLordAshCloud::UpdatePostSettingsBP()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.AshenLordAshCloud.UpdatePostSettingsBP"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.AshenLordAshCloud.SetDissipationDensityBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CloudDensity                   (Parm, ZeroConstructor, IsPlainOldData)

void AAshenLordAshCloud::SetDissipationDensityBP(float CloudDensity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.AshenLordAshCloud.SetDissipationDensityBP"));

	struct
	{
		float                          CloudDensity;
	} params;

	params.CloudDensity = CloudDensity;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.AshenLordAshCloud.OnRep_StateChanged
// (Final, Native, Private)

void AAshenLordAshCloud::OnRep_StateChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.AshenLordAshCloud.OnRep_StateChanged"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.AshenLordVolcano.Multicast_FireProjectile
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
// Parameters:
// int                            WeightedVolcanoProjectileIndex (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AuthoritySpawnLocation         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 LaunchVelocity                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 RotationRate                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AAshenLordVolcano::Multicast_FireProjectile(int WeightedVolcanoProjectileIndex, const struct FVector& AuthoritySpawnLocation, const struct FVector& LaunchVelocity, const struct FVector& RotationRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.AshenLordVolcano.Multicast_FireProjectile"));

	struct
	{
		int                            WeightedVolcanoProjectileIndex;
		struct FVector                 AuthoritySpawnLocation;
		struct FVector                 LaunchVelocity;
		struct FVector                 RotationRate;
	} params;

	params.WeightedVolcanoProjectileIndex = WeightedVolcanoProjectileIndex;
	params.AuthoritySpawnLocation = AuthoritySpawnLocation;
	params.LaunchVelocity = LaunchVelocity;
	params.RotationRate = RotationRate;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.AshenLordWorldEndCloud.OnRep_CloudStateChange
// (Final, Native, Public)

void AAshenLordWorldEndCloud::OnRep_CloudStateChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.AshenLordWorldEndCloud.OnRep_CloudStateChange"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.AshenLordWorldEndCloud.AnimateCloud
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          AdjustedLifetime               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAshenLordWorldEndCloud::AnimateCloud(float AdjustedLifetime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.AshenLordWorldEndCloud.AnimateCloud"));

	struct
	{
		float                          AdjustedLifetime;
	} params;

	params.AdjustedLifetime = AdjustedLifetime;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.Earthquake.OnRep_EarthquakeState
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<EEarthquakeState>  OldEarthquakeState             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AEarthquake::OnRep_EarthquakeState(TEnumAsByte<EEarthquakeState> OldEarthquakeState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.Earthquake.OnRep_EarthquakeState"));

	struct
	{
		TEnumAsByte<EEarthquakeState>  OldEarthquakeState;
	} params;

	params.OldEarthquakeState = OldEarthquakeState;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.Geyser.OnRep_GeyserState
// (Final, Native, Private)

void AGeyser::OnRep_GeyserState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.Geyser.OnRep_GeyserState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.Geyser.Multicast_TriggerExplosion
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void AGeyser::Multicast_TriggerExplosion()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.Geyser.Multicast_TriggerExplosion"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.MechanismGeyser.OnMechanismActionStateChanged
// (Final, Native, Public)
// Parameters:
// TScriptInterface<class UMechanismActionInterface> Action                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMechanismActionState> PreviousState                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMechanismActionState> NewState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InInstigator                   (Parm, ZeroConstructor, IsPlainOldData)

void AMechanismGeyser::OnMechanismActionStateChanged(const TScriptInterface<class UMechanismActionInterface>& Action, TEnumAsByte<EMechanismActionState> PreviousState, TEnumAsByte<EMechanismActionState> NewState, class AActor* InInstigator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.MechanismGeyser.OnMechanismActionStateChanged"));

	struct
	{
		TScriptInterface<class UMechanismActionInterface> Action;
		TEnumAsByte<EMechanismActionState> PreviousState;
		TEnumAsByte<EMechanismActionState> NewState;
		class AActor*                  InInstigator;
	} params;

	params.Action = Action;
	params.PreviousState = PreviousState;
	params.NewState = NewState;
	params.InInstigator = InInstigator;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.MechanismGeyser.OnMechanismActionReset
// (Final, Native, Private)
// Parameters:
// TScriptInterface<class UMechanismResetInterface> Action                         (Parm, ZeroConstructor, IsPlainOldData)

void AMechanismGeyser::OnMechanismActionReset(const TScriptInterface<class UMechanismResetInterface>& Action)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.MechanismGeyser.OnMechanismActionReset"));

	struct
	{
		TScriptInterface<class UMechanismResetInterface> Action;
	} params;

	params.Action = Action;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.GeyserItemSpawnComponent.OnGeyserSpawned
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 GeyserSpawnLocation            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UGeyserItemSpawnComponent::OnGeyserSpawned(const struct FVector& GeyserSpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.GeyserItemSpawnComponent.OnGeyserSpawned"));

	struct
	{
		struct FVector                 GeyserSpawnLocation;
	} params;

	params.GeyserSpawnLocation = GeyserSpawnLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.LavaZone.OnRep_ActorsInZone
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<class AActor*>          PreviousActors                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ALavaZone::OnRep_ActorsInZone(TArray<class AActor*> PreviousActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.LavaZone.OnRep_ActorsInZone"));

	struct
	{
		TArray<class AActor*>          PreviousActors;
	} params;

	params.PreviousActors = PreviousActors;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.LavaZone.OnRep_Active
// (Final, Native, Private)

void ALavaZone::OnRep_Active()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.LavaZone.OnRep_Active"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.SuperheatedWater.OnRep_PlayersInZone
// (Final, Native, Private)

void ASuperheatedWater::OnRep_PlayersInZone()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.SuperheatedWater.OnRep_PlayersInZone"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.Volcano.OnRep_VolcanoState
// (Final, Native, Private)
// Parameters:
// struct FVolcanoStateData       OldVolcanoState                (ConstParm, Parm)

void AVolcano::OnRep_VolcanoState(const struct FVolcanoStateData& OldVolcanoState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.Volcano.OnRep_VolcanoState"));

	struct
	{
		struct FVolcanoStateData       OldVolcanoState;
	} params;

	params.OldVolcanoState = OldVolcanoState;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.Volcano.Multicast_FireProjectile
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
// Parameters:
// int                            WeightedVolcanoProjectileIndex (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AuthoritySpawnLocation         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 LaunchVelocity                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 RotationRate                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AVolcano::Multicast_FireProjectile(int WeightedVolcanoProjectileIndex, const struct FVector& AuthoritySpawnLocation, const struct FVector& LaunchVelocity, const struct FVector& RotationRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.Volcano.Multicast_FireProjectile"));

	struct
	{
		int                            WeightedVolcanoProjectileIndex;
		struct FVector                 AuthoritySpawnLocation;
		struct FVector                 LaunchVelocity;
		struct FVector                 RotationRate;
	} params;

	params.WeightedVolcanoProjectileIndex = WeightedVolcanoProjectileIndex;
	params.AuthoritySpawnLocation = AuthoritySpawnLocation;
	params.LaunchVelocity = LaunchVelocity;
	params.RotationRate = RotationRate;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
