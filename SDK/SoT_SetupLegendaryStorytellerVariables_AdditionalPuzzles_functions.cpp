// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SetupLegendaryStorytellerVariables_AdditionalPuzzles_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SetupLegendaryStorytellerVariables_AdditionalPuzzles.SetupLegendaryStorytellerVariables_AdditionalPuzzles_C.SelectPuzzleArea
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDS_LegendaryStorytellerAreaPuzzlePools> AreaPuzzles                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FDS_LegendaryStorytellerAreaPuzzlePools SelectedArea                   (Parm, OutParm)

void USetupLegendaryStorytellerVariables_AdditionalPuzzles_C::SelectPuzzleArea(TArray<struct FDS_LegendaryStorytellerAreaPuzzlePools>* AreaPuzzles, struct FDS_LegendaryStorytellerAreaPuzzlePools* SelectedArea)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SetupLegendaryStorytellerVariables_AdditionalPuzzles.SetupLegendaryStorytellerVariables_AdditionalPuzzles_C.SelectPuzzleArea"));

	struct
	{
		TArray<struct FDS_LegendaryStorytellerAreaPuzzlePools> AreaPuzzles;
		struct FDS_LegendaryStorytellerAreaPuzzlePools SelectedArea;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AreaPuzzles != nullptr)
		*AreaPuzzles = params.AreaPuzzles;
	if (SelectedArea != nullptr)
		*SelectedArea = params.SelectedArea;
}


// Function SetupLegendaryStorytellerVariables_AdditionalPuzzles.SetupLegendaryStorytellerVariables_AdditionalPuzzles_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USetupLegendaryStorytellerVariables_AdditionalPuzzles_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SetupLegendaryStorytellerVariables_AdditionalPuzzles.SetupLegendaryStorytellerVariables_AdditionalPuzzles_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function SetupLegendaryStorytellerVariables_AdditionalPuzzles.SetupLegendaryStorytellerVariables_AdditionalPuzzles_C.ExecuteUbergraph_SetupLegendaryStorytellerVariables_AdditionalPuzzles
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USetupLegendaryStorytellerVariables_AdditionalPuzzles_C::ExecuteUbergraph_SetupLegendaryStorytellerVariables_AdditionalPuzzles(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SetupLegendaryStorytellerVariables_AdditionalPuzzles.SetupLegendaryStorytellerVariables_AdditionalPuzzles_C.ExecuteUbergraph_SetupLegendaryStorytellerVariables_AdditionalPuzzles"));

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
