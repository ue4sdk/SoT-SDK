#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AnimatedStepsComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpeningSteps
struct UBP_AnimatedStepsComponent_C_StartOpeningSteps_Params
{
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.SetAllStepsZs
struct UBP_AnimatedStepsComponent_C_SetAllStepsZs_Params
{
	TArray<float>                                      TargetZOffsets;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               OpeningOrClosing;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.UpdateStep
struct UBP_AnimatedStepsComponent_C_UpdateStep_Params
{
	int                                                BoneIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetZ;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MovementDelay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               AttachedBox;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxOrigin;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ReceiveTick
struct UBP_AnimatedStepsComponent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpening
struct UBP_AnimatedStepsComponent_C_StartOpening_Params
{
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.OpenImmediate
struct UBP_AnimatedStepsComponent_C_OpenImmediate_Params
{
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.Close
struct UBP_AnimatedStepsComponent_C_Close_Params
{
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ExecuteUbergraph_BP_AnimatedStepsComponent
struct UBP_AnimatedStepsComponent_C_ExecuteUbergraph_BP_AnimatedStepsComponent_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
