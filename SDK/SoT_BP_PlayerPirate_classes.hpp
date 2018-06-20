#pragma once

// Sea of Thieves (1.1.1) SDK

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
// 0x007C (0x13DC - 0x1360)
class ABP_PlayerPirate_C : public AAthenaPlayerCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStatusEffectComponent*                      StatusEffect;                                             // 0x1368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x1370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVomitComponent*                             Vomit;                                                    // 0x1378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNoiseMakerComponent*                        NoiseMaker;                                               // 0x1380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPlayerNameplateComponent*                   PlayerNameplate;                                          // 0x1388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBodyLightControllerComponent*               BodyLightController;                                      // 0x1390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAmbientLightSourceComponent*                BodyLight;                                                // 0x1398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioSpaceTrackerComponent*                 AudioSpaceTracker;                                        // 0x13A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPlayerAtmosphericsAudioComponent*           PlayerAtmosphericsAudio;                                  // 0x13A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_CharacterVFXComponent_C*                 BP_CharacterVFXComponent;                                 // 0x13B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWaterInteractionComponent*                  WaterInteraction;                                         // 0x13B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_CharacterAudioComponent_C*               BP_PlayerAudioComponent;                                  // 0x13C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterFootImpactComponent*               CharacterFootImpact;                                      // 0x13C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPlayerOceanAudioComponent*                  PlayerOceanAudio;                                         // 0x13D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TattooGlowDuration;                                       // 0x13D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerPirate.BP_PlayerPirate_C");
		return ptr;
	}


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
	void ExecuteUbergraph_BP_PlayerPirate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
