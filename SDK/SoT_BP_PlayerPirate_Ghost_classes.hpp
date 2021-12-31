#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PlayerPirate_Ghost_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C
// 0x0044 (0x1C04 - 0x1BC0)
class ABP_PlayerPirate_Ghost_C : public AAthenaGhostPlayerCharacter
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x1BC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UBP_GhostCharacterAudioComponent_C*                BP_GhostCharacterAudioComponent;                          // 0x1BC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UWaterInteractionComponent*                        WaterInteraction;                                         // 0x1BD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPlayerNameplateComponent*                         PlayerNameplate;                                          // 0x1BD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBodyLightControllerComponent*                     BodyLightController;                                      // 0x1BE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UAnimNotifyWwiseEmitterComponent*                  AnimNotifyWwiseEmitter;                                   // 0x1BE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UAmbientLightSourceComponent*                      BodyLight;                                                // 0x1BF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UCharacterFootImpactComponent*                     CharacterFootImpact;                                      // 0x1BF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Default_Ghost_Parameter;                                  // 0x1C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C"));
		return ptr;
	}


	unsigned char GetPxActorCapacityForPhysXAggregate();
	void GetAllMaterialParents(UMaterialInstance* MaterialInstance, TArray<UMaterialInstance*>* Parents);
	void CheckBaseMaterial(UMaterialInstance* MaterialInstance, UMaterial* MaterialToCheck, bool* Result);
	void Set_Up_Ghost_Materials(USkeletalMeshComponent* Input_Mesh);
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
	void OnMeshSet();
	void ExecuteUbergraph_BP_PlayerPirate_Ghost(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
