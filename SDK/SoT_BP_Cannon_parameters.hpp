#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Cannon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Cannon.BP_Cannon_C.GetDockableInfo
struct ABP_Cannon_C_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Cannon.BP_Cannon_C.UserConstructionScript
struct ABP_Cannon_C_UserConstructionScript_Params
{
};

// Function BP_Cannon.BP_Cannon_C.ReceiveBeginPlay
struct ABP_Cannon_C_ReceiveBeginPlay_Params
{
};

// Function BP_Cannon.BP_Cannon_C.ReceiveEndPlay
struct ABP_Cannon_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Cannon.BP_Cannon_C.CannonAimingCenteredPitch
struct ABP_Cannon_C_CannonAimingCenteredPitch_Params
{
	struct FEventCannonAimingCenteredPitch             Event;                                                    // (Parm)
};

// Function BP_Cannon.BP_Cannon_C.CannonAimingStartedPitch
struct ABP_Cannon_C_CannonAimingStartedPitch_Params
{
	struct FEventCannonAimingStartedPitch              Event;                                                    // (Parm)
};

// Function BP_Cannon.BP_Cannon_C.CannonAimingStoppedPitch
struct ABP_Cannon_C_CannonAimingStoppedPitch_Params
{
	struct FEventCannonAimingStoppedPitch              Event;                                                    // (Parm)
};

// Function BP_Cannon.BP_Cannon_C.CannonAimingCenteredYaw
struct ABP_Cannon_C_CannonAimingCenteredYaw_Params
{
	struct FEventCannonAimingCenteredYaw               Event;                                                    // (Parm)
};

// Function BP_Cannon.BP_Cannon_C.CannonAimingStartedYaw
struct ABP_Cannon_C_CannonAimingStartedYaw_Params
{
	struct FEventCannonAimingStartedYaw                Event;                                                    // (Parm)
};

// Function BP_Cannon.BP_Cannon_C.CannonAimingStoppedYaw
struct ABP_Cannon_C_CannonAimingStoppedYaw_Params
{
	struct FEventCannonAimingStoppedYaw                Event;                                                    // (Parm)
};

// Function BP_Cannon.BP_Cannon_C.OnCannonDescLoaded
struct ABP_Cannon_C_OnCannonDescLoaded_Params
{
	class UCannonDescAsset**                           CannonDesc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Cannon.BP_Cannon_C.ExecuteUbergraph_BP_Cannon
struct ABP_Cannon_C_ExecuteUbergraph_BP_Cannon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
