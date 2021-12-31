// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShipDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShipDamage.DamageablePartsInterface.UnregisterDamageablePart
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// AActor*                        DamageableActor                (Parm, ZeroConstructor, IsPlainOldData)

void UDamageablePartsInterface::UnregisterDamageablePart(AActor* DamageableActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ShipDamage.DamageablePartsInterface.UnregisterDamageablePart"));

	UDamageablePartsInterface_UnregisterDamageablePart_Params params;
	params.DamageableActor = DamageableActor;

	UObject::ProcessEvent(fn, &params);
}


// Function ShipDamage.DamageablePartsInterface.RegisterDamageablePart
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// AActor*                        DamageableActor                (Parm, ZeroConstructor, IsPlainOldData)

void UDamageablePartsInterface::RegisterDamageablePart(AActor* DamageableActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ShipDamage.DamageablePartsInterface.RegisterDamageablePart"));

	UDamageablePartsInterface_RegisterDamageablePart_Params params;
	params.DamageableActor = DamageableActor;

	UObject::ProcessEvent(fn, &params);
}


// Function ShipDamage.DamageablePartsInterface.GetDamageableParts
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<AActor*>                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<AActor*> UDamageablePartsInterface::GetDamageableParts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ShipDamage.DamageablePartsInterface.GetDamageableParts"));

	UDamageablePartsInterface_GetDamageableParts_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
