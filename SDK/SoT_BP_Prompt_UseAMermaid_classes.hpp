#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_UseAMermaid_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C
// 0x0164 (0x027C - 0x0118)
class UBP_Prompt_UseAMermaid_C : public UBP_PromptCoordinator_Base_C
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               State_IsThereAMermaid;                                    // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	FObjectMessagingHandle                             Handle_OnMermaidActivatedLocally;                         // 0x0128(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	FObjectMessagingHandle                             Handle_OnMermaidDeactivatedLocally;                       // 0x0170(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	FObjectMessagingHandle                             Handle_OnMermaidUsed;                                     // 0x01B8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               State_MermaidUsed;                                        // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0201(0x0007) MISSED OFFSET
	FPrioritisedPromptWithHandle                       Prompt_UseMermaid;                                        // 0x0208(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               State_ShowPrompt;                                         // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0271(0x0003) MISSED OFFSET
	float                                              PromptDisplayDuration;                                    // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PromptHideDuration;                                       // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C"));
		return ptr;
	}


	void ResetState();
	FPromptEvaluation EvaluatePromptDisplayState();
	void PostInitialize();
	void Prompt_MermaidActivatedLocally(const FMermaidActivatedLocally& Ev);
	void Prompt_MermaidDeactivatedLocally(const FMermaidDeactivatedLocally& Ev);
	void Prompt_MermaidUsed(const FMermaidUsedEvent& Ev);
	void UnregisterOtherEvents_Implementable();
	void RegisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void ExecuteUbergraph_BP_Prompt_UseAMermaid(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
