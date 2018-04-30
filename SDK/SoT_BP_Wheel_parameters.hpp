#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Wheel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Wheel.BP_Wheel_C.GetDockableInfo
struct ABP_Wheel_C_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Wheel.BP_Wheel_C.GetClosestInteractionPoint
struct ABP_Wheel_C_GetClosestInteractionPoint_Params
{
	struct FVector*                                    ReferencePosition;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OutInteractionPointRadius;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.GetWheelMesh
struct ABP_Wheel_C_GetWheelMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.UserConstructionScript
struct ABP_Wheel_C_UserConstructionScript_Params
{
};

// Function BP_Wheel.BP_Wheel_C.Receive Animation State
struct ABP_Wheel_C_Receive_Animation_State_Params
{
	struct FRotator                                    WheelRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WheelAnimationTime;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWheel>                                EWheel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WheelRate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.StickInput
struct ABP_Wheel_C_StickInput_Params
{
	float                                              StickInputX;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.Update Athena Character
struct ABP_Wheel_C_Update_Athena_Character_Params
{
	class AAthenaCharacter*                            AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.CapstanRotationSpeed
struct ABP_Wheel_C_CapstanRotationSpeed_Params
{
	float                                              RotationSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.DockingInterface
struct ABP_Wheel_C_DockingInterface_Params
{
	struct FBP_Docking                                 Docking;                                                  // (Parm)
};

// Function BP_Wheel.BP_Wheel_C.CapstanForce
struct ABP_Wheel_C_CapstanForce_Params
{
	float                                              IndividualForce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  LH_IK;                                                    // (Parm, IsPlainOldData)
	struct FTransform                                  RH_IK;                                                    // (Parm, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.IK Limb Update Transform
struct ABP_Wheel_C_IK_Limb_Update_Transform_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  TransformUpdate;                                          // (Parm, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.IK Limb Blend Timing
struct ABP_Wheel_C_IK_Limb_Blend_Timing_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendIn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendOut;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.IK Limb Update Strength
struct ABP_Wheel_C_IK_Limb_Update_Strength_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationStrength;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationStrength;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.IK Limb Active
struct ABP_Wheel_C_IK_Limb_Active_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELimbIKSpace>                          CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.IK Limb Stretch
struct ABP_Wheel_C_IK_Limb_Stretch_Params
{
	float                                              ArmStretch;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpineStretch;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LegStretch;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.RequestStateChange
struct ABP_Wheel_C_RequestStateChange_Params
{
	class AActor**                                     Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.OnWheelDescLoaded
struct ABP_Wheel_C_OnWheelDescLoaded_Params
{
	class UWheelDescAsset**                            WheelDesc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.ExecuteUbergraph_BP_Wheel
struct ABP_Wheel_C_ExecuteUbergraph_BP_Wheel_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
