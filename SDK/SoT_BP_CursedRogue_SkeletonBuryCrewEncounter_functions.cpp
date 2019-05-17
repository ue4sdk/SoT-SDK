// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CursedRogue_SkeletonBuryCrewEncounter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CursedRogue_SkeletonBuryCrewEncounter.BP_CursedRogue_SkeletonBuryCrewEncounter_C.TriggerEventProxyBroadcast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_CursedRogue_SkeletonBuryCrewEncounter_C::TriggerEventProxyBroadcast()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CursedRogue_SkeletonBuryCrewEncounter.BP_CursedRogue_SkeletonBuryCrewEncounter_C.TriggerEventProxyBroadcast"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CursedRogue_SkeletonBuryCrewEncounter.BP_CursedRogue_SkeletonBuryCrewEncounter_C.OnDespawn
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECharacterDeathType> DeathType                      (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CursedRogue_SkeletonBuryCrewEncounter_C::OnDespawn(class APawn* Pawn, TEnumAsByte<ECharacterDeathType> DeathType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CursedRogue_SkeletonBuryCrewEncounter.BP_CursedRogue_SkeletonBuryCrewEncounter_C.OnDespawn"));

	struct
	{
		class APawn*                   Pawn;
		TEnumAsByte<ECharacterDeathType> DeathType;
	} params;

	params.Pawn = Pawn;
	params.DeathType = DeathType;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CursedRogue_SkeletonBuryCrewEncounter.BP_CursedRogue_SkeletonBuryCrewEncounter_C.OnSpawn
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CursedRogue_SkeletonBuryCrewEncounter_C::OnSpawn(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CursedRogue_SkeletonBuryCrewEncounter.BP_CursedRogue_SkeletonBuryCrewEncounter_C.OnSpawn"));

	struct
	{
		class APawn*                   Pawn;
	} params;

	params.Pawn = Pawn;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CursedRogue_SkeletonBuryCrewEncounter.BP_CursedRogue_SkeletonBuryCrewEncounter_C.ExecuteUbergraph_BP_CursedRogue_SkeletonBuryCrewEncounter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CursedRogue_SkeletonBuryCrewEncounter_C::ExecuteUbergraph_BP_CursedRogue_SkeletonBuryCrewEncounter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CursedRogue_SkeletonBuryCrewEncounter.BP_CursedRogue_SkeletonBuryCrewEncounter_C.ExecuteUbergraph_BP_CursedRogue_SkeletonBuryCrewEncounter"));

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
