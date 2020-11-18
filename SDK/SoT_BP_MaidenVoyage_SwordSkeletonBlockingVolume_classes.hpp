#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MaidenVoyage_SwordSkeletonBlockingVolume_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MaidenVoyage_SwordSkeletonBlockingVolume.BP_MaidenVoyage_SwordSkeletonBlockingVolume_C
// 0x0030 (0x04A0 - 0x0470)
class ABP_MaidenVoyage_SwordSkeletonBlockingVolume_C : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CastSuccessful;                                           // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerEnteredTrigger1;                                  // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class AAthenaCharacter*>                    Quest_Participants;                                       // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MaidenVoyage_SwordSkeletonBlockingVolume.BP_MaidenVoyage_SwordSkeletonBlockingVolume_C"));
		return ptr;
	}


	void Initialise(TArray<class AAthenaCharacter*>* QuestParticipants);
	void CastToAthenaPlayerCharacter(class AActor* Actor, bool* Successful, class AAthenaPlayerCharacter** AthenaPlayerCharacter);
	void UserConstructionScript();
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_53_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_MaidenVoyage_SwordSkeletonBlockingVolume(int EntryPoint);
	void OnPlayerEnteredTrigger1__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
