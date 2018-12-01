// Sea of Thieves (1.4) SDK

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
// class UFFTWaterExtendedPlaneComponent* InFFTWaterComponent            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFFTWaterInterface::SetExtendedPlaneComponent(class UFFTWaterExtendedPlaneComponent* InFFTWaterComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.FFTWaterInterface.SetExtendedPlaneComponent");

	UFFTWaterInterface_SetExtendedPlaneComponent_Params params;
	params.InFFTWaterComponent = InFFTWaterComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.FFTWaterInterface.SetComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UFFTWaterComponent*      InFFTWaterComponent            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFFTWaterInterface::SetComponent(class UFFTWaterComponent* InFFTWaterComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.FFTWaterInterface.SetComponent");

	UFFTWaterInterface_SetComponent_Params params;
	params.InFFTWaterComponent = InFFTWaterComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.FFTWaterInterface.SetActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AAthenaFFTWater*         InFFTWaterActor                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFFTWaterInterface::SetActor(class AAthenaFFTWater* InFFTWaterActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.FFTWaterInterface.SetActor");

	UFFTWaterInterface_SetActor_Params params;
	params.InFFTWaterActor = InFFTWaterActor;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.FFTWaterInterface.GetExtendedPlaneComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFFTWaterExtendedPlaneComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFFTWaterExtendedPlaneComponent* UFFTWaterInterface::GetExtendedPlaneComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.FFTWaterInterface.GetExtendedPlaneComponent");

	UFFTWaterInterface_GetExtendedPlaneComponent_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.FFTWaterInterface.GetComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFFTWaterComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFFTWaterComponent* UFFTWaterInterface::GetComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.FFTWaterInterface.GetComponent");

	UFFTWaterInterface_GetComponent_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.FFTWaterInterface.GetActor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AAthenaFFTWater*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AAthenaFFTWater* UFFTWaterInterface::GetActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.FFTWaterInterface.GetActor");

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
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.IsReadyToBeQueried");

	UWaterInterface_IsReadyToBeQueried_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterInterface.GetWaterInformationWithScaledChoppyness
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ApproxVelocity                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ChoppynessScalar               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWaterQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EWaterQueryResult> UWaterInterface::GetWaterInformationWithScaledChoppyness(const struct FVector& SamplePosition, class AActor* Actor, float ChoppynessScalar, float* Height, struct FVector2D* ApproxVelocity, struct FVector* Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetWaterInformationWithScaledChoppyness");

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
// TArray<struct FVector2D>       SamplePositions                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Heights                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       ApproxVelocities               (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor)
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWaterQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EWaterQueryResult> UWaterInterface::GetWaterInformationBatched(TArray<struct FVector2D> SamplePositions, class AActor* Actor, TArray<float>* Heights, TArray<struct FVector2D>* ApproxVelocities, TArray<struct FVector>* Normals)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetWaterInformationBatched");

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
// struct FVector                 SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ApproxVelocity                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWaterQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EWaterQueryResult> UWaterInterface::GetWaterInformation(const struct FVector& SamplePosition, class AActor* Actor, float* Height, struct FVector2D* ApproxVelocity, struct FVector* Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetWaterInformation");

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
// struct FVector                 SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interpolate                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ChoppynessScalar               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWaterQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EWaterQueryResult> UWaterInterface::GetWaterHeightWithScaledChoppyness(const struct FVector& SamplePosition, class AActor* Actor, bool Interpolate, float ChoppynessScalar, float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetWaterHeightWithScaledChoppyness");

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


// Function Water.WaterInterface.GetWaterHeightsBatched
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector2D>       SamplePositions                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  Heights                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EWaterQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EWaterQueryResult> UWaterInterface::GetWaterHeightsBatched(TArray<struct FVector2D> SamplePositions, class AActor* Actor, TArray<float>* Heights)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetWaterHeightsBatched");

	UWaterInterface_GetWaterHeightsBatched_Params params;
	params.SamplePositions = SamplePositions;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	if (Heights != nullptr)
		*Heights = params.Heights;

	return params.ReturnValue;
}


// Function Water.WaterInterface.GetWaterHeight
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interpolate                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EWaterQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EWaterQueryResult> UWaterInterface::GetWaterHeight(const struct FVector& SamplePosition, class AActor* Actor, bool Interpolate, float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetWaterHeight");

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
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FWaterSimPlane          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWaterSimPlane UWaterInterface::GetActorWaterPlane(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetActorWaterPlane");

	UWaterInterface_GetActorWaterPlane_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterInterface.GetActorWaterInformation
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FWaterInformation       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWaterInformation UWaterInterface::GetActorWaterInformation(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetActorWaterInformation");

	UWaterInterface_GetActorWaterInformation_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.FFTWaterService.OnRep_FFTWaterComponent
// (Final, Native, Public)

void AFFTWaterService::OnRep_FFTWaterComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.FFTWaterService.OnRep_FFTWaterComponent");

	AFFTWaterService_OnRep_FFTWaterComponent_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.FFTWaterService.OnRep_FFTWaterActor
// (Final, Native, Public)

void AFFTWaterService::OnRep_FFTWaterActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.FFTWaterService.OnRep_FFTWaterActor");

	AFFTWaterService_OnRep_FFTWaterActor_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.FFTWaterService.OnRep_ExtendedPlaneComponent
// (Final, Native, Public)

void AFFTWaterService::OnRep_ExtendedPlaneComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.FFTWaterService.OnRep_ExtendedPlaneComponent");

	AFFTWaterService_OnRep_ExtendedPlaneComponent_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.WaterInteractionComponent.LeaveWaterPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBaseWaterComponent*     WaterComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWaterInteractionComponent::LeaveWaterPlane(class UBaseWaterComponent* WaterComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.LeaveWaterPlane");

	UWaterInteractionComponent_LeaveWaterPlane_Params params;
	params.WaterComponent = WaterComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.WaterInteractionComponent.LeaveWaterExclusionZone
// (Final, Native, Public, BlueprintCallable)

void UWaterInteractionComponent::LeaveWaterExclusionZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.LeaveWaterExclusionZone");

	UWaterInteractionComponent_LeaveWaterExclusionZone_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.WaterInteractionComponent.IsUsingNonDefaultWaterPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWaterInteractionComponent::IsUsingNonDefaultWaterPlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.IsUsingNonDefaultWaterPlane");

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
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.IsInWaterExcludedZone");

	UWaterInteractionComponent_IsInWaterExcludedZone_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterInteractionComponent.GetWaterPlaneComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBaseWaterComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBaseWaterComponent* UWaterInteractionComponent::GetWaterPlaneComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.GetWaterPlaneComponent");

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
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.GetNumberOfWaterPlanes");

	UWaterInteractionComponent_GetNumberOfWaterPlanes_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterInteractionComponent.EnterWaterPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBaseWaterComponent*     WaterComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWaterInteractionComponent::EnterWaterPlane(class UBaseWaterComponent* WaterComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.EnterWaterPlane");

	UWaterInteractionComponent_EnterWaterPlane_Params params;
	params.WaterComponent = WaterComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.WaterInteractionComponent.EnterWaterExclusionZone
// (Final, Native, Public, BlueprintCallable)

void UWaterInteractionComponent::EnterWaterExclusionZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.EnterWaterExclusionZone");

	UWaterInteractionComponent_EnterWaterExclusionZone_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.FFTWaterPerformanceCountService.EndScopePerformanceCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFFTWaterPerformanceCountData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFFTWaterPerformanceCountData AFFTWaterPerformanceCountService::EndScopePerformanceCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.FFTWaterPerformanceCountService.EndScopePerformanceCount");

	AFFTWaterPerformanceCountService_EndScopePerformanceCount_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.FFTWaterPerformanceCountService.BeginScopePerformanceCount
// (Final, Native, Public, BlueprintCallable)

void AFFTWaterPerformanceCountService::BeginScopePerformanceCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.FFTWaterPerformanceCountService.BeginScopePerformanceCount");

	AFFTWaterPerformanceCountService_BeginScopePerformanceCount_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.FlatWaterPlaneComponent.OnActorLeaveWaterPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UFlatWaterPlaneComponent::OnActorLeaveWaterPlane(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.FlatWaterPlaneComponent.OnActorLeaveWaterPlane");

	UFlatWaterPlaneComponent_OnActorLeaveWaterPlane_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.FlatWaterPlaneComponent.OnActorEnterWaterPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UFlatWaterPlaneComponent::OnActorEnterWaterPlane(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.FlatWaterPlaneComponent.OnActorEnterWaterPlane");

	UFlatWaterPlaneComponent_OnActorEnterWaterPlane_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.FlatWaterPlaneComponent.ConvertToWaterSpace
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 WorldSpacePosition             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UFlatWaterPlaneComponent::ConvertToWaterSpace(const struct FVector& WorldSpacePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.FlatWaterPlaneComponent.ConvertToWaterSpace");

	UFlatWaterPlaneComponent_ConvertToWaterSpace_Params params;
	params.WorldSpacePosition = WorldSpacePosition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterBuoyancyFunctionLibrary.TickBuoyancy
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  InOwner                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FWaterBuoyancy          InWaterBuoyancy                (Parm, OutParm, ReferenceParm)
// float                          InDeltaTime                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InChoppinessScalar             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          FakeZOffsetGeneratorScalar     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWaterBuoyancyFunctionLibrary::STATIC_TickBuoyancy(class AActor* InOwner, float InDeltaTime, float InChoppinessScalar, float FakeZOffsetGeneratorScalar, struct FWaterBuoyancy* InWaterBuoyancy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancyFunctionLibrary.TickBuoyancy");

	UWaterBuoyancyFunctionLibrary_TickBuoyancy_Params params;
	params.InOwner = InOwner;
	params.InDeltaTime = InDeltaTime;
	params.InChoppinessScalar = InChoppinessScalar;
	params.FakeZOffsetGeneratorScalar = FakeZOffsetGeneratorScalar;

	UObject::ProcessEvent(fn, &params);

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;

	return params.ReturnValue;
}


// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancySamplesZOffsetSymmetricalAroundXAxis
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWaterBuoyancy          InWaterBuoyancy                (Parm, OutParm, ReferenceParm)
// float                          ZOffset                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWaterBuoyancyFunctionLibrary::STATIC_SetBuoyancySamplesZOffsetSymmetricalAroundXAxis(float ZOffset, struct FWaterBuoyancy* InWaterBuoyancy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancySamplesZOffsetSymmetricalAroundXAxis");

	UWaterBuoyancyFunctionLibrary_SetBuoyancySamplesZOffsetSymmetricalAroundXAxis_Params params;
	params.ZOffset = ZOffset;

	UObject::ProcessEvent(fn, &params);

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
}


// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlendDebugOverride
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWaterBuoyancy          InWaterBuoyancy                (Parm, OutParm, ReferenceParm)
// float                          UnaryBlendOverride             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWaterBuoyancyFunctionLibrary::STATIC_SetBuoyancyProbeCurveBlendDebugOverride(float UnaryBlendOverride, struct FWaterBuoyancy* InWaterBuoyancy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlendDebugOverride");

	UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlendDebugOverride_Params params;
	params.UnaryBlendOverride = UnaryBlendOverride;

	UObject::ProcessEvent(fn, &params);

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
}


// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlend
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWaterBuoyancy          InWaterBuoyancy                (Parm, OutParm, ReferenceParm)
// float                          Blend                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBuoyancyBlend>    BlendType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWaterBuoyancyFunctionLibrary::STATIC_SetBuoyancyProbeCurveBlend(float Blend, TEnumAsByte<EBuoyancyBlend> BlendType, struct FWaterBuoyancy* InWaterBuoyancy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlend");

	UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlend_Params params;
	params.Blend = Blend;
	params.BlendType = BlendType;

	UObject::ProcessEvent(fn, &params);

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
}


// Function Water.WaterBuoyancySampleMovementFunctionLibrary.TickLocalSampleMovement
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FWaterBuoyancy          InWaterBuoyancy                (Parm, OutParm, ReferenceParm)
// struct FBuoyancySampleMovement InSampleMovement               (Parm, OutParm)
// float                          DeltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWaterBuoyancySampleMovementFunctionLibrary::STATIC_TickLocalSampleMovement(class AActor* InActor, float DeltaTime, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancySampleMovementFunctionLibrary.TickLocalSampleMovement");

	UWaterBuoyancySampleMovementFunctionLibrary_TickLocalSampleMovement_Params params;
	params.InActor = InActor;
	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
	if (InSampleMovement != nullptr)
		*InSampleMovement = params.InSampleMovement;
}


// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByRandomConfigurationIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FWaterBuoyancy          InWaterBuoyancy                (Parm, OutParm, ReferenceParm)
// struct FBuoyancySampleMovement InSampleMovement               (Parm, OutParm)

void UWaterBuoyancySampleMovementFunctionLibrary::STATIC_StartMovingVolumeSamplesLocallyByRandomConfigurationIndex(class AActor* InActor, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByRandomConfigurationIndex");

	UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByRandomConfigurationIndex_Params params;
	params.InActor = InActor;

	UObject::ProcessEvent(fn, &params);

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
	if (InSampleMovement != nullptr)
		*InSampleMovement = params.InSampleMovement;
}


// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByConfigurationIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FWaterBuoyancy          InWaterBuoyancy                (Parm, OutParm, ReferenceParm)
// struct FBuoyancySampleMovement InSampleMovement               (Parm, OutParm)
// int                            ConfigurationIndex             (Parm, ZeroConstructor, IsPlainOldData)

void UWaterBuoyancySampleMovementFunctionLibrary::STATIC_StartMovingVolumeSamplesLocallyByConfigurationIndex(class AActor* InActor, int ConfigurationIndex, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByConfigurationIndex");

	UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByConfigurationIndex_Params params;
	params.InActor = InActor;
	params.ConfigurationIndex = ConfigurationIndex;

	UObject::ProcessEvent(fn, &params);

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
	if (InSampleMovement != nullptr)
		*InSampleMovement = params.InSampleMovement;
}


// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocally
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FWaterBuoyancy          InWaterBuoyancy                (Parm, OutParm, ReferenceParm)
// struct FBuoyancySampleMovement InSampleMovement               (Parm, OutParm)
// class UCurveVector*            InCenterOfMassOffsetCurve      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBuoyancySampleMovementConfigurationEntry> NewSampleData                  (Parm, OutParm, ZeroConstructor)
// float                          BuoyancyScalarAtNewPosition    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             BuoyancyScalarCurve            (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             ProbeMovementCurve             (Parm, ZeroConstructor, IsPlainOldData)
// float                          MoveTime                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWaterBuoyancySampleMovementFunctionLibrary::STATIC_StartMovingVolumeSamplesLocally(class AActor* InActor, class UCurveVector* InCenterOfMassOffsetCurve, float BuoyancyScalarAtNewPosition, class UCurveFloat* BuoyancyScalarCurve, class UCurveFloat* ProbeMovementCurve, float MoveTime, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement, TArray<struct FBuoyancySampleMovementConfigurationEntry>* NewSampleData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocally");

	UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocally_Params params;
	params.InActor = InActor;
	params.InCenterOfMassOffsetCurve = InCenterOfMassOffsetCurve;
	params.BuoyancyScalarAtNewPosition = BuoyancyScalarAtNewPosition;
	params.BuoyancyScalarCurve = BuoyancyScalarCurve;
	params.ProbeMovementCurve = ProbeMovementCurve;
	params.MoveTime = MoveTime;

	UObject::ProcessEvent(fn, &params);

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
	if (InSampleMovement != nullptr)
		*InSampleMovement = params.InSampleMovement;
	if (NewSampleData != nullptr)
		*NewSampleData = params.NewSampleData;
}


// Function Water.WaterPlaneExclusionComponent.OnOverlapEnd
// (Final, Native, Private)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UWaterPlaneExclusionComponent::OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterPlaneExclusionComponent.OnOverlapEnd");

	UWaterPlaneExclusionComponent_OnOverlapEnd_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.WaterPlaneExclusionComponent.OnOverlapBegin
// (Final, Native, Private, HasOutParms)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromSweep                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void UWaterPlaneExclusionComponent::OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterPlaneExclusionComponent.OnOverlapBegin");

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
// class AActor*                  InOwner                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FWaterSplashProbe> InSplashProbes                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          InDeltaTime                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWaterSplashProbeFunctionLibrary::STATIC_TickProbes(class AActor* InOwner, float InDeltaTime, TArray<struct FWaterSplashProbe>* InSplashProbes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSplashProbeFunctionLibrary.TickProbes");

	UWaterSplashProbeFunctionLibrary_TickProbes_Params params;
	params.InOwner = InOwner;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);

	if (InSplashProbes != nullptr)
		*InSplashProbes = params.InSplashProbes;
}


// Function Water.WaterSplashProbeFunctionLibrary.TickProbe
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  InOwner                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FWaterSplashProbe       InSplashProbe                  (Parm, OutParm, ReferenceParm)
// float                          InDeltaTime                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWaterSplashProbeFunctionLibrary::STATIC_TickProbe(class AActor* InOwner, float InDeltaTime, struct FWaterSplashProbe* InSplashProbe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSplashProbeFunctionLibrary.TickProbe");

	UWaterSplashProbeFunctionLibrary_TickProbe_Params params;
	params.InOwner = InOwner;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);

	if (InSplashProbe != nullptr)
		*InSplashProbe = params.InSplashProbe;
}


// Function Water.WaterSplashProbeFunctionLibrary.SetSamplingTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FWaterSplashProbe> InSplashProbes                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          SamplingTime                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWaterSplashProbeFunctionLibrary::STATIC_SetSamplingTime(float SamplingTime, TArray<struct FWaterSplashProbe>* InSplashProbes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSplashProbeFunctionLibrary.SetSamplingTime");

	UWaterSplashProbeFunctionLibrary_SetSamplingTime_Params params;
	params.SamplingTime = SamplingTime;

	UObject::ProcessEvent(fn, &params);

	if (InSplashProbes != nullptr)
		*InSplashProbes = params.InSplashProbes;
}


// Function Water.WaterSplashProbeFunctionLibrary.GetRelativeWaterHeightChangeSpd
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FWaterSplashProbe> InSplashProbes                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ProbeIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UWaterSplashProbeFunctionLibrary::STATIC_GetRelativeWaterHeightChangeSpd(int ProbeIndex, TArray<struct FWaterSplashProbe>* InSplashProbes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSplashProbeFunctionLibrary.GetRelativeWaterHeightChangeSpd");

	UWaterSplashProbeFunctionLibrary_GetRelativeWaterHeightChangeSpd_Params params;
	params.ProbeIndex = ProbeIndex;

	UObject::ProcessEvent(fn, &params);

	if (InSplashProbes != nullptr)
		*InSplashProbes = params.InSplashProbes;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
