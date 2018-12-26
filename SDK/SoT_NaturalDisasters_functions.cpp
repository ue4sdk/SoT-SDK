// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NaturalDisasters_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NaturalDisasters.Earthquake.OnRep_EarthquakeState
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<EEarthquakeState>  OldEarthquakeState             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AEarthquake::OnRep_EarthquakeState(TEnumAsByte<EEarthquakeState> OldEarthquakeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Earthquake.OnRep_EarthquakeState");

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
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Geyser.OnRep_GeyserState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.Geyser.Multicast_TriggerExplosion
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void AGeyser::Multicast_TriggerExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Geyser.Multicast_TriggerExplosion");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.LavaZone.OnRep_ActorsInZone
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<class AActor*>          PreviousActors                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ALavaZone::OnRep_ActorsInZone(TArray<class AActor*> PreviousActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.LavaZone.OnRep_ActorsInZone");

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
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.LavaZone.OnRep_Active");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.SuperheatedWater.OnRep_PlayersInZone
// (Final, Native, Private)

void ASuperheatedWater::OnRep_PlayersInZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.SuperheatedWater.OnRep_PlayersInZone");

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
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Volcano.OnRep_VolcanoState");

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
// class UClass*                  ProjectileType                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AuthoritySpawnLocation         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 LaunchVelocity                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 RotationRate                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ProjectileGravityScale         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseEvent*             LaunchAudioPlayEvent           (Parm, ZeroConstructor, IsPlainOldData)

void AVolcano::Multicast_FireProjectile(class UClass* ProjectileType, const struct FVector& AuthoritySpawnLocation, const struct FVector& LaunchVelocity, const struct FVector& RotationRate, float ProjectileGravityScale, class UWwiseEvent* LaunchAudioPlayEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Volcano.Multicast_FireProjectile");

	struct
	{
		class UClass*                  ProjectileType;
		struct FVector                 AuthoritySpawnLocation;
		struct FVector                 LaunchVelocity;
		struct FVector                 RotationRate;
		float                          ProjectileGravityScale;
		class UWwiseEvent*             LaunchAudioPlayEvent;
	} params;

	params.ProjectileType = ProjectileType;
	params.AuthoritySpawnLocation = AuthoritySpawnLocation;
	params.LaunchVelocity = LaunchVelocity;
	params.RotationRate = RotationRate;
	params.ProjectileGravityScale = ProjectileGravityScale;
	params.LaunchAudioPlayEvent = LaunchAudioPlayEvent;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
