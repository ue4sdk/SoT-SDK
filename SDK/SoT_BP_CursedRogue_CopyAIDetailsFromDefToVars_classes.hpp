#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CursedRogue_CopyAIDetailsFromDefToVars_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CursedRogue_CopyAIDetailsFromDefToVars.BP_CursedRogue_CopyAIDetailsFromDefToVars_C
// 0x0008 (0x0098 - 0x0090)
class UBP_CursedRogue_CopyAIDetailsFromDefToVars_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CursedRogue_CopyAIDetailsFromDefToVars.BP_CursedRogue_CopyAIDetailsFromDefToVars_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void ExecuteUbergraph_BP_CursedRogue_CopyAIDetailsFromDefToVars(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
