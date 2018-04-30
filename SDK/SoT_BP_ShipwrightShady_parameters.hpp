#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipwrightShady_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ShipwrightShady.BP_ShipwrightShady_C.UserConstructionScript
struct ABP_ShipwrightShady_C_UserConstructionScript_Params
{
};

// Function BP_ShipwrightShady.BP_ShipwrightShady_C.ReceiveBeginPlay
struct ABP_ShipwrightShady_C_ReceiveBeginPlay_Params
{
};

// Function BP_ShipwrightShady.BP_ShipwrightShady_C.ReceiveEndPlay
struct ABP_ShipwrightShady_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShipwrightShady.BP_ShipwrightShady_C.ExecuteUbergraph_BP_ShipwrightShady
struct ABP_ShipwrightShady_C_ExecuteUbergraph_BP_ShipwrightShady_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
