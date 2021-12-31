#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Base_Capstan_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Base_Capstan.BP_Base_Capstan_C.GetArms
struct ABP_Base_Capstan_C_GetArms_Params
{
	TArray<ACapstanArm*>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.UserConstructionScript
struct ABP_Base_Capstan_C_UserConstructionScript_Params
{
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.Update Athena Character
struct ABP_Base_Capstan_C_Update_Athena_Character_Params
{
	AAthenaCharacter*                                  AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.CapstanRotationSpeed
struct ABP_Base_Capstan_C_CapstanRotationSpeed_Params
{
	float                                              RotationSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.DockingInterface
struct ABP_Base_Capstan_C_DockingInterface_Params
{
	FBP_Docking                                        Docking;                                                  // (Parm)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.CapstanForce
struct ABP_Base_Capstan_C_CapstanForce_Params
{
	float                                              IndividualForce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	FTransform                                         LH_IK;                                                    // (Parm, IsPlainOldData)
	FTransform                                         RH_IK;                                                    // (Parm, IsPlainOldData)
	AActor*                                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Update Transform
struct ABP_Base_Capstan_C_IK_Limb_Update_Transform_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	FTransform                                         TransformUpdate;                                          // (Parm, IsPlainOldData)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Blend Timing
struct ABP_Base_Capstan_C_IK_Limb_Blend_Timing_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendIn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendOut;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Update Strength
struct ABP_Base_Capstan_C_IK_Limb_Update_Strength_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationStrength;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationStrength;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Active
struct ABP_Base_Capstan_C_IK_Limb_Active_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELimbIKSpace>                          CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Stretch
struct ABP_Base_Capstan_C_IK_Limb_Stretch_Params
{
	float                                              ArmStretch;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpineStretch;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LegStretch;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.ExecuteUbergraph_BP_Base_Capstan
struct ABP_Base_Capstan_C_ExecuteUbergraph_BP_Base_Capstan_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
