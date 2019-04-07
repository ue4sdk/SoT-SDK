// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TheArtOfTheTrickster_TrapmakersLabEncounter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TheArtOfTheTrickster_TrapmakersLabEncounter.BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C.SetNoteInVariables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CollectableNote                (Parm, ZeroConstructor, IsPlainOldData)

void UBP_TheArtOfTheTrickster_TrapmakersLabEncounter_C::SetNoteInVariables(class AActor* CollectableNote)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TheArtOfTheTrickster_TrapmakersLabEncounter.BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C.SetNoteInVariables"));

	struct
	{
		class AActor*                  CollectableNote;
	} params;

	params.CollectableNote = CollectableNote;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TheArtOfTheTrickster_TrapmakersLabEncounter.BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C.SetTotemInQuestVariables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItemInfo*               Totem                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_TheArtOfTheTrickster_TrapmakersLabEncounter_C::SetTotemInQuestVariables(class AItemInfo* Totem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TheArtOfTheTrickster_TrapmakersLabEncounter.BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C.SetTotemInQuestVariables"));

	struct
	{
		class AItemInfo*               Totem;
	} params;

	params.Totem = Totem;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TheArtOfTheTrickster_TrapmakersLabEncounter.BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C.OnSpawn
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void UBP_TheArtOfTheTrickster_TrapmakersLabEncounter_C::OnSpawn(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TheArtOfTheTrickster_TrapmakersLabEncounter.BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C.OnSpawn"));

	struct
	{
		class APawn*                   Pawn;
	} params;

	params.Pawn = Pawn;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TheArtOfTheTrickster_TrapmakersLabEncounter.BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C.OnDespawn
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECharacterDeathType> DeathType                      (Parm, ZeroConstructor, IsPlainOldData)

void UBP_TheArtOfTheTrickster_TrapmakersLabEncounter_C::OnDespawn(class APawn* Pawn, TEnumAsByte<ECharacterDeathType> DeathType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TheArtOfTheTrickster_TrapmakersLabEncounter.BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C.OnDespawn"));

	struct
	{
		class APawn*                   Pawn;
		TEnumAsByte<ECharacterDeathType> DeathType;
	} params;

	params.Pawn = Pawn;
	params.DeathType = DeathType;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TheArtOfTheTrickster_TrapmakersLabEncounter.BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C.ExecuteUbergraph_BP_TheArtOfTheTrickster_TrapmakersLabEncounter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_TheArtOfTheTrickster_TrapmakersLabEncounter_C::ExecuteUbergraph_BP_TheArtOfTheTrickster_TrapmakersLabEncounter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TheArtOfTheTrickster_TrapmakersLabEncounter.BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C.ExecuteUbergraph_BP_TheArtOfTheTrickster_TrapmakersLabEncounter"));

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
