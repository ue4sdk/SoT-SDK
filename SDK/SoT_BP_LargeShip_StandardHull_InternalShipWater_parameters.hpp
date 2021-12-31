#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShip_StandardHull_InternalShipWater_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.GetLineIntersectionFromPlane
struct ABP_LargeShip_StandardHull_InternalShipWater_C_GetLineIntersectionFromPlane_Params
{
	FVector                                            LineStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            LineEnd;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Intersect;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FVector                                            IntersectionPoint;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.GetWaterLevel
struct ABP_LargeShip_StandardHull_InternalShipWater_C_GetWaterLevel_Params
{
	float                                              WaterLevel;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.GetDistanceFromPlane
struct ABP_LargeShip_StandardHull_InternalShipWater_C_GetDistanceFromPlane_Params
{
	FVector                                            Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.UserConstructionScript
struct ABP_LargeShip_StandardHull_InternalShipWater_C_UserConstructionScript_Params
{
};

// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.AddWater
struct ABP_LargeShip_StandardHull_InternalShipWater_C_AddWater_Params
{
	float                                              Water_Amount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.ReceiveBeginPlay
struct ABP_LargeShip_StandardHull_InternalShipWater_C_ReceiveBeginPlay_Params
{
};

// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.ExecuteUbergraph_BP_LargeShip_StandardHull_InternalShipWater
struct ABP_LargeShip_StandardHull_InternalShipWater_C_ExecuteUbergraph_BP_LargeShip_StandardHull_InternalShipWater_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
