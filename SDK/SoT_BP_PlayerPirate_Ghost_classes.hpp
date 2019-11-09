#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x0044 (0x1954 - 0x1910)
class ABP_PlayerPirate_Ghost_C : public AAthenaGhostPlayerCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1910(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_GhostCharacterAudioComponent_C*          BP_GhostCharacterAudioComponent;                          // 0x1918(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWaterInteractionComponent*                  WaterInteraction;                                         // 0x1920(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPlayerNameplateComponent*                   PlayerNameplate;                                          // 0x1928(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBodyLightControllerComponent*               BodyLightController;                                      // 0x1930(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x1938(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAmbientLightSourceComponent*                BodyLight;                                                // 0x1940(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterFootImpactComponent*               CharacterFootImpact;                                      // 0x1948(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Default_Ghost_Parameter;                                  // 0x1950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C"));
		return ptr;
	}


	void GetAllMaterialParents(class UMaterialInstance* MaterialInstance, TArray<class UMaterialInstance*>* Parents);
	void CheckBaseMaterial(class UMaterialInstance* MaterialInstance, class UMaterial* MaterialToCheck, bool* Result);
	void Set_Up_Ghost_Materials(class USkeletalMeshComponent* Input_Mesh, float Ghost_Fade_Parameter, bool EnableDither, bool FirstPersonMesh);
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
	void OnMeshSet();
	void ExecuteUbergraph_BP_PlayerPirate_Ghost(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
