#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PirateGenerator_LineUp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C
// 0x014A (0x0662 - 0x0518)
class ABP_PirateGenerator_LineUp_C : public APosablePirate
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    GhostParticlesOut;                                        // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    GhostParticlesIn;                                         // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalProp;                                             // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticPropSecondary;                                      // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalPropSecondary;                                    // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticProp;                                               // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      ForceShape;                                               // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_LineUp_Animation                        Animation;                                                // 0x0570(0x00A8) (Edit, BlueprintVisible)
	class UBP_Anim_CharacterSelect_C*                  CharacterSelectAnimgraph;                                 // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomTime;                                                 // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GhostTransitionOutTime;                                   // 0x0624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GhostTransitionInTime;                                    // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GhostTransitioning;                                       // 0x062C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x062D(0x0003) MISSED OFFSET
	int                                                PoseIndex;                                                // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0634(0x0004) MISSED OFFSET
	class UAnimationSwitchDataAsset*                   AnimationSwitch;                                          // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimationDataStoreAsset*                    AnimationAsset;                                           // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Initialized;                                              // 0x0648(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0649(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    LineUpPirateInitializedDispatcher;                        // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsHighlighted;                                            // 0x0660(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInShipSelect;                                           // 0x0661(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C");
		return ptr;
	}


	void Reset();
	void DelayBasedOnAngle();
	void FadeProps(float Duration);
	void ActivateGhostMaterial(class UMeshComponent* MeshComponent, bool FadeIn, float Duration);
	void ClearProps();
	void SetProp(const struct FBP_LineUp_Props& BP_LineUp_Props, bool Primary_);
	void UpdateAnimation();
	void RandomizePirate(int PoseIndex, const struct FPirateDescription& PirateDesc, TArray<class UClass*>* Outfit);
	void UserConstructionScript();
	void PlayMontage(class UAnimInstance* Character, class UAnimSequence* OutOf, class UAnimSequence* LoopAnim, class UAnimInstance* Prop, class UAnimSequence* OutOf02, class UAnimSequence* PropLoop);
	void Highlighted();
	void OutOfHighlight();
	void Selected();
	void OnEndGeneratingPirate();
	void OnBeginGeneratingPirate();
	void RandomizePirateEvent(const struct FPirateDescription& PirateDesc, TArray<class UClass*>* Outfit);
	void ShipSelect();
	void ExecuteUbergraph_BP_PirateGenerator_LineUp(int EntryPoint);
	void LineUpPirateInitializedDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
