// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Damagers_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Damagers.RadialDamagerComponent.SetDamageRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void URadialDamagerComponent::SetDamageRadius(float Radius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.RadialDamagerComponent.SetDamageRadius"));

	URadialDamagerComponent_SetDamageRadius_Params params;
	params.Radius = Radius;

	UObject::ProcessEvent(fn, &params);
}


// Function Damagers.RadialDamagerComponent.EndDamage
// (Final, Native, Public, BlueprintCallable)

void URadialDamagerComponent::EndDamage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.RadialDamagerComponent.EndDamage"));

	URadialDamagerComponent_EndDamage_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Damagers.RadialDamagerComponent.BeginDamage
// (Final, Native, Public, BlueprintCallable)

void URadialDamagerComponent::BeginDamage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.RadialDamagerComponent.BeginDamage"));

	URadialDamagerComponent_BeginDamage_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Damagers.ShockwaveDamagerInterface.StartShockwaveAtLocation
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FVector                        StartLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UShockwaveDamagerInterface::StartShockwaveAtLocation(const FVector& StartLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.ShockwaveDamagerInterface.StartShockwaveAtLocation"));

	UShockwaveDamagerInterface_StartShockwaveAtLocation_Params params;
	params.StartLocation = StartLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function Damagers.ShockwaveDamagerInterface.StartShockwave
// (Native, Public, BlueprintCallable)

void UShockwaveDamagerInterface::StartShockwave()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.ShockwaveDamagerInterface.StartShockwave"));

	UShockwaveDamagerInterface_StartShockwave_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Damagers.ShockwaveDamagerInterface.IgnoreGhostShip
// (Native, Public, BlueprintCallable)
// Parameters:
// AAggressiveGhostShip*          Ship                           (Parm, ZeroConstructor, IsPlainOldData)

void UShockwaveDamagerInterface::IgnoreGhostShip(AAggressiveGhostShip* Ship)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.ShockwaveDamagerInterface.IgnoreGhostShip"));

	UShockwaveDamagerInterface_IgnoreGhostShip_Params params;
	params.Ship = Ship;

	UObject::ProcessEvent(fn, &params);
}


// Function Damagers.ShockwaveDamagerInterface.GetShockwaveRadius
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShockwaveDamagerInterface::GetShockwaveRadius()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.ShockwaveDamagerInterface.GetShockwaveRadius"));

	UShockwaveDamagerInterface_GetShockwaveRadius_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Damagers.ShockwaveDamagerInterface.GetShockwaveDuration
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShockwaveDamagerInterface::GetShockwaveDuration()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.ShockwaveDamagerInterface.GetShockwaveDuration"));

	UShockwaveDamagerInterface_GetShockwaveDuration_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Damagers.ShockwaveDamagerComponent.Multi_StartShockwave
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
// Parameters:
// FVector                        InStartLocation                (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UShockwaveDamagerComponent::Multi_StartShockwave(const FVector& InStartLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.ShockwaveDamagerComponent.Multi_StartShockwave"));

	UShockwaveDamagerComponent_Multi_StartShockwave_Params params;
	params.InStartLocation = InStartLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function Damagers.ShipDamagerComponent.SetShape
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UPrimitiveComponent*           InShape                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShipDamagerComponent::SetShape(UPrimitiveComponent* InShape)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.ShipDamagerComponent.SetShape"));

	UShipDamagerComponent_SetShape_Params params;
	params.InShape = InShape;

	UObject::ProcessEvent(fn, &params);
}


// Function Damagers.ShipDamagerComponent.EndDamage
// (Final, Native, Public, BlueprintCallable)

void UShipDamagerComponent::EndDamage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.ShipDamagerComponent.EndDamage"));

	UShipDamagerComponent_EndDamage_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Damagers.ShipDamagerComponent.BeginDamage
// (Final, Native, Public, BlueprintCallable)

void UShipDamagerComponent::BeginDamage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.ShipDamagerComponent.BeginDamage"));

	UShipDamagerComponent_BeginDamage_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
