#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Generate_Briggsy_Items_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Generate_Briggsy_Items.BP_Generate_Briggsy_Items_C
// 0x0048 (0x00E0 - 0x0098)
class UBP_Generate_Briggsy_Items_C : public UTaleQuestParallelForeachStep
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FName>                               IslandsToExclude;                                         // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              NewVar_1;                                                 // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FDS_LegendaryStorytellerPuzzle>      TempEasyPuzzles;                                          // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FDS_LegendaryStorytellerPuzzle>      TempHardPuzzles;                                          // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Generate_Briggsy_Items.BP_Generate_Briggsy_Items_C"));
		return ptr;
	}


	void SetPuzzle(class UClass* Item, TArray<struct FDS_LegendaryStorytellerPuzzle>* Puzzles);
	void GetIslandFromActorRef(TAssetPtr<class AActor> Actor, struct FName* IslandName);
	void GetPuzzle(TArray<struct FDS_LegendaryStorytellerPuzzle>* Puzzles, struct FDS_LegendaryStorytellerPuzzle* Item);
	void ForIndex(int Index);
	void Start();
	void ExecuteUbergraph_BP_Generate_Briggsy_Items(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
