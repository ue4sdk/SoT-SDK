#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShipTemplate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.SetupMastControls
struct ABP_LargeShipTemplate_C_SetupMastControls_Params
{
	class UChildActorComponent*                        LeftHoist;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        RightHoist;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LeftAngle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        RightAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RiggingGroupName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.UserConstructionScript
struct ABP_LargeShipTemplate_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
