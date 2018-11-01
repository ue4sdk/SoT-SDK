#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Water_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Water.FFTWaterInterface.SetExtendedPlaneComponent
struct UFFTWaterInterface_SetExtendedPlaneComponent_Params
{
	class UFFTWaterExtendedPlaneComponent*             InFFTWaterComponent;                                      // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Water.FFTWaterInterface.SetComponent
struct UFFTWaterInterface_SetComponent_Params
{
	class UFFTWaterComponent*                          InFFTWaterComponent;                                      // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Water.FFTWaterInterface.SetActor
struct UFFTWaterInterface_SetActor_Params
{
	class AAthenaFFTWater*                             InFFTWaterActor;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.FFTWaterInterface.GetExtendedPlaneComponent
struct UFFTWaterInterface_GetExtendedPlaneComponent_Params
{
	class UFFTWaterExtendedPlaneComponent*             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Water.FFTWaterInterface.GetComponent
struct UFFTWaterInterface_GetComponent_Params
{
	class UFFTWaterComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Water.FFTWaterInterface.GetActor
struct UFFTWaterInterface_GetActor_Params
{
	class AAthenaFFTWater*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterInterface.IsReadyToBeQueried
struct UWaterInterface_IsReadyToBeQueried_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterInterface.GetWaterInformationWithScaledChoppyness
struct UWaterInterface_GetWaterInformationWithScaledChoppyness_Params
{
	struct FVector                                     SamplePosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ApproxVelocity;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ChoppynessScalar;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWaterQueryResult>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterInterface.GetWaterInformationBatched
struct UWaterInterface_GetWaterInformationBatched_Params
{
	TArray<struct FVector2D>                           SamplePositions;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Heights;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector2D>                           ApproxVelocities;                                         // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                  // (Parm, OutParm, ZeroConstructor)
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWaterQueryResult>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterInterface.GetWaterInformation
struct UWaterInterface_GetWaterInformation_Params
{
	struct FVector                                     SamplePosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ApproxVelocity;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWaterQueryResult>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterInterface.GetWaterHeightWithScaledChoppyness
struct UWaterInterface_GetWaterHeightWithScaledChoppyness_Params
{
	struct FVector                                     SamplePosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interpolate;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ChoppynessScalar;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWaterQueryResult>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterInterface.GetWaterHeightsBatched
struct UWaterInterface_GetWaterHeightsBatched_Params
{
	TArray<struct FVector2D>                           SamplePositions;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Heights;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EWaterQueryResult>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterInterface.GetWaterHeight
struct UWaterInterface_GetWaterHeight_Params
{
	struct FVector                                     SamplePosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interpolate;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EWaterQueryResult>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterInterface.GetActorWaterPlane
struct UWaterInterface_GetActorWaterPlane_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FWaterSimPlane                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Water.WaterInterface.GetActorWaterInformation
struct UWaterInterface_GetActorWaterInformation_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FWaterInformation                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Water.FFTWaterService.OnRep_FFTWaterComponent
struct AFFTWaterService_OnRep_FFTWaterComponent_Params
{
};

// Function Water.FFTWaterService.OnRep_FFTWaterActor
struct AFFTWaterService_OnRep_FFTWaterActor_Params
{
};

// Function Water.FFTWaterService.OnRep_ExtendedPlaneComponent
struct AFFTWaterService_OnRep_ExtendedPlaneComponent_Params
{
};

// Function Water.WaterInteractionComponent.LeaveWaterPlane
struct UWaterInteractionComponent_LeaveWaterPlane_Params
{
	class UBaseWaterComponent*                         WaterComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Water.WaterInteractionComponent.LeaveWaterExclusionZone
struct UWaterInteractionComponent_LeaveWaterExclusionZone_Params
{
};

// Function Water.WaterInteractionComponent.IsUsingNonDefaultWaterPlane
struct UWaterInteractionComponent_IsUsingNonDefaultWaterPlane_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterInteractionComponent.IsInWaterExcludedZone
struct UWaterInteractionComponent_IsInWaterExcludedZone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterInteractionComponent.GetWaterPlaneComponent
struct UWaterInteractionComponent_GetWaterPlaneComponent_Params
{
	class UBaseWaterComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Water.WaterInteractionComponent.GetNumberOfWaterPlanes
struct UWaterInteractionComponent_GetNumberOfWaterPlanes_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterInteractionComponent.EnterWaterPlane
struct UWaterInteractionComponent_EnterWaterPlane_Params
{
	class UBaseWaterComponent*                         WaterComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Water.WaterInteractionComponent.EnterWaterExclusionZone
struct UWaterInteractionComponent_EnterWaterExclusionZone_Params
{
};

// Function Water.FFTWaterPerformanceCountService.EndScopePerformanceCount
struct AFFTWaterPerformanceCountService_EndScopePerformanceCount_Params
{
	struct FFFTWaterPerformanceCountData               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Water.FFTWaterPerformanceCountService.BeginScopePerformanceCount
struct AFFTWaterPerformanceCountService_BeginScopePerformanceCount_Params
{
};

// Function Water.FlatWaterPlaneComponent.OnActorLeaveWaterPlane
struct UFlatWaterPlaneComponent_OnActorLeaveWaterPlane_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.FlatWaterPlaneComponent.OnActorEnterWaterPlane
struct UFlatWaterPlaneComponent_OnActorEnterWaterPlane_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.FlatWaterPlaneComponent.ConvertToWaterSpace
struct UFlatWaterPlaneComponent_ConvertToWaterSpace_Params
{
	struct FVector                                     WorldSpacePosition;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterBuoyancyFunctionLibrary.TickBuoyancy
struct UWaterBuoyancyFunctionLibrary_TickBuoyancy_Params
{
	class AActor*                                      InOwner;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FWaterBuoyancy                              InWaterBuoyancy;                                          // (Parm, OutParm, ReferenceParm)
	float                                              InDeltaTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InChoppinessScalar;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FakeZOffsetGeneratorScalar;                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancySamplesZOffsetSymmetricalAroundXAxis
struct UWaterBuoyancyFunctionLibrary_SetBuoyancySamplesZOffsetSymmetricalAroundXAxis_Params
{
	struct FWaterBuoyancy                              InWaterBuoyancy;                                          // (Parm, OutParm, ReferenceParm)
	float                                              ZOffset;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlendDebugOverride
struct UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlendDebugOverride_Params
{
	struct FWaterBuoyancy                              InWaterBuoyancy;                                          // (Parm, OutParm, ReferenceParm)
	float                                              UnaryBlendOverride;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlend
struct UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlend_Params
{
	struct FWaterBuoyancy                              InWaterBuoyancy;                                          // (Parm, OutParm, ReferenceParm)
	float                                              Blend;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBuoyancyBlend>                        BlendType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.TickLocalSampleMovement
struct UWaterBuoyancySampleMovementFunctionLibrary_TickLocalSampleMovement_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWaterBuoyancy                              InWaterBuoyancy;                                          // (Parm, OutParm, ReferenceParm)
	struct FBuoyancySampleMovement                     InSampleMovement;                                         // (Parm, OutParm)
	float                                              DeltaTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByRandomConfigurationIndex
struct UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByRandomConfigurationIndex_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWaterBuoyancy                              InWaterBuoyancy;                                          // (Parm, OutParm, ReferenceParm)
	struct FBuoyancySampleMovement                     InSampleMovement;                                         // (Parm, OutParm)
};

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByConfigurationIndex
struct UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByConfigurationIndex_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWaterBuoyancy                              InWaterBuoyancy;                                          // (Parm, OutParm, ReferenceParm)
	struct FBuoyancySampleMovement                     InSampleMovement;                                         // (Parm, OutParm)
	int                                                ConfigurationIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocally
struct UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocally_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWaterBuoyancy                              InWaterBuoyancy;                                          // (Parm, OutParm, ReferenceParm)
	struct FBuoyancySampleMovement                     InSampleMovement;                                         // (Parm, OutParm)
	class UCurveVector*                                InCenterOfMassOffsetCurve;                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FBuoyancySampleMovementConfigurationEntry> NewSampleData;                                            // (Parm, OutParm, ZeroConstructor)
	float                                              BuoyancyScalarAtNewPosition;                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 BuoyancyScalarCurve;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ProbeMovementCurve;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MoveTime;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterPlaneExclusionComponent.OnOverlapEnd
struct UWaterPlaneExclusionComponent_OnOverlapEnd_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterPlaneExclusionComponent.OnOverlapBegin
struct UWaterPlaneExclusionComponent_OnOverlapBegin_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Water.WaterSplashProbeFunctionLibrary.TickProbes
struct UWaterSplashProbeFunctionLibrary_TickProbes_Params
{
	class AActor*                                      InOwner;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FWaterSplashProbe>                   InSplashProbes;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              InDeltaTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterSplashProbeFunctionLibrary.TickProbe
struct UWaterSplashProbeFunctionLibrary_TickProbe_Params
{
	class AActor*                                      InOwner;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FWaterSplashProbe                           InSplashProbe;                                            // (Parm, OutParm, ReferenceParm)
	float                                              InDeltaTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterSplashProbeFunctionLibrary.SetSamplingTime
struct UWaterSplashProbeFunctionLibrary_SetSamplingTime_Params
{
	TArray<struct FWaterSplashProbe>                   InSplashProbes;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              SamplingTime;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterSplashProbeFunctionLibrary.GetRelativeWaterHeightChangeSpd
struct UWaterSplashProbeFunctionLibrary_GetRelativeWaterHeightChangeSpd_Params
{
	TArray<struct FWaterSplashProbe>                   InSplashProbes;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ProbeIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
