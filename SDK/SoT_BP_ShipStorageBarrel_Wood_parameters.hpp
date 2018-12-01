#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipStorageBarrel_Wood_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ShipStorageBarrel_Wood.BP_ShipStorageBarrel_Wood_C.ShouldDrawTooltipInWorldSpace
struct ABP_ShipStorageBarrel_Wood_C_ShouldDrawTooltipInWorldSpace_Params
{
	class AActor*                                      InInteractor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DesiredTooltipWorldPosition;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ShipStorageBarrel_Wood.BP_ShipStorageBarrel_Wood_C.UserConstructionScript
struct ABP_ShipStorageBarrel_Wood_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
