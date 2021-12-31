#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TreasureMap_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Anim_TreasureMap.BP_Anim_TreasureMap_C.OnUseStarted
struct UBP_Anim_TreasureMap_C_OnUseStarted_Params
{
	class UClass*                                      InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWieldableItemActionVisuals                 ActionVisuals;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Anim_TreasureMap.BP_Anim_TreasureMap_C.OnUseStopped
struct UBP_Anim_TreasureMap_C_OnUseStopped_Params
{
	class UClass*                                      InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Anim_TreasureMap.BP_Anim_TreasureMap_C.ExecuteUbergraph_BP_Anim_TreasureMap
struct UBP_Anim_TreasureMap_C_ExecuteUbergraph_BP_Anim_TreasureMap_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
