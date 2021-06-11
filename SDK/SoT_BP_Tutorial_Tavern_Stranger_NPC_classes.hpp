#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Tutorial_Tavern_Stranger_NPC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C
// 0x0068 (0x07D0 - 0x0768)
class ABP_Tutorial_Tavern_Stranger_NPC_C : public ATutorialTavernStrangerNPC
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0768(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           SolidHits;                                                // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       MysteriousStranger;                                       // 0x0790(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ACutSceneActor*                              CutSceneActor;                                            // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C"));
		return ptr;
	}


	void UnhidePlayerPrompts();
	bool CanInteract(class AActor* InInteractor);
	void StartOnboardingCutscene();
	void UserConstructionScript();
	void QueueCutsceneActorDestruction();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void CleanTutorialCutScene();
	void ExecuteUbergraph_BP_Tutorial_Tavern_Stranger_NPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
