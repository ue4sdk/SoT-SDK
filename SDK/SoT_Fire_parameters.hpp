#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Fire_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Fire.FlammableComponent.OnRep_OnFire
struct UFlammableComponent_OnRep_OnFire_Params
{
};

// Function Fire.FlammableComponent.Multicast_NotifyExtinguished_RPC
struct UFlammableComponent_Multicast_NotifyExtinguished_RPC_Params
{
	FVector                                            InExtinguishLocationWS;                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Fire.FlammableComponent.IsOnFire
struct UFlammableComponent_IsOnFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fire.FlammableComponent.IncrementFireSource
struct UFlammableComponent_IncrementFireSource_Params
{
};

// Function Fire.FlammableComponent.DecrementFireSource
struct UFlammableComponent_DecrementFireSource_Params
{
};

// Function Fire.FlammableInterface.IncrementFireSource
struct UFlammableInterface_IncrementFireSource_Params
{
};

// Function Fire.FlammableInterface.DecrementFireSource
struct UFlammableInterface_DecrementFireSource_Params
{
};

// Function Fire.FirePropagationInterface.SetAllCellsState
struct UFirePropagationInterface_SetAllCellsState_Params
{
	TEnumAsByte<EFireCellState>                        State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fire.ShipFirePropagationComponent.OnRep_CellData
struct UShipFirePropagationComponent_OnRep_CellData_Params
{
};

// Function Fire.ShipFirePropagationComponent.OnRep_CellCharringData
struct UShipFirePropagationComponent_OnRep_CellCharringData_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
