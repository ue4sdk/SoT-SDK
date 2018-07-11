#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shipwreck_01_a_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.UserConstructionScript
struct ABP_Shipwreck_01_a_C_UserConstructionScript_Params
{
};

// Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.ReceiveBeginPlay
struct ABP_Shipwreck_01_a_C_ReceiveBeginPlay_Params
{
};

// Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.ReceiveEndPlay
struct ABP_Shipwreck_01_a_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.ExecuteUbergraph_BP_Shipwreck_01_a
struct ABP_Shipwreck_01_a_C_ExecuteUbergraph_BP_Shipwreck_01_a_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
