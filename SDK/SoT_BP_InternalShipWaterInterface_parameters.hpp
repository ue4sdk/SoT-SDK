#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_InternalShipWaterInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetLineIntersectionFromPlane
struct UBP_InternalShipWaterInterface_C_GetLineIntersectionFromPlane_Params
{
	FVector                                            LineStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            LineEnd;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Intersect;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FVector                                            IntersectionPoint;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetDistanceFromPlane
struct UBP_InternalShipWaterInterface_C_GetDistanceFromPlane_Params
{
	FVector                                            Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetWaterLevel
struct UBP_InternalShipWaterInterface_C_GetWaterLevel_Params
{
	float                                              WaterLevel;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.AddWater
struct UBP_InternalShipWaterInterface_C_AddWater_Params
{
	float                                              Water_Amount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
