#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_DS_SetupShoresOfGoldVariables_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DS_SetupShoresOfGoldVariables.DS_SetupShoresOfGoldVariables_C
// 0x0008 (0x00A0 - 0x0098)
class UDS_SetupShoresOfGoldVariables_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass DS_SetupShoresOfGoldVariables.DS_SetupShoresOfGoldVariables_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void ExecuteUbergraph_DS_SetupShoresOfGoldVariables(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
