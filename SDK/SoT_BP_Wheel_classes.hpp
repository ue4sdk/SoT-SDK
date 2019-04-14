#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Wheel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Wheel.BP_Wheel_C
// 0x0119 (0x0AB9 - 0x09A0)
class ABP_Wheel_C : public AWheel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Wheel;                                                    // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            ProjectileCollision;                                      // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FObjectMessagingHandle                      Wheel_Centered;                                           // 0x09C0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Wheel_Movement_Started;                                   // 0x0A08(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Wheel_Movement_Stopped;                                   // 0x0A50(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWwiseEmitter                               AudioEmitter;                                             // 0x0A98(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ShipWheelTurning;                                         // 0x0AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Wheel.BP_Wheel_C"));
		return ptr;
	}


	struct FDockableInfo GetDockableInfo();
	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	class USkeletalMeshComponent* GetWheelMesh();
	void UserConstructionScript();
	void Receive_Animation_State(const struct FRotator& WheelRotation, float WheelAnimationTime, TEnumAsByte<EWheel> EWheel, float Direction, float WheelRate);
	void StickInput(float StickInputX);
	void Update_Athena_Character(class AAthenaCharacter* AthenaCharacter);
	void CapstanRotationSpeed(float RotationSpeed);
	void DockingInterface(const struct FBP_Docking& Docking);
	void CapstanForce(float IndividualForce, const struct FTransform& LH_IK, const struct FTransform& RH_IK, class AActor* Actor);
	void IK_Limb_Update_Transform(TEnumAsByte<EIKLimbName> LimbId, const struct FTransform& TransformUpdate);
	void IK_Limb_Blend_Timing(TEnumAsByte<EIKLimbName> LimbId, float BlendIn, float BlendOut);
	void IK_Limb_Update_Strength(TEnumAsByte<EIKLimbName> LimbId, float LocationStrength, float RotationStrength);
	void IK_Limb_Active(TEnumAsByte<EIKLimbName> LimbId, bool Active, TEnumAsByte<ELimbIKSpace> CoordinateSpace);
	void IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch);
	void RequestStateChange(class AActor* Controller);
	void OnWheelDescLoaded(class UWheelDescAsset* WheelDesc);
	void ExecuteUbergraph_BP_Wheel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
