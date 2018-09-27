#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShipLadderMainMast_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C.GetDockableInfo
struct ABP_LargeShipLadderMainMast_C_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C.Setup Spline
struct ABP_LargeShipLadderMainMast_C_Setup_Spline_Params
{
	class USplineComponent*                            Spline;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Positions;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C.CanInteract
struct ABP_LargeShipLadderMainMast_C_CanInteract_Params
{
	class AActor*                                      InInteractor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C.UserConstructionScript
struct ABP_LargeShipLadderMainMast_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
