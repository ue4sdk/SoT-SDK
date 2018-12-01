#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NaturalDisasters_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NaturalDisasters.Earthquake.OnRep_EarthquakeState
struct AEarthquake_OnRep_EarthquakeState_Params
{
	TEnumAsByte<EEarthquakeState>                      OldEarthquakeState;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NaturalDisasters.Geyser.OnRep_GeyserState
struct AGeyser_OnRep_GeyserState_Params
{
};

// Function NaturalDisasters.Geyser.Multicast_TriggerExplosion
struct AGeyser_Multicast_TriggerExplosion_Params
{
};

// Function NaturalDisasters.LavaZone.OnRep_ActorsInZone
struct ALavaZone_OnRep_ActorsInZone_Params
{
	TArray<class AActor*>                              PreviousActors;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function NaturalDisasters.LavaZone.OnRep_Active
struct ALavaZone_OnRep_Active_Params
{
};

// Function NaturalDisasters.SuperheatedWater.OnRep_PlayersInZone
struct ASuperheatedWater_OnRep_PlayersInZone_Params
{
};

// Function NaturalDisasters.Volcano.OnRep_VolcanoState
struct AVolcano_OnRep_VolcanoState_Params
{
	struct FVolcanoStateData                           OldVolcanoState;                                          // (ConstParm, Parm)
};

// Function NaturalDisasters.Volcano.Multicast_FireProjectile
struct AVolcano_Multicast_FireProjectile_Params
{
	class UClass*                                      ProjectileType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AuthoritySpawnLocation;                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     LaunchVelocity;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     RotationRate;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ProjectileGravityScale;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 LaunchAudioPlayEvent;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
