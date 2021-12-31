#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_EmissaryRank2_RB_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PromptActor_EmissaryRank2_RB.BP_PromptActor_EmissaryRank2_RB_C
// 0x0038 (0x0440 - 0x0408)
class ABP_PromptActor_EmissaryRank2_RB_C : public ABP_PromptActorBase_C
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0408(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UBP_Prompt_EmissaryLevelRankChange_C*              PromptCoordinator;                                        // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UClass*                                            PromptCounterAccessKey;                                   // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UClass*                                            Company;                                                  // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExpectedLevel;                                            // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	TArray<FPrioritisedPromptWithHandle>               Prompts;                                                  // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PromptActor_EmissaryRank2_RB.BP_PromptActor_EmissaryRank2_RB_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_PromptActor_EmissaryRank2_RB(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
