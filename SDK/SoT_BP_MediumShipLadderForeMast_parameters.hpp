#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MediumShipLadderForeMast_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C.GetDockableInfo
struct ABP_MediumShipLadderForeMast_C_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C.Setup Spline
struct ABP_MediumShipLadderForeMast_C_Setup_Spline_Params
{
	class USplineComponent*                            Spline;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Positions;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C.CanInteract
struct ABP_MediumShipLadderForeMast_C_CanInteract_Params
{
	class AActor**                                     InInteractor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C.UserConstructionScript
struct ABP_MediumShipLadderForeMast_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
