// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SetupStarsOfAThiefVariables_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SetupStarsOfAThiefVariables.BP_SetupStarsOfAThiefVariables_C.SelectPuzzlePair
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDS_StarsOfAThiefPairsPuzzles> PuzzlePairs                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FDS_StarsOfAThiefPairsPuzzles PuzzlePair                     (Parm, OutParm)

void UBP_SetupStarsOfAThiefVariables_C::SelectPuzzlePair(TArray<struct FDS_StarsOfAThiefPairsPuzzles>* PuzzlePairs, struct FDS_StarsOfAThiefPairsPuzzles* PuzzlePair)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SetupStarsOfAThiefVariables.BP_SetupStarsOfAThiefVariables_C.SelectPuzzlePair"));

	struct
	{
		TArray<struct FDS_StarsOfAThiefPairsPuzzles> PuzzlePairs;
		struct FDS_StarsOfAThiefPairsPuzzles PuzzlePair;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PuzzlePairs != nullptr)
		*PuzzlePairs = params.PuzzlePairs;
	if (PuzzlePair != nullptr)
		*PuzzlePair = params.PuzzlePair;
}


// Function BP_SetupStarsOfAThiefVariables.BP_SetupStarsOfAThiefVariables_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SetupStarsOfAThiefVariables_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SetupStarsOfAThiefVariables.BP_SetupStarsOfAThiefVariables_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SetupStarsOfAThiefVariables.BP_SetupStarsOfAThiefVariables_C.ExecuteUbergraph_BP_SetupStarsOfAThiefVariables
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_SetupStarsOfAThiefVariables_C::ExecuteUbergraph_BP_SetupStarsOfAThiefVariables(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SetupStarsOfAThiefVariables.BP_SetupStarsOfAThiefVariables_C.ExecuteUbergraph_BP_SetupStarsOfAThiefVariables"));

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
