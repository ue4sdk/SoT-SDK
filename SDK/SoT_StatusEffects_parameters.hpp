#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StatusEffects_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StatusEffects.StatusEffectOverlapZone.OnStatusDelayEnd
struct AStatusEffectOverlapZone_OnStatusDelayEnd_Params
{
	int                                                InStatusIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            ActorRef;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_SetDebugDrawColour
struct UDebugStatusEffectOverlapZoneVisualizerComponent_OnRep_SetDebugDrawColour_Params
{
};

// Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_DebugBoxDimensions
struct UDebugStatusEffectOverlapZoneVisualizerComponent_OnRep_DebugBoxDimensions_Params
{
};

// Function StatusEffects.LightWeightStatusEffectManagerComponent.OnRep_ActiveEffects
struct ULightWeightStatusEffectManagerComponent_OnRep_ActiveEffects_Params
{
	TArray<FActiveStatusEffect>                        OldEffects;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StatusEffects.LightWeightStatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
struct ULightWeightStatusEffectManagerComponent_MultiCast_ApplyOneShotStatus_Params
{
	TArray<FActiveStatusEffect>                        AddedEffects;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<FActiveStatusEffect>                        RemovedEffects;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function StatusEffects.StatusEffectHelperFunctionLibrary.ApplyOneShotStatus
struct UStatusEffectHelperFunctionLibrary_ApplyOneShotStatus_Params
{
	AActor*                                            Recipient;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FStatus                                            Status;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function StatusEffects.StatusEffectManagerComponent.OnRep_ActiveEffects
struct UStatusEffectManagerComponent_OnRep_ActiveEffects_Params
{
	TArray<FActiveStatusEffect>                        OldEffects;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StatusEffects.StatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
struct UStatusEffectManagerComponent_MultiCast_ApplyOneShotStatus_Params
{
	TArray<FActiveStatusEffect>                        AddedEffects;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<FActiveStatusEffect>                        RemovedEffects;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function StatusEffects.StatusEffectVolumeComponent.UnaffectActor
struct UStatusEffectVolumeComponent_UnaffectActor_Params
{
	AActor*                                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentEndOverlap
struct UStatusEffectVolumeComponent_OnParentComponentEndOverlap_Params
{
	AActor*                                            OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	UPrimitiveComponent*                               OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentBeginOverlap
struct UStatusEffectVolumeComponent_OnParentComponentBeginOverlap_Params
{
	AActor*                                            OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	UPrimitiveComponent*                               OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FHitResult                                         SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function StatusEffects.StatusEffectVolumeComponent.AffectActor
struct UStatusEffectVolumeComponent_AffectActor_Params
{
	AActor*                                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
