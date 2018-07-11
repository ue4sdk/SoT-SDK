#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CharacterInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Stretch
struct UBP_CharacterInterface_C_IK_Limb_Stretch_Params
{
	float                                              ArmStretch;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpineStretch;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LegStretch;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Active
struct UBP_CharacterInterface_C_IK_Limb_Active_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELimbIKSpace>                          CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Update Strength
struct UBP_CharacterInterface_C_IK_Limb_Update_Strength_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationStrength;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationStrength;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Blend Timing
struct UBP_CharacterInterface_C_IK_Limb_Blend_Timing_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendIn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendOut;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Update Transform
struct UBP_CharacterInterface_C_IK_Limb_Update_Transform_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  TransformUpdate;                                          // (Parm, IsPlainOldData)
};

// Function BP_CharacterInterface.BP_CharacterInterface_C.CapstanForce
struct UBP_CharacterInterface_C_CapstanForce_Params
{
	float                                              IndividualForce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  LH_IK;                                                    // (Parm, IsPlainOldData)
	struct FTransform                                  RH_IK;                                                    // (Parm, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterInterface.BP_CharacterInterface_C.DockingInterface
struct UBP_CharacterInterface_C_DockingInterface_Params
{
	struct FBP_Docking                                 Docking;                                                  // (Parm)
};

// Function BP_CharacterInterface.BP_CharacterInterface_C.CapstanRotationSpeed
struct UBP_CharacterInterface_C_CapstanRotationSpeed_Params
{
	float                                              RotationSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterInterface.BP_CharacterInterface_C.Update Athena Character
struct UBP_CharacterInterface_C_Update_Athena_Character_Params
{
	class AAthenaCharacter*                            AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
