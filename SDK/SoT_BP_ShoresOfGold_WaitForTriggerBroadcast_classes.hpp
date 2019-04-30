#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShoresOfGold_WaitForTriggerBroadcast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShoresOfGold_WaitForTriggerBroadcast.BP_ShoresOfGold_WaitForTriggerBroadcast_C
// 0x0008 (0x0098 - 0x0090)
class UBP_ShoresOfGold_WaitForTriggerBroadcast_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ShoresOfGold_WaitForTriggerBroadcast.BP_ShoresOfGold_WaitForTriggerBroadcast_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void Trigger_Entered();
	void ExecuteUbergraph_BP_ShoresOfGold_WaitForTriggerBroadcast(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
