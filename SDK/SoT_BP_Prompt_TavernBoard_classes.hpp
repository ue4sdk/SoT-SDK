#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_TavernBoard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C
// 0x0119 (0x0231 - 0x0118)
class UBP_Prompt_TavernBoard_C : public UBP_PromptCoordinator_Base_C
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	FObjectMessagingHandle                             WieldableItemUseEvent;                                    // 0x0120(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	UClass*                                            TavernBoardPromptAccessKey;                               // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FPrioritisedPromptWithHandle                       Prompt;                                                   // 0x0170(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               InRangeOfTavernBoard;                                     // 0x01D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET
	FObjectMessagingHandle                             ApproachedTavernBoardHandle;                              // 0x01E0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	FObjectMessagingDispatcherHandle                   CharacterDispatcher;                                      // 0x0228(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasShown;                                                 // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C"));
		return ptr;
	}


	void RegisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void Evaluate();
	void OnApproachedTavernBoard(const FApproachedPlayerGeneratedMapsContainer& Event);
	void ExecuteUbergraph_BP_Prompt_TavernBoard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
