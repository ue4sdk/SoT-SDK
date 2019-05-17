// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_DS_SetupShoresOfGoldVariables_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DS_SetupShoresOfGoldVariables.DS_SetupShoresOfGoldVariables_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDS_SetupShoresOfGoldVariables_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DS_SetupShoresOfGoldVariables.DS_SetupShoresOfGoldVariables_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function DS_SetupShoresOfGoldVariables.DS_SetupShoresOfGoldVariables_C.ExecuteUbergraph_DS_SetupShoresOfGoldVariables
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDS_SetupShoresOfGoldVariables_C::ExecuteUbergraph_DS_SetupShoresOfGoldVariables(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DS_SetupShoresOfGoldVariables.DS_SetupShoresOfGoldVariables_C.ExecuteUbergraph_DS_SetupShoresOfGoldVariables"));

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
