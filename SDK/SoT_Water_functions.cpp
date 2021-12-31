// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Water_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Water.FFTWaterInterface.SetExtendedPlaneComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// UFFTWaterExtendedPlaneComponent* InFFTWaterComponent            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFFTWaterInterface::SetExtendedPlaneComponent(UFFTWaterExtendedPlaneComponent* InFFTWaterComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.FFTWaterInterface.SetExtendedPlaneComponent"));

	UFFTWaterInterface_SetExtendedPlaneComponent_Params params;
	params.InFFTWaterComponent = InFFTWaterComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.FFTWaterInterface.SetComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// UFFTWaterComponent*            InFFTWaterComponent            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFFTWaterInterface::SetComponent(UFFTWaterComponent* InFFTWaterComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.FFTWaterInterface.SetComponent"));

	UFFTWaterInterface_SetComponent_Params params;
	params.InFFTWaterComponent = InFFTWaterComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.FFTWaterInterface.SetActor
// (Native, Public, BlueprintCallable)
// Parameters:
// AAthenaFFTWater*               InFFTWaterActor                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFFTWaterInterface::SetActor(AAthenaFFTWater* InFFTWaterActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.FFTWaterInterface.SetActor"));

	UFFTWaterInterface_SetActor_Params params;
	params.InFFTWaterActor = InFFTWaterActor;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.FFTWaterInterface.GetExtendedPlaneComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UFFTWaterExtendedPlaneComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

UFFTWaterExtendedPlaneComponent* UFFTWaterInterface::GetExtendedPlaneComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.FFTWaterInterface.GetExtendedPlaneComponent"));

	UFFTWaterInterface_GetExtendedPlaneComponent_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.FFTWaterInterface.GetComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UFFTWaterComponent*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

UFFTWaterComponent* UFFTWaterInterface::GetComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.FFTWaterInterface.GetComponent"));

	UFFTWaterInterface_GetComponent_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.FFTWaterInterface.GetActor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AAthenaFFTWater*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

AAthenaFFTWater* UFFTWaterInterface::GetActor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.FFTWaterInterface.GetActor"));

	UFFTWaterInterface_GetActor_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterInterface.IsReadyToBeQueried
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWaterInterface::IsReadyToBeQueried()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInterface.IsReadyToBeQueried"));

	UWaterInterface_IsReadyToBeQueried_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterInterface.GetWaterInformationWithScaledChoppyness
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FVector                        SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector2D                      ApproxVelocity                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector                        Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// AActor*                        Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ChoppynessScalar               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWaterQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EWaterQueryResult> UWaterInterface::GetWaterInformationWithScaledChoppyness(const FVector& SamplePosition, AActor* Actor, float ChoppynessScalar, float* Height, FVector2D* ApproxVelocity, FVector* Normal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInterface.GetWaterInformationWithScaledChoppyness"));

	UWaterInterface_GetWaterInformationWithScaledChoppyness_Params params;
	params.SamplePosition = SamplePosition;
	params.Actor = Actor;
	params.ChoppynessScalar = ChoppynessScalar;

	UObject::ProcessEvent(fn, &params);

	if (Height != nullptr)
		*Height = params.Height;
	if (ApproxVelocity != nullptr)
		*ApproxVelocity = params.ApproxVelocity;
	if (Normal != nullptr)
		*Normal = params.Normal;

	return params.ReturnValue;
}


// Function Water.WaterInterface.GetWaterInformationBatched
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<FVector2D>              SamplePositions                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Heights                        (Parm, OutParm, ZeroConstructor)
// TArray<FVector2D>              ApproxVelocities               (Parm, OutParm, ZeroConstructor)
// TArray<FVector>                Normals                        (Parm, OutParm, ZeroConstructor)
// AActor*                        Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWaterQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EWaterQueryResult> UWaterInterface::GetWaterInformationBatched(TArray<FVector2D> SamplePositions, AActor* Actor, TArray<float>* Heights, TArray<FVector2D>* ApproxVelocities, TArray<FVector>* Normals)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInterface.GetWaterInformationBatched"));

	UWaterInterface_GetWaterInformationBatched_Params params;
	params.SamplePositions = SamplePositions;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	if (Heights != nullptr)
		*Heights = params.Heights;
	if (ApproxVelocities != nullptr)
		*ApproxVelocities = params.ApproxVelocities;
	if (Normals != nullptr)
		*Normals = params.Normals;

	return params.ReturnValue;
}


// Function Water.WaterInterface.GetWaterInformation
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FVector                        SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector2D                      ApproxVelocity                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector                        Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// AActor*                        Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWaterQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EWaterQueryResult> UWaterInterface::GetWaterInformation(const FVector& SamplePosition, AActor* Actor, float* Height, FVector2D* ApproxVelocity, FVector* Normal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInterface.GetWaterInformation"));

	UWaterInterface_GetWaterInformation_Params params;
	params.SamplePosition = SamplePosition;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	if (Height != nullptr)
		*Height = params.Height;
	if (ApproxVelocity != nullptr)
		*ApproxVelocity = params.ApproxVelocity;
	if (Normal != nullptr)
		*Normal = params.Normal;

	return params.ReturnValue;
}


// Function Water.WaterInterface.GetWaterHeightWithScaledChoppyness
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FVector                        SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// AActor*                        Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interpolate                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ChoppynessScalar               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWaterQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EWaterQueryResult> UWaterInterface::GetWaterHeightWithScaledChoppyness(const FVector& SamplePosition, AActor* Actor, bool Interpolate, float ChoppynessScalar, float* Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInterface.GetWaterHeightWithScaledChoppyness"));

	UWaterInterface_GetWaterHeightWithScaledChoppyness_Params params;
	params.SamplePosition = SamplePosition;
	params.Actor = Actor;
	params.Interpolate = Interpolate;
	params.ChoppynessScalar = ChoppynessScalar;

	UObject::ProcessEvent(fn, &params);

	if (Height != nullptr)
		*Height = params.Height;

	return params.ReturnValue;
}


// Function Water.WaterInterface.GetWaterHeight
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FVector                        SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// AActor*                        Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interpolate                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EWaterQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EWaterQueryResult> UWaterInterface::GetWaterHeight(const FVector& SamplePosition, AActor* Actor, bool Interpolate, float* Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInterface.GetWaterHeight"));

	UWaterInterface_GetWaterHeight_Params params;
	params.SamplePosition = SamplePosition;
	params.Actor = Actor;
	params.Interpolate = Interpolate;

	UObject::ProcessEvent(fn, &params);

	if (Height != nullptr)
		*Height = params.Height;

	return params.ReturnValue;
}


// Function Water.WaterInterface.GetActorWaterPlane
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AActor*                        Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FWaterSimPlane                 ReturnValue                    (Parm, OutParm, ReturnParm)

FWaterSimPlane UWaterInterface::GetActorWaterPlane(AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInterface.GetActorWaterPlane"));

	UWaterInterface_GetActorWaterPlane_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterInterface.GetActorWaterInformation
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AActor*                        Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FWaterInformation              ReturnValue                    (Parm, OutParm, ReturnParm)

FWaterInformation UWaterInterface::GetActorWaterInformation(AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInterface.GetActorWaterInformation"));

	UWaterInterface_GetActorWaterInformation_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.FFTWaterService.OnRep_FFTWaterComponent
// (Final, Native, Public)

void AFFTWaterService::OnRep_FFTWaterComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.FFTWaterService.OnRep_FFTWaterComponent"));

	AFFTWaterService_OnRep_FFTWaterComponent_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.FFTWaterService.OnRep_ExtendedPlaneComponent
// (Final, Native, Public)

void AFFTWaterService::OnRep_ExtendedPlaneComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.FFTWaterService.OnRep_ExtendedPlaneComponent"));

	AFFTWaterService_OnRep_ExtendedPlaneComponent_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.FlatWaterPlaneComponent.OnActorLeaveWaterPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UFlatWaterPlaneComponent::OnActorLeaveWaterPlane(AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.FlatWaterPlaneComponent.OnActorLeaveWaterPlane"));

	UFlatWaterPlaneComponent_OnActorLeaveWaterPlane_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.FlatWaterPlaneComponent.OnActorEnterWaterPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UFlatWaterPlaneComponent::OnActorEnterWaterPlane(AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.FlatWaterPlaneComponent.OnActorEnterWaterPlane"));

	UFlatWaterPlaneComponent_OnActorEnterWaterPlane_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.FlatWaterPlaneComponent.ConvertToWaterSpace
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// FVector                        WorldSpacePosition             (Parm, ZeroConstructor, IsPlainOldData)
// FVector2D                      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector2D UFlatWaterPlaneComponent::ConvertToWaterSpace(const FVector& WorldSpacePosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.FlatWaterPlaneComponent.ConvertToWaterSpace"));

	UFlatWaterPlaneComponent_ConvertToWaterSpace_Params params;
	params.WorldSpacePosition = WorldSpacePosition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterBuoyancyFunctionLibrary.TickBuoyancy
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// AActor*                        InOwner                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FWaterBuoyancy                 InWaterBuoyancy                (Parm, OutParm, ReferenceParm)
// float                          InDeltaTime                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InChoppinessScalar             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          FakeZOffsetGeneratorScalar     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWaterBuoyancyFunctionLibrary::TickBuoyancy(AActor* InOwner, float InDeltaTime, float InChoppinessScalar, float FakeZOffsetGeneratorScalar, FWaterBuoyancy* InWaterBuoyancy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterBuoyancyFunctionLibrary.TickBuoyancy"));

	UWaterBuoyancyFunctionLibrary_TickBuoyancy_Params params;
	params.InOwner = InOwner;
	params.InDeltaTime = InDeltaTime;
	params.InChoppinessScalar = InChoppinessScalar;
	params.FakeZOffsetGeneratorScalar = FakeZOffsetGeneratorScalar;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;

	return params.ReturnValue;
}


// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancySamplesZOffsetSymmetricalAroundXAxis
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FWaterBuoyancy                 InWaterBuoyancy                (Parm, OutParm, ReferenceParm)
// float                          ZOffset                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWaterBuoyancyFunctionLibrary::SetBuoyancySamplesZOffsetSymmetricalAroundXAxis(float ZOffset, FWaterBuoyancy* InWaterBuoyancy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancySamplesZOffsetSymmetricalAroundXAxis"));

	UWaterBuoyancyFunctionLibrary_SetBuoyancySamplesZOffsetSymmetricalAroundXAxis_Params params;
	params.ZOffset = ZOffset;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
}


// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlendDebugOverride
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FWaterBuoyancy                 InWaterBuoyancy                (Parm, OutParm, ReferenceParm)
// float                          UnaryBlendOverride             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWaterBuoyancyFunctionLibrary::SetBuoyancyProbeCurveBlendDebugOverride(float UnaryBlendOverride, FWaterBuoyancy* InWaterBuoyancy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlendDebugOverride"));

	UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlendDebugOverride_Params params;
	params.UnaryBlendOverride = UnaryBlendOverride;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
}


// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlend
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FWaterBuoyancy                 InWaterBuoyancy                (Parm, OutParm, ReferenceParm)
// float                          Blend                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBuoyancyBlend>    BlendType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWaterBuoyancyFunctionLibrary::SetBuoyancyProbeCurveBlend(float Blend, TEnumAsByte<EBuoyancyBlend> BlendType, FWaterBuoyancy* InWaterBuoyancy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlend"));

	UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlend_Params params;
	params.Blend = Blend;
	params.BlendType = BlendType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
}


// Function Water.WaterBuoyancySampleMovementFunctionLibrary.TickLocalSampleMovement
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// AActor*                        InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// FWaterBuoyancy                 InWaterBuoyancy                (Parm, OutParm, ReferenceParm)
// FBuoyancySampleMovement        InSampleMovement               (Parm, OutParm)
// float                          DeltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWaterBuoyancySampleMovementFunctionLibrary::TickLocalSampleMovement(AActor* InActor, float DeltaTime, FWaterBuoyancy* InWaterBuoyancy, FBuoyancySampleMovement* InSampleMovement)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterBuoyancySampleMovementFunctionLibrary.TickLocalSampleMovement"));

	UWaterBuoyancySampleMovementFunctionLibrary_TickLocalSampleMovement_Params params;
	params.InActor = InActor;
	params.DeltaTime = DeltaTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
	if (InSampleMovement != nullptr)
		*InSampleMovement = params.InSampleMovement;
}


// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByRandomConfigurationIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// AActor*                        InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// FWaterBuoyancy                 InWaterBuoyancy                (Parm, OutParm, ReferenceParm)
// FBuoyancySampleMovement        InSampleMovement               (Parm, OutParm)

void UWaterBuoyancySampleMovementFunctionLibrary::StartMovingVolumeSamplesLocallyByRandomConfigurationIndex(AActor* InActor, FWaterBuoyancy* InWaterBuoyancy, FBuoyancySampleMovement* InSampleMovement)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByRandomConfigurationIndex"));

	UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByRandomConfigurationIndex_Params params;
	params.InActor = InActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
	if (InSampleMovement != nullptr)
		*InSampleMovement = params.InSampleMovement;
}


// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByConfigurationIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// AActor*                        InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// FWaterBuoyancy                 InWaterBuoyancy                (Parm, OutParm, ReferenceParm)
// FBuoyancySampleMovement        InSampleMovement               (Parm, OutParm)
// int                            ConfigurationIndex             (Parm, ZeroConstructor, IsPlainOldData)

void UWaterBuoyancySampleMovementFunctionLibrary::StartMovingVolumeSamplesLocallyByConfigurationIndex(AActor* InActor, int ConfigurationIndex, FWaterBuoyancy* InWaterBuoyancy, FBuoyancySampleMovement* InSampleMovement)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByConfigurationIndex"));

	UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByConfigurationIndex_Params params;
	params.InActor = InActor;
	params.ConfigurationIndex = ConfigurationIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
	if (InSampleMovement != nullptr)
		*InSampleMovement = params.InSampleMovement;
}


// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocally
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// AActor*                        InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// FWaterBuoyancy                 InWaterBuoyancy                (Parm, OutParm, ReferenceParm)
// FBuoyancySampleMovement        InSampleMovement               (Parm, OutParm)
// UCurveVector*                  InCenterOfMassOffsetCurve      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<FBuoyancySampleMovementConfigurationEntry> NewSampleData                  (Parm, OutParm, ZeroConstructor)
// float                          BuoyancyScalarAtNewPosition    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// UCurveFloat*                   BuoyancyScalarCurve            (Parm, ZeroConstructor, IsPlainOldData)
// UCurveFloat*                   ProbeMovementCurve             (Parm, ZeroConstructor, IsPlainOldData)
// float                          MoveTime                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWaterBuoyancySampleMovementFunctionLibrary::StartMovingVolumeSamplesLocally(AActor* InActor, UCurveVector* InCenterOfMassOffsetCurve, float BuoyancyScalarAtNewPosition, UCurveFloat* BuoyancyScalarCurve, UCurveFloat* ProbeMovementCurve, float MoveTime, FWaterBuoyancy* InWaterBuoyancy, FBuoyancySampleMovement* InSampleMovement, TArray<FBuoyancySampleMovementConfigurationEntry>* NewSampleData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocally"));

	UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocally_Params params;
	params.InActor = InActor;
	params.InCenterOfMassOffsetCurve = InCenterOfMassOffsetCurve;
	params.BuoyancyScalarAtNewPosition = BuoyancyScalarAtNewPosition;
	params.BuoyancyScalarCurve = BuoyancyScalarCurve;
	params.ProbeMovementCurve = ProbeMovementCurve;
	params.MoveTime = MoveTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
	if (InSampleMovement != nullptr)
		*InSampleMovement = params.InSampleMovement;
	if (NewSampleData != nullptr)
		*NewSampleData = params.NewSampleData;
}


// Function Water.WaterInteractionComponent.LeaveWaterPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UBaseWaterComponent*           WaterComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWaterInteractionComponent::LeaveWaterPlane(UBaseWaterComponent* WaterComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInteractionComponent.LeaveWaterPlane"));

	UWaterInteractionComponent_LeaveWaterPlane_Params params;
	params.WaterComponent = WaterComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.WaterInteractionComponent.LeaveWaterExclusionZone
// (Final, Native, Public, BlueprintCallable)

void UWaterInteractionComponent::LeaveWaterExclusionZone()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInteractionComponent.LeaveWaterExclusionZone"));

	UWaterInteractionComponent_LeaveWaterExclusionZone_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.WaterInteractionComponent.IsUsingWaterExcludedZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWaterInteractionComponent::IsUsingWaterExcludedZone()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInteractionComponent.IsUsingWaterExcludedZone"));

	UWaterInteractionComponent_IsUsingWaterExcludedZone_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterInteractionComponent.IsUsingNonDefaultWaterPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWaterInteractionComponent::IsUsingNonDefaultWaterPlane()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInteractionComponent.IsUsingNonDefaultWaterPlane"));

	UWaterInteractionComponent_IsUsingNonDefaultWaterPlane_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterInteractionComponent.IsInWaterExcludedZone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWaterInteractionComponent::IsInWaterExcludedZone()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInteractionComponent.IsInWaterExcludedZone"));

	UWaterInteractionComponent_IsInWaterExcludedZone_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterInteractionComponent.GetWaterPlaneComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UBaseWaterComponent*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

UBaseWaterComponent* UWaterInteractionComponent::GetWaterPlaneComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInteractionComponent.GetWaterPlaneComponent"));

	UWaterInteractionComponent_GetWaterPlaneComponent_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterInteractionComponent.GetNumberOfWaterPlanes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UWaterInteractionComponent::GetNumberOfWaterPlanes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInteractionComponent.GetNumberOfWaterPlanes"));

	UWaterInteractionComponent_GetNumberOfWaterPlanes_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterInteractionComponent.EnterWaterPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UBaseWaterComponent*           WaterComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWaterInteractionComponent::EnterWaterPlane(UBaseWaterComponent* WaterComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInteractionComponent.EnterWaterPlane"));

	UWaterInteractionComponent_EnterWaterPlane_Params params;
	params.WaterComponent = WaterComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.WaterInteractionComponent.EnterWaterExclusionZone
// (Final, Native, Public, BlueprintCallable)

void UWaterInteractionComponent::EnterWaterExclusionZone()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInteractionComponent.EnterWaterExclusionZone"));

	UWaterInteractionComponent_EnterWaterExclusionZone_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.WaterPlaneExclusionComponent.OnOverlapEnd
// (Final, Native, Private)
// Parameters:
// AActor*                        OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// UPrimitiveComponent*           OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UWaterPlaneExclusionComponent::OnOverlapEnd(AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterPlaneExclusionComponent.OnOverlapEnd"));

	UWaterPlaneExclusionComponent_OnOverlapEnd_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.WaterPlaneExclusionComponent.OnOverlapBegin
// (Final, Native, Private, HasOutParms)
// Parameters:
// AActor*                        OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// UPrimitiveComponent*           OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromSweep                      (Parm, ZeroConstructor, IsPlainOldData)
// FHitResult                     SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void UWaterPlaneExclusionComponent::OnOverlapBegin(AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterPlaneExclusionComponent.OnOverlapBegin"));

	UWaterPlaneExclusionComponent_OnOverlapBegin_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.FromSweep = FromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.WaterSplashProbeFunctionLibrary.TickProbes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// AActor*                        InOwner                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<FWaterSplashProbe>      InSplashProbes                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          InDeltaTime                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWaterSplashProbeFunctionLibrary::TickProbes(AActor* InOwner, float InDeltaTime, TArray<FWaterSplashProbe>* InSplashProbes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterSplashProbeFunctionLibrary.TickProbes"));

	UWaterSplashProbeFunctionLibrary_TickProbes_Params params;
	params.InOwner = InOwner;
	params.InDeltaTime = InDeltaTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (InSplashProbes != nullptr)
		*InSplashProbes = params.InSplashProbes;
}


// Function Water.WaterSplashProbeFunctionLibrary.TickProbe
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// AActor*                        InOwner                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FWaterSplashProbe              InSplashProbe                  (Parm, OutParm, ReferenceParm)
// float                          InDeltaTime                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWaterSplashProbeFunctionLibrary::TickProbe(AActor* InOwner, float InDeltaTime, FWaterSplashProbe* InSplashProbe)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterSplashProbeFunctionLibrary.TickProbe"));

	UWaterSplashProbeFunctionLibrary_TickProbe_Params params;
	params.InOwner = InOwner;
	params.InDeltaTime = InDeltaTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (InSplashProbe != nullptr)
		*InSplashProbe = params.InSplashProbe;
}


// Function Water.WaterSplashProbeFunctionLibrary.SetSamplingTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<FWaterSplashProbe>      InSplashProbes                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          SamplingTime                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWaterSplashProbeFunctionLibrary::SetSamplingTime(float SamplingTime, TArray<FWaterSplashProbe>* InSplashProbes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterSplashProbeFunctionLibrary.SetSamplingTime"));

	UWaterSplashProbeFunctionLibrary_SetSamplingTime_Params params;
	params.SamplingTime = SamplingTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (InSplashProbes != nullptr)
		*InSplashProbes = params.InSplashProbes;
}


// Function Water.WaterSplashProbeFunctionLibrary.GetRelativeWaterHeightChangeSpd
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<FWaterSplashProbe>      InSplashProbes                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ProbeIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector UWaterSplashProbeFunctionLibrary::GetRelativeWaterHeightChangeSpd(int ProbeIndex, TArray<FWaterSplashProbe>* InSplashProbes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterSplashProbeFunctionLibrary.GetRelativeWaterHeightChangeSpd"));

	UWaterSplashProbeFunctionLibrary_GetRelativeWaterHeightChangeSpd_Params params;
	params.ProbeIndex = ProbeIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (InSplashProbes != nullptr)
		*InSplashProbes = params.InSplashProbes;

	return params.ReturnValue;
}


// Function Water.WaterSpoutVFXComponent.AddSplashVFXSpawnerWithLocation
// (Final, Native, Private, HasOutParms)
// Parameters:
// FWaterSpout                    WaterSplashLocator             (Parm, OutParm)

void UWaterSpoutVFXComponent::AddSplashVFXSpawnerWithLocation(FWaterSpout* WaterSplashLocator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterSpoutVFXComponent.AddSplashVFXSpawnerWithLocation"));

	UWaterSpoutVFXComponent_AddSplashVFXSpawnerWithLocation_Params params;

	UObject::ProcessEvent(fn, &params);

	if (WaterSplashLocator != nullptr)
		*WaterSplashLocator = params.WaterSplashLocator;
}


// Function Water.WaterSpoutVFXComponent.ActivateSplashVFXWithDelay
// (Final, Native, Private)

void UWaterSpoutVFXComponent::ActivateSplashVFXWithDelay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterSpoutVFXComponent.ActivateSplashVFXWithDelay"));

	UWaterSpoutVFXComponent_ActivateSplashVFXWithDelay_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
