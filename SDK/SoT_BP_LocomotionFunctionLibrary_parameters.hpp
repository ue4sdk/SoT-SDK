#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LocomotionFunctionLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.DriveValueToClampByDelta
struct UBP_LocomotionFunctionLibrary_C_DriveValueToClampByDelta_Params
{
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Hit_Min;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Hit_Max;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.FindSailControlHandIKPositionFromAnimation
struct UBP_LocomotionFunctionLibrary_C_FindSailControlHandIKPositionFromAnimation_Params
{
	FVector                                            Animation_Hand_IK_Location;                               // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            LowerRopeLocation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            UpperRopeLocation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Location_On_Rope;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDrivenBlendSpace
struct UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDrivenBlendSpace_Params
{
	TArray<UBlendSpace*>                               TargetArrayBlendspace;                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<UBlendSpace*>                               LoadedArrayDataBlendspace;                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	UBlendSpace*                                       FallbackBlendspace;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven1DBlendSpace
struct UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDriven1DBlendSpace_Params
{
	TArray<UBlendSpace1D*>                             TargetArray_1D;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<UBlendSpace1D*>                             LoadedArrayData_1D;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	UBlendSpace1D*                                     FallbackBlendspace1D;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven
struct UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDriven_Params
{
	TArray<UAnimSequence*>                             TargetArray;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<UAnimSequence*>                             LoadedArrayData;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	UAnimSequence*                                     FallBackAnimation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update IK Limb Controls
struct UBP_LocomotionFunctionLibrary_C_Update_IK_Limb_Controls_Params
{
	USkeletalMeshComponent*                            SkeletalMeshComponent;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIKLimbName>                           Limb_ID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELimbIKSpace>                          Coordinate_Space;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Translation_Strength;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotation_Strength;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	FTransform                                         Transform;                                                // (Parm, IsPlainOldData)
	float                                              BlendIn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendOut;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Integer
struct UBP_LocomotionFunctionLibrary_C_Decrement_Integer_Params
{
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Decrement;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Integer
struct UBP_LocomotionFunctionLibrary_C_Increment_Integer_Params
{
	int                                                integer;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Increment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Calculate Turn Times
struct UBP_LocomotionFunctionLibrary_C_Calculate_Turn_Times_Params
{
	bool                                               TurnLeft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentControllerYaw;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviousControllerYaw;                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FBP_Turning                                        Turning;                                                  // (Parm, OutParm, ReferenceParm)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.InRangeAndRate
struct UBP_LocomotionFunctionLibrary_C_InRangeAndRate_Params
{
	bool                                               InZone;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	FBP_Turning                                        Turning;                                                  // (Parm, OutParm, ReferenceParm)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Turn State Change Check
struct UBP_LocomotionFunctionLibrary_C_Turn_State_Change_Check_Params
{
	FBP_Turning                                        Turning;                                                  // (Parm, OutParm, ReferenceParm)
	bool                                               InZone;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Not In Range
struct UBP_LocomotionFunctionLibrary_C_Not_In_Range_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn State
struct UBP_LocomotionFunctionLibrary_C_Update_Animation_Turn_State_Params
{
	FBP_Turning                                        Turning;                                                  // (Parm, OutParm, ReferenceParm)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn Time
struct UBP_LocomotionFunctionLibrary_C_Update_Animation_Turn_Time_Params
{
	bool                                               TurningLeft;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentTurnAngle;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Reset_Angle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Previous_Controller_Yaw;                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Current_Controller_Yaw;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Animation_Time;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.JumpingLogic
struct UBP_LocomotionFunctionLibrary_C_JumpingLogic_Params
{
	ACharacter*                                        PlayerCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MovementSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FrameDelta;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              JumpImpactTimerMax;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EJumping>                              JumpingState;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              PreImpactTime;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              JumpImpactTimer;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Ik Blending
struct UBP_LocomotionFunctionLibrary_C_Ik_Blending_Params
{
	float                                              BlendCounter;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               IKON;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Translation_Strength;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Rotation_Strength;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           EaseingType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendMax;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FrameDeltaTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Counter
struct UBP_LocomotionFunctionLibrary_C_Increment_Counter_Params
{
	float                                              Counter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CounterMax;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Hit_Max_Count;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              IncrementedCounter;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Counter
struct UBP_LocomotionFunctionLibrary_C_Decrement_Counter_Params
{
	float                                              Counter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CounterMin;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Hit_Min_Count;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DecrementedCounter;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Out Over Time
struct UBP_LocomotionFunctionLibrary_C_Out_Over_Time_Params
{
	float                                              CurrentTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           EasingType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Return_Val___0_1;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Times
struct UBP_LocomotionFunctionLibrary_C_Update_Animation_Times_Params
{
	bool                                               TurningLeft;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Current_Controller_Yaw;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Previous_Controller_Yaw;                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FBP_Turning                                        Turning;                                                  // (Parm, OutParm, ReferenceParm)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Turn Animations
struct UBP_LocomotionFunctionLibrary_C_Update_Turn_Animations_Params
{
	bool                                               TurningLeft;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentYaw;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviousYaw;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FrameDeltaTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	FBP_Turning                                        Turning;                                                  // (Parm, OutParm, ReferenceParm)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Fix Yaw Wraparound
struct UBP_LocomotionFunctionLibrary_C_Fix_Yaw_Wraparound_Params
{
	float                                              CurrentYaw;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviousYaw;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewPreviousYaw;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ReflexAngleCheck
struct UBP_LocomotionFunctionLibrary_C_ReflexAngleCheck_Params
{
	float                                              Direction_A;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Direction_B;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReflexAngle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ControllerRotation
struct UBP_LocomotionFunctionLibrary_C_ControllerRotation_Params
{
	ACharacter*                                        Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Character Speed
struct UBP_LocomotionFunctionLibrary_C_Character_Speed_Params
{
	ACharacter*                                        Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
