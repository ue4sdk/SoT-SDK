#pragma once

// Sea of Thieves (2) SDK

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
// 0x0119 (0x0A51 - 0x0938)
class ABP_Wheel_C : public AWheel
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	USkeletalMeshComponent*                            Wheel;                                                    // 0x0940(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	USphereComponent*                                  ProjectileCollision;                                      // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UInteractableComponent*                            Interactable;                                             // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FObjectMessagingHandle                             Wheel_Centered;                                           // 0x0958(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	FObjectMessagingHandle                             Wheel_Movement_Started;                                   // 0x09A0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	FObjectMessagingHandle                             Wheel_Movement_Stopped;                                   // 0x09E8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	FWwiseEmitter                                      AudioEmitter;                                             // 0x0A30(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ShipWheelTurning;                                         // 0x0A50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Wheel.BP_Wheel_C"));
		return ptr;
	}


	FDockableInfo GetDockableInfo();
	FVector GetClosestInteractionPoint(const FVector& ReferencePosition, float* OutInteractionPointRadius);
	USkeletalMeshComponent* GetWheelMesh();
	void UserConstructionScript();
	void Receive_Animation_State(const FRotator& WheelRotation, float WheelAnimationTime, TEnumAsByte<EWheel> EWheel, float Direction, float WheelRate);
	void StickInput(float StickInputX);
	void Update_Athena_Character(AAthenaCharacter* AthenaCharacter);
	void CapstanRotationSpeed(float RotationSpeed);
	void DockingInterface(const FBP_Docking& Docking);
	void CapstanForce(float IndividualForce, const FTransform& LH_IK, const FTransform& RH_IK, AActor* Actor);
	void IK_Limb_Update_Transform(TEnumAsByte<EIKLimbName> LimbId, const FTransform& TransformUpdate);
	void IK_Limb_Blend_Timing(TEnumAsByte<EIKLimbName> LimbId, float BlendIn, float BlendOut);
	void IK_Limb_Update_Strength(TEnumAsByte<EIKLimbName> LimbId, float LocationStrength, float RotationStrength);
	void IK_Limb_Active(TEnumAsByte<EIKLimbName> LimbId, bool Active, TEnumAsByte<ELimbIKSpace> CoordinateSpace);
	void IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch);
	void RequestStateChange(AActor* Controller);
	void ExecuteUbergraph_BP_Wheel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
