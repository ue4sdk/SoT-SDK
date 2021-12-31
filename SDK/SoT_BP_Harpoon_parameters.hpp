#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Harpoon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Harpoon.BP_Harpoon_C.UserConstructionScript
struct ABP_Harpoon_C_UserConstructionScript_Params
{
};

// Function BP_Harpoon.BP_Harpoon_C.ReceiveBeginPlay
struct ABP_Harpoon_C_ReceiveBeginPlay_Params
{
};

// Function BP_Harpoon.BP_Harpoon_C.ExecuteUbergraph_BP_Harpoon
struct ABP_Harpoon_C_ExecuteUbergraph_BP_Harpoon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
