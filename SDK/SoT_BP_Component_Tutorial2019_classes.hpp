#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x00A0 (0x0190 - 0x00F0)
class UBP_Component_Tutorial2019_C : public UTutorial2019ContextualDelegatingComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<TAssetPtr<class AActor>>                    GoldHoarders;                                             // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             GoldHoarderLocations;                                     // 0x0108(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	class UBP_Prompt_CTPurchaseVoyageSequence_C*       GoToVendorPromptObject;                                   // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TAssetPtr<class AActor>>                    NPCBlacklist;                                             // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               OutpostNames;                                             // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               GoldHoarderOnRepPrerequiste;                              // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
	struct FObjectMessagingHandle                      Handle_PlayerFinishedSpawning;                            // 0x0148(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Component_Tutorial2019.BP_Component_Tutorial2019_C"));
		return ptr;
	}


	bool HasPrerequisites();
	void SwapMysteriousStrangerToTutorialModeOnClient();
	void TeleportPlayerToOnboardingSpawnPoint();
	void GetPlayerController(class AAthenaPlayerController** Player_Controller);
	void ConvertActorIdsToActors(TArray<TAssetPtr<class AActor>>* ActorRefs, TArray<class AActor*>* OutActors);
	void Debug_SearchForMissingGoldHoarders();
	void PopulateGoldHoarderLocationsFromGoldHoarders();
	void EnsurePurchaseVoyageSequenceCreatedAndPopulated(TArray<struct FVector>* InputPin);
	void EnsurePurchaseVoyageSequenceObjectCreated(class UBP_Prompt_CTPurchaseVoyageSequence_C** PromptObject);
	void OnRep_GoldHoarderLocations();
	void TrySetUpCoordinator();
	void ReceiveTutorial2019BeginPlayOnClient();
	void ReceiveTutorial2019BeginPlayOnServer();
	void ForceDisableComponent_Blueprint();
	void ReceiveIntroBeginPlayOnServer();
	void ReceiveIntroBeginPlayOnClient();
	void Set_Prompts_Visibility(bool IsHIdden, bool ReEvaluate, float Delay_In_Seconds);
	void ControllerOnEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_Component_Tutorial2019(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
