// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NaturalDisasters_parameters.hpp"

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

	AAshenLordAshCloud_UpdatePostSettingsBP_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.AshenLordAshCloud.SetDissipationDensityBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CloudDensity                   (Parm, ZeroConstructor, IsPlainOldData)

void AAshenLordAshCloud::SetDissipationDensityBP(float CloudDensity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.AshenLordAshCloud.SetDissipationDensityBP"));

	AAshenLordAshCloud_SetDissipationDensityBP_Params params;
	params.CloudDensity = CloudDensity;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.AshenLordAshCloud.OnRep_StateChanged
// (Final, Native, Private)

void AAshenLordAshCloud::OnRep_StateChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.AshenLordAshCloud.OnRep_StateChanged"));

	AAshenLordAshCloud_OnRep_StateChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.AshenLordVolcano.Multicast_FireProjectile
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
// Parameters:
// int                            WeightedVolcanoProjectileIndex (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FVector                        AuthoritySpawnLocation         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FVector                        LaunchVelocity                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FVector                        RotationRate                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AAshenLordVolcano::Multicast_FireProjectile(int WeightedVolcanoProjectileIndex, const FVector& AuthoritySpawnLocation, const FVector& LaunchVelocity, const FVector& RotationRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.AshenLordVolcano.Multicast_FireProjectile"));

	AAshenLordVolcano_Multicast_FireProjectile_Params params;
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

	AAshenLordWorldEndCloud_OnRep_CloudStateChange_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.AshenLordWorldEndCloud.AnimateCloud
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          AdjustedLifetime               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAshenLordWorldEndCloud::AnimateCloud(float AdjustedLifetime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.AshenLordWorldEndCloud.AnimateCloud"));

	AAshenLordWorldEndCloud_AnimateCloud_Params params;
	params.AdjustedLifetime = AdjustedLifetime;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.Geyser.OnRep_GeyserState
// (Final, Native, Private)

void AGeyser::OnRep_GeyserState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.Geyser.OnRep_GeyserState"));

	AGeyser_OnRep_GeyserState_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.Geyser.Multicast_TriggerExplosion
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void AGeyser::Multicast_TriggerExplosion()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.Geyser.Multicast_TriggerExplosion"));

	AGeyser_Multicast_TriggerExplosion_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.DisableGeyserMechanismAction.OnActionStateChanged
// (Native, Public)
// Parameters:
// TScriptInterface<class UMechanismActionInterface> Action                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMechanismActionState> PreviousState                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMechanismActionState> NewState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        InInstigator                   (Parm, ZeroConstructor, IsPlainOldData)

void ADisableGeyserMechanismAction::OnActionStateChanged(const TScriptInterface<class UMechanismActionInterface>& Action, TEnumAsByte<EMechanismActionState> PreviousState, TEnumAsByte<EMechanismActionState> NewState, AActor* InInstigator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.DisableGeyserMechanismAction.OnActionStateChanged"));

	ADisableGeyserMechanismAction_OnActionStateChanged_Params params;
	params.Action = Action;
	params.PreviousState = PreviousState;
	params.NewState = NewState;
	params.InInstigator = InInstigator;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.DisableGeyserMechanismAction.OnActionReset
// (Native, Public)
// Parameters:
// TScriptInterface<class UMechanismResetInterface> Mechanism                      (Parm, ZeroConstructor, IsPlainOldData)

void ADisableGeyserMechanismAction::OnActionReset(const TScriptInterface<class UMechanismResetInterface>& Mechanism)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.DisableGeyserMechanismAction.OnActionReset"));

	ADisableGeyserMechanismAction_OnActionReset_Params params;
	params.Mechanism = Mechanism;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.Earthquake.OnRep_EarthquakeState
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<EEarthquakeState>  OldEarthquakeState             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AEarthquake::OnRep_EarthquakeState(TEnumAsByte<EEarthquakeState> OldEarthquakeState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.Earthquake.OnRep_EarthquakeState"));

	AEarthquake_OnRep_EarthquakeState_Params params;
	params.OldEarthquakeState = OldEarthquakeState;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.MechanismGeyser.OnMechanismActionStateChanged
// (Final, Native, Public)
// Parameters:
// TScriptInterface<class UMechanismActionInterface> Action                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMechanismActionState> PreviousState                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMechanismActionState> NewState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        InInstigator                   (Parm, ZeroConstructor, IsPlainOldData)

void AMechanismGeyser::OnMechanismActionStateChanged(const TScriptInterface<class UMechanismActionInterface>& Action, TEnumAsByte<EMechanismActionState> PreviousState, TEnumAsByte<EMechanismActionState> NewState, AActor* InInstigator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.MechanismGeyser.OnMechanismActionStateChanged"));

	AMechanismGeyser_OnMechanismActionStateChanged_Params params;
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

	AMechanismGeyser_OnMechanismActionReset_Params params;
	params.Action = Action;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.GeyserItemSpawnComponent.OnGeyserSpawned
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// FVector                        GeyserSpawnLocation            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UGeyserItemSpawnComponent::OnGeyserSpawned(const FVector& GeyserSpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.GeyserItemSpawnComponent.OnGeyserSpawned"));

	UGeyserItemSpawnComponent_OnGeyserSpawned_Params params;
	params.GeyserSpawnLocation = GeyserSpawnLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.LavaZone.OnRep_ActorsInZone
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<AActor*>                PreviousActors                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ALavaZone::OnRep_ActorsInZone(TArray<AActor*> PreviousActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.LavaZone.OnRep_ActorsInZone"));

	ALavaZone_OnRep_ActorsInZone_Params params;
	params.PreviousActors = PreviousActors;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.LavaZone.OnRep_Active
// (Final, Native, Private)

void ALavaZone::OnRep_Active()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.LavaZone.OnRep_Active"));

	ALavaZone_OnRep_Active_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.SuperheatedWater.OnRep_PlayersInZone
// (Final, Native, Private)

void ASuperheatedWater::OnRep_PlayersInZone()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.SuperheatedWater.OnRep_PlayersInZone"));

	ASuperheatedWater_OnRep_PlayersInZone_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.Volcano.OnRep_VolcanoState
// (Final, Native, Private)
// Parameters:
// FVolcanoStateData              OldVolcanoState                (ConstParm, Parm)

void AVolcano::OnRep_VolcanoState(const FVolcanoStateData& OldVolcanoState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.Volcano.OnRep_VolcanoState"));

	AVolcano_OnRep_VolcanoState_Params params;
	params.OldVolcanoState = OldVolcanoState;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.Volcano.Multicast_FireProjectile
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
// Parameters:
// FVector                        AuthoritySpawnLocation         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<FVolcanoProjectileData> VolcanoProjectileDataArray     (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AVolcano::Multicast_FireProjectile(const FVector& AuthoritySpawnLocation, TArray<FVolcanoProjectileData> VolcanoProjectileDataArray)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NaturalDisasters.Volcano.Multicast_FireProjectile"));

	AVolcano_Multicast_FireProjectile_Params params;
	params.AuthoritySpawnLocation = AuthoritySpawnLocation;
	params.VolcanoProjectileDataArray = VolcanoProjectileDataArray;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
