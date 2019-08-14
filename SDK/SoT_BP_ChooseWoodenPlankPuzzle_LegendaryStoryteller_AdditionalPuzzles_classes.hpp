#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles.BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C
// 0x0018 (0x00B0 - 0x0098)
class UBP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FName>                               IslandsToExclude;                                         // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles.BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C"));
		return ptr;
	}


	void Set_Puzzle(TArray<struct FDS_LegendaryStorytellerWoodPlankPuzzle>* PlankPuzzles);
	void GetIslandActorFromRef(TAssetPtr<class AActor> Actor, struct FName* IslandName);
	void Get_Puzzle(TArray<struct FDS_LegendaryStorytellerWoodPlankPuzzle>* PlankPuzzle, struct FDS_LegendaryStorytellerWoodPlankPuzzle* Item);
	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void ExecuteUbergraph_BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
