#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PlayerPirate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerPirate.BP_PlayerPirate_C
// 0x00D4 (0x1B94 - 0x1AC0)
class ABP_PlayerPirate_C : public AAthenaPlayerCharacter
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x1AC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UChainLightningReceiverComponent*                  ChainLightningReceiver;                                   // 0x1AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStatusApplicationMonitorComponent*                StatusApplicationMonitor;                                 // 0x1AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UReviveComponent*                                  ReviveComponent;                                          // 0x1AD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UAnimNotifyWwiseEmitterComponent*                  AnimNotifyWwiseEmitter;                                   // 0x1AE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UVomitComponent*                                   Vomit;                                                    // 0x1AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UNoiseMakerComponent*                              NoiseMaker;                                               // 0x1AF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPlayerNameplateComponent*                         PlayerNameplate;                                          // 0x1AF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBodyLightControllerComponent*                     BodyLightController;                                      // 0x1B00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UAmbientLightSourceComponent*                      BodyLight;                                                // 0x1B08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UAudioSpaceTrackerComponent*                       AudioSpaceTracker;                                        // 0x1B10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPlayerAtmosphericsAudioComponent*                 PlayerAtmosphericsAudio;                                  // 0x1B18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBP_CharacterVFXComponent_C*                       BP_CharacterVFXComponent;                                 // 0x1B20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UWaterInteractionComponent*                        WaterInteraction;                                         // 0x1B28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBP_CharacterAudioComponent_C*                     BP_PlayerAudioComponent;                                  // 0x1B30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UCharacterFootImpactComponent*                     CharacterFootImpact;                                      // 0x1B38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPlayerOceanAudioComponent*                        PlayerOceanAudio;                                         // 0x1B40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TattooGlowDuration;                                       // 0x1B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1B4C(0x0004) MISSED OFFSET
	UStaticMesh*                                       CurrentStaticMesh;                                        // 0x1B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	USkeletalMesh*                                     CurrentSkeletalMesh;                                      // 0x1B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<USkeletalMesh*>                             SkeletalMeshArray;                                        // 0x1B60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<UStaticMesh*>                               StaticMeshArray;                                          // 0x1B70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsSkeletalMesh;                                           // 0x1B80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1B81(0x0003) MISSED OFFSET
	int                                                ItemSelectArray;                                          // 0x1B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FVector                                            ItemScale;                                                // 0x1B88(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PlayerPirate.BP_PlayerPirate_C"));
		return ptr;
	}


	unsigned char GetPxActorCapacityForPhysXAggregate();
	void TattoGlowDynamicMaterials(UMeshComponent* Mesh);
	FVector GetMouthPosition();
	void UserConstructionScript();
	void Update_Athena_Character(AAthenaCharacter* AthenaCharacter);
	void CapstanRotationSpeed(float RotationSpeed);
	void DockingInterface(const FBP_Docking& Docking);
	void CapstanForce(float IndividualForce, const FTransform& LH_IK, const FTransform& RH_IK, AActor* Actor);
	void IK_Limb_Update_Transform(TEnumAsByte<EIKLimbName> LimbId, const FTransform& TransformUpdate);
	void IK_Limb_Blend_Timing(TEnumAsByte<EIKLimbName> LimbId, float BlendIn, float BlendOut);
	void IK_Limb_Update_Strength(TEnumAsByte<EIKLimbName> LimbId, float LocationStrength, float RotationStrength);
	void IK_Limb_Active(TEnumAsByte<EIKLimbName> LimbId, bool Active, TEnumAsByte<ELimbIKSpace> CoordinateSpace);
	void IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch);
	void ReceiveBeginPlay();
	void TriggerTattooGlow();
	void ScaleMesh(const FVector& Scale, UPrimitiveComponent* FirstPersonMesh, UPrimitiveComponent* ThirdPersonMesh);
	void SkipToNextMesh();
	void SetWieldedItemMesh(AWieldableItem* Wieldable_Item_Ref, UStaticMesh* StaticMesh, USkeletalMesh* SkeletalMesh, bool WieldItem, const FVector& ItemScale, bool UseItemScale, TArray<UStaticMesh*>* StaticMeshArray, TArray<USkeletalMesh*>* SkeletalMeshArray);
	void IncreaseWieldedObjectScale(const FVector& ItemScaleIncrement);
	void ExecuteUbergraph_BP_PlayerPirate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
