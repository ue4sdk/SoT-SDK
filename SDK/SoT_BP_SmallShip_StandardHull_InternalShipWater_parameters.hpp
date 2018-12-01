#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShip_StandardHull_InternalShipWater_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.GetLineIntersectionFromPlane
struct ABP_SmallShip_StandardHull_InternalShipWater_C_GetLineIntersectionFromPlane_Params
{
	struct FVector                                     LineStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Intersect;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     IntersectionPoint;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.GetWaterLevel
struct ABP_SmallShip_StandardHull_InternalShipWater_C_GetWaterLevel_Params
{
	float                                              WaterLevel;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.GetDistanceFromPlane
struct ABP_SmallShip_StandardHull_InternalShipWater_C_GetDistanceFromPlane_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.UserConstructionScript
struct ABP_SmallShip_StandardHull_InternalShipWater_C_UserConstructionScript_Params
{
};

// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.AddWater
struct ABP_SmallShip_StandardHull_InternalShipWater_C_AddWater_Params
{
	float                                              Water_Amount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.ReceiveBeginPlay
struct ABP_SmallShip_StandardHull_InternalShipWater_C_ReceiveBeginPlay_Params
{
};

// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.ExecuteUbergraph_BP_SmallShip_StandardHull_InternalShipWater
struct ABP_SmallShip_StandardHull_InternalShipWater_C_ExecuteUbergraph_BP_SmallShip_StandardHull_InternalShipWater_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
