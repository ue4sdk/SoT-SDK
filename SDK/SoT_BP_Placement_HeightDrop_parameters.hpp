#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Placement_HeightDrop_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateComponentList
struct ABP_Placement_HeightDrop_C_CreateComponentList_Params
{
};

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateParentBounds
struct ABP_Placement_HeightDrop_C_CreateParentBounds_Params
{
};

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CheckMobilityState
struct ABP_Placement_HeightDrop_C_CheckMobilityState_Params
{
};

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Get Valid Collision
struct ABP_Placement_HeightDrop_C_Get_Valid_Collision_Params
{
	TArray<struct FHitResult>                          Hit_Results;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Hit_Success;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Current_Component;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Impact_Position;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Impact_Normal;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Drop Components
struct ABP_Placement_HeightDrop_C_Drop_Components_Params
{
};

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.UserConstructionScript
struct ABP_Placement_HeightDrop_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
