#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NaturalDisasters_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NaturalDisasters.AshenLordAshCloud.UpdatePostSettingsBP
struct AAshenLordAshCloud_UpdatePostSettingsBP_Params
{
};

// Function NaturalDisasters.AshenLordAshCloud.SetDissipationDensityBP
struct AAshenLordAshCloud_SetDissipationDensityBP_Params
{
	float                                              CloudDensity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NaturalDisasters.AshenLordAshCloud.OnRep_StateChanged
struct AAshenLordAshCloud_OnRep_StateChanged_Params
{
};

// Function NaturalDisasters.AshenLordVolcano.Multicast_FireProjectile
struct AAshenLordVolcano_Multicast_FireProjectile_Params
{
	int                                                WeightedVolcanoProjectileIndex;                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            AuthoritySpawnLocation;                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FVector                                            LaunchVelocity;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FVector                                            RotationRate;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function NaturalDisasters.AshenLordWorldEndCloud.OnRep_CloudStateChange
struct AAshenLordWorldEndCloud_OnRep_CloudStateChange_Params
{
};

// Function NaturalDisasters.AshenLordWorldEndCloud.AnimateCloud
struct AAshenLordWorldEndCloud_AnimateCloud_Params
{
	float                                              AdjustedLifetime;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NaturalDisasters.Geyser.OnRep_GeyserState
struct AGeyser_OnRep_GeyserState_Params
{
};

// Function NaturalDisasters.Geyser.Multicast_TriggerExplosion
struct AGeyser_Multicast_TriggerExplosion_Params
{
};

// Function NaturalDisasters.DisableGeyserMechanismAction.OnActionStateChanged
struct ADisableGeyserMechanismAction_OnActionStateChanged_Params
{
	TScriptInterface<class UMechanismActionInterface>  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMechanismActionState>                 PreviousState;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMechanismActionState>                 NewState;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            InInstigator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NaturalDisasters.DisableGeyserMechanismAction.OnActionReset
struct ADisableGeyserMechanismAction_OnActionReset_Params
{
	TScriptInterface<class UMechanismResetInterface>   Mechanism;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NaturalDisasters.Earthquake.OnRep_EarthquakeState
struct AEarthquake_OnRep_EarthquakeState_Params
{
	TEnumAsByte<EEarthquakeState>                      OldEarthquakeState;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NaturalDisasters.MechanismGeyser.OnMechanismActionStateChanged
struct AMechanismGeyser_OnMechanismActionStateChanged_Params
{
	TScriptInterface<class UMechanismActionInterface>  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMechanismActionState>                 PreviousState;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMechanismActionState>                 NewState;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            InInstigator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NaturalDisasters.MechanismGeyser.OnMechanismActionReset
struct AMechanismGeyser_OnMechanismActionReset_Params
{
	TScriptInterface<class UMechanismResetInterface>   Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NaturalDisasters.GeyserItemSpawnComponent.OnGeyserSpawned
struct UGeyserItemSpawnComponent_OnGeyserSpawned_Params
{
	FVector                                            GeyserSpawnLocation;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function NaturalDisasters.LavaZone.OnRep_ActorsInZone
struct ALavaZone_OnRep_ActorsInZone_Params
{
	TArray<AActor*>                                    PreviousActors;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
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
	FVolcanoStateData                                  OldVolcanoState;                                          // (ConstParm, Parm)
};

// Function NaturalDisasters.Volcano.Multicast_FireProjectile
struct AVolcano_Multicast_FireProjectile_Params
{
	FVector                                            AuthoritySpawnLocation;                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<FVolcanoProjectileData>                     VolcanoProjectileDataArray;                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
