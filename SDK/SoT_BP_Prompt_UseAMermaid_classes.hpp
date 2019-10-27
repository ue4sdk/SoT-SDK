#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x0148 (0x0248 - 0x0100)
class UBP_Prompt_UseAMermaid_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0100(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               State_IsThereAMermaid;                                    // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	struct FObjectMessagingHandle                      Handle_OnMermaidActivatedLocally;                         // 0x0110(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_OnMermaidDeactivatedLocally;                       // 0x0158(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_OnMermaidUsed;                                     // 0x01A0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               State_MermaidUsed;                                        // 0x01E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01E9(0x0007) MISSED OFFSET
	struct FPrioritisedPromptWithHandle                Prompt_UseMermaid;                                        // 0x01F0(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C"));
		return ptr;
	}


	struct FPromptEvaluation EvaluatePromptDisplayState();
	void PostInitialize();
	void Prompt_MermaidActivatedLocally(const struct FMermaidActivatedLocally& Ev);
	void Prompt_MermaidDeactivatedLocally(const struct FMermaidDeactivatedLocally& Ev);
	void Prompt_MermaidUsed(const struct FMermaidUsedEvent& Ev);
	void UnregisterOtherEvents_Implementable();
	void ExecuteUbergraph_BP_Prompt_UseAMermaid(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
