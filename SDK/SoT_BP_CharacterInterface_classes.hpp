#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CharacterInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CharacterInterface.BP_CharacterInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_CharacterInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CharacterInterface.BP_CharacterInterface_C"));
		return ptr;
	}


	void IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch);
	void IK_Limb_Active(TEnumAsByte<EIKLimbName> LimbId, bool Active, TEnumAsByte<ELimbIKSpace> CoordinateSpace);
	void IK_Limb_Update_Strength(TEnumAsByte<EIKLimbName> LimbId, float LocationStrength, float RotationStrength);
	void IK_Limb_Blend_Timing(TEnumAsByte<EIKLimbName> LimbId, float BlendIn, float BlendOut);
	void IK_Limb_Update_Transform(TEnumAsByte<EIKLimbName> LimbId, const FTransform& TransformUpdate);
	void CapstanForce(float IndividualForce, const FTransform& LH_IK, const FTransform& RH_IK, AActor* Actor);
	void DockingInterface(const FBP_Docking& Docking);
	void CapstanRotationSpeed(float RotationSpeed);
	void Update_Athena_Character(AAthenaCharacter* AthenaCharacter);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
