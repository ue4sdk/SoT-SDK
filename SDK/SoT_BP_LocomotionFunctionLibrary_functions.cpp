// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LocomotionFunctionLibrary_parameters.hpp"

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
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hit_Min                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Hit_Max                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::DriveValueToClampByDelta(float Min, float Max, float Delta, UObject* __WorldContext, float* Value, bool* Hit_Min, bool* Hit_Max)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.DriveValueToClampByDelta"));

	UBP_LocomotionFunctionLibrary_C_DriveValueToClampByDelta_Params params;
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
// FVector                        Animation_Hand_IK_Location     (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        LowerRopeLocation              (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        UpperRopeLocation              (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Location_On_Rope               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::FindSailControlHandIKPositionFromAnimation(const FVector& Animation_Hand_IK_Location, const FVector& LowerRopeLocation, const FVector& UpperRopeLocation, UObject* __WorldContext, FVector* Location_On_Rope)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.FindSailControlHandIKPositionFromAnimation"));

	UBP_LocomotionFunctionLibrary_C_FindSailControlHandIKPositionFromAnimation_Params params;
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
// TArray<UBlendSpace*>           TargetArrayBlendspace          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<UBlendSpace*>           LoadedArrayDataBlendspace      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// UBlendSpace*                   FallbackBlendspace             (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::ArrayLoadingFromDataDrivenBlendSpace(UBlendSpace* FallbackBlendspace, UObject* __WorldContext, TArray<UBlendSpace*>* TargetArrayBlendspace, TArray<UBlendSpace*>* LoadedArrayDataBlendspace)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDrivenBlendSpace"));

	UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDrivenBlendSpace_Params params;
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
// TArray<UBlendSpace1D*>         TargetArray_1D                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<UBlendSpace1D*>         LoadedArrayData_1D             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// UBlendSpace1D*                 FallbackBlendspace1D           (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::ArrayLoadingFromDataDriven1DBlendSpace(UBlendSpace1D* FallbackBlendspace1D, UObject* __WorldContext, TArray<UBlendSpace1D*>* TargetArray_1D, TArray<UBlendSpace1D*>* LoadedArrayData_1D)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven1DBlendSpace"));

	UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDriven1DBlendSpace_Params params;
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
// TArray<UAnimSequence*>         TargetArray                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<UAnimSequence*>         LoadedArrayData                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// UAnimSequence*                 FallBackAnimation              (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::ArrayLoadingFromDataDriven(UAnimSequence* FallBackAnimation, UObject* __WorldContext, TArray<UAnimSequence*>* TargetArray, TArray<UAnimSequence*>* LoadedArrayData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven"));

	UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDriven_Params params;
	params.FallBackAnimation = FallBackAnimation;
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
// USkeletalMeshComponent*        SkeletalMeshComponent          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIKLimbName>       Limb_ID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELimbIKSpace>      Coordinate_Space               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Translation_Strength           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rotation_Strength              (Parm, ZeroConstructor, IsPlainOldData)
// FTransform                     Transform                      (Parm, IsPlainOldData)
// float                          BlendIn                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendOut                       (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Update_IK_Limb_Controls(USkeletalMeshComponent* SkeletalMeshComponent, TEnumAsByte<EIKLimbName> Limb_ID, bool Active, TEnumAsByte<ELimbIKSpace> Coordinate_Space, float Translation_Strength, float Rotation_Strength, const FTransform& Transform, float BlendIn, float BlendOut, UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update IK Limb Controls"));

	UBP_LocomotionFunctionLibrary_C_Update_IK_Limb_Controls_Params params;
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
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Decrement_Integer(int Decrement, UObject* __WorldContext, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Integer"));

	UBP_LocomotionFunctionLibrary_C_Decrement_Integer_Params params;
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
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Increment_Integer(int Increment, UObject* __WorldContext, int* integer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Integer"));

	UBP_LocomotionFunctionLibrary_C_Increment_Integer_Params params;
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
// FBP_Turning                    Turning                        (Parm, OutParm, ReferenceParm)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Calculate_Turn_Times(bool TurnLeft, float CurrentControllerYaw, UObject* __WorldContext, float* PreviousControllerYaw, FBP_Turning* Turning)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Calculate Turn Times"));

	UBP_LocomotionFunctionLibrary_C_Calculate_Turn_Times_Params params;
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
// FBP_Turning                    Turning                        (Parm, OutParm, ReferenceParm)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_LocomotionFunctionLibrary_C::InRangeAndRate(bool InZone, float Min, float Max, UObject* __WorldContext, FBP_Turning* Turning)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.InRangeAndRate"));

	UBP_LocomotionFunctionLibrary_C_InRangeAndRate_Params params;
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
// FBP_Turning                    Turning                        (Parm, OutParm, ReferenceParm)
// bool                           InZone                         (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Turn_State_Change_Check(bool InZone, UObject* __WorldContext, FBP_Turning* Turning)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Turn State Change Check"));

	UBP_LocomotionFunctionLibrary_C_Turn_State_Change_Check_Params params;
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
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_LocomotionFunctionLibrary_C::Not_In_Range(float Value, float Min, float Max, UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Not In Range"));

	UBP_LocomotionFunctionLibrary_C_Not_In_Range_Params params;
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
// FBP_Turning                    Turning                        (Parm, OutParm, ReferenceParm)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Update_Animation_Turn_State(UObject* __WorldContext, FBP_Turning* Turning)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn State"));

	UBP_LocomotionFunctionLibrary_C_Update_Animation_Turn_State_Params params;
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
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Update_Animation_Turn_Time(bool TurningLeft, float Reset_Angle, float Current_Controller_Yaw, UObject* __WorldContext, float* CurrentTurnAngle, float* Previous_Controller_Yaw, float* Animation_Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn Time"));

	UBP_LocomotionFunctionLibrary_C_Update_Animation_Turn_Time_Params params;
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
// ACharacter*                    PlayerCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// float                          MovementSpeed                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          FrameDelta                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          JumpImpactTimerMax             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EJumping>          JumpingState                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          PreImpactTime                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          JumpImpactTimer                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::JumpingLogic(ACharacter* PlayerCharacter, float MovementSpeed, float FrameDelta, UObject* __WorldContext, float* JumpImpactTimerMax, TEnumAsByte<EJumping>* JumpingState, float* PreImpactTime, float* JumpImpactTimer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.JumpingLogic"));

	UBP_LocomotionFunctionLibrary_C_JumpingLogic_Params params;
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
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Ik_Blending(bool IKON, TEnumAsByte<EEasingFunc> EaseingType, float BlendMax, float FrameDeltaTime, UObject* __WorldContext, float* BlendCounter, float* Translation_Strength, float* Rotation_Strength)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Ik Blending"));

	UBP_LocomotionFunctionLibrary_C_Ik_Blending_Params params;
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
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hit_Max_Count                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          IncrementedCounter             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Increment_Counter(float Counter, float CounterMax, float DeltaTime, UObject* __WorldContext, bool* Hit_Max_Count, float* IncrementedCounter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Counter"));

	UBP_LocomotionFunctionLibrary_C_Increment_Counter_Params params;
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
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hit_Min_Count                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DecrementedCounter             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Decrement_Counter(float Counter, float CounterMin, float DeltaTime, UObject* __WorldContext, bool* Hit_Min_Count, float* DecrementedCounter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Counter"));

	UBP_LocomotionFunctionLibrary_C_Decrement_Counter_Params params;
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
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Return_Val___0_1               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Out_Over_Time(float CurrentTime, float MaxTime, TEnumAsByte<EEasingFunc> EasingType, UObject* __WorldContext, float* Return_Val___0_1)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Out Over Time"));

	UBP_LocomotionFunctionLibrary_C_Out_Over_Time_Params params;
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
// FBP_Turning                    Turning                        (Parm, OutParm, ReferenceParm)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Update_Animation_Times(bool TurningLeft, float Current_Controller_Yaw, UObject* __WorldContext, float* Previous_Controller_Yaw, FBP_Turning* Turning)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Times"));

	UBP_LocomotionFunctionLibrary_C_Update_Animation_Times_Params params;
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
// FBP_Turning                    Turning                        (Parm, OutParm, ReferenceParm)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Update_Turn_Animations(bool TurningLeft, float CurrentYaw, float PreviousYaw, float FrameDeltaTime, UObject* __WorldContext, FBP_Turning* Turning)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Turn Animations"));

	UBP_LocomotionFunctionLibrary_C_Update_Turn_Animations_Params params;
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
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewPreviousYaw                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Fix_Yaw_Wraparound(float CurrentYaw, float PreviousYaw, UObject* __WorldContext, float* NewPreviousYaw)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Fix Yaw Wraparound"));

	UBP_LocomotionFunctionLibrary_C_Fix_Yaw_Wraparound_Params params;
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
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReflexAngle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::ReflexAngleCheck(float Direction_A, float Direction_B, UObject* __WorldContext, bool* ReflexAngle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ReflexAngleCheck"));

	UBP_LocomotionFunctionLibrary_C_ReflexAngleCheck_Params params;
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
// ACharacter*                    Character                      (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::ControllerRotation(ACharacter* Character, UObject* __WorldContext, float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ControllerRotation"));

	UBP_LocomotionFunctionLibrary_C_ControllerRotation_Params params;
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
// ACharacter*                    Character                      (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Character_Speed(ACharacter* Character, UObject* __WorldContext, FVector* Velocity, float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Character Speed"));

	UBP_LocomotionFunctionLibrary_C_Character_Speed_Params params;
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
