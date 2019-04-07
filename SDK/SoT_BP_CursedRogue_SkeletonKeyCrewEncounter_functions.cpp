// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CursedRogue_SkeletonKeyCrewEncounter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CursedRogue_SkeletonKeyCrewEncounter.BP_CursedRogue_SkeletonKeyCrewEncounter_C.OnDespawn
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECharacterDeathType> DeathType                      (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CursedRogue_SkeletonKeyCrewEncounter_C::OnDespawn(class APawn* Pawn, TEnumAsByte<ECharacterDeathType> DeathType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CursedRogue_SkeletonKeyCrewEncounter.BP_CursedRogue_SkeletonKeyCrewEncounter_C.OnDespawn"));

	struct
	{
		class APawn*                   Pawn;
		TEnumAsByte<ECharacterDeathType> DeathType;
	} params;

	params.Pawn = Pawn;
	params.DeathType = DeathType;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CursedRogue_SkeletonKeyCrewEncounter.BP_CursedRogue_SkeletonKeyCrewEncounter_C.ItemPickedUp
// (BlueprintCallable, BlueprintEvent)

void UBP_CursedRogue_SkeletonKeyCrewEncounter_C::ItemPickedUp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CursedRogue_SkeletonKeyCrewEncounter.BP_CursedRogue_SkeletonKeyCrewEncounter_C.ItemPickedUp"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CursedRogue_SkeletonKeyCrewEncounter.BP_CursedRogue_SkeletonKeyCrewEncounter_C.OnSpawn
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CursedRogue_SkeletonKeyCrewEncounter_C::OnSpawn(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CursedRogue_SkeletonKeyCrewEncounter.BP_CursedRogue_SkeletonKeyCrewEncounter_C.OnSpawn"));

	struct
	{
		class APawn*                   Pawn;
	} params;

	params.Pawn = Pawn;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CursedRogue_SkeletonKeyCrewEncounter.BP_CursedRogue_SkeletonKeyCrewEncounter_C.ExecuteUbergraph_BP_CursedRogue_SkeletonKeyCrewEncounter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CursedRogue_SkeletonKeyCrewEncounter_C::ExecuteUbergraph_BP_CursedRogue_SkeletonKeyCrewEncounter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CursedRogue_SkeletonKeyCrewEncounter.BP_CursedRogue_SkeletonKeyCrewEncounter_C.ExecuteUbergraph_BP_CursedRogue_SkeletonKeyCrewEncounter"));

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
