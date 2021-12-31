#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_BuryingItem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C
// 0x0179 (0x0291 - 0x0118)
class UBP_Prompt_BuryingItem_C : public UBP_PromptCoordinator_Base_C
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	FObjectMessagingHandle                             WieldableItemUseEvent;                                    // 0x0120(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	UClass*                                            NotificationInputId;                                      // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UClass*                                            BuryingItemPromptAccessKey;                               // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FObjectMessagingHandle                             WieldableItemEquipEvent;                                  // 0x0178(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	FPrioritisedPromptWithHandle                       Prompt;                                                   // 0x01C0(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               WieldingShovel;                                           // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	FObjectMessagingHandle                             WieldableItemStow;                                        // 0x0230(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	UClass*                                            In;                                                       // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsingSecondaryInput;                                      // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StatCompleted;                                            // 0x0281(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0282(0x0006) MISSED OFFSET
	FObjectMessagingDispatcherHandle                   CharacterDispatcher;                                      // 0x0288(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasShown;                                                 // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C"));
		return ptr;
	}


	void OnWieldFunc(const FAthena_FEventObjectWielded& EventObjectWielded);
	void RegisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void Evaluate();
	void OnWieldEvent(const FAthena_FEventObjectWielded& OnWieldEvent);
	void ExecuteUbergraph_BP_Prompt_BuryingItem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
