#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryEntitlementPurchased_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C
// 0x00A0 (0x01B8 - 0x0118)
class UBP_Prompt_EmissaryEntitlementPurchased_C : public UBP_PromptCoordinator_Base_C
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	FObjectMessagingHandle                             Handle_EmissaryEntitlementPurchased;                      // 0x0120(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	FGuid                                              OfferId;                                                  // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FGuid                                              ExpectedOfferId;                                          // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<FPrioritisedPromptWithHandle>               Prompts;                                                  // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               PromptSurfacedThisSession;                                // 0x0198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0199(0x0007) MISSED OFFSET
	UClass*                                            PromptAccessKey;                                          // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PromptIndex;                                              // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfPrompts;                                          // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialDelay;                                             // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShowPromptDuration;                                       // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C"));
		return ptr;
	}


	void OnEmissaryEntitlementPurchasedFunc(const FEmissaryEntitlementPurchasedEvent& NewParam);
	void EmissaryEntitlementPurchased(const FEmissaryEntitlementPurchasedEvent& NewParam);
	void Evaluate();
	void RegisterOtherEvents_Implementable();
	void UnregisterOtherEvents_Implementable();
	void ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
