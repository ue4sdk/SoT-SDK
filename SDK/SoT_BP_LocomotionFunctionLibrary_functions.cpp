// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LocomotionFunctionLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.DriveValueToClampByDelta
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Min                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hit_Min                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Hit_Max                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::DriveValueToClampByDelta(float Min, float Max, float Delta, class UObject* __WorldContext, float* Value, bool* Hit_Min, bool* Hit_Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.DriveValueToClampByDelta");

	struct
	{
		float                          Value;
		float                          Min;
		float                          Max;
		float                          Delta;
		class UObject*                 __WorldContext;
		bool                           Hit_Min;
		bool                           Hit_Max;
	} params;

	params.Min = Min;
	params.Max = Max;
	params.Delta = Delta;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;
	if (Hit_Min != nullptr)
		*Hit_Min = params.Hit_Min;
	if (Hit_Max != nullptr)
		*Hit_Max = params.Hit_Max;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.FindSailControlHandIKPositionFromAnimation
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Animation_Hand_IK_Location     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LowerRopeLocation              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 UpperRopeLocation              (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location_On_Rope               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::FindSailControlHandIKPositionFromAnimation(const struct FVector& Animation_Hand_IK_Location, const struct FVector& LowerRopeLocation, const struct FVector& UpperRopeLocation, class UObject* __WorldContext, struct FVector* Location_On_Rope)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.FindSailControlHandIKPositionFromAnimation");

	struct
	{
		struct FVector                 Animation_Hand_IK_Location;
		struct FVector                 LowerRopeLocation;
		struct FVector                 UpperRopeLocation;
		class UObject*                 __WorldContext;
		struct FVector                 Location_On_Rope;
	} params;

	params.Animation_Hand_IK_Location = Animation_Hand_IK_Location;
	params.LowerRopeLocation = LowerRopeLocation;
	params.UpperRopeLocation = UpperRopeLocation;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Location_On_Rope != nullptr)
		*Location_On_Rope = params.Location_On_Rope;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDrivenBlendSpace
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBlendSpace*>     TargetArrayBlendspace          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UBlendSpace*>     LoadedArrayDataBlendspace      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UBlendSpace*             FallbackBlendspace             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::ArrayLoadingFromDataDrivenBlendSpace(class UBlendSpace* FallbackBlendspace, class UObject* __WorldContext, TArray<class UBlendSpace*>* TargetArrayBlendspace, TArray<class UBlendSpace*>* LoadedArrayDataBlendspace)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDrivenBlendSpace");

	struct
	{
		TArray<class UBlendSpace*>     TargetArrayBlendspace;
		TArray<class UBlendSpace*>     LoadedArrayDataBlendspace;
		class UBlendSpace*             FallbackBlendspace;
		class UObject*                 __WorldContext;
	} params;

	params.FallbackBlendspace = FallbackBlendspace;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (TargetArrayBlendspace != nullptr)
		*TargetArrayBlendspace = params.TargetArrayBlendspace;
	if (LoadedArrayDataBlendspace != nullptr)
		*LoadedArrayDataBlendspace = params.LoadedArrayDataBlendspace;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven1DBlendSpace
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBlendSpace1D*>   TargetArray_1D                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UBlendSpace1D*>   LoadedArrayData_1D             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UBlendSpace1D*           FallbackBlendspace1D           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::ArrayLoadingFromDataDriven1DBlendSpace(class UBlendSpace1D* FallbackBlendspace1D, class UObject* __WorldContext, TArray<class UBlendSpace1D*>* TargetArray_1D, TArray<class UBlendSpace1D*>* LoadedArrayData_1D)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven1DBlendSpace");

	struct
	{
		TArray<class UBlendSpace1D*>   TargetArray_1D;
		TArray<class UBlendSpace1D*>   LoadedArrayData_1D;
		class UBlendSpace1D*           FallbackBlendspace1D;
		class UObject*                 __WorldContext;
	} params;

	params.FallbackBlendspace1D = FallbackBlendspace1D;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (TargetArray_1D != nullptr)
		*TargetArray_1D = params.TargetArray_1D;
	if (LoadedArrayData_1D != nullptr)
		*LoadedArrayData_1D = params.LoadedArrayData_1D;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UAnimSequence*>   TargetArray                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAnimSequence*>   LoadedArrayData                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UAnimSequence*           FallbackAnimation              (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::ArrayLoadingFromDataDriven(class UAnimSequence* FallbackAnimation, class UObject* __WorldContext, TArray<class UAnimSequence*>* TargetArray, TArray<class UAnimSequence*>* LoadedArrayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven");

	struct
	{
		TArray<class UAnimSequence*>   TargetArray;
		TArray<class UAnimSequence*>   LoadedArrayData;
		class UAnimSequence*           FallbackAnimation;
		class UObject*                 __WorldContext;
	} params;

	params.FallbackAnimation = FallbackAnimation;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
	if (LoadedArrayData != nullptr)
		*LoadedArrayData = params.LoadedArrayData;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update IK Limb Controls
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIKLimbName>       Limb_ID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELimbIKSpace>      Coordinate_Space               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Translation_Strength           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rotation_Strength              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (Parm, IsPlainOldData)
// float                          BlendIn                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendOut                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Update_IK_Limb_Controls(class USkeletalMeshComponent* SkeletalMeshComponent, TEnumAsByte<EIKLimbName> Limb_ID, bool Active, TEnumAsByte<ELimbIKSpace> Coordinate_Space, float Translation_Strength, float Rotation_Strength, const struct FTransform& Transform, float BlendIn, float BlendOut, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update IK Limb Controls");

	struct
	{
		class USkeletalMeshComponent*  SkeletalMeshComponent;
		TEnumAsByte<EIKLimbName>       Limb_ID;
		bool                           Active;
		TEnumAsByte<ELimbIKSpace>      Coordinate_Space;
		float                          Translation_Strength;
		float                          Rotation_Strength;
		struct FTransform              Transform;
		float                          BlendIn;
		float                          BlendOut;
		class UObject*                 __WorldContext;
	} params;

	params.SkeletalMeshComponent = SkeletalMeshComponent;
	params.Limb_ID = Limb_ID;
	params.Active = Active;
	params.Coordinate_Space = Coordinate_Space;
	params.Translation_Strength = Translation_Strength;
	params.Rotation_Strength = Rotation_Strength;
	params.Transform = Transform;
	params.BlendIn = BlendIn;
	params.BlendOut = BlendOut;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Integer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Decrement                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Decrement_Integer(int Decrement, class UObject* __WorldContext, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Integer");

	struct
	{
		int                            Value;
		int                            Decrement;
		class UObject*                 __WorldContext;
	} params;

	params.Decrement = Decrement;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Integer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            integer                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Increment                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Increment_Integer(int Increment, class UObject* __WorldContext, int* integer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Integer");

	struct
	{
		int                            integer;
		int                            Increment;
		class UObject*                 __WorldContext;
	} params;

	params.Increment = Increment;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (integer != nullptr)
		*integer = params.integer;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Calculate Turn Times
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TurnLeft                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentControllerYaw           (Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviousControllerYaw          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBP_Turning             Turning                        (Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Calculate_Turn_Times(bool TurnLeft, float CurrentControllerYaw, class UObject* __WorldContext, float* PreviousControllerYaw, struct FBP_Turning* Turning)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Calculate Turn Times");

	struct
	{
		bool                           TurnLeft;
		float                          CurrentControllerYaw;
		float                          PreviousControllerYaw;
		struct FBP_Turning             Turning;
		class UObject*                 __WorldContext;
	} params;

	params.TurnLeft = TurnLeft;
	params.CurrentControllerYaw = CurrentControllerYaw;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PreviousControllerYaw != nullptr)
		*PreviousControllerYaw = params.PreviousControllerYaw;
	if (Turning != nullptr)
		*Turning = params.Turning;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.InRangeAndRate
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InZone                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Min                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_Turning             Turning                        (Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_LocomotionFunctionLibrary_C::InRangeAndRate(bool InZone, float Min, float Max, class UObject* __WorldContext, struct FBP_Turning* Turning)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.InRangeAndRate");

	struct
	{
		bool                           InZone;
		float                          Min;
		float                          Max;
		struct FBP_Turning             Turning;
		class UObject*                 __WorldContext;
		bool                           ReturnValue;
	} params;

	params.InZone = InZone;
	params.Min = Min;
	params.Max = Max;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Turning != nullptr)
		*Turning = params.Turning;

	return params.ReturnValue;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Turn State Change Check
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBP_Turning             Turning                        (Parm, OutParm, ReferenceParm)
// bool                           InZone                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Turn_State_Change_Check(bool InZone, class UObject* __WorldContext, struct FBP_Turning* Turning)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Turn State Change Check");

	struct
	{
		struct FBP_Turning             Turning;
		bool                           InZone;
		class UObject*                 __WorldContext;
	} params;

	params.InZone = InZone;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Turning != nullptr)
		*Turning = params.Turning;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Not In Range
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Min                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_LocomotionFunctionLibrary_C::Not_In_Range(float Value, float Min, float Max, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Not In Range");

	struct
	{
		float                          Value;
		float                          Min;
		float                          Max;
		class UObject*                 __WorldContext;
		bool                           ReturnValue;
	} params;

	params.Value = Value;
	params.Min = Min;
	params.Max = Max;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn State
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBP_Turning             Turning                        (Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Update_Animation_Turn_State(class UObject* __WorldContext, struct FBP_Turning* Turning)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn State");

	struct
	{
		struct FBP_Turning             Turning;
		class UObject*                 __WorldContext;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Turning != nullptr)
		*Turning = params.Turning;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn Time
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TurningLeft                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentTurnAngle               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Reset_Angle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Previous_Controller_Yaw        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Current_Controller_Yaw         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Animation_Time                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Update_Animation_Turn_Time(bool TurningLeft, float Reset_Angle, float Current_Controller_Yaw, class UObject* __WorldContext, float* CurrentTurnAngle, float* Previous_Controller_Yaw, float* Animation_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn Time");

	struct
	{
		bool                           TurningLeft;
		float                          CurrentTurnAngle;
		float                          Reset_Angle;
		float                          Previous_Controller_Yaw;
		float                          Current_Controller_Yaw;
		float                          Animation_Time;
		class UObject*                 __WorldContext;
	} params;

	params.TurningLeft = TurningLeft;
	params.Reset_Angle = Reset_Angle;
	params.Current_Controller_Yaw = Current_Controller_Yaw;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (CurrentTurnAngle != nullptr)
		*CurrentTurnAngle = params.CurrentTurnAngle;
	if (Previous_Controller_Yaw != nullptr)
		*Previous_Controller_Yaw = params.Previous_Controller_Yaw;
	if (Animation_Time != nullptr)
		*Animation_Time = params.Animation_Time;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.JumpingLogic
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              PlayerCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// float                          MovementSpeed                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          FrameDelta                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          JumpImpactTimerMax             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EJumping>          JumpingState                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          PreImpactTime                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          JumpImpactTimer                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::JumpingLogic(class ACharacter* PlayerCharacter, float MovementSpeed, float FrameDelta, class UObject* __WorldContext, float* JumpImpactTimerMax, TEnumAsByte<EJumping>* JumpingState, float* PreImpactTime, float* JumpImpactTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.JumpingLogic");

	struct
	{
		class ACharacter*              PlayerCharacter;
		float                          MovementSpeed;
		float                          FrameDelta;
		float                          JumpImpactTimerMax;
		TEnumAsByte<EJumping>          JumpingState;
		float                          PreImpactTime;
		float                          JumpImpactTimer;
		class UObject*                 __WorldContext;
	} params;

	params.PlayerCharacter = PlayerCharacter;
	params.MovementSpeed = MovementSpeed;
	params.FrameDelta = FrameDelta;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (JumpImpactTimerMax != nullptr)
		*JumpImpactTimerMax = params.JumpImpactTimerMax;
	if (JumpingState != nullptr)
		*JumpingState = params.JumpingState;
	if (PreImpactTime != nullptr)
		*PreImpactTime = params.PreImpactTime;
	if (JumpImpactTimer != nullptr)
		*JumpImpactTimer = params.JumpImpactTimer;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Ik Blending
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlendCounter                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           IKON                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Translation_Strength           (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Rotation_Strength              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EEasingFunc>       EaseingType                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendMax                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          FrameDeltaTime                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Ik_Blending(bool IKON, TEnumAsByte<EEasingFunc> EaseingType, float BlendMax, float FrameDeltaTime, class UObject* __WorldContext, float* BlendCounter, float* Translation_Strength, float* Rotation_Strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Ik Blending");

	struct
	{
		float                          BlendCounter;
		bool                           IKON;
		float                          Translation_Strength;
		float                          Rotation_Strength;
		TEnumAsByte<EEasingFunc>       EaseingType;
		float                          BlendMax;
		float                          FrameDeltaTime;
		class UObject*                 __WorldContext;
	} params;

	params.IKON = IKON;
	params.EaseingType = EaseingType;
	params.BlendMax = BlendMax;
	params.FrameDeltaTime = FrameDeltaTime;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (BlendCounter != nullptr)
		*BlendCounter = params.BlendCounter;
	if (Translation_Strength != nullptr)
		*Translation_Strength = params.Translation_Strength;
	if (Rotation_Strength != nullptr)
		*Rotation_Strength = params.Rotation_Strength;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Counter
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Counter                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          CounterMax                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hit_Max_Count                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          IncrementedCounter             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Increment_Counter(float Counter, float CounterMax, float DeltaTime, class UObject* __WorldContext, bool* Hit_Max_Count, float* IncrementedCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Counter");

	struct
	{
		float                          Counter;
		float                          CounterMax;
		float                          DeltaTime;
		class UObject*                 __WorldContext;
		bool                           Hit_Max_Count;
		float                          IncrementedCounter;
	} params;

	params.Counter = Counter;
	params.CounterMax = CounterMax;
	params.DeltaTime = DeltaTime;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Hit_Max_Count != nullptr)
		*Hit_Max_Count = params.Hit_Max_Count;
	if (IncrementedCounter != nullptr)
		*IncrementedCounter = params.IncrementedCounter;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Counter
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Counter                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          CounterMin                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hit_Min_Count                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DecrementedCounter             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Decrement_Counter(float Counter, float CounterMin, float DeltaTime, class UObject* __WorldContext, bool* Hit_Min_Count, float* DecrementedCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Counter");

	struct
	{
		float                          Counter;
		float                          CounterMin;
		float                          DeltaTime;
		class UObject*                 __WorldContext;
		bool                           Hit_Min_Count;
		float                          DecrementedCounter;
	} params;

	params.Counter = Counter;
	params.CounterMin = CounterMin;
	params.DeltaTime = DeltaTime;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Hit_Min_Count != nullptr)
		*Hit_Min_Count = params.Hit_Min_Count;
	if (DecrementedCounter != nullptr)
		*DecrementedCounter = params.DecrementedCounter;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Out Over Time
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxTime                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEasingFunc>       EasingType                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Return_Val___0_1               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Out_Over_Time(float CurrentTime, float MaxTime, TEnumAsByte<EEasingFunc> EasingType, class UObject* __WorldContext, float* Return_Val___0_1)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Out Over Time");

	struct
	{
		float                          CurrentTime;
		float                          MaxTime;
		TEnumAsByte<EEasingFunc>       EasingType;
		class UObject*                 __WorldContext;
		float                          Return_Val___0_1;
	} params;

	params.CurrentTime = CurrentTime;
	params.MaxTime = MaxTime;
	params.EasingType = EasingType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Return_Val___0_1 != nullptr)
		*Return_Val___0_1 = params.Return_Val___0_1;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Times
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TurningLeft                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Current_Controller_Yaw         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Previous_Controller_Yaw        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBP_Turning             Turning                        (Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Update_Animation_Times(bool TurningLeft, float Current_Controller_Yaw, class UObject* __WorldContext, float* Previous_Controller_Yaw, struct FBP_Turning* Turning)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Times");

	struct
	{
		bool                           TurningLeft;
		float                          Current_Controller_Yaw;
		float                          Previous_Controller_Yaw;
		struct FBP_Turning             Turning;
		class UObject*                 __WorldContext;
	} params;

	params.TurningLeft = TurningLeft;
	params.Current_Controller_Yaw = Current_Controller_Yaw;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Previous_Controller_Yaw != nullptr)
		*Previous_Controller_Yaw = params.Previous_Controller_Yaw;
	if (Turning != nullptr)
		*Turning = params.Turning;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Turn Animations
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TurningLeft                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentYaw                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviousYaw                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          FrameDeltaTime                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_Turning             Turning                        (Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Update_Turn_Animations(bool TurningLeft, float CurrentYaw, float PreviousYaw, float FrameDeltaTime, class UObject* __WorldContext, struct FBP_Turning* Turning)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Turn Animations");

	struct
	{
		bool                           TurningLeft;
		float                          CurrentYaw;
		float                          PreviousYaw;
		float                          FrameDeltaTime;
		struct FBP_Turning             Turning;
		class UObject*                 __WorldContext;
	} params;

	params.TurningLeft = TurningLeft;
	params.CurrentYaw = CurrentYaw;
	params.PreviousYaw = PreviousYaw;
	params.FrameDeltaTime = FrameDeltaTime;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Turning != nullptr)
		*Turning = params.Turning;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Fix Yaw Wraparound
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentYaw                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviousYaw                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewPreviousYaw                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Fix_Yaw_Wraparound(float CurrentYaw, float PreviousYaw, class UObject* __WorldContext, float* NewPreviousYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Fix Yaw Wraparound");

	struct
	{
		float                          CurrentYaw;
		float                          PreviousYaw;
		class UObject*                 __WorldContext;
		float                          NewPreviousYaw;
	} params;

	params.CurrentYaw = CurrentYaw;
	params.PreviousYaw = PreviousYaw;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (NewPreviousYaw != nullptr)
		*NewPreviousYaw = params.NewPreviousYaw;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ReflexAngleCheck
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Direction_A                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Direction_B                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReflexAngle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::ReflexAngleCheck(float Direction_A, float Direction_B, class UObject* __WorldContext, bool* ReflexAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ReflexAngleCheck");

	struct
	{
		float                          Direction_A;
		float                          Direction_B;
		class UObject*                 __WorldContext;
		bool                           ReflexAngle;
	} params;

	params.Direction_A = Direction_A;
	params.Direction_B = Direction_B;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ReflexAngle != nullptr)
		*ReflexAngle = params.ReflexAngle;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ControllerRotation
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::ControllerRotation(class ACharacter* Character, class UObject* __WorldContext, float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ControllerRotation");

	struct
	{
		class ACharacter*              Character;
		class UObject*                 __WorldContext;
		float                          Pitch;
		float                          Yaw;
	} params;

	params.Character = Character;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (Yaw != nullptr)
		*Yaw = params.Yaw;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Character Speed
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Character_Speed(class ACharacter* Character, class UObject* __WorldContext, struct FVector* Velocity, float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Character Speed");

	struct
	{
		class ACharacter*              Character;
		class UObject*                 __WorldContext;
		struct FVector                 Velocity;
		float                          Speed;
	} params;

	params.Character = Character;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
	if (Speed != nullptr)
		*Speed = params.Speed;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
