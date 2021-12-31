#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShip_CageLatch_03_b_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LargeShip_CageLatch_03_b.BP_LargeShip_CageLatch_03_b_C.GetClosestInteractionPoint
struct ABP_LargeShip_CageLatch_03_b_C_GetClosestInteractionPoint_Params
{
	FVector                                            ReferencePosition;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OutInteractionPointRadius;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LargeShip_CageLatch_03_b.BP_LargeShip_CageLatch_03_b_C.UserConstructionScript
struct ABP_LargeShip_CageLatch_03_b_C_UserConstructionScript_Params
{
};

// Function BP_LargeShip_CageLatch_03_b.BP_LargeShip_CageLatch_03_b_C.OnAnimationStarted
struct ABP_LargeShip_CageLatch_03_b_C_OnAnimationStarted_Params
{
};

// Function BP_LargeShip_CageLatch_03_b.BP_LargeShip_CageLatch_03_b_C.OnAnimationCompleted
struct ABP_LargeShip_CageLatch_03_b_C_OnAnimationCompleted_Params
{
};

// Function BP_LargeShip_CageLatch_03_b.BP_LargeShip_CageLatch_03_b_C.ExecuteUbergraph_BP_LargeShip_CageLatch_03_b
struct ABP_LargeShip_CageLatch_03_b_C_ExecuteUbergraph_BP_LargeShip_CageLatch_03_b_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
