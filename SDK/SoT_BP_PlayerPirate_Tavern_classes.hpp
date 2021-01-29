#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PlayerPirate_Tavern_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C
// 0x007C (0x1A8C - 0x1A10)
class ABP_PlayerPirate_Tavern_C : public AAthenaTavernPlayerCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1A10(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStatusEffectComponent*                      StatusEffect;                                             // 0x1A18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x1A20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVomitComponent*                             Vomit;                                                    // 0x1A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNoiseMakerComponent*                        NoiseMaker;                                               // 0x1A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPlayerNameplateComponent*                   PlayerNameplate;                                          // 0x1A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBodyLightControllerComponent*               BodyLightController;                                      // 0x1A40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAmbientLightSourceComponent*                BodyLight;                                                // 0x1A48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioSpaceTrackerComponent*                 AudioSpaceTracker;                                        // 0x1A50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPlayerAtmosphericsAudioComponent*           PlayerAtmosphericsAudio;                                  // 0x1A58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_CharacterVFXComponent_C*                 BP_CharacterVFXComponent;                                 // 0x1A60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWaterInteractionComponent*                  WaterInteraction;                                         // 0x1A68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_CharacterAudioComponent_C*               BP_PlayerAudioComponent;                                  // 0x1A70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterFootImpactComponent*               CharacterFootImpact;                                      // 0x1A78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPlayerOceanAudioComponent*                  PlayerOceanAudio;                                         // 0x1A80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TattooGlowDuration;                                       // 0x1A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C"));
		return ptr;
	}


	unsigned char GetPxActorCapacityForPhysXAggregate();
	void TattoGlowDynamicMaterials(class UMeshComponent* Mesh);
	struct FVector GetMouthPosition();
	void UserConstructionScript();
	void Update_Athena_Character(class AAthenaCharacter* AthenaCharacter);
	void CapstanRotationSpeed(float RotationSpeed);
	void DockingInterface(const struct FBP_Docking& Docking);
	void CapstanForce(float IndividualForce, const struct FTransform& LH_IK, const struct FTransform& RH_IK, class AActor* Actor);
	void IK_Limb_Update_Transform(TEnumAsByte<EIKLimbName> LimbId, const struct FTransform& TransformUpdate);
	void IK_Limb_Blend_Timing(TEnumAsByte<EIKLimbName> LimbId, float BlendIn, float BlendOut);
	void IK_Limb_Update_Strength(TEnumAsByte<EIKLimbName> LimbId, float LocationStrength, float RotationStrength);
	void IK_Limb_Active(TEnumAsByte<EIKLimbName> LimbId, bool Active, TEnumAsByte<ELimbIKSpace> CoordinateSpace);
	void IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch);
	void ReceiveBeginPlay();
	void TriggerTattooGlow();
	void ExecuteUbergraph_BP_PlayerPirate_Tavern(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
