// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shroudbreaker_MedallionDigEncounter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Shroudbreaker_MedallionDigEncounter.BP_Shroudbreaker_MedallionDigEncounter_C.OnDespawn
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECharacterDeathType> DeathType                      (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Shroudbreaker_MedallionDigEncounter_C::OnDespawn(class APawn* Pawn, TEnumAsByte<ECharacterDeathType> DeathType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_MedallionDigEncounter.BP_Shroudbreaker_MedallionDigEncounter_C.OnDespawn"));

	struct
	{
		class APawn*                   Pawn;
		TEnumAsByte<ECharacterDeathType> DeathType;
	} params;

	params.Pawn = Pawn;
	params.DeathType = DeathType;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_MedallionDigEncounter.BP_Shroudbreaker_MedallionDigEncounter_C.ExecuteUbergraph_BP_Shroudbreaker_MedallionDigEncounter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Shroudbreaker_MedallionDigEncounter_C::ExecuteUbergraph_BP_Shroudbreaker_MedallionDigEncounter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_MedallionDigEncounter.BP_Shroudbreaker_MedallionDigEncounter_C.ExecuteUbergraph_BP_Shroudbreaker_MedallionDigEncounter"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
