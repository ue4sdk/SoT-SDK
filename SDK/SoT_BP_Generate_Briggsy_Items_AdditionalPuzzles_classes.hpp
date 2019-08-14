#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Generate_Briggsy_Items_AdditionalPuzzles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Generate_Briggsy_Items_AdditionalPuzzles.BP_Generate_Briggsy_Items_AdditionalPuzzles_C
// 0x0038 (0x00D0 - 0x0098)
class UBP_Generate_Briggsy_Items_AdditionalPuzzles_C : public UTaleQuestParallelForeachStep
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FName>                               IslandsToExclude;                                         // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              NewVar_1;                                                 // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class AActor>>                    SelectedLocations;                                        // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Generate_Briggsy_Items_AdditionalPuzzles.BP_Generate_Briggsy_Items_AdditionalPuzzles_C"));
		return ptr;
	}


	void SetPuzzle(class UClass* Item, TArray<struct FDS_LegendaryStorytellerPuzzle_AdditionalPuzzles>* Puzzles, struct FDS_LegendaryStorytellerPuzzle_AdditionalPuzzles* ChosenPuzzle);
	void GetIslandFromActorRef(TAssetPtr<class AActor> Actor, struct FName* IslandName);
	void GetPuzzle(TArray<struct FDS_LegendaryStorytellerPuzzle_AdditionalPuzzles>* Puzzles, struct FDS_LegendaryStorytellerPuzzle_AdditionalPuzzles* Item);
	void ForIndex(int Index);
	void Start();
	void ExecuteUbergraph_BP_Generate_Briggsy_Items_AdditionalPuzzles(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
