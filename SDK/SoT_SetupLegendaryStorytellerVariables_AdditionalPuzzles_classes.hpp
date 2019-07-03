#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SetupLegendaryStorytellerVariables_AdditionalPuzzles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SetupLegendaryStorytellerVariables_AdditionalPuzzles.SetupLegendaryStorytellerVariables_AdditionalPuzzles_C
// 0x0008 (0x00A0 - 0x0098)
class USetupLegendaryStorytellerVariables_AdditionalPuzzles_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SetupLegendaryStorytellerVariables_AdditionalPuzzles.SetupLegendaryStorytellerVariables_AdditionalPuzzles_C"));
		return ptr;
	}


	void SelectPuzzleArea(TArray<struct FDS_LegendaryStorytellerAreaPuzzlePools>* AreaPuzzles, struct FDS_LegendaryStorytellerAreaPuzzlePools* SelectedArea);
	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void ExecuteUbergraph_SetupLegendaryStorytellerVariables_AdditionalPuzzles(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
