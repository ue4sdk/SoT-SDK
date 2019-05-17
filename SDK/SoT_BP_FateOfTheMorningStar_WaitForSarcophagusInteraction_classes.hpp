#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FateOfTheMorningStar_WaitForSarcophagusInteraction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FateOfTheMorningStar_WaitForSarcophagusInteraction.BP_FateOfTheMorningStar_WaitForSarcophagusInteraction_C
// 0x0008 (0x0098 - 0x0090)
class UBP_FateOfTheMorningStar_WaitForSarcophagusInteraction_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FateOfTheMorningStar_WaitForSarcophagusInteraction.BP_FateOfTheMorningStar_WaitForSarcophagusInteraction_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void HasBeenInteracted();
	void ExecuteUbergraph_BP_FateOfTheMorningStar_WaitForSarcophagusInteraction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
