#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Maths_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Maths.AngleMaths.CalculateEulerAngle
struct UAngleMaths_CalculateEulerAngle_Params
{
	float                                              FromAngle;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ToAngle;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.AngleMaths.AngleMoveTowardsMod180
struct UAngleMaths_AngleMoveTowardsMod180_Params
{
	float                                              Angle;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetAngle;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.AngleMaths.AngleMod360
struct UAngleMaths_AngleMod360_Params
{
	float                                              Angle;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.AngleMaths.AngleMod180
struct UAngleMaths_AngleMod180_Params
{
	float                                              Angle;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.AngleMaths.AngleLerpShortest
struct UAngleMaths_AngleLerpShortest_Params
{
	float                                              Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.BuoyancyMaths.CalculateMagnitude
struct UBuoyancyMaths_CalculateMagnitude_Params
{
	float                                              InSubmersedVolume;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InFluidDensity;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InGravity;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.BuoyancyMaths.CalcBlendedProbeCurveBuoyancy
struct UBuoyancyMaths_CalcBlendedProbeCurveBuoyancy_Params
{
	class UCurveFloat*                                 PrimaryBuoyancyCurve;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SecondaryBuoyancyCurve;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TertiaryBuoyancyCurve;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              UnaryDistUnderwater;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Blend;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBuoyancyBlend>                        BlendType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.CircleMaths.ConvertAngleToCircleSectorIndex
struct UCircleMaths_ConvertAngleToCircleSectorIndex_Params
{
	float                                              AngleInDegrees;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfSectors;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              IgnoredFraction;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.CircleMaths.Area
struct UCircleMaths_Area_Params
{
	float                                              InRadius;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.CurveMaths.GetDistanceSquaredToCurve
struct UCurveMaths_GetDistanceSquaredToCurve_Params
{
	struct FVector                                     WorldSpacePos;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.CurveMaths.GetClosestTimeOnCurve
struct UCurveMaths_GetClosestTimeOnCurve_Params
{
	struct FVector                                     WorldSpacePos;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.CurveMaths.GetClosestPositionOnCurve
struct UCurveMaths_GetClosestPositionOnCurve_Params
{
	struct FVector                                     WorldSpacePos;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.CurveMaths.GetClosestPointOnCurve
struct UCurveMaths_GetClosestPointOnCurve_Params
{
	struct FVector                                     WorldSpacePos;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.CurveMaths.GetCentre
struct UCurveMaths_GetCentre_Params
{
	class USplineComponent*                            Spline;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.Density.Water
struct UDensity_Water_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.Density.SeaWater
struct UDensity_SeaWater_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.Density.Min
struct UDensity_Min_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.Density.Max
struct UDensity_Max_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.Density.IsValid
struct UDensity_IsValid_Params
{
	float                                              InValue;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.Density.Air
struct UDensity_Air_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.DragCoefficients.Sphere
struct UDragCoefficients_Sphere_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.DragCoefficients.PlanePerpendicularToFlow
struct UDragCoefficients_PlanePerpendicularToFlow_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.DragCoefficients.PlaneParallelToFlow
struct UDragCoefficients_PlaneParallelToFlow_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.DragCoefficients.Min
struct UDragCoefficients_Min_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.DragCoefficients.Max
struct UDragCoefficients_Max_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.DragCoefficients.IsValid
struct UDragCoefficients_IsValid_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.DragCoefficients.Cube
struct UDragCoefficients_Cube_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.DragMaths.CalculateMagnitude
struct UDragMaths_CalculateMagnitude_Params
{
	float                                              InSurfaceArea;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InSpeedReltaiveToFluid;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDragCoefficient;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InFluidDensity;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.FloatMaths.WrapToRange
struct UFloatMaths_WrapToRange_Params
{
	float                                              Input;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LowerLimit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              UpperLimit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.FloatMaths.WrapAroundPivot
struct UFloatMaths_WrapAroundPivot_Params
{
	float                                              Input;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pivot;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.FloatMaths.MoveTowards
struct UFloatMaths_MoveTowards_Params
{
	float                                              From;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              To;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.FloatMaths.Map
struct UFloatMaths_Map_Params
{
	float                                              ValueToMapFrom;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FromRangeStart;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FromRangeEnd;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ToRangeStart;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ToRangeEnd;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Clamp;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.FloatMaths.IncrementCounter
struct UFloatMaths_IncrementCounter_Params
{
	float                                              Counter;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CounterMax;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.FloatMaths.FindMidpointInWrappedRange
struct UFloatMaths_FindMidpointInWrappedRange_Params
{
	float                                              Value1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LowerLimit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              UpperLimit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.FloatMaths.Bound
struct UFloatMaths_Bound_Params
{
	float                                              ValueToBound;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Bound1;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Bound2;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.Gravity.Earth
struct UGravity_Earth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.PoissonDiscSampling.GeneratePoissonDiscDistributionAcrossPlane
struct UPoissonDiscSampling_GeneratePoissonDiscDistributionAcrossPlane_Params
{
	struct FVector                                     InCenter;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FQuat                                       InOrientation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              InWidth;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InHeight;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InMinDistance;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InRNGSeed;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Maths.RotationMaths.TransformAroundArbitraryPivot
struct URotationMaths_TransformAroundArbitraryPivot_Params
{
	struct FTransform                                  TargetTransform;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  BaseTransform;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  TransformToApply;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               LockFinalOrientation;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Maths.RotationMaths.RotatorToQuat
struct URotationMaths_RotatorToQuat_Params
{
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Maths.SphereMaths.VolumeFromRadius
struct USphereMaths_VolumeFromRadius_Params
{
	float                                              InRadius;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.SphereMaths.SurfaceAreaFromRadius
struct USphereMaths_SurfaceAreaFromRadius_Params
{
	float                                              InRadius;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.SphericalCapMaths.Volume
struct USphericalCapMaths_Volume_Params
{
	float                                              InRadius;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InHeight;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.SphericalCapMaths.CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid
struct USphericalCapMaths_CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid_Params
{
	float                                              InRadius;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InHeight;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.SphericalCapMaths.BaseRadius
struct USphericalCapMaths_BaseRadius_Params
{
	float                                              InRadius;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InHeight;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.TimedBufferFunctionLibrary.UpdateInterval
struct UTimedBufferFunctionLibrary_UpdateInterval_Params
{
	struct FTimedBuffer                                TimedBuffer;                                              // (Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Maths.TimedBufferFunctionLibrary.GetValueRange
struct UTimedBufferFunctionLibrary_GetValueRange_Params
{
	struct FTimedBuffer                                TimedBuffer;                                              // (Parm, OutParm, ReferenceParm)
	float                                              MinWindowLength;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ValueRange;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.TimedBufferFunctionLibrary.CreateTimedBuffer
struct UTimedBufferFunctionLibrary_CreateTimedBuffer_Params
{
	float                                              WindowLength;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTimedBuffer                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Maths.TimeMaths.GetDifference
struct UTimeMaths_GetDifference_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	struct FDateTime                                   B;                                                        // (Parm, ZeroConstructor)
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Maths.VectorMaths.LineIntersectsSphere
struct UVectorMaths_LineIntersectsSphere_Params
{
	struct FVector                                     LineStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineDir;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SphereCentre;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClosestIntersectionPoint;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.VectorMaths.LineIntersectsCircle
struct UVectorMaths_LineIntersectsCircle_Params
{
	struct FVector2D                                   LineOrigin;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LineDir;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CircleOrigin;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CircleRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OutClosestIntersectionPoint;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutIntersectionDistance;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.VectorMaths.IntersectLineSegmentWithPlane
struct UVectorMaths_IntersectLineSegmentWithPlane_Params
{
	struct FVector                                     LineStart;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PlanePos;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PlaneNormal;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              PlaneThickness;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     IntersectionPos;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              NormalisedIntersectionTOnLineSegment;                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlaneLineIntersectionType>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.VectorMaths.Distance
struct UVectorMaths_Distance_Params
{
	struct FVector                                     A;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     B;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Maths.VectorMaths.Cross_Vector2DVector2D
struct UVectorMaths_Cross_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
