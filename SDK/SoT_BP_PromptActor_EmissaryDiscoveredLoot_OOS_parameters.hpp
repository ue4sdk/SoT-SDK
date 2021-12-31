#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_EmissaryDiscoveredLoot_OOS_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PromptActor_EmissaryDiscoveredLoot_OOS.BP_PromptActor_EmissaryDiscoveredLoot_OOS_C.UserConstructionScript
struct ABP_PromptActor_EmissaryDiscoveredLoot_OOS_C_UserConstructionScript_Params
{
};

// Function BP_PromptActor_EmissaryDiscoveredLoot_OOS.BP_PromptActor_EmissaryDiscoveredLoot_OOS_C.ReceiveBeginPlay
struct ABP_PromptActor_EmissaryDiscoveredLoot_OOS_C_ReceiveBeginPlay_Params
{
};

// Function BP_PromptActor_EmissaryDiscoveredLoot_OOS.BP_PromptActor_EmissaryDiscoveredLoot_OOS_C.ReceiveEndPlay
struct ABP_PromptActor_EmissaryDiscoveredLoot_OOS_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PromptActor_EmissaryDiscoveredLoot_OOS.BP_PromptActor_EmissaryDiscoveredLoot_OOS_C.ExecuteUbergraph_BP_PromptActor_EmissaryDiscoveredLoot_OOS
struct ABP_PromptActor_EmissaryDiscoveredLoot_OOS_C_ExecuteUbergraph_BP_PromptActor_EmissaryDiscoveredLoot_OOS_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
