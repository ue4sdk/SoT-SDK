// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Maths_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Maths.AngleMaths.CalculateEulerAngle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          FromAngle                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ToAngle                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAngleMaths::STATIC_CalculateEulerAngle(float FromAngle, float ToAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.AngleMaths.CalculateEulerAngle");

	UAngleMaths_CalculateEulerAngle_Params params;
	params.FromAngle = FromAngle;
	params.ToAngle = ToAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.AngleMaths.AngleMoveTowardsMod180
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Angle                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetAngle                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAngleMaths::STATIC_AngleMoveTowardsMod180(float Angle, float TargetAngle, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.AngleMaths.AngleMoveTowardsMod180");

	UAngleMaths_AngleMoveTowardsMod180_Params params;
	params.Angle = Angle;
	params.TargetAngle = TargetAngle;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.AngleMaths.AngleMod360
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Angle                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAngleMaths::STATIC_AngleMod360(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.AngleMaths.AngleMod360");

	UAngleMaths_AngleMod360_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.AngleMaths.AngleMod180
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Angle                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAngleMaths::STATIC_AngleMod180(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.AngleMaths.AngleMod180");

	UAngleMaths_AngleMod180_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.AngleMaths.AngleLerpShortest
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Start                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          End                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAngleMaths::STATIC_AngleLerpShortest(float Start, float End, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.AngleMaths.AngleLerpShortest");

	UAngleMaths_AngleLerpShortest_Params params;
	params.Start = Start;
	params.End = End;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.BuoyancyMaths.CalculateMagnitude
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InSubmersedVolume              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InFluidDensity                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InGravity                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBuoyancyMaths::STATIC_CalculateMagnitude(float InSubmersedVolume, float InFluidDensity, float InGravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.BuoyancyMaths.CalculateMagnitude");

	UBuoyancyMaths_CalculateMagnitude_Params params;
	params.InSubmersedVolume = InSubmersedVolume;
	params.InFluidDensity = InFluidDensity;
	params.InGravity = InGravity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.BuoyancyMaths.CalcBlendedProbeCurveBuoyancy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCurveFloat*             PrimaryBuoyancyCurve           (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             SecondaryBuoyancyCurve         (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             TertiaryBuoyancyCurve          (Parm, ZeroConstructor, IsPlainOldData)
// float                          UnaryDistUnderwater            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Blend                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBuoyancyBlend>    BlendType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBuoyancyMaths::STATIC_CalcBlendedProbeCurveBuoyancy(class UCurveFloat* PrimaryBuoyancyCurve, class UCurveFloat* SecondaryBuoyancyCurve, class UCurveFloat* TertiaryBuoyancyCurve, float UnaryDistUnderwater, float Blend, TEnumAsByte<EBuoyancyBlend> BlendType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.BuoyancyMaths.CalcBlendedProbeCurveBuoyancy");

	UBuoyancyMaths_CalcBlendedProbeCurveBuoyancy_Params params;
	params.PrimaryBuoyancyCurve = PrimaryBuoyancyCurve;
	params.SecondaryBuoyancyCurve = SecondaryBuoyancyCurve;
	params.TertiaryBuoyancyCurve = TertiaryBuoyancyCurve;
	params.UnaryDistUnderwater = UnaryDistUnderwater;
	params.Blend = Blend;
	params.BlendType = BlendType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.CircleMaths.ConvertAngleToCircleSectorIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          AngleInDegrees                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumberOfSectors                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          IgnoredFraction                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCircleMaths::STATIC_ConvertAngleToCircleSectorIndex(float AngleInDegrees, int NumberOfSectors, float IgnoredFraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.CircleMaths.ConvertAngleToCircleSectorIndex");

	UCircleMaths_ConvertAngleToCircleSectorIndex_Params params;
	params.AngleInDegrees = AngleInDegrees;
	params.NumberOfSectors = NumberOfSectors;
	params.IgnoredFraction = IgnoredFraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.CircleMaths.Area
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InRadius                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCircleMaths::STATIC_Area(float InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.CircleMaths.Area");

	UCircleMaths_Area_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetDistanceSquaredToCurve
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 WorldSpacePos                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USplineComponent*        Spline                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCurveMaths::STATIC_GetDistanceSquaredToCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.CurveMaths.GetDistanceSquaredToCurve");

	UCurveMaths_GetDistanceSquaredToCurve_Params params;
	params.WorldSpacePos = WorldSpacePos;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetClosestTimeOnCurve
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 WorldSpacePos                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USplineComponent*        Spline                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCurveMaths::STATIC_GetClosestTimeOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.CurveMaths.GetClosestTimeOnCurve");

	UCurveMaths_GetClosestTimeOnCurve_Params params;
	params.WorldSpacePos = WorldSpacePos;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetClosestPositionOnCurve
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 WorldSpacePos                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USplineComponent*        Spline                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UCurveMaths::STATIC_GetClosestPositionOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.CurveMaths.GetClosestPositionOnCurve");

	UCurveMaths_GetClosestPositionOnCurve_Params params;
	params.WorldSpacePos = WorldSpacePos;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetClosestPointOnCurve
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 WorldSpacePos                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USplineComponent*        Spline                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCurveMaths::STATIC_GetClosestPointOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.CurveMaths.GetClosestPointOnCurve");

	UCurveMaths_GetClosestPointOnCurve_Params params;
	params.WorldSpacePos = WorldSpacePos;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetCentre
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USplineComponent*        Spline                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UCurveMaths::STATIC_GetCentre(class USplineComponent* Spline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.CurveMaths.GetCentre");

	UCurveMaths_GetCentre_Params params;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.Density.Water
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDensity::STATIC_Water()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.Density.Water");

	UDensity_Water_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.Density.SeaWater
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDensity::STATIC_SeaWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.Density.SeaWater");

	UDensity_SeaWater_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.Density.Min
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDensity::STATIC_Min()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.Density.Min");

	UDensity_Min_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.Density.Max
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDensity::STATIC_Max()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.Density.Max");

	UDensity_Max_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.Density.IsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InValue                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDensity::STATIC_IsValid(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.Density.IsValid");

	UDensity_IsValid_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.Density.Air
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDensity::STATIC_Air()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.Density.Air");

	UDensity_Air_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.Sphere
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDragCoefficients::STATIC_Sphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.Sphere");

	UDragCoefficients_Sphere_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.PlanePerpendicularToFlow
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDragCoefficients::STATIC_PlanePerpendicularToFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.PlanePerpendicularToFlow");

	UDragCoefficients_PlanePerpendicularToFlow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.PlaneParallelToFlow
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDragCoefficients::STATIC_PlaneParallelToFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.PlaneParallelToFlow");

	UDragCoefficients_PlaneParallelToFlow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.Min
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDragCoefficients::STATIC_Min()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.Min");

	UDragCoefficients_Min_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.Max
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDragCoefficients::STATIC_Max()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.Max");

	UDragCoefficients_Max_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.IsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDragCoefficients::STATIC_IsValid(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.IsValid");

	UDragCoefficients_IsValid_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.Cube
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDragCoefficients::STATIC_Cube()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.Cube");

	UDragCoefficients_Cube_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.DragMaths.CalculateMagnitude
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InSurfaceArea                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InSpeedReltaiveToFluid         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InDragCoefficient              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InFluidDensity                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDragMaths::STATIC_CalculateMagnitude(float InSurfaceArea, float InSpeedReltaiveToFluid, float InDragCoefficient, float InFluidDensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.DragMaths.CalculateMagnitude");

	UDragMaths_CalculateMagnitude_Params params;
	params.InSurfaceArea = InSurfaceArea;
	params.InSpeedReltaiveToFluid = InSpeedReltaiveToFluid;
	params.InDragCoefficient = InDragCoefficient;
	params.InFluidDensity = InFluidDensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.FloatMaths.WrapToRange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Input                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LowerLimit                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          UpperLimit                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFloatMaths::STATIC_WrapToRange(float Input, float LowerLimit, float UpperLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.WrapToRange");

	UFloatMaths_WrapToRange_Params params;
	params.Input = Input;
	params.LowerLimit = LowerLimit;
	params.UpperLimit = UpperLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.FloatMaths.WrapAroundPivot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Input                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Pivot                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFloatMaths::STATIC_WrapAroundPivot(float Input, float Pivot, float Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.WrapAroundPivot");

	UFloatMaths_WrapAroundPivot_Params params;
	params.Input = Input;
	params.Pivot = Pivot;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.FloatMaths.MoveTowards
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          From                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          To                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFloatMaths::STATIC_MoveTowards(float From, float To, float Speed, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.MoveTowards");

	UFloatMaths_MoveTowards_Params params;
	params.From = From;
	params.To = To;
	params.Speed = Speed;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.FloatMaths.Map
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ValueToMapFrom                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          FromRangeStart                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          FromRangeEnd                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ToRangeStart                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ToRangeEnd                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Clamp                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFloatMaths::STATIC_Map(float ValueToMapFrom, float FromRangeStart, float FromRangeEnd, float ToRangeStart, float ToRangeEnd, bool Clamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.Map");

	UFloatMaths_Map_Params params;
	params.ValueToMapFrom = ValueToMapFrom;
	params.FromRangeStart = FromRangeStart;
	params.FromRangeEnd = FromRangeEnd;
	params.ToRangeStart = ToRangeStart;
	params.ToRangeEnd = ToRangeEnd;
	params.Clamp = Clamp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.FloatMaths.IncrementCounter
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Counter                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Delta                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CounterMax                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFloatMaths::STATIC_IncrementCounter(float Delta, float CounterMax, float* Counter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.IncrementCounter");

	UFloatMaths_IncrementCounter_Params params;
	params.Delta = Delta;
	params.CounterMax = CounterMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Counter != nullptr)
		*Counter = params.Counter;

	return params.ReturnValue;
}


// Function Maths.FloatMaths.FindMidpointInWrappedRange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Value1                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value2                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          LowerLimit                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          UpperLimit                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFloatMaths::STATIC_FindMidpointInWrappedRange(float Value1, float Value2, float LowerLimit, float UpperLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.FindMidpointInWrappedRange");

	UFloatMaths_FindMidpointInWrappedRange_Params params;
	params.Value1 = Value1;
	params.Value2 = Value2;
	params.LowerLimit = LowerLimit;
	params.UpperLimit = UpperLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.FloatMaths.Bound
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ValueToBound                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Bound1                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Bound2                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFloatMaths::STATIC_Bound(float ValueToBound, float Bound1, float Bound2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.Bound");

	UFloatMaths_Bound_Params params;
	params.ValueToBound = ValueToBound;
	params.Bound1 = Bound1;
	params.Bound2 = Bound2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.Gravity.Earth
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGravity::STATIC_Earth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.Gravity.Earth");

	UGravity_Earth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.PoissonDiscSampling.GeneratePoissonDiscDistributionAcrossPlane
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InCenter                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FQuat                   InOrientation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          InWidth                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InHeight                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InMinDistance                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InRNGSeed                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UPoissonDiscSampling::STATIC_GeneratePoissonDiscDistributionAcrossPlane(const struct FVector& InCenter, const struct FQuat& InOrientation, float InWidth, float InHeight, float InMinDistance, int InRNGSeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.PoissonDiscSampling.GeneratePoissonDiscDistributionAcrossPlane");

	UPoissonDiscSampling_GeneratePoissonDiscDistributionAcrossPlane_Params params;
	params.InCenter = InCenter;
	params.InOrientation = InOrientation;
	params.InWidth = InWidth;
	params.InHeight = InHeight;
	params.InMinDistance = InMinDistance;
	params.InRNGSeed = InRNGSeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.RotationMaths.TransformAroundArbitraryPivot
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              TargetTransform                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              BaseTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              TransformToApply               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           LockFinalOrientation           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform URotationMaths::STATIC_TransformAroundArbitraryPivot(const struct FTransform& TargetTransform, const struct FTransform& BaseTransform, const struct FTransform& TransformToApply, bool LockFinalOrientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.RotationMaths.TransformAroundArbitraryPivot");

	URotationMaths_TransformAroundArbitraryPivot_Params params;
	params.TargetTransform = TargetTransform;
	params.BaseTransform = BaseTransform;
	params.TransformToApply = TransformToApply;
	params.LockFinalOrientation = LockFinalOrientation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.RotationMaths.RotatorToQuat
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat URotationMaths::STATIC_RotatorToQuat(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.RotationMaths.RotatorToQuat");

	URotationMaths_RotatorToQuat_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.SphereMaths.VolumeFromRadius
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InRadius                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USphereMaths::STATIC_VolumeFromRadius(float InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.SphereMaths.VolumeFromRadius");

	USphereMaths_VolumeFromRadius_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.SphereMaths.SurfaceAreaFromRadius
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InRadius                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USphereMaths::STATIC_SurfaceAreaFromRadius(float InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.SphereMaths.SurfaceAreaFromRadius");

	USphereMaths_SurfaceAreaFromRadius_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.SphericalCapMaths.Volume
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InRadius                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InHeight                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USphericalCapMaths::STATIC_Volume(float InRadius, float InHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.SphericalCapMaths.Volume");

	USphericalCapMaths_Volume_Params params;
	params.InRadius = InRadius;
	params.InHeight = InHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.SphericalCapMaths.CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InRadius                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InHeight                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USphericalCapMaths::STATIC_CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid(float InRadius, float InHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.SphericalCapMaths.CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid");

	USphericalCapMaths_CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid_Params params;
	params.InRadius = InRadius;
	params.InHeight = InHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.SphericalCapMaths.BaseRadius
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InRadius                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InHeight                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USphericalCapMaths::STATIC_BaseRadius(float InRadius, float InHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.SphericalCapMaths.BaseRadius");

	USphericalCapMaths_BaseRadius_Params params;
	params.InRadius = InRadius;
	params.InHeight = InHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.TimedBufferFunctionLibrary.UpdateInterval
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FTimedBuffer            TimedBuffer                    (Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTimedBufferFunctionLibrary::STATIC_UpdateInterval(float DeltaTime, float Value, struct FTimedBuffer* TimedBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.TimedBufferFunctionLibrary.UpdateInterval");

	UTimedBufferFunctionLibrary_UpdateInterval_Params params;
	params.DeltaTime = DeltaTime;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimedBuffer != nullptr)
		*TimedBuffer = params.TimedBuffer;
}


// Function Maths.TimedBufferFunctionLibrary.GetValueRange
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTimedBuffer            TimedBuffer                    (Parm, OutParm, ReferenceParm)
// float                          MinWindowLength                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ValueRange                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTimedBufferFunctionLibrary::STATIC_GetValueRange(float MinWindowLength, struct FTimedBuffer* TimedBuffer, float* ValueRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.TimedBufferFunctionLibrary.GetValueRange");

	UTimedBufferFunctionLibrary_GetValueRange_Params params;
	params.MinWindowLength = MinWindowLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimedBuffer != nullptr)
		*TimedBuffer = params.TimedBuffer;
	if (ValueRange != nullptr)
		*ValueRange = params.ValueRange;

	return params.ReturnValue;
}


// Function Maths.TimedBufferFunctionLibrary.CreateTimedBuffer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          WindowLength                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTimedBuffer            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTimedBuffer UTimedBufferFunctionLibrary::STATIC_CreateTimedBuffer(float WindowLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.TimedBufferFunctionLibrary.CreateTimedBuffer");

	UTimedBufferFunctionLibrary_CreateTimedBuffer_Params params;
	params.WindowLength = WindowLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.TimeMaths.GetDifference
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime               A                              (Parm, ZeroConstructor)
// struct FDateTime               B                              (Parm, ZeroConstructor)
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FTimespan UTimeMaths::STATIC_GetDifference(const struct FDateTime& A, const struct FDateTime& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.TimeMaths.GetDifference");

	UTimeMaths_GetDifference_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.VectorMaths.LineIntersectsSphere
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 LineStart                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LineDir                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SphereCentre                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          SphereRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ClosestIntersectionPoint       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVectorMaths::STATIC_LineIntersectsSphere(const struct FVector& LineStart, const struct FVector& LineDir, const struct FVector& SphereCentre, float SphereRadius, struct FVector* ClosestIntersectionPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.VectorMaths.LineIntersectsSphere");

	UVectorMaths_LineIntersectsSphere_Params params;
	params.LineStart = LineStart;
	params.LineDir = LineDir;
	params.SphereCentre = SphereCentre;
	params.SphereRadius = SphereRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClosestIntersectionPoint != nullptr)
		*ClosestIntersectionPoint = params.ClosestIntersectionPoint;

	return params.ReturnValue;
}


// Function Maths.VectorMaths.IntersectLineSegmentWithPlane
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 LineStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 LineEnd                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PlanePos                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PlaneNormal                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          PlaneThickness                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 IntersectionPos                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NormalisedIntersectionTOnLineSegment (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPlaneLineIntersectionType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EPlaneLineIntersectionType> UVectorMaths::STATIC_IntersectLineSegmentWithPlane(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& PlanePos, const struct FVector& PlaneNormal, float PlaneThickness, struct FVector* IntersectionPos, float* NormalisedIntersectionTOnLineSegment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.VectorMaths.IntersectLineSegmentWithPlane");

	UVectorMaths_IntersectLineSegmentWithPlane_Params params;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;
	params.PlanePos = PlanePos;
	params.PlaneNormal = PlaneNormal;
	params.PlaneThickness = PlaneThickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IntersectionPos != nullptr)
		*IntersectionPos = params.IntersectionPos;
	if (NormalisedIntersectionTOnLineSegment != nullptr)
		*NormalisedIntersectionTOnLineSegment = params.NormalisedIntersectionTOnLineSegment;

	return params.ReturnValue;
}


// Function Maths.VectorMaths.Distance
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 A                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 B                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVectorMaths::STATIC_Distance(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.VectorMaths.Distance");

	UVectorMaths_Distance_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.VectorMaths.Cross_Vector2DVector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVectorMaths::STATIC_Cross_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maths.VectorMaths.Cross_Vector2DVector2D");

	UVectorMaths_Cross_Vector2DVector2D_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
