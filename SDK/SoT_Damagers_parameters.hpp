#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Damagers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Damagers.RadialDamagerComponent.SetDamageRadius
struct URadialDamagerComponent_SetDamageRadius_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Damagers.RadialDamagerComponent.EndDamage
struct URadialDamagerComponent_EndDamage_Params
{
};

// Function Damagers.RadialDamagerComponent.BeginDamage
struct URadialDamagerComponent_BeginDamage_Params
{
};

// Function Damagers.ShockwaveDamagerInterface.StartShockwaveAtLocation
struct UShockwaveDamagerInterface_StartShockwaveAtLocation_Params
{
	FVector                                            StartLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Damagers.ShockwaveDamagerInterface.StartShockwave
struct UShockwaveDamagerInterface_StartShockwave_Params
{
};

// Function Damagers.ShockwaveDamagerInterface.IgnoreGhostShip
struct UShockwaveDamagerInterface_IgnoreGhostShip_Params
{
	AAggressiveGhostShip*                              Ship;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Damagers.ShockwaveDamagerInterface.GetShockwaveRadius
struct UShockwaveDamagerInterface_GetShockwaveRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Damagers.ShockwaveDamagerInterface.GetShockwaveDuration
struct UShockwaveDamagerInterface_GetShockwaveDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Damagers.ShockwaveDamagerComponent.Multi_StartShockwave
struct UShockwaveDamagerComponent_Multi_StartShockwave_Params
{
	FVector                                            InStartLocation;                                          // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Damagers.ShipDamagerComponent.SetShape
struct UShipDamagerComponent_SetShape_Params
{
	UPrimitiveComponent*                               InShape;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Damagers.ShipDamagerComponent.EndDamage
struct UShipDamagerComponent_EndDamage_Params
{
};

// Function Damagers.ShipDamagerComponent.BeginDamage
struct UShipDamagerComponent_BeginDamage_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
