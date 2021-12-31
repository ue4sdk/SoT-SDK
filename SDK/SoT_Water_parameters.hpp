#pragma once

// Sea of Thieves (2) SDK

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
	UFFTWaterExtendedPlaneComponent*                   InFFTWaterComponent;                                      // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Water.FFTWaterInterface.SetComponent
struct UFFTWaterInterface_SetComponent_Params
{
	UFFTWaterComponent*                                InFFTWaterComponent;                                      // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Water.FFTWaterInterface.SetActor
struct UFFTWaterInterface_SetActor_Params
{
	AAthenaFFTWater*                                   InFFTWaterActor;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.FFTWaterInterface.GetExtendedPlaneComponent
struct UFFTWaterInterface_GetExtendedPlaneComponent_Params
{
	UFFTWaterExtendedPlaneComponent*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Water.FFTWaterInterface.GetComponent
struct UFFTWaterInterface_GetComponent_Params
{
	UFFTWaterComponent*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Water.FFTWaterInterface.GetActor
struct UFFTWaterInterface_GetActor_Params
{
	AAthenaFFTWater*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterInterface.IsReadyToBeQueried
struct UWaterInterface_IsReadyToBeQueried_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterInterface.GetWaterInformationWithScaledChoppyness
struct UWaterInterface_GetWaterInformationWithScaledChoppyness_Params
{
	FVector                                            SamplePosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FVector2D                                          ApproxVelocity;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FVector                                            Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	AActor*                                            Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ChoppynessScalar;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWaterQueryResult>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterInterface.GetWaterInformationBatched
struct UWaterInterface_GetWaterInformationBatched_Params
{
	TArray<FVector2D>                                  SamplePositions;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Heights;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<FVector2D>                                  ApproxVelocities;                                         // (Parm, OutParm, ZeroConstructor)
	TArray<FVector>                                    Normals;                                                  // (Parm, OutParm, ZeroConstructor)
	AActor*                                            Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWaterQueryResult>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterInterface.GetWaterInformation
struct UWaterInterface_GetWaterInformation_Params
{
	FVector                                            SamplePosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FVector2D                                          ApproxVelocity;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FVector                                            Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	AActor*                                            Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWaterQueryResult>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterInterface.GetWaterHeightWithScaledChoppyness
struct UWaterInterface_GetWaterHeightWithScaledChoppyness_Params
{
	FVector                                            SamplePosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	AActor*                                            Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interpolate;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ChoppynessScalar;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWaterQueryResult>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterInterface.GetWaterHeight
struct UWaterInterface_GetWaterHeight_Params
{
	FVector                                            SamplePosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	AActor*                                            Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interpolate;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EWaterQueryResult>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterInterface.GetActorWaterPlane
struct UWaterInterface_GetActorWaterPlane_Params
{
	AActor*                                            Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FWaterSimPlane                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Water.WaterInterface.GetActorWaterInformation
struct UWaterInterface_GetActorWaterInformation_Params
{
	AActor*                                            Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FWaterInformation                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Water.FFTWaterService.OnRep_FFTWaterComponent
struct AFFTWaterService_OnRep_FFTWaterComponent_Params
{
};

// Function Water.FFTWaterService.OnRep_ExtendedPlaneComponent
struct AFFTWaterService_OnRep_ExtendedPlaneComponent_Params
{
};

// Function Water.FlatWaterPlaneComponent.OnActorLeaveWaterPlane
struct UFlatWaterPlaneComponent_OnActorLeaveWaterPlane_Params
{
	AActor*                                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.FlatWaterPlaneComponent.OnActorEnterWaterPlane
struct UFlatWaterPlaneComponent_OnActorEnterWaterPlane_Params
{
	AActor*                                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.FlatWaterPlaneComponent.ConvertToWaterSpace
struct UFlatWaterPlaneComponent_ConvertToWaterSpace_Params
{
	FVector                                            WorldSpacePosition;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FVector2D                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterBuoyancyFunctionLibrary.TickBuoyancy
struct UWaterBuoyancyFunctionLibrary_TickBuoyancy_Params
{
	AActor*                                            InOwner;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FWaterBuoyancy                                     InWaterBuoyancy;                                          // (Parm, OutParm, ReferenceParm)
	float                                              InDeltaTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InChoppinessScalar;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FakeZOffsetGeneratorScalar;                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancySamplesZOffsetSymmetricalAroundXAxis
struct UWaterBuoyancyFunctionLibrary_SetBuoyancySamplesZOffsetSymmetricalAroundXAxis_Params
{
	FWaterBuoyancy                                     InWaterBuoyancy;                                          // (Parm, OutParm, ReferenceParm)
	float                                              ZOffset;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlendDebugOverride
struct UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlendDebugOverride_Params
{
	FWaterBuoyancy                                     InWaterBuoyancy;                                          // (Parm, OutParm, ReferenceParm)
	float                                              UnaryBlendOverride;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlend
struct UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlend_Params
{
	FWaterBuoyancy                                     InWaterBuoyancy;                                          // (Parm, OutParm, ReferenceParm)
	float                                              Blend;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBuoyancyBlend>                        BlendType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.TickLocalSampleMovement
struct UWaterBuoyancySampleMovementFunctionLibrary_TickLocalSampleMovement_Params
{
	AActor*                                            InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	FWaterBuoyancy                                     InWaterBuoyancy;                                          // (Parm, OutParm, ReferenceParm)
	FBuoyancySampleMovement                            InSampleMovement;                                         // (Parm, OutParm)
	float                                              DeltaTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByRandomConfigurationIndex
struct UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByRandomConfigurationIndex_Params
{
	AActor*                                            InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	FWaterBuoyancy                                     InWaterBuoyancy;                                          // (Parm, OutParm, ReferenceParm)
	FBuoyancySampleMovement                            InSampleMovement;                                         // (Parm, OutParm)
};

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByConfigurationIndex
struct UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByConfigurationIndex_Params
{
	AActor*                                            InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	FWaterBuoyancy                                     InWaterBuoyancy;                                          // (Parm, OutParm, ReferenceParm)
	FBuoyancySampleMovement                            InSampleMovement;                                         // (Parm, OutParm)
	int                                                ConfigurationIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocally
struct UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocally_Params
{
	AActor*                                            InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	FWaterBuoyancy                                     InWaterBuoyancy;                                          // (Parm, OutParm, ReferenceParm)
	FBuoyancySampleMovement                            InSampleMovement;                                         // (Parm, OutParm)
	UCurveVector*                                      InCenterOfMassOffsetCurve;                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FBuoyancySampleMovementConfigurationEntry>  NewSampleData;                                            // (Parm, OutParm, ZeroConstructor)
	float                                              BuoyancyScalarAtNewPosition;                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	UCurveFloat*                                       BuoyancyScalarCurve;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	UCurveFloat*                                       ProbeMovementCurve;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MoveTime;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterInteractionComponent.LeaveWaterPlane
struct UWaterInteractionComponent_LeaveWaterPlane_Params
{
	UBaseWaterComponent*                               WaterComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Water.WaterInteractionComponent.LeaveWaterExclusionZone
struct UWaterInteractionComponent_LeaveWaterExclusionZone_Params
{
};

// Function Water.WaterInteractionComponent.IsUsingWaterExcludedZone
struct UWaterInteractionComponent_IsUsingWaterExcludedZone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
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
	UBaseWaterComponent*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Water.WaterInteractionComponent.GetNumberOfWaterPlanes
struct UWaterInteractionComponent_GetNumberOfWaterPlanes_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterInteractionComponent.EnterWaterPlane
struct UWaterInteractionComponent_EnterWaterPlane_Params
{
	UBaseWaterComponent*                               WaterComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Water.WaterInteractionComponent.EnterWaterExclusionZone
struct UWaterInteractionComponent_EnterWaterExclusionZone_Params
{
};

// Function Water.WaterPlaneExclusionComponent.OnOverlapEnd
struct UWaterPlaneExclusionComponent_OnOverlapEnd_Params
{
	AActor*                                            OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	UPrimitiveComponent*                               OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterPlaneExclusionComponent.OnOverlapBegin
struct UWaterPlaneExclusionComponent_OnOverlapBegin_Params
{
	AActor*                                            OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	UPrimitiveComponent*                               OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FHitResult                                         SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Water.WaterSplashProbeFunctionLibrary.TickProbes
struct UWaterSplashProbeFunctionLibrary_TickProbes_Params
{
	AActor*                                            InOwner;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<FWaterSplashProbe>                          InSplashProbes;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              InDeltaTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterSplashProbeFunctionLibrary.TickProbe
struct UWaterSplashProbeFunctionLibrary_TickProbe_Params
{
	AActor*                                            InOwner;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FWaterSplashProbe                                  InSplashProbe;                                            // (Parm, OutParm, ReferenceParm)
	float                                              InDeltaTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterSplashProbeFunctionLibrary.SetSamplingTime
struct UWaterSplashProbeFunctionLibrary_SetSamplingTime_Params
{
	TArray<FWaterSplashProbe>                          InSplashProbes;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              SamplingTime;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterSplashProbeFunctionLibrary.GetRelativeWaterHeightChangeSpd
struct UWaterSplashProbeFunctionLibrary_GetRelativeWaterHeightChangeSpd_Params
{
	TArray<FWaterSplashProbe>                          InSplashProbes;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ProbeIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterSpoutVFXComponent.AddSplashVFXSpawnerWithLocation
struct UWaterSpoutVFXComponent_AddSplashVFXSpawnerWithLocation_Params
{
	FWaterSpout                                        WaterSplashLocator;                                       // (Parm, OutParm)
};

// Function Water.WaterSpoutVFXComponent.ActivateSplashVFXWithDelay
struct UWaterSpoutVFXComponent_ActivateSplashVFXWithDelay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
