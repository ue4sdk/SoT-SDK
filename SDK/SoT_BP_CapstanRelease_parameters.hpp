#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CapstanRelease_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CapstanRelease.BP_CapstanRelease_C.GetClosestInteractionPoint
struct ABP_CapstanRelease_C_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OutInteractionPointRadius;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CapstanRelease.BP_CapstanRelease_C.UserConstructionScript
struct ABP_CapstanRelease_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
