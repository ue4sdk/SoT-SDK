#pragma once

// Sea of Thieves (2.1) SDK

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


	static void DriveValueToClampByDelta(float Min, float Max, float Delta, class UObject* __WorldContext, float* Value, bool* Hit_Min, bool* Hit_Max);
	static void FindSailControlHandIKPositionFromAnimation(const struct FVector& Animation_Hand_IK_Location, const struct FVector& LowerRopeLocation, const struct FVector& UpperRopeLocation, class UObject* __WorldContext, struct FVector* Location_On_Rope);
	static void ArrayLoadingFromDataDrivenBlendSpace(class UBlendSpace* FallbackBlendspace, class UObject* __WorldContext, TArray<class UBlendSpace*>* TargetArrayBlendspace, TArray<class UBlendSpace*>* LoadedArrayDataBlendspace);
	static void ArrayLoadingFromDataDriven1DBlendSpace(class UBlendSpace1D* FallbackBlendspace1D, class UObject* __WorldContext, TArray<class UBlendSpace1D*>* TargetArray_1D, TArray<class UBlendSpace1D*>* LoadedArrayData_1D);
	static void ArrayLoadingFromDataDriven(class UAnimSequence* FallBackAnimation, class UObject* __WorldContext, TArray<class UAnimSequence*>* TargetArray, TArray<class UAnimSequence*>* LoadedArrayData);
	static void Update_IK_Limb_Controls(class USkeletalMeshComponent* SkeletalMeshComponent, TEnumAsByte<EIKLimbName> Limb_ID, bool Active, TEnumAsByte<ELimbIKSpace> Coordinate_Space, float Translation_Strength, float Rotation_Strength, const struct FTransform& Transform, float BlendIn, float BlendOut, class UObject* __WorldContext);
	static void Decrement_Integer(int Decrement, class UObject* __WorldContext, int* Value);
	static void Increment_Integer(int Increment, class UObject* __WorldContext, int* integer);
	static void Calculate_Turn_Times(bool TurnLeft, float CurrentControllerYaw, class UObject* __WorldContext, float* PreviousControllerYaw, struct FBP_Turning* Turning);
	static bool InRangeAndRate(bool InZone, float Min, float Max, class UObject* __WorldContext, struct FBP_Turning* Turning);
	static void Turn_State_Change_Check(bool InZone, class UObject* __WorldContext, struct FBP_Turning* Turning);
	static bool Not_In_Range(float Value, float Min, float Max, class UObject* __WorldContext);
	static void Update_Animation_Turn_State(class UObject* __WorldContext, struct FBP_Turning* Turning);
	static void Update_Animation_Turn_Time(bool TurningLeft, float Reset_Angle, float Current_Controller_Yaw, class UObject* __WorldContext, float* CurrentTurnAngle, float* Previous_Controller_Yaw, float* Animation_Time);
	static void JumpingLogic(class ACharacter* PlayerCharacter, float MovementSpeed, float FrameDelta, class UObject* __WorldContext, float* JumpImpactTimerMax, TEnumAsByte<EJumping>* JumpingState, float* PreImpactTime, float* JumpImpactTimer);
	static void Ik_Blending(bool IKON, TEnumAsByte<EEasingFunc> EaseingType, float BlendMax, float FrameDeltaTime, class UObject* __WorldContext, float* BlendCounter, float* Translation_Strength, float* Rotation_Strength);
	static void Increment_Counter(float Counter, float CounterMax, float DeltaTime, class UObject* __WorldContext, bool* Hit_Max_Count, float* IncrementedCounter);
	static void Decrement_Counter(float Counter, float CounterMin, float DeltaTime, class UObject* __WorldContext, bool* Hit_Min_Count, float* DecrementedCounter);
	static void Out_Over_Time(float CurrentTime, float MaxTime, TEnumAsByte<EEasingFunc> EasingType, class UObject* __WorldContext, float* Return_Val___0_1);
	static void Update_Animation_Times(bool TurningLeft, float Current_Controller_Yaw, class UObject* __WorldContext, float* Previous_Controller_Yaw, struct FBP_Turning* Turning);
	static void Update_Turn_Animations(bool TurningLeft, float CurrentYaw, float PreviousYaw, float FrameDeltaTime, class UObject* __WorldContext, struct FBP_Turning* Turning);
	static void Fix_Yaw_Wraparound(float CurrentYaw, float PreviousYaw, class UObject* __WorldContext, float* NewPreviousYaw);
	static void ReflexAngleCheck(float Direction_A, float Direction_B, class UObject* __WorldContext, bool* ReflexAngle);
	static void ControllerRotation(class ACharacter* Character, class UObject* __WorldContext, float* Pitch, float* Yaw);
	static void Character_Speed(class ACharacter* Character, class UObject* __WorldContext, struct FVector* Velocity, float* Speed);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
