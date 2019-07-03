#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TheArtOfTheTrickster_ChooseNoteLocations_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TheArtOfTheTrickster_ChooseNoteLocations.BP_TheArtOfTheTrickster_ChooseNoteLocations_C
// 0x0058 (0x00F0 - 0x0098)
class UBP_TheArtOfTheTrickster_ChooseNoteLocations_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FDS_TheArtOfTheTrickster_NoteGroup_Definition> ShuffledIslands;                                          // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDS_TheArtOfTheTrickster_NoteGroup_Definition SelectedIsland;                                           // 0x00B0(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TheArtOfTheTrickster_ChooseNoteLocations.BP_TheArtOfTheTrickster_ChooseNoteLocations_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void ExecuteUbergraph_BP_TheArtOfTheTrickster_ChooseNoteLocations(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
