#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipStorageBarrel_Grog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C.GetClosestInteractionPoint
struct ABP_ShipStorageBarrel_Grog_C_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OutInteractionPointRadius;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C.ShouldDrawTooltipInWorldSpace
struct ABP_ShipStorageBarrel_Grog_C_ShouldDrawTooltipInWorldSpace_Params
{
	class AActor*                                      InInteractor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DesiredTooltipWorldPosition;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C.UserConstructionScript
struct ABP_ShipStorageBarrel_Grog_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
