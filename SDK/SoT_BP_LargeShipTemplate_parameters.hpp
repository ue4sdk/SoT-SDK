#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShipTemplate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.GetPxActorCapacityForPhysXAggregate
struct ABP_LargeShipTemplate_C_GetPxActorCapacityForPhysXAggregate_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.SetupMastControls
struct ABP_LargeShipTemplate_C_SetupMastControls_Params
{
	UChildActorComponent*                              LeftHoist;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              RightHoist;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              LeftAngle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              RightAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              RiggingGroupName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.UserConstructionScript
struct ABP_LargeShipTemplate_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
