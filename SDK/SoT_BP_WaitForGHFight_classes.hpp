#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WaitForGHFight_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WaitForGHFight.BP_WaitForGHFight_C
// 0x0008 (0x0098 - 0x0090)
class UBP_WaitForGHFight_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WaitForGHFight.BP_WaitForGHFight_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void OnBattleStarted(TArray<class AActor*> ActorsInside);
	void ExecuteUbergraph_BP_WaitForGHFight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
