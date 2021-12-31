// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CharacterInterface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Stretch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ArmStretch                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          SpineStretch                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          LegStretch                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterInterface_C::IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Stretch"));

	UBP_CharacterInterface_C_IK_Limb_Stretch_Params params;
	params.ArmStretch = ArmStretch;
	params.SpineStretch = SpineStretch;
	params.LegStretch = LegStretch;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIKLimbName>       LimbId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELimbIKSpace>      CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterInterface_C::IK_Limb_Active(TEnumAsByte<EIKLimbName> LimbId, bool Active, TEnumAsByte<ELimbIKSpace> CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Active"));

	UBP_CharacterInterface_C_IK_Limb_Active_Params params;
	params.LimbId = LimbId;
	params.Active = Active;
	params.CoordinateSpace = CoordinateSpace;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Update Strength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIKLimbName>       LimbId                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationStrength               (Parm, ZeroConstructor, IsPlainOldData)
// float                          RotationStrength               (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterInterface_C::IK_Limb_Update_Strength(TEnumAsByte<EIKLimbName> LimbId, float LocationStrength, float RotationStrength)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Update Strength"));

	UBP_CharacterInterface_C_IK_Limb_Update_Strength_Params params;
	params.LimbId = LimbId;
	params.LocationStrength = LocationStrength;
	params.RotationStrength = RotationStrength;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Blend Timing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIKLimbName>       LimbId                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendIn                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendOut                       (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterInterface_C::IK_Limb_Blend_Timing(TEnumAsByte<EIKLimbName> LimbId, float BlendIn, float BlendOut)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Blend Timing"));

	UBP_CharacterInterface_C_IK_Limb_Blend_Timing_Params params;
	params.LimbId = LimbId;
	params.BlendIn = BlendIn;
	params.BlendOut = BlendOut;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Update Transform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIKLimbName>       LimbId                         (Parm, ZeroConstructor, IsPlainOldData)
// FTransform                     TransformUpdate                (Parm, IsPlainOldData)

void UBP_CharacterInterface_C::IK_Limb_Update_Transform(TEnumAsByte<EIKLimbName> LimbId, const FTransform& TransformUpdate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Update Transform"));

	UBP_CharacterInterface_C_IK_Limb_Update_Transform_Params params;
	params.LimbId = LimbId;
	params.TransformUpdate = TransformUpdate;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterInterface.BP_CharacterInterface_C.CapstanForce
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          IndividualForce                (Parm, ZeroConstructor, IsPlainOldData)
// FTransform                     LH_IK                          (Parm, IsPlainOldData)
// FTransform                     RH_IK                          (Parm, IsPlainOldData)
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterInterface_C::CapstanForce(float IndividualForce, const FTransform& LH_IK, const FTransform& RH_IK, AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterInterface.BP_CharacterInterface_C.CapstanForce"));

	UBP_CharacterInterface_C_CapstanForce_Params params;
	params.IndividualForce = IndividualForce;
	params.LH_IK = LH_IK;
	params.RH_IK = RH_IK;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterInterface.BP_CharacterInterface_C.DockingInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FBP_Docking                    Docking                        (Parm)

void UBP_CharacterInterface_C::DockingInterface(const FBP_Docking& Docking)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterInterface.BP_CharacterInterface_C.DockingInterface"));

	UBP_CharacterInterface_C_DockingInterface_Params params;
	params.Docking = Docking;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterInterface.BP_CharacterInterface_C.CapstanRotationSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RotationSpeed                  (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterInterface_C::CapstanRotationSpeed(float RotationSpeed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterInterface.BP_CharacterInterface_C.CapstanRotationSpeed"));

	UBP_CharacterInterface_C_CapstanRotationSpeed_Params params;
	params.RotationSpeed = RotationSpeed;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterInterface.BP_CharacterInterface_C.Update Athena Character
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// AAthenaCharacter*              AthenaCharacter                (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterInterface_C::Update_Athena_Character(AAthenaCharacter* AthenaCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterInterface.BP_CharacterInterface_C.Update Athena Character"));

	UBP_CharacterInterface_C_Update_Athena_Character_Params params;
	params.AthenaCharacter = AthenaCharacter;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
