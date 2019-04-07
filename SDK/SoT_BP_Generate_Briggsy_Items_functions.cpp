// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Generate_Briggsy_Items_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Generate_Briggsy_Items.BP_Generate_Briggsy_Items_C.SetPuzzle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDS_LegendaryStorytellerPuzzle> Puzzles                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass*                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Generate_Briggsy_Items_C::SetPuzzle(class UClass* Item, TArray<struct FDS_LegendaryStorytellerPuzzle>* Puzzles)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Generate_Briggsy_Items.BP_Generate_Briggsy_Items_C.SetPuzzle"));

	struct
	{
		TArray<struct FDS_LegendaryStorytellerPuzzle> Puzzles;
		class UClass*                  Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);

	if (Puzzles != nullptr)
		*Puzzles = params.Puzzles;
}


// Function BP_Generate_Briggsy_Items.BP_Generate_Briggsy_Items_C.GetIslandFromActorRef
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class AActor>        Actor                          (Parm)
// struct FName                   IslandName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Generate_Briggsy_Items_C::GetIslandFromActorRef(TAssetPtr<class AActor> Actor, struct FName* IslandName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Generate_Briggsy_Items.BP_Generate_Briggsy_Items_C.GetIslandFromActorRef"));

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


// Function BP_Generate_Briggsy_Items.BP_Generate_Briggsy_Items_C.GetPuzzle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDS_LegendaryStorytellerPuzzle> Puzzles                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FDS_LegendaryStorytellerPuzzle Item                           (Parm, OutParm)

void UBP_Generate_Briggsy_Items_C::GetPuzzle(TArray<struct FDS_LegendaryStorytellerPuzzle>* Puzzles, struct FDS_LegendaryStorytellerPuzzle* Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Generate_Briggsy_Items.BP_Generate_Briggsy_Items_C.GetPuzzle"));

	struct
	{
		TArray<struct FDS_LegendaryStorytellerPuzzle> Puzzles;
		struct FDS_LegendaryStorytellerPuzzle Item;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Puzzles != nullptr)
		*Puzzles = params.Puzzles;
	if (Item != nullptr)
		*Item = params.Item;
}


// Function BP_Generate_Briggsy_Items.BP_Generate_Briggsy_Items_C.ForIndex
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Generate_Briggsy_Items_C::ForIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Generate_Briggsy_Items.BP_Generate_Briggsy_Items_C.ForIndex"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Generate_Briggsy_Items.BP_Generate_Briggsy_Items_C.Start
// (Event, Protected, BlueprintEvent)

void UBP_Generate_Briggsy_Items_C::Start()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Generate_Briggsy_Items.BP_Generate_Briggsy_Items_C.Start"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Generate_Briggsy_Items.BP_Generate_Briggsy_Items_C.ExecuteUbergraph_BP_Generate_Briggsy_Items
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Generate_Briggsy_Items_C::ExecuteUbergraph_BP_Generate_Briggsy_Items(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Generate_Briggsy_Items.BP_Generate_Briggsy_Items_C.ExecuteUbergraph_BP_Generate_Briggsy_Items"));

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
