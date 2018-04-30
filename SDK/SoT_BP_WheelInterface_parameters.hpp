#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WheelInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_WheelInterface.BP_WheelInterface_C.Receive Animation State
struct UBP_WheelInterface_C_Receive_Animation_State_Params
{
	struct FRotator                                    WheelRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WheelAnimationTime;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWheel>                                EWheel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WheelRate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
