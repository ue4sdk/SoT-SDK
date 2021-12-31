#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_CosmeticPurchased_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C
// 0x01E8 (0x0300 - 0x0118)
class UBP_Prompt_CosmeticPurchased_C : public UBP_PromptCoordinator_Base_C
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	FObjectMessagingHandle                             Handle_OfferPurchasedEvent;                               // 0x0120(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	FObjectMessagingHandle                             Handle_ShopClosedEvent;                                   // 0x0168(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	FObjectMessagingHandle                             Handle_PlayerEntitlementUpdatedEvent;                     // 0x01B0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	FPrioritisedPromptWithHandle                       Prompt_CosmeticPurchased;                                 // 0x01F8(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	FPrioritisedPromptWithHandle                       Prompt_VisitCustomizationChest;                           // 0x0260(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	UClass*                                            AccessKey;                                                // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<UClass*>                                    CategoryTypes;                                            // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<FString>                                    PurchasedEntitlementIds;                                  // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DelayUntilPromptDisplays;                                 // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBetweenPrompts;                                      // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PromptDisplayDuration;                                    // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CosmeticPurchased;                                        // 0x02FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PromptInfoSet;                                            // 0x02FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisplayingPrompts;                                        // 0x02FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ProcessingPurchase;                                       // 0x02FF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C"));
		return ptr;
	}


	void OnPlayerEntitlementUpdated();
	void SetCosmeticPromptInfo(UClass* AccessKey, const FPrioritisedPromptWithHandle& PromptCosmeticPurchased, const FPrioritisedPromptWithHandle& PromptVisitCustomizationChest, TArray<UClass*>* CategoryType);
	void OnOfferPurchased(const FAthena_FOfferPurchasedEvent& Event);
	void Evaluate();
	void RegisterOtherEvents_Implementable();
	void UnregisterOtherEvents_Implementable();
	void OfferPurchasedEvent(const FAthena_FOfferPurchasedEvent& Event);
	void ShopClosedEvent(const FAthena_FShopClosedEvent& Event);
	void PostInitialize();
	void Unregister_HUD_Events();
	void OnEndPlay_HUD(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void PlayerEntitlementUpdated(const FPlayerEntitlementUpdatedEvent& Event);
	void ExecuteUbergraph_BP_Prompt_CosmeticPurchased(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
