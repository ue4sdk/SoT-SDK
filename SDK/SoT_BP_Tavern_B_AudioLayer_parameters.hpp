#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Tavern_B_AudioLayer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.UserConstructionScript
struct ABP_Tavern_B_AudioLayer_C_UserConstructionScript_Params
{
};

// Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ReceiveBeginPlay
struct ABP_Tavern_B_AudioLayer_C_ReceiveBeginPlay_Params
{
};

// Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ReceiveEndPlay
struct ABP_Tavern_B_AudioLayer_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ExecuteUbergraph_BP_Tavern_B_AudioLayer
struct ABP_Tavern_B_AudioLayer_C_ExecuteUbergraph_BP_Tavern_B_AudioLayer_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
