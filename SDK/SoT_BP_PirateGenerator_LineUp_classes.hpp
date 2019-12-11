#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x0191 (0x0651 - 0x04C0)
class ABP_PirateGenerator_LineUp_C : public APosablePirate
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           Capsule;                                                  // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    GhostParticlesOut;                                        // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    GhostParticlesIn;                                         // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalProp;                                             // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticPropSecondary;                                      // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalPropSecondary;                                    // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticProp;                                               // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      ForceShape;                                               // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_LineUp_Animation                        Animation;                                                // 0x0518(0x00C8) (Edit, BlueprintVisible)
	class UBP_Anim_CharacterSelect_C*                  CharacterSelectAnimgraph;                                 // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomTime;                                                 // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GhostTransitionOutTime;                                   // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GhostTransitionInTime;                                    // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GhostTransitioning;                                       // 0x05F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05F5(0x0003) MISSED OFFSET
	int                                                PoseIndex;                                                // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET
	class UAnimationSwitchDataAsset*                   AnimationSwitch;                                          // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimationDataStoreAsset*                    AnimationAsset;                                           // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Initialized;                                              // 0x0610(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0611(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    LineUpPirateInitializedDispatcher;                        // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsHighlighted;                                            // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInShipSelect;                                           // 0x0629(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x062A(0x0002) MISSED OFFSET
	float                                              ShipSelectVariantTimer;                                   // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShipSelectVariantTimerMax;                                // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ShipSelectAnimCountMax;                                   // 0x0634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ShipSelectVariantAnimIndex;                               // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayingShipSelectVariant;                               // 0x063C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x063D(0x0003) MISSED OFFSET
	class UAnimSequence*                               ShipSelectAnimToPlay;                                     // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               ShipSelectPropAnimToPlay;                                 // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShipSelectAnimStarted;                                    // 0x0650(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C"));
		return ptr;
	}


	void GetPirateSelector(class UPirateSelector** PirateSelectorComponent);
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
	void ReceiveTick(float DeltaSeconds);
	void OnSignalSpawnIn();
	void ExecuteUbergraph_BP_PirateGenerator_LineUp(int EntryPoint);
	void LineUpPirateInitializedDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
