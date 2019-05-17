// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GenerateBuriedMomentoes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GenerateBuriedMomentoes.BP_GenerateBuriedMomentoes_C.SetPuzzle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDS_Puzzle>      Puzzles                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass*                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UBP_GenerateBuriedMomentoes_C::SetPuzzle(class UClass* Item, TArray<struct FDS_Puzzle>* Puzzles)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GenerateBuriedMomentoes.BP_GenerateBuriedMomentoes_C.SetPuzzle"));

	struct
	{
		TArray<struct FDS_Puzzle>      Puzzles;
		class UClass*                  Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);

	if (Puzzles != nullptr)
		*Puzzles = params.Puzzles;
}


// Function BP_GenerateBuriedMomentoes.BP_GenerateBuriedMomentoes_C.GetIslandFromActorRef
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class AActor>        Actor                          (Parm)
// struct FName                   IslandName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GenerateBuriedMomentoes_C::GetIslandFromActorRef(TAssetPtr<class AActor> Actor, struct FName* IslandName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GenerateBuriedMomentoes.BP_GenerateBuriedMomentoes_C.GetIslandFromActorRef"));

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


// Function BP_GenerateBuriedMomentoes.BP_GenerateBuriedMomentoes_C.GetPuzzle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDS_Puzzle>      Puzzles                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FDS_Puzzle              BuriedItem                     (Parm, OutParm)

void UBP_GenerateBuriedMomentoes_C::GetPuzzle(TArray<struct FDS_Puzzle>* Puzzles, struct FDS_Puzzle* BuriedItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GenerateBuriedMomentoes.BP_GenerateBuriedMomentoes_C.GetPuzzle"));

	struct
	{
		TArray<struct FDS_Puzzle>      Puzzles;
		struct FDS_Puzzle              BuriedItem;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Puzzles != nullptr)
		*Puzzles = params.Puzzles;
	if (BuriedItem != nullptr)
		*BuriedItem = params.BuriedItem;
}


// Function BP_GenerateBuriedMomentoes.BP_GenerateBuriedMomentoes_C.Start
// (Event, Protected, BlueprintEvent)

void UBP_GenerateBuriedMomentoes_C::Start()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GenerateBuriedMomentoes.BP_GenerateBuriedMomentoes_C.Start"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GenerateBuriedMomentoes.BP_GenerateBuriedMomentoes_C.ForIndex
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_GenerateBuriedMomentoes_C::ForIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GenerateBuriedMomentoes.BP_GenerateBuriedMomentoes_C.ForIndex"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GenerateBuriedMomentoes.BP_GenerateBuriedMomentoes_C.ExecuteUbergraph_BP_GenerateBuriedMomentoes
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_GenerateBuriedMomentoes_C::ExecuteUbergraph_BP_GenerateBuriedMomentoes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GenerateBuriedMomentoes.BP_GenerateBuriedMomentoes_C.ExecuteUbergraph_BP_GenerateBuriedMomentoes"));

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
