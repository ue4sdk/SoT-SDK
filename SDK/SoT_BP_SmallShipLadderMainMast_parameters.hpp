#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShipLadderMainMast_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SmallShipLadderMainMast.BP_SmallShipLadderMainMast_C.GetDockableInfo
struct ABP_SmallShipLadderMainMast_C_GetDockableInfo_Params
{
	FDockableInfo                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_SmallShipLadderMainMast.BP_SmallShipLadderMainMast_C.Setup Spline
struct ABP_SmallShipLadderMainMast_C_Setup_Spline_Params
{
	USplineComponent*                                  Spline;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FVector>                                    Positions;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_SmallShipLadderMainMast.BP_SmallShipLadderMainMast_C.CanInteract
struct ABP_SmallShipLadderMainMast_C_CanInteract_Params
{
	AActor*                                            InInteractor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SmallShipLadderMainMast.BP_SmallShipLadderMainMast_C.UserConstructionScript
struct ABP_SmallShipLadderMainMast_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
