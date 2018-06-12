#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CustomisableLadder_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.GetDockableInfo
struct ABP_CustomisableLadder_C_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.Construct Ladder
struct ABP_CustomisableLadder_C_Construct_Ladder_Params
{
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.Get Total Height Before Cap
struct ABP_CustomisableLadder_C_Get_Total_Height_Before_Cap_Params
{
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.Get Steps
struct ABP_CustomisableLadder_C_Get_Steps_Params
{
	int                                                Num_Steps;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.GetBottomLadderRungTransform
struct ABP_CustomisableLadder_C_GetBottomLadderRungTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.GetTopLadderRungTransform
struct ABP_CustomisableLadder_C_GetTopLadderRungTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.Get World Loc at Height Along Z
struct ABP_CustomisableLadder_C_Get_World_Loc_at_Height_Along_Z_Params
{
	float                                              Relative_Z;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.SetupSpline
struct ABP_CustomisableLadder_C_SetupSpline_Params
{
	class USplineComponent*                            Spline_Component;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Positions;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.UserConstructionScript
struct ABP_CustomisableLadder_C_UserConstructionScript_Params
{
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.ReceiveBeginPlay
struct ABP_CustomisableLadder_C_ReceiveBeginPlay_Params
{
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.ExecuteUbergraph_BP_CustomisableLadder
struct ABP_CustomisableLadder_C_ExecuteUbergraph_BP_CustomisableLadder_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
