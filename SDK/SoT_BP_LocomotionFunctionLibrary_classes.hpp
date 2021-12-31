#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LocomotionFunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_LocomotionFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C"));
		return ptr;
	}


	static void DriveValueToClampByDelta(float Min, float Max, float Delta, UObject* __WorldContext, float* Value, bool* Hit_Min, bool* Hit_Max);
	static void FindSailControlHandIKPositionFromAnimation(const FVector& Animation_Hand_IK_Location, const FVector& LowerRopeLocation, const FVector& UpperRopeLocation, UObject* __WorldContext, FVector* Location_On_Rope);
	static void ArrayLoadingFromDataDrivenBlendSpace(UBlendSpace* FallbackBlendspace, UObject* __WorldContext, TArray<UBlendSpace*>* TargetArrayBlendspace, TArray<UBlendSpace*>* LoadedArrayDataBlendspace);
	static void ArrayLoadingFromDataDriven1DBlendSpace(UBlendSpace1D* FallbackBlendspace1D, UObject* __WorldContext, TArray<UBlendSpace1D*>* TargetArray_1D, TArray<UBlendSpace1D*>* LoadedArrayData_1D);
	static void ArrayLoadingFromDataDriven(UAnimSequence* FallBackAnimation, UObject* __WorldContext, TArray<UAnimSequence*>* TargetArray, TArray<UAnimSequence*>* LoadedArrayData);
	static void Update_IK_Limb_Controls(USkeletalMeshComponent* SkeletalMeshComponent, TEnumAsByte<EIKLimbName> Limb_ID, bool Active, TEnumAsByte<ELimbIKSpace> Coordinate_Space, float Translation_Strength, float Rotation_Strength, const FTransform& Transform, float BlendIn, float BlendOut, UObject* __WorldContext);
	static void Decrement_Integer(int Decrement, UObject* __WorldContext, int* Value);
	static void Increment_Integer(int Increment, UObject* __WorldContext, int* integer);
	static void Calculate_Turn_Times(bool TurnLeft, float CurrentControllerYaw, UObject* __WorldContext, float* PreviousControllerYaw, FBP_Turning* Turning);
	static bool InRangeAndRate(bool InZone, float Min, float Max, UObject* __WorldContext, FBP_Turning* Turning);
	static void Turn_State_Change_Check(bool InZone, UObject* __WorldContext, FBP_Turning* Turning);
	static bool Not_In_Range(float Value, float Min, float Max, UObject* __WorldContext);
	static void Update_Animation_Turn_State(UObject* __WorldContext, FBP_Turning* Turning);
	static void Update_Animation_Turn_Time(bool TurningLeft, float Reset_Angle, float Current_Controller_Yaw, UObject* __WorldContext, float* CurrentTurnAngle, float* Previous_Controller_Yaw, float* Animation_Time);
	static void JumpingLogic(ACharacter* PlayerCharacter, float MovementSpeed, float FrameDelta, UObject* __WorldContext, float* JumpImpactTimerMax, TEnumAsByte<EJumping>* JumpingState, float* PreImpactTime, float* JumpImpactTimer);
	static void Ik_Blending(bool IKON, TEnumAsByte<EEasingFunc> EaseingType, float BlendMax, float FrameDeltaTime, UObject* __WorldContext, float* BlendCounter, float* Translation_Strength, float* Rotation_Strength);
	static void Increment_Counter(float Counter, float CounterMax, float DeltaTime, UObject* __WorldContext, bool* Hit_Max_Count, float* IncrementedCounter);
	static void Decrement_Counter(float Counter, float CounterMin, float DeltaTime, UObject* __WorldContext, bool* Hit_Min_Count, float* DecrementedCounter);
	static void Out_Over_Time(float CurrentTime, float MaxTime, TEnumAsByte<EEasingFunc> EasingType, UObject* __WorldContext, float* Return_Val___0_1);
	static void Update_Animation_Times(bool TurningLeft, float Current_Controller_Yaw, UObject* __WorldContext, float* Previous_Controller_Yaw, FBP_Turning* Turning);
	static void Update_Turn_Animations(bool TurningLeft, float CurrentYaw, float PreviousYaw, float FrameDeltaTime, UObject* __WorldContext, FBP_Turning* Turning);
	static void Fix_Yaw_Wraparound(float CurrentYaw, float PreviousYaw, UObject* __WorldContext, float* NewPreviousYaw);
	static void ReflexAngleCheck(float Direction_A, float Direction_B, UObject* __WorldContext, bool* ReflexAngle);
	static void ControllerRotation(ACharacter* Character, UObject* __WorldContext, float* Pitch, float* Yaw);
	static void Character_Speed(ACharacter* Character, UObject* __WorldContext, FVector* Velocity, float* Speed);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
