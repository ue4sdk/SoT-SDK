#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_CTPurchaseVoyageSequence_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C
// 0x0538 (0x0650 - 0x0118)
class UBP_Prompt_CTPurchaseVoyageSequence_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TriggerVolumeRadius;                                      // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InsideGoldHoardersRadius;                                 // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AOverlapTriggerActor*>                GoldHoarderOverlapActors;                                 // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AOverlapTriggerActor*>                OutpostOverlapActors;                                     // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              OutpostRadiusReduction;                                   // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	struct FPrioritisedPromptWithHandle                Prompt_GoToVendors;                                       // 0x0150(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_GoToGoldhoarders;                                  // 0x01A8(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_GoToOrderOfSouls;                                  // 0x0200(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_GoToMerchantAlliance;                              // 0x0258(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_ProposeVoyage;                                     // 0x02B0(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_VoteOnVoyage;                                      // 0x0308(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_BoardShip;                                         // 0x0360(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_OfferPurchased;                                    // 0x03B8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_VoyageProposalDiscarded;                           // 0x0400(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_VoyageProposed;                                    // 0x0448(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_VoyageBegun;                                       // 0x0490(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_VoyageComplete;                                    // 0x04D8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_PlayerEnteredShip;                                 // 0x0520(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_PlayerExitedShip;                                  // 0x0568(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_PlayerWithdrewVoyage;                              // 0x05B0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_VoyageCancelled;                                   // 0x05F8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               State_InsideOutpostRadius;                                // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_InsideGoldhoardersRadius;                           // 0x0641(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_InsideOrderOfSouls;                                 // 0x0642(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_InsideMerchantAllianceRadius;                       // 0x0643(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_OnShip;                                             // 0x0644(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_IsTutorialForceDisabled;                            // 0x0645(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0646(0x0002) MISSED OFFSET
	class UBP_CT_TutorialProgress_C*                   CompanyTutorialProgress;                                  // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C"));
		return ptr;
	}


	void IsNearAnyShopkeeper(bool* Result);
	void AreTutorialsForceDisabled(bool* Result);
	void IsCurrentlyControlledCharacter(class AActor* Actor, bool* Result);
	void ShouldShowMerchantAllianceCompanyPrompts(bool* Result);
	void ShouldShowOrderOfSoulsCompanyPrompts(bool* Result);
	void ClearAllOutpostOverlapActors();
	void ShouldShowGoldHoarderCompanyPrompts(bool* Result);
	void ClearAllGoldHoarderOverlapActors();
	void SetGoldHoardersLocations(TArray<struct FVector>* GoldHoarderLocations);
	void Evaluate();
	void Complete();
	void SetOutposts(TArray<struct FName>* OutpostNames);
	void UninitializeImplementable();
	void PostInitialize();
	void SetOrderOfSoulsLocations(TArray<struct FVector>* Order_of_Souls_Locations);
	void SetMerchantAllianceLocations(TArray<struct FVector>* Merchant_Alliance_Locations);
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterOtherEvents_Implementable();
	void RegisterOtherEvents_Implementable();
	void ForceDisableTutorials();
	void OnOfferPurchased(const struct FOfferPurchasedEvent& Event);
	void OnPlayerProposedVoyage(const struct FVoyageProposalSelectedEvent& Event);
	void OnVoyageDiscardFromInventory(const struct FVoyageProposalDiscardEvent& Event);
	void OnVoyageBegun(const struct FVoyageBegun& Event);
	void OnVoyageCompleted(const struct FVoyageComplete& Event);
	void OnSomethingEnteredShip(const struct FEventEnteredShip& Event);
	void OnPlayerExitedShip(const struct FEventExitedShip& Event);
	void PlayerLeftOutpostRadius(class AActor* ActorInZone);
	void PlayerEnteredOutpostRadius(class AActor* ActorInZone);
	void PlayerLeftGoldhoarderRadius(class AActor* ActorInZone);
	void PlayerEnteredGoldhoarderRadius(class AActor* ActorInZone);
	void OnPlayerWithdrewVoyage(const struct FEventPlayerWithdrewVoyage& Event);
	void OnPlayerCancelledVoyage(const struct FVoyageCancelled& Event);
	void ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
