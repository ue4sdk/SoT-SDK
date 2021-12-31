#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShipNetProxy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Set Colour on All Materials
struct ABP_SmallShipNetProxy_C_Set_Colour_on_All_Materials_Params
{
	FName                                              ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	FLinearColor                                       Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Set Value on All Materials
struct ABP_SmallShipNetProxy_C_Set_Value_on_All_Materials_Params
{
	FName                                              Variable_Name;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Apply Bits to Lanterns
struct ABP_SmallShipNetProxy_C_Apply_Bits_to_Lanterns_Params
{
	int                                                bits;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Create Dynamic Materials
struct ABP_SmallShipNetProxy_C_Create_Dynamic_Materials_Params
{
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.UserConstructionScript
struct ABP_SmallShipNetProxy_C_UserConstructionScript_Params
{
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.ReceiveBeginPlay
struct ABP_SmallShipNetProxy_C_ReceiveBeginPlay_Params
{
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.OnLanternStateChanged
struct ABP_SmallShipNetProxy_C_OnLanternStateChanged_Params
{
	int                                                LanternStateBits;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.OnEmissaryActiveStateChanged
struct ABP_SmallShipNetProxy_C_OnEmissaryActiveStateChanged_Params
{
	bool                                               InNewEmissaryActiveState;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.ExecuteUbergraph_BP_SmallShipNetProxy
struct ABP_SmallShipNetProxy_C_ExecuteUbergraph_BP_SmallShipNetProxy_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
