#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MediumShipNetProxy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.Set Colour on All Materials
struct ABP_MediumShipNetProxy_C_Set_Colour_on_All_Materials_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.Set Value on All Materials
struct ABP_MediumShipNetProxy_C_Set_Value_on_All_Materials_Params
{
	struct FName                                       Variable_Name;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.Apply Bits to Lanterns
struct ABP_MediumShipNetProxy_C_Apply_Bits_to_Lanterns_Params
{
	int                                                bits;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.Create Dynamic Materials
struct ABP_MediumShipNetProxy_C_Create_Dynamic_Materials_Params
{
};

// Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.UserConstructionScript
struct ABP_MediumShipNetProxy_C_UserConstructionScript_Params
{
};

// Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.ReceiveBeginPlay
struct ABP_MediumShipNetProxy_C_ReceiveBeginPlay_Params
{
};

// Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.OnLanternStateChanged
struct ABP_MediumShipNetProxy_C_OnLanternStateChanged_Params
{
	int                                                LanternStateBits;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.OnEmissaryActiveStateChanged
struct ABP_MediumShipNetProxy_C_OnEmissaryActiveStateChanged_Params
{
	bool                                               InNewEmissaryActiveState;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.ExecuteUbergraph_BP_MediumShipNetProxy
struct ABP_MediumShipNetProxy_C_ExecuteUbergraph_BP_MediumShipNetProxy_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
