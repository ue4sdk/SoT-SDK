#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShip_Mast_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SmallShip_Mast.BP_SmallShip_Mast_C.UserConstructionScript
struct ABP_SmallShip_Mast_C_UserConstructionScript_Params
{
};

// Function BP_SmallShip_Mast.BP_SmallShip_Mast_C.OnMastDescLoaded
struct ABP_SmallShip_Mast_C_OnMastDescLoaded_Params
{
	class UMastDescAsset*                              MastDesc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmallShip_Mast.BP_SmallShip_Mast_C.ExecuteUbergraph_BP_SmallShip_Mast
struct ABP_SmallShip_Mast_C_ExecuteUbergraph_BP_SmallShip_Mast_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
