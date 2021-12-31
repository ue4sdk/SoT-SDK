#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Contract_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Anim_Contract.BP_Anim_Contract_C.OnUseStarted
struct UBP_Anim_Contract_C_OnUseStarted_Params
{
	UClass*                                            InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	FWieldableItemActionVisuals                        ActionVisuals;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Anim_Contract.BP_Anim_Contract_C.OnUseStopped
struct UBP_Anim_Contract_C_OnUseStopped_Params
{
	UClass*                                            InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Anim_Contract.BP_Anim_Contract_C.ExecuteUbergraph_BP_Anim_Contract
struct UBP_Anim_Contract_C_ExecuteUbergraph_BP_Anim_Contract_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
