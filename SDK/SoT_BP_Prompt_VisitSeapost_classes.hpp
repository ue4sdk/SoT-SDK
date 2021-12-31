#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_VisitSeapost_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C
// 0x0140 (0x0258 - 0x0118)
class UBP_Prompt_VisitSeapost_C : public UBP_PromptCoordinator_Base_C
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	FObjectMessagingHandle                             Handle_EventObjectWielded;                                // 0x0120(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	FPrioritisedPromptWithHandle                       Prompt_WieledFishOrMeat;                                  // 0x0168(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	FPrioritisedPromptWithHandle                       Prompt_VisitSeapost;                                      // 0x01D0(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsWieldingMeatOrFish;                                     // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0239(0x0003) MISSED OFFSET
	float                                              DisplayDuration;                                          // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayUntilNextPrompt;                                     // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	TArray<UClass*>                                    IgnoredFood;                                              // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C"));
		return ptr;
	}


	void OnEventObjectWielded(const FAthena_FEventObjectWielded& Event);
	void Evaluate();
	void EventObjectWielded(const FAthena_FEventObjectWielded& Event);
	void RegisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void ExecuteUbergraph_BP_Prompt_VisitSeapost(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
