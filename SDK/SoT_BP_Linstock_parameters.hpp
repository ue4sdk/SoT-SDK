#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Linstock_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Linstock.BP_Linstock_C.UserConstructionScript
struct ABP_Linstock_C_UserConstructionScript_Params
{
};

// Function BP_Linstock.BP_Linstock_C.ReceiveBeginPlay
struct ABP_Linstock_C_ReceiveBeginPlay_Params
{
};

// Function BP_Linstock.BP_Linstock_C.ExecuteUbergraph_BP_Linstock
struct ABP_Linstock_C_ExecuteUbergraph_BP_Linstock_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
