// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WildRose_RookeAndCrewEncounter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WildRose_RookeAndCrewEncounter.BP_WildRose_RookeAndCrewEncounter_C.SetRightPendant
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Pendant                        (Parm, ZeroConstructor, IsPlainOldData)

void UBP_WildRose_RookeAndCrewEncounter_C::SetRightPendant(class AActor* Pendant)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WildRose_RookeAndCrewEncounter.BP_WildRose_RookeAndCrewEncounter_C.SetRightPendant"));

	struct
	{
		class AActor*                  Pendant;
	} params;

	params.Pendant = Pendant;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_WildRose_RookeAndCrewEncounter.BP_WildRose_RookeAndCrewEncounter_C.OnSpawn
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void UBP_WildRose_RookeAndCrewEncounter_C::OnSpawn(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WildRose_RookeAndCrewEncounter.BP_WildRose_RookeAndCrewEncounter_C.OnSpawn"));

	struct
	{
		class APawn*                   Pawn;
	} params;

	params.Pawn = Pawn;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_WildRose_RookeAndCrewEncounter.BP_WildRose_RookeAndCrewEncounter_C.OnDespawn
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECharacterDeathType> DeathType                      (Parm, ZeroConstructor, IsPlainOldData)

void UBP_WildRose_RookeAndCrewEncounter_C::OnDespawn(class APawn* Pawn, TEnumAsByte<ECharacterDeathType> DeathType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WildRose_RookeAndCrewEncounter.BP_WildRose_RookeAndCrewEncounter_C.OnDespawn"));

	struct
	{
		class APawn*                   Pawn;
		TEnumAsByte<ECharacterDeathType> DeathType;
	} params;

	params.Pawn = Pawn;
	params.DeathType = DeathType;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_WildRose_RookeAndCrewEncounter.BP_WildRose_RookeAndCrewEncounter_C.OnSetSpawnLocationActor
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_WildRose_RookeAndCrewEncounter_C::OnSetSpawnLocationActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WildRose_RookeAndCrewEncounter.BP_WildRose_RookeAndCrewEncounter_C.OnSetSpawnLocationActor"));

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_WildRose_RookeAndCrewEncounter.BP_WildRose_RookeAndCrewEncounter_C.ExecuteUbergraph_BP_WildRose_RookeAndCrewEncounter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_WildRose_RookeAndCrewEncounter_C::ExecuteUbergraph_BP_WildRose_RookeAndCrewEncounter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WildRose_RookeAndCrewEncounter.BP_WildRose_RookeAndCrewEncounter_C.ExecuteUbergraph_BP_WildRose_RookeAndCrewEncounter"));

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
