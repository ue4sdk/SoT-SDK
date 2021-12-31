#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_QuickStorageTransfer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C
// 0x0130 (0x0248 - 0x0118)
class UBP_Prompt_QuickStorageTransfer_C : public UBP_PromptCoordinator_Base_C
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               State_Complete;                                           // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_ShowPrompt;                                         // 0x0121(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0122(0x0006) MISSED OFFSET
	FPrioritisedPromptWithHandle                       Prompt_QuickStorageTransfer_Take;                         // 0x0128(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	FPrioritisedPromptWithHandle                       Prompt_QuickStorageTransfer_Add;                          // 0x0190(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               State_ShowAdd;                                            // 0x01F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET
	FObjectMessagingHandle                             Handle_ObjectWielded;                                     // 0x0200(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C"));
		return ptr;
	}


	void IsStorageContainer(const TScriptInterface<class UWieldableInterface>& Object, bool* Result);
	FPromptEvaluation GetShowPrompt();
	FPromptEvaluation EvaluatePromptDisplayState();
	void RegisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void OnObjectWielded(const FAthena_FEventObjectWielded& Event);
	void ExecuteUbergraph_BP_Prompt_QuickStorageTransfer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
