// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Fire_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Fire.FirePropagationInterface.SetAllCellsOnFire
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOnFire                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFirePropagationInterface::SetAllCellsOnFire(bool IsOnFire)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Fire.FirePropagationInterface.SetAllCellsOnFire"));

	struct
	{
		bool                           IsOnFire;
	} params;

	params.IsOnFire = IsOnFire;

	UObject::ProcessEvent(fn, &params);
}


// Function Fire.ShipFirePropagationComponent.OnRep_CellData
// (Final, Native, Private)

void UShipFirePropagationComponent::OnRep_CellData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Fire.ShipFirePropagationComponent.OnRep_CellData"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
