#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CustomisableLadder_PointToPoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.Orientate Ladder
struct ABP_CustomisableLadder_PointToPoint_C_Orientate_Ladder_Params
{
	struct FVector                                     Point_A;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point_B;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.UserConstructionScript
struct ABP_CustomisableLadder_PointToPoint_C_UserConstructionScript_Params
{
};

// Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.ReceiveBeginPlay
struct ABP_CustomisableLadder_PointToPoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.ExecuteUbergraph_BP_CustomisableLadder_PointToPoint
struct ABP_CustomisableLadder_PointToPoint_C_ExecuteUbergraph_BP_CustomisableLadder_PointToPoint_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
