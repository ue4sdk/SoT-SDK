// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Maths_classes.hpp"

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

	struct
	{
		float                          FromAngle;
		float                          ToAngle;
		float                          ReturnValue;
	} params;

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

	struct
	{
		float                          Angle;
		float                          TargetAngle;
		float                          Rate;
		float                          ReturnValue;
	} params;

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

	struct
	{
		float                          Angle;
		float                          ReturnValue;
	} params;

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

	struct
	{
		float                          Angle;
		float                          ReturnValue;
	} params;

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

	struct
	{
		float                          Start;
		float                          End;
		float                          Amount;
		float                          ReturnValue;
	} params;

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

	struct
	{
		float                          InSubmersedVolume;
		float                          InFluidDensity;
		float                          InGravity;
		float                          ReturnValue;
	} params;

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
// class UCurveFloat*             PrimaryBuoyancyCurve           (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             SecondaryBuoyancyCurve         (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             TertiaryBuoyancyCurve          (Parm, ZeroConstructor, IsPlainOldData)
// float                          UnaryDistUnderwater            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Blend                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBuoyancyBlend>    BlendType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBuoyancyMaths::CalcBlendedProbeCurveBuoyancy(class UCurveFloat* PrimaryBuoyancyCurve, class UCurveFloat* SecondaryBuoyancyCurve, class UCurveFloat* TertiaryBuoyancyCurve, float UnaryDistUnderwater, float Blend, TEnumAsByte<EBuoyancyBlend> BlendType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.BuoyancyMaths.CalcBlendedProbeCurveBuoyancy"));

	struct
	{
		class UCurveFloat*             PrimaryBuoyancyCurve;
		class UCurveFloat*             SecondaryBuoyancyCurve;
		class UCurveFloat*             TertiaryBuoyancyCurve;
		float                          UnaryDistUnderwater;
		float                          Blend;
		TEnumAsByte<EBuoyancyBlend>    BlendType;
		float                          ReturnValue;
	} params;

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

	struct
	{
		float                          AngleInDegrees;
		int                            NumberOfSectors;
		float                          IgnoredFraction;
		int                            ReturnValue;
	} params;

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

	struct
	{
		float                          InRadius;
		float                          ReturnValue;
	} params;

	params.InRadius = InRadius;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetDistanceSquaredToCurve
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 WorldSpacePos                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USplineComponent*        Spline                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCurveMaths::GetDistanceSquaredToCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.CurveMaths.GetDistanceSquaredToCurve"));

	struct
	{
		struct FVector                 WorldSpacePos;
		class USplineComponent*        Spline;
		float                          ReturnValue;
	} params;

	params.WorldSpacePos = WorldSpacePos;
	params.Spline = Spline;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetClosestTimeOnCurve
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 WorldSpacePos                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USplineComponent*        Spline                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCurveMaths::GetClosestTimeOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.CurveMaths.GetClosestTimeOnCurve"));

	struct
	{
		struct FVector                 WorldSpacePos;
		class USplineComponent*        Spline;
		float                          ReturnValue;
	} params;

	params.WorldSpacePos = WorldSpacePos;
	params.Spline = Spline;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetClosestPositionOnCurve
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 WorldSpacePos                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USplineComponent*        Spline                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UCurveMaths::GetClosestPositionOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.CurveMaths.GetClosestPositionOnCurve"));

	struct
	{
		struct FVector                 WorldSpacePos;
		class USplineComponent*        Spline;
		struct FVector                 ReturnValue;
	} params;

	params.WorldSpacePos = WorldSpacePos;
	params.Spline = Spline;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetClosestPointOnCurve
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 WorldSpacePos                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USplineComponent*        Spline                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCurveMaths::GetClosestPointOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.CurveMaths.GetClosestPointOnCurve"));

	struct
	{
		struct FVector                 WorldSpacePos;
		class USplineComponent*        Spline;
		float                          ReturnValue;
	} params;

	params.WorldSpacePos = WorldSpacePos;
	params.Spline = Spline;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetCentre
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USplineComponent*        Spline                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UCurveMaths::GetCentre(class USplineComponent* Spline)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.CurveMaths.GetCentre"));

	struct
	{
		class USplineComponent*        Spline;
		struct FVector                 ReturnValue;
	} params;

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

	struct
	{
		float                          ReturnValue;
	} params;


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

	struct
	{
		float                          ReturnValue;
	} params;


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

	struct
	{
		float                          ReturnValue;
	} params;


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

	struct
	{
		float                          ReturnValue;
	} params;


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

	struct
	{
		float                          InValue;
		bool                           ReturnValue;
	} params;

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

	struct
	{
		float                          ReturnValue;
	} params;


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

	struct
	{
		float                          ReturnValue;
	} params;


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

	struct
	{
		float                          ReturnValue;
	} params;


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

	struct
	{
		float                          ReturnValue;
	} params;


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

	struct
	{
		float                          ReturnValue;
	} params;


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

	struct
	{
		float                          ReturnValue;
	} params;


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

	struct
	{
		float                          Value;
		bool                           ReturnValue;
	} params;

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

	struct
	{
		float                          ReturnValue;
	} params;


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

	struct
	{
		float                          InSurfaceArea;
		float                          InSpeedReltaiveToFluid;
		float                          InDragCoefficient;
		float                          InFluidDensity;
		float                          ReturnValue;
	} params;

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

	struct
	{
		float                          Input;
		float                          LowerLimit;
		float                          UpperLimit;
		float                          ReturnValue;
	} params;

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

	struct
	{
		float                          Input;
		float                          UpperLimit;
		float                          ReturnValue;
	} params;

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

	struct
	{
		float                          Input;
		float                          Pivot;
		float                          Range;
		float                          ReturnValue;
	} params;

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

	struct
	{
		float                          From;
		float                          To;
		float                          Speed;
		float                          Time;
		float                          ReturnValue;
	} params;

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

	struct
	{
		float                          ValueToMapFrom;
		float                          FromRangeStart;
		float                          FromRangeEnd;
		float                          ToRangeStart;
		float                          ToRangeEnd;
		bool                           Clamp;
		float                          ReturnValue;
	} params;

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

	struct
	{
		float                          Counter;
		float                          Delta;
		float                          CounterMax;
		bool                           ReturnValue;
	} params;

	params.Delta = Delta;
	params.CounterMax = CounterMax;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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

float UFloatMaths::FindMidpointInWrappedRange(float Value1, float Value2, float LowerLimit, float UpperLimit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.FloatMaths.FindMidpointInWrappedRange"));

	struct
	{
		float                          Value1;
		float                          Value2;
		float                          LowerLimit;
		float                          UpperLimit;
		float                          ReturnValue;
	} params;

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

	struct
	{
		float                          ValueToBound;
		float                          Bound1;
		float                          Bound2;
		float                          ReturnValue;
	} params;

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

	struct
	{
		float                          ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.OrientedPointBlueprintFunctionLibrary.GetPointAsTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FOrientedPoint          Point                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UOrientedPointBlueprintFunctionLibrary::GetPointAsTransform(const struct FOrientedPoint& Point)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.OrientedPointBlueprintFunctionLibrary.GetPointAsTransform"));

	struct
	{
		struct FOrientedPoint          Point;
		struct FTransform              ReturnValue;
	} params;

	params.Point = Point;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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

TArray<struct FVector> UPoissonDiscSampling::GeneratePoissonDiscDistributionAcrossPlane(const struct FVector& InCenter, const struct FQuat& InOrientation, float InWidth, float InHeight, float InMinDistance, int InRNGSeed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.PoissonDiscSampling.GeneratePoissonDiscDistributionAcrossPlane"));

	struct
	{
		struct FVector                 InCenter;
		struct FQuat                   InOrientation;
		float                          InWidth;
		float                          InHeight;
		float                          InMinDistance;
		int                            InRNGSeed;
		TArray<struct FVector>         ReturnValue;
	} params;

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

	struct
	{
		float                          Speed;
		float                          Gravity;
		float                          Pitch;
		float                          Height;
		float                          ReturnValue;
	} params;

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
// struct FVector                 From                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Pitch                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ProjectileSpeed                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gravity                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProjectileMaths::FindProjectileSpeedModifierToHitTarget(const struct FVector& From, const struct FVector& Target, float Pitch, float ProjectileSpeed, float Gravity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.ProjectileMaths.FindProjectileSpeedModifierToHitTarget"));

	struct
	{
		struct FVector                 From;
		struct FVector                 Target;
		float                          Pitch;
		float                          ProjectileSpeed;
		float                          Gravity;
		float                          ReturnValue;
	} params;

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
// struct FRotator                OutAimDirection                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 From                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ProjectileSpeed                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gravity                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PreferHigherAngles             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProjectileMaths::FindAimDirectionToHitTarget(const struct FVector& From, const struct FVector& Target, float ProjectileSpeed, float Gravity, bool PreferHigherAngles, struct FRotator* OutAimDirection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.ProjectileMaths.FindAimDirectionToHitTarget"));

	struct
	{
		struct FRotator                OutAimDirection;
		struct FVector                 From;
		struct FVector                 Target;
		float                          ProjectileSpeed;
		float                          Gravity;
		bool                           PreferHigherAngles;
		bool                           ReturnValue;
	} params;

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
// struct FVector                 OutLaunchVelocty               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutFlightTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 From                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 TargetVelocity                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ProjectileSpeed                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gravity                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PreferHigherAngles             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProjectileMaths::CalculateLaunchVelocity(const struct FVector& From, const struct FVector& Target, const struct FVector& TargetVelocity, float ProjectileSpeed, float Gravity, bool PreferHigherAngles, struct FVector* OutLaunchVelocty, float* OutFlightTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.ProjectileMaths.CalculateLaunchVelocity"));

	struct
	{
		struct FVector                 OutLaunchVelocty;
		float                          OutFlightTime;
		struct FVector                 From;
		struct FVector                 Target;
		struct FVector                 TargetVelocity;
		float                          ProjectileSpeed;
		float                          Gravity;
		bool                           PreferHigherAngles;
		bool                           ReturnValue;
	} params;

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
// struct FTransform              TargetTransform                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              BaseTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              TransformToApply               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           LockFinalOrientation           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform URotationMaths::TransformAroundArbitraryPivot(const struct FTransform& TargetTransform, const struct FTransform& BaseTransform, const struct FTransform& TransformToApply, bool LockFinalOrientation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.RotationMaths.TransformAroundArbitraryPivot"));

	struct
	{
		struct FTransform              TargetTransform;
		struct FTransform              BaseTransform;
		struct FTransform              TransformToApply;
		bool                           LockFinalOrientation;
		struct FTransform              ReturnValue;
	} params;

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
// struct FRotator                Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat URotationMaths::RotatorToQuat(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.RotationMaths.RotatorToQuat"));

	struct
	{
		struct FRotator                Rotation;
		struct FQuat                   ReturnValue;
	} params;

	params.Rotation = Rotation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.RotationMaths.AreRotatorsTheSameRotation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                Rotator1                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                Rotator2                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ErrorTolerance                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URotationMaths::AreRotatorsTheSameRotation(const struct FRotator& Rotator1, const struct FRotator& Rotator2, float ErrorTolerance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.RotationMaths.AreRotatorsTheSameRotation"));

	struct
	{
		struct FRotator                Rotator1;
		struct FRotator                Rotator2;
		float                          ErrorTolerance;
		bool                           ReturnValue;
	} params;

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
// struct FRotator                StartRotation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                TargetRotation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          RotationRateDegrees            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotationUpdateResult   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotationUpdateResult URotationMaths::AdvanceRotationBySpinAndTiltSynced(const struct FRotator& StartRotation, const struct FRotator& TargetRotation, float RotationRateDegrees, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.RotationMaths.AdvanceRotationBySpinAndTiltSynced"));

	struct
	{
		struct FRotator                StartRotation;
		struct FRotator                TargetRotation;
		float                          RotationRateDegrees;
		float                          DeltaTime;
		struct FRotationUpdateResult   ReturnValue;
	} params;

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
// class UBoxComponent*           BoxComponent                   (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 WorldSpaceReferencePoint       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShapeMathsBlueprintLibrary::IsPointOnOrWithinABox(class UBoxComponent* BoxComponent, const struct FVector& WorldSpaceReferencePoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.ShapeMathsBlueprintLibrary.IsPointOnOrWithinABox"));

	struct
	{
		class UBoxComponent*           BoxComponent;
		struct FVector                 WorldSpaceReferencePoint;
		bool                           ReturnValue;
	} params;

	params.BoxComponent = BoxComponent;
	params.WorldSpaceReferencePoint = WorldSpaceReferencePoint;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinASphere
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USphereComponent*        SphereComponent                (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 WorldSpaceReferencePoint       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UShapeMathsBlueprintLibrary::FindClosestPointWithinASphere(class USphereComponent* SphereComponent, const struct FVector& WorldSpaceReferencePoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinASphere"));

	struct
	{
		class USphereComponent*        SphereComponent;
		struct FVector                 WorldSpaceReferencePoint;
		struct FVector                 ReturnValue;
	} params;

	params.SphereComponent = SphereComponent;
	params.WorldSpaceReferencePoint = WorldSpaceReferencePoint;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinACylinder
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCapsuleComponent*       CylinderComponent              (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 WorldSpaceReferencePoint       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UShapeMathsBlueprintLibrary::FindClosestPointWithinACylinder(class UCapsuleComponent* CylinderComponent, const struct FVector& WorldSpaceReferencePoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinACylinder"));

	struct
	{
		class UCapsuleComponent*       CylinderComponent;
		struct FVector                 WorldSpaceReferencePoint;
		struct FVector                 ReturnValue;
	} params;

	params.CylinderComponent = CylinderComponent;
	params.WorldSpaceReferencePoint = WorldSpaceReferencePoint;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinACapsule
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCapsuleComponent*       CapsuleComponent               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 WorldSpaceReferencePoint       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UShapeMathsBlueprintLibrary::FindClosestPointWithinACapsule(class UCapsuleComponent* CapsuleComponent, const struct FVector& WorldSpaceReferencePoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinACapsule"));

	struct
	{
		class UCapsuleComponent*       CapsuleComponent;
		struct FVector                 WorldSpaceReferencePoint;
		struct FVector                 ReturnValue;
	} params;

	params.CapsuleComponent = CapsuleComponent;
	params.WorldSpaceReferencePoint = WorldSpaceReferencePoint;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinABox
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBoxComponent*           BoxComponent                   (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 WorldSpaceReferencePoint       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UShapeMathsBlueprintLibrary::FindClosestPointWithinABox(class UBoxComponent* BoxComponent, const struct FVector& WorldSpaceReferencePoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinABox"));

	struct
	{
		class UBoxComponent*           BoxComponent;
		struct FVector                 WorldSpaceReferencePoint;
		struct FVector                 ReturnValue;
	} params;

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

	struct
	{
		float                          InRadius;
		float                          ReturnValue;
	} params;

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

	struct
	{
		float                          InRadius;
		float                          ReturnValue;
	} params;

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

	struct
	{
		float                          InRadius;
		float                          InHeight;
		float                          ReturnValue;
	} params;

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

	struct
	{
		float                          InRadius;
		float                          InHeight;
		float                          ReturnValue;
	} params;

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

	struct
	{
		float                          InRadius;
		float                          InHeight;
		float                          ReturnValue;
	} params;

	params.InRadius = InRadius;
	params.InHeight = InHeight;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.TimedBufferFunctionLibrary.UpdateInterval
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FTimedBuffer            TimedBuffer                    (Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTimedBufferFunctionLibrary::UpdateInterval(float DeltaTime, float Value, struct FTimedBuffer* TimedBuffer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.TimedBufferFunctionLibrary.UpdateInterval"));

	struct
	{
		struct FTimedBuffer            TimedBuffer;
		float                          DeltaTime;
		float                          Value;
	} params;

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
// struct FTimedBuffer            TimedBuffer                    (Parm, OutParm, ReferenceParm)
// float                          MinWindowLength                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ValueRange                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTimedBufferFunctionLibrary::GetValueRange(float MinWindowLength, struct FTimedBuffer* TimedBuffer, float* ValueRange)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.TimedBufferFunctionLibrary.GetValueRange"));

	struct
	{
		struct FTimedBuffer            TimedBuffer;
		float                          MinWindowLength;
		float                          ValueRange;
		bool                           ReturnValue;
	} params;

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
// struct FTimedBuffer            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTimedBuffer UTimedBufferFunctionLibrary::CreateTimedBuffer(float WindowLength)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.TimedBufferFunctionLibrary.CreateTimedBuffer"));

	struct
	{
		float                          WindowLength;
		struct FTimedBuffer            ReturnValue;
	} params;

	params.WindowLength = WindowLength;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.TimeMaths.GetDifference
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime               A                              (Parm, ZeroConstructor)
// struct FDateTime               B                              (Parm, ZeroConstructor)
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FTimespan UTimeMaths::GetDifference(const struct FDateTime& A, const struct FDateTime& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.TimeMaths.GetDifference"));

	struct
	{
		struct FDateTime               A;
		struct FDateTime               B;
		struct FTimespan               ReturnValue;
	} params;

	params.A = A;
	params.B = B;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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

bool UVectorMaths::LineIntersectsSphere(const struct FVector& LineStart, const struct FVector& LineDir, const struct FVector& SphereCentre, float SphereRadius, struct FVector* ClosestIntersectionPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.VectorMaths.LineIntersectsSphere"));

	struct
	{
		struct FVector                 LineStart;
		struct FVector                 LineDir;
		struct FVector                 SphereCentre;
		float                          SphereRadius;
		struct FVector                 ClosestIntersectionPoint;
		bool                           ReturnValue;
	} params;

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
// struct FVector2D               LineOrigin                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               LineDir                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               CircleOrigin                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          CircleRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               OutClosestIntersectionPoint    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               OutSecondaryIntersectionPoint  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutClosestIntersectionDistance (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutSecondaryIntersectionDistance (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVectorMaths::LineIntersectsCircleWithExitPoint(const struct FVector2D& LineOrigin, const struct FVector2D& LineDir, const struct FVector2D& CircleOrigin, float CircleRadius, struct FVector2D* OutClosestIntersectionPoint, struct FVector2D* OutSecondaryIntersectionPoint, float* OutClosestIntersectionDistance, float* OutSecondaryIntersectionDistance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.VectorMaths.LineIntersectsCircleWithExitPoint"));

	struct
	{
		struct FVector2D               LineOrigin;
		struct FVector2D               LineDir;
		struct FVector2D               CircleOrigin;
		float                          CircleRadius;
		struct FVector2D               OutClosestIntersectionPoint;
		struct FVector2D               OutSecondaryIntersectionPoint;
		float                          OutClosestIntersectionDistance;
		float                          OutSecondaryIntersectionDistance;
		bool                           ReturnValue;
	} params;

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
// struct FVector2D               LineOrigin                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               LineDir                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               CircleOrigin                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          CircleRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               OutClosestIntersectionPoint    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutIntersectionDistance        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVectorMaths::LineIntersectsCircle(const struct FVector2D& LineOrigin, const struct FVector2D& LineDir, const struct FVector2D& CircleOrigin, float CircleRadius, struct FVector2D* OutClosestIntersectionPoint, float* OutIntersectionDistance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.VectorMaths.LineIntersectsCircle"));

	struct
	{
		struct FVector2D               LineOrigin;
		struct FVector2D               LineDir;
		struct FVector2D               CircleOrigin;
		float                          CircleRadius;
		struct FVector2D               OutClosestIntersectionPoint;
		float                          OutIntersectionDistance;
		bool                           ReturnValue;
	} params;

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
// struct FVector                 LineStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 LineEnd                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PlanePos                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PlaneNormal                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          PlaneThickness                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 IntersectionPos                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NormalisedIntersectionTOnLineSegment (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPlaneLineIntersectionType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EPlaneLineIntersectionType> UVectorMaths::IntersectLineSegmentWithPlane(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& PlanePos, const struct FVector& PlaneNormal, float PlaneThickness, struct FVector* IntersectionPos, float* NormalisedIntersectionTOnLineSegment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.VectorMaths.IntersectLineSegmentWithPlane"));

	struct
	{
		struct FVector                 LineStart;
		struct FVector                 LineEnd;
		struct FVector                 PlanePos;
		struct FVector                 PlaneNormal;
		float                          PlaneThickness;
		struct FVector                 IntersectionPos;
		float                          NormalisedIntersectionTOnLineSegment;
		TEnumAsByte<EPlaneLineIntersectionType> ReturnValue;
	} params;

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
// struct FVector                 A                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 B                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVectorMaths::Distance(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.VectorMaths.Distance"));

	struct
	{
		struct FVector                 A;
		struct FVector                 B;
		float                          ReturnValue;
	} params;

	params.A = A;
	params.B = B;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Maths.VectorMaths.Cross_Vector2DVector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVectorMaths::Cross_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Maths.VectorMaths.Cross_Vector2DVector2D"));

	struct
	{
		struct FVector2D               A;
		struct FVector2D               B;
		float                          ReturnValue;
	} params;

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
