#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AILargeShipTemplate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.SetShipSkeleton
struct ABP_AILargeShipTemplate_C_SetShipSkeleton_Params
{
};

// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnRep_SailData
struct ABP_AILargeShipTemplate_C_OnRep_SailData_Params
{
};

// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnRep_NewVar_2
struct ABP_AILargeShipTemplate_C_OnRep_NewVar_2_Params
{
};

// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.UserConstructionScript
struct ABP_AILargeShipTemplate_C_UserConstructionScript_Params
{
};

// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnShipSurface_Client
struct ABP_AILargeShipTemplate_C_OnShipSurface_Client_Params
{
};

// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnShipSurface
struct ABP_AILargeShipTemplate_C_OnShipSurface_Params
{
};

// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnShipDive_Client
struct ABP_AILargeShipTemplate_C_OnShipDive_Client_Params
{
};

// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnShipDive
struct ABP_AILargeShipTemplate_C_OnShipDive_Params
{
};

// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.ReceiveBeginPlay
struct ABP_AILargeShipTemplate_C_ReceiveBeginPlay_Params
{
};

// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.SetCursedCrewCustomisationProperties
struct ABP_AILargeShipTemplate_C_SetCursedCrewCustomisationProperties_Params
{
	struct FAIShipSailData                             SailData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.ExecuteUbergraph_BP_AILargeShipTemplate
struct ABP_AILargeShipTemplate_C_ExecuteUbergraph_BP_AILargeShipTemplate_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
