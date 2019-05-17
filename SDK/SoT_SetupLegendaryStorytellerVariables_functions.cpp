// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SetupLegendaryStorytellerVariables_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SetupLegendaryStorytellerVariables.SetupLegendaryStorytellerVariables_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USetupLegendaryStorytellerVariables_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SetupLegendaryStorytellerVariables.SetupLegendaryStorytellerVariables_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function SetupLegendaryStorytellerVariables.SetupLegendaryStorytellerVariables_C.ExecuteUbergraph_SetupLegendaryStorytellerVariables
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USetupLegendaryStorytellerVariables_C::ExecuteUbergraph_SetupLegendaryStorytellerVariables(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SetupLegendaryStorytellerVariables.SetupLegendaryStorytellerVariables_C.ExecuteUbergraph_SetupLegendaryStorytellerVariables"));

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
