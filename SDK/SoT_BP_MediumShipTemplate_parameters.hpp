#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MediumShipTemplate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.GetPxActorCapacityForPhysXAggregate
struct ABP_MediumShipTemplate_C_GetPxActorCapacityForPhysXAggregate_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.SetupMastControls
struct ABP_MediumShipTemplate_C_SetupMastControls_Params
{
	class UChildActorComponent*                        LeftHoist;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        RightHoist;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LeftAngle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        RightAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RiggingGroupName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.UserConstructionScript
struct ABP_MediumShipTemplate_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
