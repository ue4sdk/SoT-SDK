#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shroudbreaker_SendNPCToVariables_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Shroudbreaker_SendNPCToVariables.BP_Shroudbreaker_SendNPCToVariables_C
// 0x0018 (0x00A8 - 0x0090)
class UBP_Shroudbreaker_SendNPCToVariables_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AActor*>                              NPCsClone;                                                // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Shroudbreaker_SendNPCToVariables.BP_Shroudbreaker_SendNPCToVariables_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void ExecuteUbergraph_BP_Shroudbreaker_SendNPCToVariables(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
