#pragma once

// Sea of Thieves (2) SDK

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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Maths.AngleMaths"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Maths.BuoyancyMaths"));
		return ptr;
	}


	static float CalculateMagnitude(float InSubmersedVolume, float InFluidDensity, float InGravity);
	static float CalcBlendedProbeCurveBuoyancy(UCurveFloat* PrimaryBuoyancyCurve, UCurveFloat* SecondaryBuoyancyCurve, UCurveFloat* TertiaryBuoyancyCurve, float UnaryDistUnderwater, float Blend, TEnumAsByte<EBuoyancyBlend> BlendType);
};


// Class Maths.CircleMaths
// 0x0000 (0x0028 - 0x0028)
class UCircleMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Maths.CircleMaths"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Maths.CurveMaths"));
		return ptr;
	}


	static float GetDistanceSquaredToCurve(const FVector& WorldSpacePos, USplineComponent* Spline);
	static float GetClosestTimeOnCurve(const FVector& WorldSpacePos, USplineComponent* Spline);
	static FVector GetClosestPositionOnCurve(const FVector& WorldSpacePos, USplineComponent* Spline);
	static float GetClosestPointOnCurve(const FVector& WorldSpacePos, USplineComponent* Spline);
	static FVector GetCentre(USplineComponent* Spline);
};


// Class Maths.Density
// 0x0000 (0x0028 - 0x0028)
class UDensity : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Maths.Density"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Maths.DragCoefficients"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Maths.DragMaths"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Maths.FloatMaths"));
		return ptr;
	}


	static float WrapToRange(float Input, float LowerLimit, float UpperLimit);
	static float WrapToPositiveRange(float Input, float UpperLimit);
	static float WrapAroundPivot(float Input, float Pivot, float Range);
	static float MoveTowards(float From, float To, float Speed, float Time);
	static float Map(float ValueToMapFrom, float FromRangeStart, float FromRangeEnd, float ToRangeStart, float ToRangeEnd, bool Clamp);
	static bool IncrementCounter(float Delta, float CounterMax, float* Counter);
	static float GetShortestSignedDistanceBetweenPointsInWrappedRange(float FromValue, float ToValue, float LowerLimit, float UpperLimit);
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Maths.Gravity"));
		return ptr;
	}


	static float Earth();
};


// Class Maths.OrientedPointBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UOrientedPointBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Maths.OrientedPointBlueprintFunctionLibrary"));
		return ptr;
	}


	static FTransform GetPointAsTransform(const FOrientedPoint& Point);
};


// Class Maths.PoissonDiscSampling
// 0x0000 (0x0028 - 0x0028)
class UPoissonDiscSampling : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Maths.PoissonDiscSampling"));
		return ptr;
	}


	static TArray<FVector> GeneratePoissonDiscDistributionAcrossPlane(const FVector& InCenter, const FQuat& InOrientation, float InWidth, float InHeight, float InMinDistance, int InRNGSeed);
};


// Class Maths.ProjectileMaths
// 0x0000 (0x0028 - 0x0028)
class UProjectileMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Maths.ProjectileMaths"));
		return ptr;
	}


	static float PredictProjectileFlightTime(float Speed, float Gravity, float Pitch, float Height);
	static float FindProjectileSpeedModifierToHitTarget(const FVector& From, const FVector& Target, float Pitch, float ProjectileSpeed, float Gravity);
	static bool FindAimDirectionToHitTarget(const FVector& From, const FVector& Target, float ProjectileSpeed, float Gravity, bool PreferHigherAngles, FRotator* OutAimDirection);
	static bool CalculateLaunchVelocity(const FVector& From, const FVector& Target, const FVector& TargetVelocity, float ProjectileSpeed, float Gravity, bool PreferHigherAngles, FVector* OutLaunchVelocty, float* OutFlightTime);
};


// Class Maths.RotationMaths
// 0x0000 (0x0028 - 0x0028)
class URotationMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Maths.RotationMaths"));
		return ptr;
	}


	static FTransform TransformAroundArbitraryPivot(const FTransform& TargetTransform, const FTransform& BaseTransform, const FTransform& TransformToApply, bool LockFinalOrientation);
	static FQuat RotatorToQuat(const FRotator& Rotation);
	static FVector RotateDirectionInterpConstantTo(const FVector& CurrentDirectionNormalised, const FVector& TargetDirectionNormalised, float DeltaTime, float InterpSpeedRadPerSec);
	static void FindRotationAxisAndRadAngleBetweenVectors(const FVector& FromVectorNormalised, const FVector& ToVectorNormalised, FVector* OutRotationAxis, float* OutRotationAngleRadians);
	static bool AreRotatorsTheSameRotation(const FRotator& Rotator1, const FRotator& Rotator2, float ErrorTolerance);
	static FRotationUpdateResult AdvanceRotationBySpinAndTiltSynced(const FRotator& StartRotation, const FRotator& TargetRotation, float RotationRateDegrees, float DeltaTime);
};


// Class Maths.ShapeMathsBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UShapeMathsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Maths.ShapeMathsBlueprintLibrary"));
		return ptr;
	}


	static bool IsPointOnOrWithinABox(UBoxComponent* BoxComponent, const FVector& WorldSpaceReferencePoint);
	static FVector FindClosestPointWithinASphere(USphereComponent* SphereComponent, const FVector& WorldSpaceReferencePoint);
	static FVector FindClosestPointWithinACylinder(UCapsuleComponent* CylinderComponent, const FVector& WorldSpaceReferencePoint);
	static FVector FindClosestPointWithinACapsule(UCapsuleComponent* CapsuleComponent, const FVector& WorldSpaceReferencePoint);
	static FVector FindClosestPointWithinABox(UBoxComponent* BoxComponent, const FVector& WorldSpaceReferencePoint);
};


// Class Maths.SphereMaths
// 0x0000 (0x0028 - 0x0028)
class USphereMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Maths.SphereMaths"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Maths.SphericalCapMaths"));
		return ptr;
	}


	static float Volume(float InRadius, float InHeight);
	static float CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid(float InRadius, float InHeight);
	static float BaseRadius(float InRadius, float InHeight);
};


// Class Maths.StatisticsMaths
// 0x0000 (0x0028 - 0x0028)
class UStatisticsMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Maths.StatisticsMaths"));
		return ptr;
	}

};


// Class Maths.TimedBufferFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UTimedBufferFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Maths.TimedBufferFunctionLibrary"));
		return ptr;
	}


	static void UpdateInterval(float DeltaTime, float Value, FTimedBuffer* TimedBuffer);
	static bool GetValueRange(float MinWindowLength, FTimedBuffer* TimedBuffer, float* ValueRange);
	static FTimedBuffer CreateTimedBuffer(float WindowLength);
};


// Class Maths.TimeMaths
// 0x0000 (0x0028 - 0x0028)
class UTimeMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Maths.TimeMaths"));
		return ptr;
	}


	static FTimespan GetDifference(const FDateTime& A, const FDateTime& B);
};


// Class Maths.VectorMaths
// 0x0000 (0x0028 - 0x0028)
class UVectorMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Maths.VectorMaths"));
		return ptr;
	}


	static bool LineIntersectsSphere(const FVector& LineStart, const FVector& LineDir, const FVector& SphereCentre, float SphereRadius, FVector* ClosestIntersectionPoint);
	static bool LineIntersectsCircleWithExitPoint(const FVector2D& LineOrigin, const FVector2D& LineDir, const FVector2D& CircleOrigin, float CircleRadius, FVector2D* OutClosestIntersectionPoint, FVector2D* OutSecondaryIntersectionPoint, float* OutClosestIntersectionDistance, float* OutSecondaryIntersectionDistance);
	static bool LineIntersectsCircle(const FVector2D& LineOrigin, const FVector2D& LineDir, const FVector2D& CircleOrigin, float CircleRadius, FVector2D* OutClosestIntersectionPoint, float* OutIntersectionDistance);
	static TEnumAsByte<EPlaneLineIntersectionType> IntersectLineSegmentWithPlane(const FVector& LineStart, const FVector& LineEnd, const FVector& PlanePos, const FVector& PlaneNormal, float PlaneThickness, FVector* IntersectionPos, float* NormalisedIntersectionTOnLineSegment);
	static float Distance(const FVector& A, const FVector& B);
	static float Cross_Vector2DVector2D(const FVector2D& A, const FVector2D& B);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
