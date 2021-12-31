#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Component_Tutorial2019_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Component_Tutorial2019.BP_Component_Tutorial2019_C
// 0x00A0 (0x0178 - 0x00D8)
class UBP_Component_Tutorial2019_C : public UTutorial2019ContextualDelegatingComponent
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<TAssetPtr<class AActor>>                    GoldHoarders;                                             // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<FVector>                                    GoldHoarderLocations;                                     // 0x00F0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	UBP_Prompt_CTPurchaseVoyageSequence_C*             GoToVendorPromptObject;                                   // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TAssetPtr<class AActor>>                    NPCBlacklist;                                             // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<FName>                                      OutpostNames;                                             // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               GoldHoarderOnRepPrerequiste;                              // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	FObjectMessagingHandle                             Handle_PlayerFinishedSpawning;                            // 0x0130(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Component_Tutorial2019.BP_Component_Tutorial2019_C"));
		return ptr;
	}


	void SwapMysteriousStrangerToTutorialModeOnClient();
	void TeleportPlayerToOnboardingSpawnPoint();
	void GetPlayerController(AAthenaPlayerController** Player_Controller);
	void ConvertActorIdsToActors(TArray<TAssetPtr<class AActor>>* ActorRefs, TArray<AActor*>* OutActors);
	void Debug_SearchForMissingGoldHoarders();
	void PopulateGoldHoarderLocationsFromGoldHoarders();
	void EnsurePurchaseVoyageSequenceCreatedAndPopulated(TArray<FVector>* InputPin);
	void EnsurePurchaseVoyageSequenceObjectCreated(UBP_Prompt_CTPurchaseVoyageSequence_C** PromptObject);
	void OnRep_GoldHoarderLocations();
	void TrySetUpCoordinator();
	void ReceiveTutorial2019BeginPlayOnClient();
	void ReceiveTutorial2019BeginPlayOnServer();
	void ForceDisableComponent_Blueprint();
	void Set_Prompts_Visibility(bool IsHidden, bool ReEvaluate, float Delay_In_Seconds);
	void ControllerOnEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_Component_Tutorial2019(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
