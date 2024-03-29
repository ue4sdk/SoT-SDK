#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PlayerPirate_Ghost_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.GetPxActorCapacityForPhysXAggregate
struct ABP_PlayerPirate_Ghost_C_GetPxActorCapacityForPhysXAggregate_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.GetAllMaterialParents
struct ABP_PlayerPirate_Ghost_C_GetAllMaterialParents_Params
{
	UMaterialInstance*                                 MaterialInstance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<UMaterialInstance*>                         Parents;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.CheckBaseMaterial
struct ABP_PlayerPirate_Ghost_C_CheckBaseMaterial_Params
{
	UMaterialInstance*                                 MaterialInstance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	UMaterial*                                         MaterialToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.Set Up Ghost Materials
struct ABP_PlayerPirate_Ghost_C_Set_Up_Ghost_Materials_Params
{
	USkeletalMeshComponent*                            Input_Mesh;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.GetMouthPosition
struct ABP_PlayerPirate_Ghost_C_GetMouthPosition_Params
{
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.UserConstructionScript
struct ABP_PlayerPirate_Ghost_C_UserConstructionScript_Params
{
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.Update Athena Character
struct ABP_PlayerPirate_Ghost_C_Update_Athena_Character_Params
{
	AAthenaCharacter*                                  AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.CapstanRotationSpeed
struct ABP_PlayerPirate_Ghost_C_CapstanRotationSpeed_Params
{
	float                                              RotationSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.DockingInterface
struct ABP_PlayerPirate_Ghost_C_DockingInterface_Params
{
	FBP_Docking                                        Docking;                                                  // (Parm)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.CapstanForce
struct ABP_PlayerPirate_Ghost_C_CapstanForce_Params
{
	float                                              IndividualForce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	FTransform                                         LH_IK;                                                    // (Parm, IsPlainOldData)
	FTransform                                         RH_IK;                                                    // (Parm, IsPlainOldData)
	AActor*                                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Update Transform
struct ABP_PlayerPirate_Ghost_C_IK_Limb_Update_Transform_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	FTransform                                         TransformUpdate;                                          // (Parm, IsPlainOldData)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Blend Timing
struct ABP_PlayerPirate_Ghost_C_IK_Limb_Blend_Timing_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendIn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendOut;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Update Strength
struct ABP_PlayerPirate_Ghost_C_IK_Limb_Update_Strength_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationStrength;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationStrength;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Active
struct ABP_PlayerPirate_Ghost_C_IK_Limb_Active_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELimbIKSpace>                          CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Stretch
struct ABP_PlayerPirate_Ghost_C_IK_Limb_Stretch_Params
{
	float                                              ArmStretch;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpineStretch;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LegStretch;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.ReceiveBeginPlay
struct ABP_PlayerPirate_Ghost_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.OnMeshSet
struct ABP_PlayerPirate_Ghost_C_OnMeshSet_Params
{
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.ExecuteUbergraph_BP_PlayerPirate_Ghost
struct ABP_PlayerPirate_Ghost_C_ExecuteUbergraph_BP_PlayerPirate_Ghost_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
