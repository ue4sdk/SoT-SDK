// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShipDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShipDamage.DamageablePartsInterface.UnregisterDamageablePart
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageableActor                (Parm, ZeroConstructor, IsPlainOldData)

void UDamageablePartsInterface::UnregisterDamageablePart(class AActor* DamageableActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ShipDamage.DamageablePartsInterface.UnregisterDamageablePart"));

	struct
	{
		class AActor*                  DamageableActor;
	} params;

	params.DamageableActor = DamageableActor;

	UObject::ProcessEvent(fn, &params);
}


// Function ShipDamage.DamageablePartsInterface.RegisterDamageablePart
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageableActor                (Parm, ZeroConstructor, IsPlainOldData)

void UDamageablePartsInterface::RegisterDamageablePart(class AActor* DamageableActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ShipDamage.DamageablePartsInterface.RegisterDamageablePart"));

	struct
	{
		class AActor*                  DamageableActor;
	} params;

	params.DamageableActor = DamageableActor;

	UObject::ProcessEvent(fn, &params);
}


// Function ShipDamage.DamageablePartsInterface.GetDamageableParts
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UDamageablePartsInterface::GetDamageableParts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ShipDamage.DamageablePartsInterface.GetDamageableParts"));

	struct
	{
		TArray<class AActor*>          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
