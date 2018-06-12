#pragma once

// Sea of Thieves (1.1.1) SDK

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
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C");
		return ptr;
	}


	void STATIC_DriveValueToClampByDelta(float Min, float Max, float Delta, class UObject* __WorldContext, float* Value, bool* Hit_Min, bool* Hit_Max);
	void STATIC_FindSailControlHandIKPositionFromAnimation(const struct FVector& Animation_Hand_IK_Location, const struct FVector& LowerRopeLocation, const struct FVector& UpperRopeLocation, class UObject* __WorldContext, struct FVector* Location_On_Rope);
	void STATIC_ArrayLoadingFromDataDrivenBlendSpace(class UBlendSpace* FallbackBlendspace, class UObject* __WorldContext, TArray<class UBlendSpace*>* TargetArrayBlendspace, TArray<class UBlendSpace*>* LoadedArrayDataBlendspace);
	void STATIC_ArrayLoadingFromDataDriven1DBlendSpace(class UBlendSpace1D* FallbackBlendspace1D, class UObject* __WorldContext, TArray<class UBlendSpace1D*>* TargetArray_1D, TArray<class UBlendSpace1D*>* LoadedArrayData_1D);
	void STATIC_ArrayLoadingFromDataDriven(class UAnimSequence* FallbackAnimation, class UObject* __WorldContext, TArray<class UAnimSequence*>* TargetArray, TArray<class UAnimSequence*>* LoadedArrayData);
	void STATIC_Update_IK_Limb_Controls(class USkeletalMeshComponent* SkeletalMeshComponent, TEnumAsByte<EIKLimbName> Limb_ID, bool Active, TEnumAsByte<ELimbIKSpace> Coordinate_Space, float Translation_Strength, float Rotation_Strength, const struct FTransform& Transform, float BlendIn, float BlendOut, class UObject* __WorldContext);
	void STATIC_Decrement_Integer(int Decrement, class UObject* __WorldContext, int* Value);
	void STATIC_Increment_Integer(int Increment, class UObject* __WorldContext, int* integer);
	void STATIC_Calculate_Turn_Times(bool TurnLeft, float CurrentControllerYaw, class UObject* __WorldContext, float* PreviousControllerYaw, struct FBP_Turning* Turning);
	bool STATIC_InRangeAndRate(bool InZone, float Min, float Max, class UObject* __WorldContext, struct FBP_Turning* Turning);
	void STATIC_Turn_State_Change_Check(bool InZone, class UObject* __WorldContext, struct FBP_Turning* Turning);
	bool STATIC_Not_In_Range(float Value, float Min, float Max, class UObject* __WorldContext);
	void STATIC_Update_Animation_Turn_State(class UObject* __WorldContext, struct FBP_Turning* Turning);
	void STATIC_Update_Animation_Turn_Time(bool TurningLeft, float Reset_Angle, float Current_Controller_Yaw, class UObject* __WorldContext, float* CurrentTurnAngle, float* Previous_Controller_Yaw, float* Animation_Time);
	void STATIC_JumpingLogic(class ACharacter* PlayerCharacter, float MovementSpeed, float FrameDelta, class UObject* __WorldContext, float* JumpImpactTimerMax, TEnumAsByte<EJumping>* JumpingState, float* PreImpactTime, float* JumpImpactTimer);
	void STATIC_Ik_Blending(bool IKON, TEnumAsByte<EEasingFunc> EaseingType, float BlendMax, float FrameDeltaTime, class UObject* __WorldContext, float* BlendCounter, float* Translation_Strength, float* Rotation_Strength);
	void STATIC_Increment_Counter(float Counter, float CounterMax, float DeltaTime, class UObject* __WorldContext, bool* Hit_Max_Count, float* IncrementedCounter);
	void STATIC_Decrement_Counter(float Counter, float CounterMin, float DeltaTime, class UObject* __WorldContext, bool* Hit_Min_Count, float* DecrementedCounter);
	void STATIC_Out_Over_Time(float CurrentTime, float MaxTime, TEnumAsByte<EEasingFunc> EasingType, class UObject* __WorldContext, float* Return_Val___0_1);
	void STATIC_Update_Animation_Times(bool TurningLeft, float Current_Controller_Yaw, class UObject* __WorldContext, float* Previous_Controller_Yaw, struct FBP_Turning* Turning);
	void STATIC_Update_Turn_Animations(bool TurningLeft, float CurrentYaw, float PreviousYaw, float FrameDeltaTime, class UObject* __WorldContext, struct FBP_Turning* Turning);
	void STATIC_Fix_Yaw_Wraparound(float CurrentYaw, float PreviousYaw, class UObject* __WorldContext, float* NewPreviousYaw);
	void STATIC_ReflexAngleCheck(float Direction_A, float Direction_B, class UObject* __WorldContext, bool* ReflexAngle);
	void STATIC_ControllerRotation(class ACharacter* Character, class UObject* __WorldContext, float* Pitch, float* Yaw);
	void STATIC_Character_Speed(class ACharacter* Character, class UObject* __WorldContext, struct FVector* Velocity, float* Speed);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
