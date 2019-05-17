#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GenerateBuriedMomentoes_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GenerateBuriedMomentoes.BP_GenerateBuriedMomentoes_C
// 0x0018 (0x00B0 - 0x0098)
class UBP_GenerateBuriedMomentoes_C : public UTaleQuestParallelForeachStep
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FName>                               IslandsToExclude;                                         // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GenerateBuriedMomentoes.BP_GenerateBuriedMomentoes_C"));
		return ptr;
	}


	void SetPuzzle(class UClass* Item, TArray<struct FDS_Puzzle>* Puzzles);
	void GetIslandFromActorRef(TAssetPtr<class AActor> Actor, struct FName* IslandName);
	void GetPuzzle(TArray<struct FDS_Puzzle>* Puzzles, struct FDS_Puzzle* BuriedItem);
	void Start();
	void ForIndex(int Index);
	void ExecuteUbergraph_BP_GenerateBuriedMomentoes(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
