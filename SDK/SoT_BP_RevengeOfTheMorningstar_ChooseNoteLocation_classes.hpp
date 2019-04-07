#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RevengeOfTheMorningstar_ChooseNoteLocation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RevengeOfTheMorningstar_ChooseNoteLocation.BP_RevengeOfTheMorningstar_ChooseNoteLocation_C
// 0x0018 (0x00B0 - 0x0098)
class UBP_RevengeOfTheMorningstar_ChooseNoteLocation_C : public UTaleQuestParallelForeachStep
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AActor*>                              Locations;                                                // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RevengeOfTheMorningstar_ChooseNoteLocation.BP_RevengeOfTheMorningstar_ChooseNoteLocation_C"));
		return ptr;
	}


	void ForIndex(int Index);
	void Start();
	void ExecuteUbergraph_BP_RevengeOfTheMorningstar_ChooseNoteLocation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
