#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Maths_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Maths.AngleMaths
// 0x0000 (0x0028 - 0x0028)
class UAngleMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Maths.AngleMaths");
		return ptr;
	}


	static float CalculateEulerAngle(float FromAngle, float ToAngle);
	static float AngleMoveTowardsMod180(float Angle, float TargetAngle, float Rate);
	static float AngleMod360(float Angle);
	static float AngleMod180(float Angle);
	static float AngleLerpShortest(float Start, float End, float Amount);
};


// Class Maths.BuoyancyMaths
// 0x0000 (0x0028 - 0x0028)
class UBuoyancyMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Maths.BuoyancyMaths");
		return ptr;
	}


	static float CalculateMagnitude(float InSubmersedVolume, float InFluidDensity, float InGravity);
	static float CalcBlendedProbeCurveBuoyancy(class UCurveFloat* PrimaryBuoyancyCurve, class UCurveFloat* SecondaryBuoyancyCurve, class UCurveFloat* TertiaryBuoyancyCurve, float UnaryDistUnderwater, float Blend, TEnumAsByte<EBuoyancyBlend> BlendType);
};


// Class Maths.CircleMaths
// 0x0000 (0x0028 - 0x0028)
class UCircleMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Maths.CircleMaths");
		return ptr;
	}


	static int ConvertAngleToCircleSectorIndex(float AngleInDegrees, int NumberOfSectors, float IgnoredFraction);
	static float Area(float InRadius);
};


// Class Maths.CurveMaths
// 0x0000 (0x0028 - 0x0028)
class UCurveMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Maths.CurveMaths");
		return ptr;
	}


	static float GetDistanceSquaredToCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline);
	static float GetClosestTimeOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline);
	static struct FVector GetClosestPositionOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline);
	static float GetClosestPointOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline);
	static struct FVector GetCentre(class USplineComponent* Spline);
};


// Class Maths.Density
// 0x0000 (0x0028 - 0x0028)
class UDensity : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Maths.Density");
		return ptr;
	}


	static float Water();
	static float SeaWater();
	static float Min();
	static float Max();
	static bool IsValid(float InValue);
	static float Air();
};


// Class Maths.DragCoefficients
// 0x0000 (0x0028 - 0x0028)
class UDragCoefficients : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Maths.DragCoefficients");
		return ptr;
	}


	static float Sphere();
	static float PlanePerpendicularToFlow();
	static float PlaneParallelToFlow();
	static float Min();
	static float Max();
	static bool IsValid(float Value);
	static float Cube();
};


// Class Maths.DragMaths
// 0x0000 (0x0028 - 0x0028)
class UDragMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Maths.DragMaths");
		return ptr;
	}


	static float CalculateMagnitude(float InSurfaceArea, float InSpeedReltaiveToFluid, float InDragCoefficient, float InFluidDensity);
};


// Class Maths.FloatMaths
// 0x0000 (0x0028 - 0x0028)
class UFloatMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Maths.FloatMaths");
		return ptr;
	}


	static float WrapToRange(float Input, float LowerLimit, float UpperLimit);
	static float WrapToPositiveRange(float Input, float UpperLimit);
	static float WrapAroundPivot(float Input, float Pivot, float Range);
	static float MoveTowards(float From, float To, float Speed, float Time);
	static float Map(float ValueToMapFrom, float FromRangeStart, float FromRangeEnd, float ToRangeStart, float ToRangeEnd, bool Clamp);
	static bool IncrementCounter(float Delta, float CounterMax, float* Counter);
	static float FindMidpointInWrappedRange(float Value1, float Value2, float LowerLimit, float UpperLimit);
	static float Bound(float ValueToBound, float Bound1, float Bound2);
};


// Class Maths.Gravity
// 0x0000 (0x0028 - 0x0028)
class UGravity : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Maths.Gravity");
		return ptr;
	}


	static float Earth();
};


// Class Maths.PoissonDiscSampling
// 0x0000 (0x0028 - 0x0028)
class UPoissonDiscSampling : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Maths.PoissonDiscSampling");
		return ptr;
	}


	static TArray<struct FVector> GeneratePoissonDiscDistributionAcrossPlane(const struct FVector& InCenter, const struct FQuat& InOrientation, float InWidth, float InHeight, float InMinDistance, int InRNGSeed);
};


// Class Maths.RotationMaths
// 0x0000 (0x0028 - 0x0028)
class URotationMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Maths.RotationMaths");
		return ptr;
	}


	static struct FTransform TransformAroundArbitraryPivot(const struct FTransform& TargetTransform, const struct FTransform& BaseTransform, const struct FTransform& TransformToApply, bool LockFinalOrientation);
	static struct FQuat RotatorToQuat(const struct FRotator& Rotation);
};


// Class Maths.SphereMaths
// 0x0000 (0x0028 - 0x0028)
class USphereMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Maths.SphereMaths");
		return ptr;
	}


	static float VolumeFromRadius(float InRadius);
	static float SurfaceAreaFromRadius(float InRadius);
};


// Class Maths.SphericalCapMaths
// 0x0000 (0x0028 - 0x0028)
class USphericalCapMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Maths.SphericalCapMaths");
		return ptr;
	}


	static float Volume(float InRadius, float InHeight);
	static float CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid(float InRadius, float InHeight);
	static float BaseRadius(float InRadius, float InHeight);
};


// Class Maths.TimedBufferFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UTimedBufferFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Maths.TimedBufferFunctionLibrary");
		return ptr;
	}


	static void UpdateInterval(float DeltaTime, float Value, struct FTimedBuffer* TimedBuffer);
	static bool GetValueRange(float MinWindowLength, struct FTimedBuffer* TimedBuffer, float* ValueRange);
	static struct FTimedBuffer CreateTimedBuffer(float WindowLength);
};


// Class Maths.TimeMaths
// 0x0000 (0x0028 - 0x0028)
class UTimeMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Maths.TimeMaths");
		return ptr;
	}


	static struct FTimespan GetDifference(const struct FDateTime& A, const struct FDateTime& B);
};


// Class Maths.VectorMaths
// 0x0000 (0x0028 - 0x0028)
class UVectorMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Maths.VectorMaths");
		return ptr;
	}


	static bool LineIntersectsSphere(const struct FVector& LineStart, const struct FVector& LineDir, const struct FVector& SphereCentre, float SphereRadius, struct FVector* ClosestIntersectionPoint);
	static bool LineIntersectsCircleWithExitPoint(const struct FVector2D& LineOrigin, const struct FVector2D& LineDir, const struct FVector2D& CircleOrigin, float CircleRadius, struct FVector2D* OutClosestIntersectionPoint, struct FVector2D* OutSecondaryIntersectionPoint, float* OutClosestIntersectionDistance, float* OutSecondaryIntersectionDistance);
	static bool LineIntersectsCircle(const struct FVector2D& LineOrigin, const struct FVector2D& LineDir, const struct FVector2D& CircleOrigin, float CircleRadius, struct FVector2D* OutClosestIntersectionPoint, float* OutIntersectionDistance);
	static TEnumAsByte<EPlaneLineIntersectionType> IntersectLineSegmentWithPlane(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& PlanePos, const struct FVector& PlaneNormal, float PlaneThickness, struct FVector* IntersectionPos, float* NormalisedIntersectionTOnLineSegment);
	static float Distance(const struct FVector& A, const struct FVector& B);
	static float Cross_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
