// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shroudbreaker_SelectNPC_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Shroudbreaker_SelectNPC.BP_Shroudbreaker_SelectNPC_C.ForIndex
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Shroudbreaker_SelectNPC_C::ForIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_SelectNPC.BP_Shroudbreaker_SelectNPC_C.ForIndex"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_SelectNPC.BP_Shroudbreaker_SelectNPC_C.ExecuteUbergraph_BP_Shroudbreaker_SelectNPC
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Shroudbreaker_SelectNPC_C::ExecuteUbergraph_BP_Shroudbreaker_SelectNPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_SelectNPC.BP_Shroudbreaker_SelectNPC_C.ExecuteUbergraph_BP_Shroudbreaker_SelectNPC"));

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
