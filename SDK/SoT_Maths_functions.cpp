// Sea of Thieves (2) SDK

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

float UAngleMaths::CalculateEulerAngle(float FromAngle, float ToAngle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.AngleMaths.CalculateEulerAngle"));

	UAngleMaths_CalculateEulerAngle_Params params;
	params.FromAngle = FromAngle;
	params.ToAngle = ToAngle;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.AngleMaths.AngleMoveTowardsMod180
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Angle                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetAngle                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAngleMaths::AngleMoveTowardsMod180(float Angle, float TargetAngle, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.AngleMaths.AngleMoveTowardsMod180"));

	UAngleMaths_AngleMoveTowardsMod180_Params params;
	params.Angle = Angle;
	params.TargetAngle = TargetAngle;
	params.Rate = Rate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.AngleMaths.AngleMod360
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Angle                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAngleMaths::AngleMod360(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.AngleMaths.AngleMod360"));

	UAngleMaths_AngleMod360_Params params;
	params.Angle = Angle;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.AngleMaths.AngleMod180
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Angle                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAngleMaths::AngleMod180(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.AngleMaths.AngleMod180"));

	UAngleMaths_AngleMod180_Params params;
	params.Angle = Angle;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.AngleMaths.AngleLerpShortest
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Start                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          End                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAngleMaths::AngleLerpShortest(float Start, float End, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.AngleMaths.AngleLerpShortest"));

	UAngleMaths_AngleLerpShortest_Params params;
	params.Start = Start;
	params.End = End;
	params.Amount = Amount;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.BuoyancyMaths.CalculateMagnitude
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InSubmersedVolume              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InFluidDensity                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InGravity                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBuoyancyMaths::CalculateMagnitude(float InSubmersedVolume, float InFluidDensity, float InGravity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.BuoyancyMaths.CalculateMagnitude"));

	UBuoyancyMaths_CalculateMagnitude_Params params;
	params.InSubmersedVolume = InSubmersedVolume;
	params.InFluidDensity = InFluidDensity;
	params.InGravity = InGravity;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.BuoyancyMaths.CalcBlendedProbeCurveBuoyancy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UCurveFloat*                   PrimaryBuoyancyCurve           (Parm, ZeroConstructor, IsPlainOldData)
// UCurveFloat*                   SecondaryBuoyancyCurve         (Parm, ZeroConstructor, IsPlainOldData)
// UCurveFloat*                   TertiaryBuoyancyCurve          (Parm, ZeroConstructor, IsPlainOldData)
// float                          UnaryDistUnderwater            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Blend                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBuoyancyBlend>    BlendType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBuoyancyMaths::CalcBlendedProbeCurveBuoyancy(UCurveFloat* PrimaryBuoyancyCurve, UCurveFloat* SecondaryBuoyancyCurve, UCurveFloat* TertiaryBuoyancyCurve, float UnaryDistUnderwater, float Blend, TEnumAsByte<EBuoyancyBlend> BlendType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.BuoyancyMaths.CalcBlendedProbeCurveBuoyancy"));

	UBuoyancyMaths_CalcBlendedProbeCurveBuoyancy_Params params;
	params.PrimaryBuoyancyCurve = PrimaryBuoyancyCurve;
	params.SecondaryBuoyancyCurve = SecondaryBuoyancyCurve;
	params.TertiaryBuoyancyCurve = TertiaryBuoyancyCurve;
	params.UnaryDistUnderwater = UnaryDistUnderwater;
	params.Blend = Blend;
	params.BlendType = BlendType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.CircleMaths.ConvertAngleToCircleSectorIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          AngleInDegrees                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumberOfSectors                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          IgnoredFraction                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCircleMaths::ConvertAngleToCircleSectorIndex(float AngleInDegrees, int NumberOfSectors, float IgnoredFraction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.CircleMaths.ConvertAngleToCircleSectorIndex"));

	UCircleMaths_ConvertAngleToCircleSectorIndex_Params params;
	params.AngleInDegrees = AngleInDegrees;
	params.NumberOfSectors = NumberOfSectors;
	params.IgnoredFraction = IgnoredFraction;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.CircleMaths.Area
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InRadius                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCircleMaths::Area(float InRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.CircleMaths.Area"));

	UCircleMaths_Area_Params params;
	params.InRadius = InRadius;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetDistanceSquaredToCurve
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FVector                        WorldSpacePos                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// USplineComponent*              Spline                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCurveMaths::GetDistanceSquaredToCurve(const FVector& WorldSpacePos, USplineComponent* Spline)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.CurveMaths.GetDistanceSquaredToCurve"));

	UCurveMaths_GetDistanceSquaredToCurve_Params params;
	params.WorldSpacePos = WorldSpacePos;
	params.Spline = Spline;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetClosestTimeOnCurve
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FVector                        WorldSpacePos                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// USplineComponent*              Spline                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCurveMaths::GetClosestTimeOnCurve(const FVector& WorldSpacePos, USplineComponent* Spline)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.CurveMaths.GetClosestTimeOnCurve"));

	UCurveMaths_GetClosestTimeOnCurve_Params params;
	params.WorldSpacePos = WorldSpacePos;
	params.Spline = Spline;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetClosestPositionOnCurve
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FVector                        WorldSpacePos                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// USplineComponent*              Spline                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector UCurveMaths::GetClosestPositionOnCurve(const FVector& WorldSpacePos, USplineComponent* Spline)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.CurveMaths.GetClosestPositionOnCurve"));

	UCurveMaths_GetClosestPositionOnCurve_Params params;
	params.WorldSpacePos = WorldSpacePos;
	params.Spline = Spline;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetClosestPointOnCurve
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FVector                        WorldSpacePos                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// USplineComponent*              Spline                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCurveMaths::GetClosestPointOnCurve(const FVector& WorldSpacePos, USplineComponent* Spline)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.CurveMaths.GetClosestPointOnCurve"));

	UCurveMaths_GetClosestPointOnCurve_Params params;
	params.WorldSpacePos = WorldSpacePos;
	params.Spline = Spline;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetCentre
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// USplineComponent*              Spline                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector UCurveMaths::GetCentre(USplineComponent* Spline)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.CurveMaths.GetCentre"));

	UCurveMaths_GetCentre_Params params;
	params.Spline = Spline;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.Density.Water
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDensity::Water()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.Density.Water"));

	UDensity_Water_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.Density.SeaWater
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDensity::SeaWater()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.Density.SeaWater"));

	UDensity_SeaWater_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.Density.Min
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDensity::Min()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.Density.Min"));

	UDensity_Min_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.Density.Max
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDensity::Max()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.Density.Max"));

	UDensity_Max_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.Density.IsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InValue                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDensity::IsValid(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.Density.IsValid"));

	UDensity_IsValid_Params params;
	params.InValue = InValue;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.Density.Air
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDensity::Air()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.Density.Air"));

	UDensity_Air_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.Sphere
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDragCoefficients::Sphere()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.DragCoefficients.Sphere"));

	UDragCoefficients_Sphere_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.PlanePerpendicularToFlow
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDragCoefficients::PlanePerpendicularToFlow()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.DragCoefficients.PlanePerpendicularToFlow"));

	UDragCoefficients_PlanePerpendicularToFlow_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.PlaneParallelToFlow
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDragCoefficients::PlaneParallelToFlow()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.DragCoefficients.PlaneParallelToFlow"));

	UDragCoefficients_PlaneParallelToFlow_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.Min
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDragCoefficients::Min()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.DragCoefficients.Min"));

	UDragCoefficients_Min_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.Max
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDragCoefficients::Max()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.DragCoefficients.Max"));

	UDragCoefficients_Max_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.IsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDragCoefficients::IsValid(float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.DragCoefficients.IsValid"));

	UDragCoefficients_IsValid_Params params;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.Cube
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDragCoefficients::Cube()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.DragCoefficients.Cube"));

	UDragCoefficients_Cube_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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

float UDragMaths::CalculateMagnitude(float InSurfaceArea, float InSpeedReltaiveToFluid, float InDragCoefficient, float InFluidDensity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.DragMaths.CalculateMagnitude"));

	UDragMaths_CalculateMagnitude_Params params;
	params.InSurfaceArea = InSurfaceArea;
	params.InSpeedReltaiveToFluid = InSpeedReltaiveToFluid;
	params.InDragCoefficient = InDragCoefficient;
	params.InFluidDensity = InFluidDensity;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.FloatMaths.WrapToRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Input                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LowerLimit                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          UpperLimit                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFloatMaths::WrapToRange(float Input, float LowerLimit, float UpperLimit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.FloatMaths.WrapToRange"));

	UFloatMaths_WrapToRange_Params params;
	params.Input = Input;
	params.LowerLimit = LowerLimit;
	params.UpperLimit = UpperLimit;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.FloatMaths.WrapToPositiveRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Input                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          UpperLimit                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFloatMaths::WrapToPositiveRange(float Input, float UpperLimit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.FloatMaths.WrapToPositiveRange"));

	UFloatMaths_WrapToPositiveRange_Params params;
	params.Input = Input;
	params.UpperLimit = UpperLimit;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.FloatMaths.WrapAroundPivot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Input                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Pivot                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFloatMaths::WrapAroundPivot(float Input, float Pivot, float Range)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.FloatMaths.WrapAroundPivot"));

	UFloatMaths_WrapAroundPivot_Params params;
	params.Input = Input;
	params.Pivot = Pivot;
	params.Range = Range;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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

float UFloatMaths::MoveTowards(float From, float To, float Speed, float Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.FloatMaths.MoveTowards"));

	UFloatMaths_MoveTowards_Params params;
	params.From = From;
	params.To = To;
	params.Speed = Speed;
	params.Time = Time;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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

float UFloatMaths::Map(float ValueToMapFrom, float FromRangeStart, float FromRangeEnd, float ToRangeStart, float ToRangeEnd, bool Clamp)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.FloatMaths.Map"));

	UFloatMaths_Map_Params params;
	params.ValueToMapFrom = ValueToMapFrom;
	params.FromRangeStart = FromRangeStart;
	params.FromRangeEnd = FromRangeEnd;
	params.ToRangeStart = ToRangeStart;
	params.ToRangeEnd = ToRangeEnd;
	params.Clamp = Clamp;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.FloatMaths.IncrementCounter
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Counter                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Delta                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CounterMax                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFloatMaths::IncrementCounter(float Delta, float CounterMax, float* Counter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.FloatMaths.IncrementCounter"));

	UFloatMaths_IncrementCounter_Params params;
	params.Delta = Delta;
	params.CounterMax = CounterMax;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Counter != nullptr)
		*Counter = params.Counter;

	return params.ReturnValue;
}


// Function Maths.FloatMaths.GetShortestSignedDistanceBetweenPointsInWrappedRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          FromValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ToValue                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LowerLimit                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          UpperLimit                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFloatMaths::GetShortestSignedDistanceBetweenPointsInWrappedRange(float FromValue, float ToValue, float LowerLimit, float UpperLimit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.FloatMaths.GetShortestSignedDistanceBetweenPointsInWrappedRange"));

	UFloatMaths_GetShortestSignedDistanceBetweenPointsInWrappedRange_Params params;
	params.FromValue = FromValue;
	params.ToValue = ToValue;
	params.LowerLimit = LowerLimit;
	params.UpperLimit = UpperLimit;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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

float UFloatMaths::FindMidpointInWrappedRange(float Value1, float Value2, float LowerLimit, float UpperLimit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.FloatMaths.FindMidpointInWrappedRange"));

	UFloatMaths_FindMidpointInWrappedRange_Params params;
	params.Value1 = Value1;
	params.Value2 = Value2;
	params.LowerLimit = LowerLimit;
	params.UpperLimit = UpperLimit;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.FloatMaths.Bound
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ValueToBound                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Bound1                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Bound2                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFloatMaths::Bound(float ValueToBound, float Bound1, float Bound2)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.FloatMaths.Bound"));

	UFloatMaths_Bound_Params params;
	params.ValueToBound = ValueToBound;
	params.Bound1 = Bound1;
	params.Bound2 = Bound2;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.Gravity.Earth
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGravity::Earth()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.Gravity.Earth"));

	UGravity_Earth_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.OrientedPointBlueprintFunctionLibrary.GetPointAsTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FOrientedPoint                 Point                          (ConstParm, Parm, OutParm, ReferenceParm)
// FTransform                     ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

FTransform UOrientedPointBlueprintFunctionLibrary::GetPointAsTransform(const FOrientedPoint& Point)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.OrientedPointBlueprintFunctionLibrary.GetPointAsTransform"));

	UOrientedPointBlueprintFunctionLibrary_GetPointAsTransform_Params params;
	params.Point = Point;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.PoissonDiscSampling.GeneratePoissonDiscDistributionAcrossPlane
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FVector                        InCenter                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FQuat                          InOrientation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          InWidth                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InHeight                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InMinDistance                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InRNGSeed                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<FVector>                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<FVector> UPoissonDiscSampling::GeneratePoissonDiscDistributionAcrossPlane(const FVector& InCenter, const FQuat& InOrientation, float InWidth, float InHeight, float InMinDistance, int InRNGSeed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.PoissonDiscSampling.GeneratePoissonDiscDistributionAcrossPlane"));

	UPoissonDiscSampling_GeneratePoissonDiscDistributionAcrossPlane_Params params;
	params.InCenter = InCenter;
	params.InOrientation = InOrientation;
	params.InWidth = InWidth;
	params.InHeight = InHeight;
	params.InMinDistance = InMinDistance;
	params.InRNGSeed = InRNGSeed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.ProjectileMaths.PredictProjectileFlightTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Speed                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gravity                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProjectileMaths::PredictProjectileFlightTime(float Speed, float Gravity, float Pitch, float Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.ProjectileMaths.PredictProjectileFlightTime"));

	UProjectileMaths_PredictProjectileFlightTime_Params params;
	params.Speed = Speed;
	params.Gravity = Gravity;
	params.Pitch = Pitch;
	params.Height = Height;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.ProjectileMaths.FindProjectileSpeedModifierToHitTarget
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FVector                        From                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FVector                        Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Pitch                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ProjectileSpeed                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gravity                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProjectileMaths::FindProjectileSpeedModifierToHitTarget(const FVector& From, const FVector& Target, float Pitch, float ProjectileSpeed, float Gravity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.ProjectileMaths.FindProjectileSpeedModifierToHitTarget"));

	UProjectileMaths_FindProjectileSpeedModifierToHitTarget_Params params;
	params.From = From;
	params.Target = Target;
	params.Pitch = Pitch;
	params.ProjectileSpeed = ProjectileSpeed;
	params.Gravity = Gravity;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.ProjectileMaths.FindAimDirectionToHitTarget
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FRotator                       OutAimDirection                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector                        From                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FVector                        Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ProjectileSpeed                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gravity                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PreferHigherAngles             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProjectileMaths::FindAimDirectionToHitTarget(const FVector& From, const FVector& Target, float ProjectileSpeed, float Gravity, bool PreferHigherAngles, FRotator* OutAimDirection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.ProjectileMaths.FindAimDirectionToHitTarget"));

	UProjectileMaths_FindAimDirectionToHitTarget_Params params;
	params.From = From;
	params.Target = Target;
	params.ProjectileSpeed = ProjectileSpeed;
	params.Gravity = Gravity;
	params.PreferHigherAngles = PreferHigherAngles;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutAimDirection != nullptr)
		*OutAimDirection = params.OutAimDirection;

	return params.ReturnValue;
}


// Function Maths.ProjectileMaths.CalculateLaunchVelocity
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FVector                        OutLaunchVelocty               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutFlightTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector                        From                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FVector                        Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FVector                        TargetVelocity                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ProjectileSpeed                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gravity                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PreferHigherAngles             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProjectileMaths::CalculateLaunchVelocity(const FVector& From, const FVector& Target, const FVector& TargetVelocity, float ProjectileSpeed, float Gravity, bool PreferHigherAngles, FVector* OutLaunchVelocty, float* OutFlightTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.ProjectileMaths.CalculateLaunchVelocity"));

	UProjectileMaths_CalculateLaunchVelocity_Params params;
	params.From = From;
	params.Target = Target;
	params.TargetVelocity = TargetVelocity;
	params.ProjectileSpeed = ProjectileSpeed;
	params.Gravity = Gravity;
	params.PreferHigherAngles = PreferHigherAngles;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutLaunchVelocty != nullptr)
		*OutLaunchVelocty = params.OutLaunchVelocty;
	if (OutFlightTime != nullptr)
		*OutFlightTime = params.OutFlightTime;

	return params.ReturnValue;
}


// Function Maths.RotationMaths.TransformAroundArbitraryPivot
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FTransform                     TargetTransform                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FTransform                     BaseTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FTransform                     TransformToApply               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           LockFinalOrientation           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FTransform                     ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

FTransform URotationMaths::TransformAroundArbitraryPivot(const FTransform& TargetTransform, const FTransform& BaseTransform, const FTransform& TransformToApply, bool LockFinalOrientation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.RotationMaths.TransformAroundArbitraryPivot"));

	URotationMaths_TransformAroundArbitraryPivot_Params params;
	params.TargetTransform = TargetTransform;
	params.BaseTransform = BaseTransform;
	params.TransformToApply = TransformToApply;
	params.LockFinalOrientation = LockFinalOrientation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.RotationMaths.RotatorToQuat
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FRotator                       Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FQuat                          ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

FQuat URotationMaths::RotatorToQuat(const FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.RotationMaths.RotatorToQuat"));

	URotationMaths_RotatorToQuat_Params params;
	params.Rotation = Rotation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.RotationMaths.RotateDirectionInterpConstantTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FVector                        CurrentDirectionNormalised     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FVector                        TargetDirectionNormalised      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpSpeedRadPerSec           (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector URotationMaths::RotateDirectionInterpConstantTo(const FVector& CurrentDirectionNormalised, const FVector& TargetDirectionNormalised, float DeltaTime, float InterpSpeedRadPerSec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.RotationMaths.RotateDirectionInterpConstantTo"));

	URotationMaths_RotateDirectionInterpConstantTo_Params params;
	params.CurrentDirectionNormalised = CurrentDirectionNormalised;
	params.TargetDirectionNormalised = TargetDirectionNormalised;
	params.DeltaTime = DeltaTime;
	params.InterpSpeedRadPerSec = InterpSpeedRadPerSec;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.RotationMaths.FindRotationAxisAndRadAngleBetweenVectors
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FVector                        FromVectorNormalised           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FVector                        ToVectorNormalised             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FVector                        OutRotationAxis                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutRotationAngleRadians        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URotationMaths::FindRotationAxisAndRadAngleBetweenVectors(const FVector& FromVectorNormalised, const FVector& ToVectorNormalised, FVector* OutRotationAxis, float* OutRotationAngleRadians)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.RotationMaths.FindRotationAxisAndRadAngleBetweenVectors"));

	URotationMaths_FindRotationAxisAndRadAngleBetweenVectors_Params params;
	params.FromVectorNormalised = FromVectorNormalised;
	params.ToVectorNormalised = ToVectorNormalised;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutRotationAxis != nullptr)
		*OutRotationAxis = params.OutRotationAxis;
	if (OutRotationAngleRadians != nullptr)
		*OutRotationAngleRadians = params.OutRotationAngleRadians;
}


// Function Maths.RotationMaths.AreRotatorsTheSameRotation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FRotator                       Rotator1                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FRotator                       Rotator2                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ErrorTolerance                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URotationMaths::AreRotatorsTheSameRotation(const FRotator& Rotator1, const FRotator& Rotator2, float ErrorTolerance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.RotationMaths.AreRotatorsTheSameRotation"));

	URotationMaths_AreRotatorsTheSameRotation_Params params;
	params.Rotator1 = Rotator1;
	params.Rotator2 = Rotator2;
	params.ErrorTolerance = ErrorTolerance;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.RotationMaths.AdvanceRotationBySpinAndTiltSynced
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FRotator                       StartRotation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FRotator                       TargetRotation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          RotationRateDegrees            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FRotationUpdateResult          ReturnValue                    (Parm, OutParm, ReturnParm)

FRotationUpdateResult URotationMaths::AdvanceRotationBySpinAndTiltSynced(const FRotator& StartRotation, const FRotator& TargetRotation, float RotationRateDegrees, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.RotationMaths.AdvanceRotationBySpinAndTiltSynced"));

	URotationMaths_AdvanceRotationBySpinAndTiltSynced_Params params;
	params.StartRotation = StartRotation;
	params.TargetRotation = TargetRotation;
	params.RotationRateDegrees = RotationRateDegrees;
	params.DeltaTime = DeltaTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.ShapeMathsBlueprintLibrary.IsPointOnOrWithinABox
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// UBoxComponent*                 BoxComponent                   (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FVector                        WorldSpaceReferencePoint       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShapeMathsBlueprintLibrary::IsPointOnOrWithinABox(UBoxComponent* BoxComponent, const FVector& WorldSpaceReferencePoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.ShapeMathsBlueprintLibrary.IsPointOnOrWithinABox"));

	UShapeMathsBlueprintLibrary_IsPointOnOrWithinABox_Params params;
	params.BoxComponent = BoxComponent;
	params.WorldSpaceReferencePoint = WorldSpaceReferencePoint;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinASphere
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// USphereComponent*              SphereComponent                (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FVector                        WorldSpaceReferencePoint       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector UShapeMathsBlueprintLibrary::FindClosestPointWithinASphere(USphereComponent* SphereComponent, const FVector& WorldSpaceReferencePoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinASphere"));

	UShapeMathsBlueprintLibrary_FindClosestPointWithinASphere_Params params;
	params.SphereComponent = SphereComponent;
	params.WorldSpaceReferencePoint = WorldSpaceReferencePoint;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinACylinder
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// UCapsuleComponent*             CylinderComponent              (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FVector                        WorldSpaceReferencePoint       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector UShapeMathsBlueprintLibrary::FindClosestPointWithinACylinder(UCapsuleComponent* CylinderComponent, const FVector& WorldSpaceReferencePoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinACylinder"));

	UShapeMathsBlueprintLibrary_FindClosestPointWithinACylinder_Params params;
	params.CylinderComponent = CylinderComponent;
	params.WorldSpaceReferencePoint = WorldSpaceReferencePoint;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinACapsule
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// UCapsuleComponent*             CapsuleComponent               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FVector                        WorldSpaceReferencePoint       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector UShapeMathsBlueprintLibrary::FindClosestPointWithinACapsule(UCapsuleComponent* CapsuleComponent, const FVector& WorldSpaceReferencePoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinACapsule"));

	UShapeMathsBlueprintLibrary_FindClosestPointWithinACapsule_Params params;
	params.CapsuleComponent = CapsuleComponent;
	params.WorldSpaceReferencePoint = WorldSpaceReferencePoint;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinABox
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// UBoxComponent*                 BoxComponent                   (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FVector                        WorldSpaceReferencePoint       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector UShapeMathsBlueprintLibrary::FindClosestPointWithinABox(UBoxComponent* BoxComponent, const FVector& WorldSpaceReferencePoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinABox"));

	UShapeMathsBlueprintLibrary_FindClosestPointWithinABox_Params params;
	params.BoxComponent = BoxComponent;
	params.WorldSpaceReferencePoint = WorldSpaceReferencePoint;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.SphereMaths.VolumeFromRadius
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InRadius                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USphereMaths::VolumeFromRadius(float InRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.SphereMaths.VolumeFromRadius"));

	USphereMaths_VolumeFromRadius_Params params;
	params.InRadius = InRadius;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.SphereMaths.SurfaceAreaFromRadius
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InRadius                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USphereMaths::SurfaceAreaFromRadius(float InRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.SphereMaths.SurfaceAreaFromRadius"));

	USphereMaths_SurfaceAreaFromRadius_Params params;
	params.InRadius = InRadius;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.SphericalCapMaths.Volume
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InRadius                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InHeight                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USphericalCapMaths::Volume(float InRadius, float InHeight)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.SphericalCapMaths.Volume"));

	USphericalCapMaths_Volume_Params params;
	params.InRadius = InRadius;
	params.InHeight = InHeight;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.SphericalCapMaths.CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InRadius                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InHeight                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USphericalCapMaths::CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid(float InRadius, float InHeight)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.SphericalCapMaths.CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid"));

	USphericalCapMaths_CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid_Params params;
	params.InRadius = InRadius;
	params.InHeight = InHeight;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.SphericalCapMaths.BaseRadius
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InRadius                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InHeight                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USphericalCapMaths::BaseRadius(float InRadius, float InHeight)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.SphericalCapMaths.BaseRadius"));

	USphericalCapMaths_BaseRadius_Params params;
	params.InRadius = InRadius;
	params.InHeight = InHeight;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.TimedBufferFunctionLibrary.UpdateInterval
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FTimedBuffer                   TimedBuffer                    (Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTimedBufferFunctionLibrary::UpdateInterval(float DeltaTime, float Value, FTimedBuffer* TimedBuffer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.TimedBufferFunctionLibrary.UpdateInterval"));

	UTimedBufferFunctionLibrary_UpdateInterval_Params params;
	params.DeltaTime = DeltaTime;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (TimedBuffer != nullptr)
		*TimedBuffer = params.TimedBuffer;
}


// Function Maths.TimedBufferFunctionLibrary.GetValueRange
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FTimedBuffer                   TimedBuffer                    (Parm, OutParm, ReferenceParm)
// float                          MinWindowLength                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ValueRange                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTimedBufferFunctionLibrary::GetValueRange(float MinWindowLength, FTimedBuffer* TimedBuffer, float* ValueRange)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.TimedBufferFunctionLibrary.GetValueRange"));

	UTimedBufferFunctionLibrary_GetValueRange_Params params;
	params.MinWindowLength = MinWindowLength;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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
// FTimedBuffer                   ReturnValue                    (Parm, OutParm, ReturnParm)

FTimedBuffer UTimedBufferFunctionLibrary::CreateTimedBuffer(float WindowLength)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.TimedBufferFunctionLibrary.CreateTimedBuffer"));

	UTimedBufferFunctionLibrary_CreateTimedBuffer_Params params;
	params.WindowLength = WindowLength;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.TimeMaths.GetDifference
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FDateTime                      A                              (Parm, ZeroConstructor)
// FDateTime                      B                              (Parm, ZeroConstructor)
// FTimespan                      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

FTimespan UTimeMaths::GetDifference(const FDateTime& A, const FDateTime& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.TimeMaths.GetDifference"));

	UTimeMaths_GetDifference_Params params;
	params.A = A;
	params.B = B;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.VectorMaths.LineIntersectsSphere
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FVector                        LineStart                      (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        LineDir                        (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        SphereCentre                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          SphereRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        ClosestIntersectionPoint       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVectorMaths::LineIntersectsSphere(const FVector& LineStart, const FVector& LineDir, const FVector& SphereCentre, float SphereRadius, FVector* ClosestIntersectionPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.VectorMaths.LineIntersectsSphere"));

	UVectorMaths_LineIntersectsSphere_Params params;
	params.LineStart = LineStart;
	params.LineDir = LineDir;
	params.SphereCentre = SphereCentre;
	params.SphereRadius = SphereRadius;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ClosestIntersectionPoint != nullptr)
		*ClosestIntersectionPoint = params.ClosestIntersectionPoint;

	return params.ReturnValue;
}


// Function Maths.VectorMaths.LineIntersectsCircleWithExitPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FVector2D                      LineOrigin                     (Parm, ZeroConstructor, IsPlainOldData)
// FVector2D                      LineDir                        (Parm, ZeroConstructor, IsPlainOldData)
// FVector2D                      CircleOrigin                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          CircleRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// FVector2D                      OutClosestIntersectionPoint    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector2D                      OutSecondaryIntersectionPoint  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutClosestIntersectionDistance (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutSecondaryIntersectionDistance (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVectorMaths::LineIntersectsCircleWithExitPoint(const FVector2D& LineOrigin, const FVector2D& LineDir, const FVector2D& CircleOrigin, float CircleRadius, FVector2D* OutClosestIntersectionPoint, FVector2D* OutSecondaryIntersectionPoint, float* OutClosestIntersectionDistance, float* OutSecondaryIntersectionDistance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.VectorMaths.LineIntersectsCircleWithExitPoint"));

	UVectorMaths_LineIntersectsCircleWithExitPoint_Params params;
	params.LineOrigin = LineOrigin;
	params.LineDir = LineDir;
	params.CircleOrigin = CircleOrigin;
	params.CircleRadius = CircleRadius;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutClosestIntersectionPoint != nullptr)
		*OutClosestIntersectionPoint = params.OutClosestIntersectionPoint;
	if (OutSecondaryIntersectionPoint != nullptr)
		*OutSecondaryIntersectionPoint = params.OutSecondaryIntersectionPoint;
	if (OutClosestIntersectionDistance != nullptr)
		*OutClosestIntersectionDistance = params.OutClosestIntersectionDistance;
	if (OutSecondaryIntersectionDistance != nullptr)
		*OutSecondaryIntersectionDistance = params.OutSecondaryIntersectionDistance;

	return params.ReturnValue;
}


// Function Maths.VectorMaths.LineIntersectsCircle
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FVector2D                      LineOrigin                     (Parm, ZeroConstructor, IsPlainOldData)
// FVector2D                      LineDir                        (Parm, ZeroConstructor, IsPlainOldData)
// FVector2D                      CircleOrigin                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          CircleRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// FVector2D                      OutClosestIntersectionPoint    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutIntersectionDistance        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVectorMaths::LineIntersectsCircle(const FVector2D& LineOrigin, const FVector2D& LineDir, const FVector2D& CircleOrigin, float CircleRadius, FVector2D* OutClosestIntersectionPoint, float* OutIntersectionDistance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.VectorMaths.LineIntersectsCircle"));

	UVectorMaths_LineIntersectsCircle_Params params;
	params.LineOrigin = LineOrigin;
	params.LineDir = LineDir;
	params.CircleOrigin = CircleOrigin;
	params.CircleRadius = CircleRadius;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutClosestIntersectionPoint != nullptr)
		*OutClosestIntersectionPoint = params.OutClosestIntersectionPoint;
	if (OutIntersectionDistance != nullptr)
		*OutIntersectionDistance = params.OutIntersectionDistance;

	return params.ReturnValue;
}


// Function Maths.VectorMaths.IntersectLineSegmentWithPlane
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FVector                        LineStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FVector                        LineEnd                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FVector                        PlanePos                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FVector                        PlaneNormal                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          PlaneThickness                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FVector                        IntersectionPos                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NormalisedIntersectionTOnLineSegment (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPlaneLineIntersectionType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EPlaneLineIntersectionType> UVectorMaths::IntersectLineSegmentWithPlane(const FVector& LineStart, const FVector& LineEnd, const FVector& PlanePos, const FVector& PlaneNormal, float PlaneThickness, FVector* IntersectionPos, float* NormalisedIntersectionTOnLineSegment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.VectorMaths.IntersectLineSegmentWithPlane"));

	UVectorMaths_IntersectLineSegmentWithPlane_Params params;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;
	params.PlanePos = PlanePos;
	params.PlaneNormal = PlaneNormal;
	params.PlaneThickness = PlaneThickness;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IntersectionPos != nullptr)
		*IntersectionPos = params.IntersectionPos;
	if (NormalisedIntersectionTOnLineSegment != nullptr)
		*NormalisedIntersectionTOnLineSegment = params.NormalisedIntersectionTOnLineSegment;

	return params.ReturnValue;
}


// Function Maths.VectorMaths.Distance
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FVector                        A                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FVector                        B                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVectorMaths::Distance(const FVector& A, const FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.VectorMaths.Distance"));

	UVectorMaths_Distance_Params params;
	params.A = A;
	params.B = B;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.VectorMaths.Cross_Vector2DVector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FVector2D                      A                              (Parm, ZeroConstructor, IsPlainOldData)
// FVector2D                      B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVectorMaths::Cross_Vector2DVector2D(const FVector2D& A, const FVector2D& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.VectorMaths.Cross_Vector2DVector2D"));

	UVectorMaths_Cross_Vector2DVector2D_Params params;
	params.A = A;
	params.B = B;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
