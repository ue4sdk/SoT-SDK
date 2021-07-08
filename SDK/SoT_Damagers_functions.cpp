// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Damagers_classes.hpp"

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

	struct
	{
		float                          Radius;
	} params;

	params.Radius = Radius;

	UObject::ProcessEvent(fn, &params);
}


// Function Damagers.RadialDamagerComponent.EndDamage
// (Final, Native, Public, BlueprintCallable)

void URadialDamagerComponent::EndDamage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.RadialDamagerComponent.EndDamage"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Damagers.RadialDamagerComponent.BeginDamage
// (Final, Native, Public, BlueprintCallable)

void URadialDamagerComponent::BeginDamage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.RadialDamagerComponent.BeginDamage"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Damagers.ShipDamagerComponent.SetShape
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     InShape                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShipDamagerComponent::SetShape(class UPrimitiveComponent* InShape)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.ShipDamagerComponent.SetShape"));

	struct
	{
		class UPrimitiveComponent*     InShape;
	} params;

	params.InShape = InShape;

	UObject::ProcessEvent(fn, &params);
}


// Function Damagers.ShipDamagerComponent.EndDamage
// (Final, Native, Public, BlueprintCallable)

void UShipDamagerComponent::EndDamage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.ShipDamagerComponent.EndDamage"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Damagers.ShipDamagerComponent.BeginDamage
// (Final, Native, Public, BlueprintCallable)

void UShipDamagerComponent::BeginDamage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.ShipDamagerComponent.BeginDamage"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Damagers.ShockwaveDamagerInterface.StartShockwaveAtLocation
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 StartLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UShockwaveDamagerInterface::StartShockwaveAtLocation(const struct FVector& StartLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.ShockwaveDamagerInterface.StartShockwaveAtLocation"));

	struct
	{
		struct FVector                 StartLocation;
	} params;

	params.StartLocation = StartLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function Damagers.ShockwaveDamagerInterface.StartShockwave
// (Native, Public, BlueprintCallable)

void UShockwaveDamagerInterface::StartShockwave()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.ShockwaveDamagerInterface.StartShockwave"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Damagers.ShockwaveDamagerInterface.IgnoreGhostShip
// (Native, Public, BlueprintCallable)
// Parameters:
// class AAggressiveGhostShip*    Ship                           (Parm, ZeroConstructor, IsPlainOldData)

void UShockwaveDamagerInterface::IgnoreGhostShip(class AAggressiveGhostShip* Ship)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.ShockwaveDamagerInterface.IgnoreGhostShip"));

	struct
	{
		class AAggressiveGhostShip*    Ship;
	} params;

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

	struct
	{
		float                          ReturnValue;
	} params;


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

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Damagers.ShockwaveDamagerComponent.Multi_StartShockwave
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
// Parameters:
// struct FVector                 InStartLocation                (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UShockwaveDamagerComponent::Multi_StartShockwave(const struct FVector& InStartLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.ShockwaveDamagerComponent.Multi_StartShockwave"));

	struct
	{
		struct FVector                 InStartLocation;
	} params;

	params.InStartLocation = InStartLocation;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
