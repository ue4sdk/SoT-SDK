// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Campaign027a_Larinna_BilgeRats_NPC_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Campaign027a_Larinna_BilgeRats_NPC.BP_Campaign027a_Larinna_BilgeRats_NPC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Campaign027a_Larinna_BilgeRats_NPC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Campaign027a_Larinna_BilgeRats_NPC.BP_Campaign027a_Larinna_BilgeRats_NPC_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Campaign027a_Larinna_BilgeRats_NPC.BP_Campaign027a_Larinna_BilgeRats_NPC_C.ExecuteUbergraph_BP_Campaign027a_Larinna_BilgeRats_NPC
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Campaign027a_Larinna_BilgeRats_NPC_C::ExecuteUbergraph_BP_Campaign027a_Larinna_BilgeRats_NPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Campaign027a_Larinna_BilgeRats_NPC.BP_Campaign027a_Larinna_BilgeRats_NPC_C.ExecuteUbergraph_BP_Campaign027a_Larinna_BilgeRats_NPC"));

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
