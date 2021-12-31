#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TotD_PortalController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_TotD_PortalController.BP_TotD_PortalController_C.SetParameters
struct ABP_TotD_PortalController_C_SetParameters_Params
{
	float                                              PortalOpen;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LightScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CrackVisibility;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PortalSwirlVisibility;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CloudVisibility;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TotD_PortalController.BP_TotD_PortalController_C.SetPortalPositionAndOrientation
struct ABP_TotD_PortalController_C_SetPortalPositionAndOrientation_Params
{
};

// Function BP_TotD_PortalController.BP_TotD_PortalController_C.CollectMaterialsAndLights
struct ABP_TotD_PortalController_C_CollectMaterialsAndLights_Params
{
};

// Function BP_TotD_PortalController.BP_TotD_PortalController_C.UserConstructionScript
struct ABP_TotD_PortalController_C_UserConstructionScript_Params
{
};

// Function BP_TotD_PortalController.BP_TotD_PortalController_C.Timeline_0__FinishedFunc
struct ABP_TotD_PortalController_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_TotD_PortalController.BP_TotD_PortalController_C.Timeline_0__UpdateFunc
struct ABP_TotD_PortalController_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_TotD_PortalController.BP_TotD_PortalController_C.ReceiveBeginPlay
struct ABP_TotD_PortalController_C_ReceiveBeginPlay_Params
{
};

// Function BP_TotD_PortalController.BP_TotD_PortalController_C.ReceiveTick
struct ABP_TotD_PortalController_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TotD_PortalController.BP_TotD_PortalController_C.OpenPortal
struct ABP_TotD_PortalController_C_OpenPortal_Params
{
};

// Function BP_TotD_PortalController.BP_TotD_PortalController_C.ExecuteUbergraph_BP_TotD_PortalController
struct ABP_TotD_PortalController_C_ExecuteUbergraph_BP_TotD_PortalController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
