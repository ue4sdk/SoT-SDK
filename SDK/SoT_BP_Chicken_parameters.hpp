#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Chicken_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Chicken.BP_Chicken_C.UserConstructionScript
struct ABP_Chicken_C_UserConstructionScript_Params
{
};

// Function BP_Chicken.BP_Chicken_C.ReceiveActorBeginOverlap
struct ABP_Chicken_C_ReceiveActorBeginOverlap_Params
{
	AActor*                                            OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chicken.BP_Chicken_C.ExecuteUbergraph_BP_Chicken
struct ABP_Chicken_C_ExecuteUbergraph_BP_Chicken_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
