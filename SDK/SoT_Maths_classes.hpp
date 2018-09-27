#pragma once

// Sea of Thieves (1.2.6) SDK

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


	float STATIC_CalculateEulerAngle(float FromAngle, float ToAngle);
	float STATIC_AngleMoveTowardsMod180(float Angle, float TargetAngle, float Rate);
	float STATIC_AngleMod360(float Angle);
	float STATIC_AngleMod180(float Angle);
	float STATIC_AngleLerpShortest(float Start, float End, float Amount);
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


	float STATIC_CalculateMagnitude(float InSubmersedVolume, float InFluidDensity, float InGravity);
	float STATIC_CalcBlendedProbeCurveBuoyancy(class UCurveFloat* PrimaryBuoyancyCurve, class UCurveFloat* SecondaryBuoyancyCurve, class UCurveFloat* TertiaryBuoyancyCurve, float UnaryDistUnderwater, float Blend, TEnumAsByte<EBuoyancyBlend> BlendType);
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


	int STATIC_ConvertAngleToCircleSectorIndex(float AngleInDegrees, int NumberOfSectors, float IgnoredFraction);
	float STATIC_Area(float InRadius);
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


	float STATIC_GetDistanceSquaredToCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline);
	float STATIC_GetClosestTimeOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline);
	struct FVector STATIC_GetClosestPositionOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline);
	float STATIC_GetClosestPointOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline);
	struct FVector STATIC_GetCentre(class USplineComponent* Spline);
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


	float STATIC_Water();
	float STATIC_SeaWater();
	float STATIC_Min();
	float STATIC_Max();
	bool STATIC_IsValid(float InValue);
	float STATIC_Air();
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


	float STATIC_Sphere();
	float STATIC_PlanePerpendicularToFlow();
	float STATIC_PlaneParallelToFlow();
	float STATIC_Min();
	float STATIC_Max();
	bool STATIC_IsValid(float Value);
	float STATIC_Cube();
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


	float STATIC_CalculateMagnitude(float InSurfaceArea, float InSpeedReltaiveToFluid, float InDragCoefficient, float InFluidDensity);
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


	float STATIC_WrapToRange(float Input, float LowerLimit, float UpperLimit);
	float STATIC_WrapToPositiveRange(float Input, float UpperLimit);
	float STATIC_WrapAroundPivot(float Input, float Pivot, float Range);
	float STATIC_MoveTowards(float From, float To, float Speed, float Time);
	float STATIC_Map(float ValueToMapFrom, float FromRangeStart, float FromRangeEnd, float ToRangeStart, float ToRangeEnd, bool Clamp);
	bool STATIC_IncrementCounter(float Delta, float CounterMax, float* Counter);
	float STATIC_FindMidpointInWrappedRange(float Value1, float Value2, float LowerLimit, float UpperLimit);
	float STATIC_Bound(float ValueToBound, float Bound1, float Bound2);
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


	float STATIC_Earth();
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


	TArray<struct FVector> STATIC_GeneratePoissonDiscDistributionAcrossPlane(const struct FVector& InCenter, const struct FQuat& InOrientation, float InWidth, float InHeight, float InMinDistance, int InRNGSeed);
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


	struct FTransform STATIC_TransformAroundArbitraryPivot(const struct FTransform& TargetTransform, const struct FTransform& BaseTransform, const struct FTransform& TransformToApply, bool LockFinalOrientation);
	struct FQuat STATIC_RotatorToQuat(const struct FRotator& Rotation);
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


	float STATIC_VolumeFromRadius(float InRadius);
	float STATIC_SurfaceAreaFromRadius(float InRadius);
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


	float STATIC_Volume(float InRadius, float InHeight);
	float STATIC_CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid(float InRadius, float InHeight);
	float STATIC_BaseRadius(float InRadius, float InHeight);
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


	void STATIC_UpdateInterval(float DeltaTime, float Value, struct FTimedBuffer* TimedBuffer);
	bool STATIC_GetValueRange(float MinWindowLength, struct FTimedBuffer* TimedBuffer, float* ValueRange);
	struct FTimedBuffer STATIC_CreateTimedBuffer(float WindowLength);
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


	struct FTimespan STATIC_GetDifference(const struct FDateTime& A, const struct FDateTime& B);
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


	bool STATIC_LineIntersectsSphere(const struct FVector& LineStart, const struct FVector& LineDir, const struct FVector& SphereCentre, float SphereRadius, struct FVector* ClosestIntersectionPoint);
	bool STATIC_LineIntersectsCircle(const struct FVector2D& LineOrigin, const struct FVector2D& LineDir, const struct FVector2D& CircleOrigin, float CircleRadius, struct FVector2D* OutClosestIntersectionPoint, float* OutIntersectionDistance);
	TEnumAsByte<EPlaneLineIntersectionType> STATIC_IntersectLineSegmentWithPlane(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& PlanePos, const struct FVector& PlaneNormal, float PlaneThickness, struct FVector* IntersectionPos, float* NormalisedIntersectionTOnLineSegment);
	float STATIC_Distance(const struct FVector& A, const struct FVector& B);
	float STATIC_Cross_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
