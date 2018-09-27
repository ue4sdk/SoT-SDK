#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PlayerPirate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PlayerPirate.BP_PlayerPirate_C.TattoGlowDynamicMaterials
struct ABP_PlayerPirate_C_TattoGlowDynamicMaterials_Params
{
	class UMeshComponent*                              Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.GetMouthPosition
struct ABP_PlayerPirate_C_GetMouthPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.UserConstructionScript
struct ABP_PlayerPirate_C_UserConstructionScript_Params
{
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.Update Athena Character
struct ABP_PlayerPirate_C_Update_Athena_Character_Params
{
	class AAthenaCharacter*                            AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.CapstanRotationSpeed
struct ABP_PlayerPirate_C_CapstanRotationSpeed_Params
{
	float                                              RotationSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.DockingInterface
struct ABP_PlayerPirate_C_DockingInterface_Params
{
	struct FBP_Docking                                 Docking;                                                  // (Parm)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.CapstanForce
struct ABP_PlayerPirate_C_CapstanForce_Params
{
	float                                              IndividualForce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  LH_IK;                                                    // (Parm, IsPlainOldData)
	struct FTransform                                  RH_IK;                                                    // (Parm, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Update Transform
struct ABP_PlayerPirate_C_IK_Limb_Update_Transform_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  TransformUpdate;                                          // (Parm, IsPlainOldData)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Blend Timing
struct ABP_PlayerPirate_C_IK_Limb_Blend_Timing_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendIn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendOut;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Update Strength
struct ABP_PlayerPirate_C_IK_Limb_Update_Strength_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationStrength;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationStrength;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Active
struct ABP_PlayerPirate_C_IK_Limb_Active_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELimbIKSpace>                          CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Stretch
struct ABP_PlayerPirate_C_IK_Limb_Stretch_Params
{
	float                                              ArmStretch;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpineStretch;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LegStretch;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.ReceiveBeginPlay
struct ABP_PlayerPirate_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.TriggerTattooGlow
struct ABP_PlayerPirate_C_TriggerTattooGlow_Params
{
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.ExecuteUbergraph_BP_PlayerPirate
struct ABP_PlayerPirate_C_ExecuteUbergraph_BP_PlayerPirate_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
