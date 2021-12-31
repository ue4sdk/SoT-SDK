#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MediumShip_ServingHatch_Right_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MediumShip_ServingHatch_Right.BP_MediumShip_ServingHatch_Right_C.GetClosestInteractionPoint
struct ABP_MediumShip_ServingHatch_Right_C_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OutInteractionPointRadius;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MediumShip_ServingHatch_Right.BP_MediumShip_ServingHatch_Right_C.UserConstructionScript
struct ABP_MediumShip_ServingHatch_Right_C_UserConstructionScript_Params
{
};

// Function BP_MediumShip_ServingHatch_Right.BP_MediumShip_ServingHatch_Right_C.OnAnimationStarted
struct ABP_MediumShip_ServingHatch_Right_C_OnAnimationStarted_Params
{
};

// Function BP_MediumShip_ServingHatch_Right.BP_MediumShip_ServingHatch_Right_C.OnAnimationCompleted
struct ABP_MediumShip_ServingHatch_Right_C_OnAnimationCompleted_Params
{
};

// Function BP_MediumShip_ServingHatch_Right.BP_MediumShip_ServingHatch_Right_C.ExecuteUbergraph_BP_MediumShip_ServingHatch_Right
struct ABP_MediumShip_ServingHatch_Right_C_ExecuteUbergraph_BP_MediumShip_ServingHatch_Right_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
