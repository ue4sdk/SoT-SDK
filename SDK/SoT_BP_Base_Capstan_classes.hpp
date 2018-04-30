#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Base_Capstan_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Base_Capstan.BP_Base_Capstan_C
// 0x0018 (0x07C8 - 0x07B0)
class ABP_Base_Capstan_C : public ACapstan
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x07B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_Capstan.BP_Base_Capstan_C");
		return ptr;
	}


	TArray<class ACapstanArm*> GetArms();
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
	void OnBodyMeshLoaded();
	void OnArmMeshLoaded();
	void OnCapstanDescLoaded(class UCapstanDescAsset** CapstanDesc);
	void ExecuteUbergraph_BP_Base_Capstan(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
