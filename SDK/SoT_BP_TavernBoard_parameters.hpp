#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TavernBoard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_TavernBoard.BP_TavernBoard_C.UserConstructionScript
struct ABP_TavernBoard_C_UserConstructionScript_Params
{
};

// Function BP_TavernBoard.BP_TavernBoard_C.ReceiveBeginPlay
struct ABP_TavernBoard_C_ReceiveBeginPlay_Params
{
};

// Function BP_TavernBoard.BP_TavernBoard_C.ExecuteUbergraph_BP_TavernBoard
struct ABP_TavernBoard_C_ExecuteUbergraph_BP_TavernBoard_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
