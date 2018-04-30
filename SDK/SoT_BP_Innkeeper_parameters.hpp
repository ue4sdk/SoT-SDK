#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Innkeeper_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Innkeeper.BP_Innkeeper_C.GetClosestInteractionPoint
struct ABP_Innkeeper_C_GetClosestInteractionPoint_Params
{
	struct FVector*                                    ReferencePosition;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OutInteractionPointRadius;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Innkeeper.BP_Innkeeper_C.UserConstructionScript
struct ABP_Innkeeper_C_UserConstructionScript_Params
{
};

// Function BP_Innkeeper.BP_Innkeeper_C.ReceiveBeginPlay
struct ABP_Innkeeper_C_ReceiveBeginPlay_Params
{
};

// Function BP_Innkeeper.BP_Innkeeper_C.ReceiveEndPlay
struct ABP_Innkeeper_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Innkeeper.BP_Innkeeper_C.ExecuteUbergraph_BP_Innkeeper
struct ABP_Innkeeper_C_ExecuteUbergraph_BP_Innkeeper_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
