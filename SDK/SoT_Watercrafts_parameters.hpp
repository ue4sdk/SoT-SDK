#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Watercrafts_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Watercrafts.FakeShip.OnAttachedItemEndPlay
struct AFakeShip_OnAttachedItemEndPlay_Params
{
	AActor*                                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnRep_CurrentWatercraft
struct UItemProxyWatercraftTrackerComponent_OnRep_CurrentWatercraft_Params
{
	AActor*                                            PreviousWatercraft;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnCurrentWatercraftDestroyed
struct UItemProxyWatercraftTrackerComponent_OnCurrentWatercraftDestroyed_Params
{
	AActor*                                            DestroyedWatercraft;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Watercrafts.Watercraft.OnRigidBodyWake
struct AWatercraft_OnRigidBodyWake_Params
{
	FName                                              InBoneName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Watercrafts.Watercraft.OnRigidBodySleep
struct AWatercraft_OnRigidBodySleep_Params
{
	FName                                              InBoneName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Watercrafts.Rowboat.SetAlwaysEnabledInteractables
struct ARowboat_SetAlwaysEnabledInteractables_Params
{
	TArray<UChildActorComponent*>                      InAlwaysEnabledInteractables;                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Watercrafts.Rowboat.OnRep_IsSinking
struct ARowboat_OnRep_IsSinking_Params
{
};

// Function Watercrafts.WatercraftBlueprintFunctionLibrary.SpawnWatercraft
struct UWatercraftBlueprintFunctionLibrary_SpawnWatercraft_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            WatercraftClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Location;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FRotator                                           Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	AWatercraft*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Watercrafts.WatercraftTrackerComponent.OnWatercraftDestroyed
struct UWatercraftTrackerComponent_OnWatercraftDestroyed_Params
{
	AActor*                                            WatercraftActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
