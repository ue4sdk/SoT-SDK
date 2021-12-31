#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_CosmeticPurchased_Equipment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PromptActor_CosmeticPurchased_Equipment.BP_PromptActor_CosmeticPurchased_Equipment_C.UserConstructionScript
struct ABP_PromptActor_CosmeticPurchased_Equipment_C_UserConstructionScript_Params
{
};

// Function BP_PromptActor_CosmeticPurchased_Equipment.BP_PromptActor_CosmeticPurchased_Equipment_C.ReceiveBeginPlay
struct ABP_PromptActor_CosmeticPurchased_Equipment_C_ReceiveBeginPlay_Params
{
};

// Function BP_PromptActor_CosmeticPurchased_Equipment.BP_PromptActor_CosmeticPurchased_Equipment_C.ReceiveEndPlay
struct ABP_PromptActor_CosmeticPurchased_Equipment_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PromptActor_CosmeticPurchased_Equipment.BP_PromptActor_CosmeticPurchased_Equipment_C.ExecuteUbergraph_BP_PromptActor_CosmeticPurchased_Equipment
struct ABP_PromptActor_CosmeticPurchased_Equipment_C_ExecuteUbergraph_BP_PromptActor_CosmeticPurchased_Equipment_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
