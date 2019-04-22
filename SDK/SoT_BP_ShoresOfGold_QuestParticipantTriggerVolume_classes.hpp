#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShoresOfGold_QuestParticipantTriggerVolume_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShoresOfGold_QuestParticipantTriggerVolume.BP_ShoresOfGold_QuestParticipantTriggerVolume_C
// 0x0030 (0x04E8 - 0x04B8)
class ABP_ShoresOfGold_QuestParticipantTriggerVolume_C : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AAthenaCharacter*>                    QuestParticipants;                                        // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               CastSuccessful;                                           // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04D1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerEnteredTrigger;                                   // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ShoresOfGold_QuestParticipantTriggerVolume.BP_ShoresOfGold_QuestParticipantTriggerVolume_C"));
		return ptr;
	}


	void CastToAthenaPlayerCharacter(class AActor* Actor, bool* Successful, class AAthenaPlayerCharacter** AthenaPlayerCharacter);
	void Initialise(TArray<class AAthenaCharacter*>* QuestParticipants);
	void UserConstructionScript();
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_54_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_ShoresOfGold_QuestParticipantTriggerVolume(int EntryPoint);
	void OnPlayerEnteredTrigger__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
