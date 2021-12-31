#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShantyPuzzle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ShantyPuzzle.ShantyPuzzleComponent.OnEndOverlap
struct UShantyPuzzleComponent_OnEndOverlap_Params
{
	AActor*                                            InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	UPrimitiveComponent*                               InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InOtherBodyIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShantyPuzzle.ShantyPuzzleComponent.OnBeginOverlap
struct UShantyPuzzleComponent_OnBeginOverlap_Params
{
	AActor*                                            InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	UPrimitiveComponent*                               InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InOtherBodyIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FHitResult                                         SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
