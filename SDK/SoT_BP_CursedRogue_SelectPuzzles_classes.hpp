#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CursedRogue_SelectPuzzles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CursedRogue_SelectPuzzles.BP_CursedRogue_SelectPuzzles_C
// 0x0028 (0x00B8 - 0x0090)
class UBP_CursedRogue_SelectPuzzles_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FDS_CursedRogue_CrewPuzzle>          SelectedPuzzles;                                          // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FDS_CursedRogue_CrewPuzzle>          Puzzles;                                                  // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CursedRogue_SelectPuzzles.BP_CursedRogue_SelectPuzzles_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void ExecuteUbergraph_BP_CursedRogue_SelectPuzzles(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
