// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AshenLordEncounter_MusicZone_Phase1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AshenLordEncounter_MusicZone_Phase1.BP_AshenLordEncounter_MusicZone_Phase1_C.OnRep_IsInVulnerableState
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AshenLordEncounter_MusicZone_Phase1_C::OnRep_IsInVulnerableState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AshenLordEncounter_MusicZone_Phase1.BP_AshenLordEncounter_MusicZone_Phase1_C.OnRep_IsInVulnerableState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AshenLordEncounter_MusicZone_Phase1.BP_AshenLordEncounter_MusicZone_Phase1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AshenLordEncounter_MusicZone_Phase1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AshenLordEncounter_MusicZone_Phase1.BP_AshenLordEncounter_MusicZone_Phase1_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AshenLordEncounter_MusicZone_Phase1.BP_AshenLordEncounter_MusicZone_Phase1_C.OnVulnerabilityStateEntered
// (Event, Public, BlueprintEvent)

void ABP_AshenLordEncounter_MusicZone_Phase1_C::OnVulnerabilityStateEntered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AshenLordEncounter_MusicZone_Phase1.BP_AshenLordEncounter_MusicZone_Phase1_C.OnVulnerabilityStateEntered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AshenLordEncounter_MusicZone_Phase1.BP_AshenLordEncounter_MusicZone_Phase1_C.ExecuteUbergraph_BP_AshenLordEncounter_MusicZone_Phase1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AshenLordEncounter_MusicZone_Phase1_C::ExecuteUbergraph_BP_AshenLordEncounter_MusicZone_Phase1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AshenLordEncounter_MusicZone_Phase1.BP_AshenLordEncounter_MusicZone_Phase1_C.ExecuteUbergraph_BP_AshenLordEncounter_MusicZone_Phase1"));

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
