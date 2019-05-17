// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RevengeOfTheMorningstar_ChooseNoteLocation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RevengeOfTheMorningstar_ChooseNoteLocation.BP_RevengeOfTheMorningstar_ChooseNoteLocation_C.ForIndex
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_RevengeOfTheMorningstar_ChooseNoteLocation_C::ForIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_RevengeOfTheMorningstar_ChooseNoteLocation.BP_RevengeOfTheMorningstar_ChooseNoteLocation_C.ForIndex"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_RevengeOfTheMorningstar_ChooseNoteLocation.BP_RevengeOfTheMorningstar_ChooseNoteLocation_C.Start
// (Event, Protected, BlueprintEvent)

void UBP_RevengeOfTheMorningstar_ChooseNoteLocation_C::Start()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_RevengeOfTheMorningstar_ChooseNoteLocation.BP_RevengeOfTheMorningstar_ChooseNoteLocation_C.Start"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_RevengeOfTheMorningstar_ChooseNoteLocation.BP_RevengeOfTheMorningstar_ChooseNoteLocation_C.ExecuteUbergraph_BP_RevengeOfTheMorningstar_ChooseNoteLocation
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_RevengeOfTheMorningstar_ChooseNoteLocation_C::ExecuteUbergraph_BP_RevengeOfTheMorningstar_ChooseNoteLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_RevengeOfTheMorningstar_ChooseNoteLocation.BP_RevengeOfTheMorningstar_ChooseNoteLocation_C.ExecuteUbergraph_BP_RevengeOfTheMorningstar_ChooseNoteLocation"));

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
