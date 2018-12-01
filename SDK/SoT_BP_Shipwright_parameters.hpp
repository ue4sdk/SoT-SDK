#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shipwright_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Shipwright.BP_Shipwright_C.UserConstructionScript
struct ABP_Shipwright_C_UserConstructionScript_Params
{
};

// Function BP_Shipwright.BP_Shipwright_C.ReceiveBeginPlay
struct ABP_Shipwright_C_ReceiveBeginPlay_Params
{
};

// Function BP_Shipwright.BP_Shipwright_C.ReceiveEndPlay
struct ABP_Shipwright_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Shipwright.BP_Shipwright_C.ExecuteUbergraph_BP_Shipwright
struct ABP_Shipwright_C_ExecuteUbergraph_BP_Shipwright_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
