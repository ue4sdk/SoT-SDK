// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_5_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_5.BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_4_C.OnSpawn
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void UBP_RevengeOfTheMorningstar_EncounterSpawner_Crew_4_C::OnSpawn(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_5.BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_4_C.OnSpawn"));

	struct
	{
		class APawn*                   Pawn;
	} params;

	params.Pawn = Pawn;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_5.BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_4_C.ExecuteUbergraph_BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_5
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_RevengeOfTheMorningstar_EncounterSpawner_Crew_4_C::ExecuteUbergraph_BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_5(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_5.BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_4_C.ExecuteUbergraph_BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_5"));

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
