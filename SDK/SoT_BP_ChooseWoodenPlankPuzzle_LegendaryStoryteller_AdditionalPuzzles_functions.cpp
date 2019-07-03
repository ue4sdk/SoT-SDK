// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles.BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C.Set Puzzle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDS_LegendaryStorytellerWoodPlankPuzzle> PlankPuzzles                   (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C::Set_Puzzle(TArray<struct FDS_LegendaryStorytellerWoodPlankPuzzle>* PlankPuzzles)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles.BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C.Set Puzzle"));

	struct
	{
		TArray<struct FDS_LegendaryStorytellerWoodPlankPuzzle> PlankPuzzles;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PlankPuzzles != nullptr)
		*PlankPuzzles = params.PlankPuzzles;
}


// Function BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles.BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C.GetIslandActorFromRef
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class AActor>        Actor                          (Parm)
// struct FName                   IslandName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C::GetIslandActorFromRef(TAssetPtr<class AActor> Actor, struct FName* IslandName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles.BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C.GetIslandActorFromRef"));

	struct
	{
		TAssetPtr<class AActor>        Actor;
		struct FName                   IslandName;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	if (IslandName != nullptr)
		*IslandName = params.IslandName;
}


// Function BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles.BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C.Get Puzzle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDS_LegendaryStorytellerWoodPlankPuzzle> PlankPuzzle                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FDS_LegendaryStorytellerWoodPlankPuzzle Item                           (Parm, OutParm)

void UBP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C::Get_Puzzle(TArray<struct FDS_LegendaryStorytellerWoodPlankPuzzle>* PlankPuzzle, struct FDS_LegendaryStorytellerWoodPlankPuzzle* Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles.BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C.Get Puzzle"));

	struct
	{
		TArray<struct FDS_LegendaryStorytellerWoodPlankPuzzle> PlankPuzzle;
		struct FDS_LegendaryStorytellerWoodPlankPuzzle Item;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PlankPuzzle != nullptr)
		*PlankPuzzle = params.PlankPuzzle;
	if (Item != nullptr)
		*Item = params.Item;
}


// Function BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles.BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles.BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles.BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C.ExecuteUbergraph_BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C::ExecuteUbergraph_BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles.BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C.ExecuteUbergraph_BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles"));

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
