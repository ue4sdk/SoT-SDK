// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Fire_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Fire.FlammableComponent.OnRep_OnFire
// (Final, Native, Protected)

void UFlammableComponent::OnRep_OnFire()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Fire.FlammableComponent.OnRep_OnFire"));

	UFlammableComponent_OnRep_OnFire_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Fire.FlammableComponent.Multicast_NotifyExtinguished_RPC
// (Net, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// FVector                        InExtinguishLocationWS         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UFlammableComponent::Multicast_NotifyExtinguished_RPC(const FVector& InExtinguishLocationWS)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Fire.FlammableComponent.Multicast_NotifyExtinguished_RPC"));

	UFlammableComponent_Multicast_NotifyExtinguished_RPC_Params params;
	params.InExtinguishLocationWS = InExtinguishLocationWS;

	UObject::ProcessEvent(fn, &params);
}


// Function Fire.FlammableComponent.IsOnFire
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFlammableComponent::IsOnFire()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Fire.FlammableComponent.IsOnFire"));

	UFlammableComponent_IsOnFire_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Fire.FlammableComponent.IncrementFireSource
// (Native, Public, BlueprintCallable)

void UFlammableComponent::IncrementFireSource()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Fire.FlammableComponent.IncrementFireSource"));

	UFlammableComponent_IncrementFireSource_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Fire.FlammableComponent.DecrementFireSource
// (Native, Public, BlueprintCallable)

void UFlammableComponent::DecrementFireSource()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Fire.FlammableComponent.DecrementFireSource"));

	UFlammableComponent_DecrementFireSource_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Fire.FlammableInterface.IncrementFireSource
// (Native, Public, BlueprintCallable)

void UFlammableInterface::IncrementFireSource()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Fire.FlammableInterface.IncrementFireSource"));

	UFlammableInterface_IncrementFireSource_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Fire.FlammableInterface.DecrementFireSource
// (Native, Public, BlueprintCallable)

void UFlammableInterface::DecrementFireSource()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Fire.FlammableInterface.DecrementFireSource"));

	UFlammableInterface_DecrementFireSource_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Fire.FirePropagationInterface.SetAllCellsState
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFireCellState>    State                          (Parm, ZeroConstructor, IsPlainOldData)

void UFirePropagationInterface::SetAllCellsState(TEnumAsByte<EFireCellState> State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Fire.FirePropagationInterface.SetAllCellsState"));

	UFirePropagationInterface_SetAllCellsState_Params params;
	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function Fire.ShipFirePropagationComponent.OnRep_CellData
// (Final, Native, Private)

void UShipFirePropagationComponent::OnRep_CellData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Fire.ShipFirePropagationComponent.OnRep_CellData"));

	UShipFirePropagationComponent_OnRep_CellData_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Fire.ShipFirePropagationComponent.OnRep_CellCharringData
// (Final, Native, Private)

void UShipFirePropagationComponent::OnRep_CellCharringData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Fire.ShipFirePropagationComponent.OnRep_CellCharringData"));

	UShipFirePropagationComponent_OnRep_CellCharringData_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
