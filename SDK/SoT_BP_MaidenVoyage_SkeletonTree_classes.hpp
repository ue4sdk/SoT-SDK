#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MaidenVoyage_SkeletonTree_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C
// 0x0060 (0x06A0 - 0x0640)
class ABP_MaidenVoyage_SkeletonTree_C : public ADockableCutscene
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0640(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCharacterHitReactionComponent*              CharacterHitReaction;                                     // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGlintComponent*                             Glint;                                                    // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDamageableComponent*                        Damageable;                                               // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Cutlass;                                                  // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    BroadcastDamage;                                          // 0x0680(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                NumHits;                                                  // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0694(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    GlintMaterialInstance;                                    // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteDockableCutsceneAction();
	void ActivateMesh();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnApplyDamage(const struct FImpactDamageEvent& ImpactDamageEvent);
	void PickAnimationBasedOnGender(class UFirstPersonAnimationInstance* FirstPersonAnimInstance);
	void ActivateGlintOnObject();
	void Activate_Glint();
	void ExecuteUbergraph_BP_MaidenVoyage_SkeletonTree(int EntryPoint);
	void BroadcastDamage__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
