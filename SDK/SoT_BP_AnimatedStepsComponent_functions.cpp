// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AnimatedStepsComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpeningSteps
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AnimatedStepsComponent_C::StartOpeningSteps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpeningSteps");

	UBP_AnimatedStepsComponent_C_StartOpeningSteps_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.SetAllStepsZs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                  TargetZOffsets                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           OpeningOrClosing               (Parm, ZeroConstructor, IsPlainOldData)

void UBP_AnimatedStepsComponent_C::SetAllStepsZs(bool OpeningOrClosing, TArray<float>* TargetZOffsets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.SetAllStepsZs");

	UBP_AnimatedStepsComponent_C_SetAllStepsZs_Params params;
	params.OpeningOrClosing = OpeningOrClosing;

	UObject::ProcessEvent(fn, &params);

	if (TargetZOffsets != nullptr)
		*TargetZOffsets = params.TargetZOffsets;
}


// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.UpdateStep
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BoneIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetZ                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          MovementDelay                  (Parm, ZeroConstructor, IsPlainOldData)
// class UBoxComponent*           AttachedBox                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BoxOrigin                      (Parm, ZeroConstructor, IsPlainOldData)

void UBP_AnimatedStepsComponent_C::UpdateStep(int BoneIndex, float TargetZ, float MovementDelay, class UBoxComponent* AttachedBox, const struct FVector& BoxOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.UpdateStep");

	UBP_AnimatedStepsComponent_C_UpdateStep_Params params;
	params.BoneIndex = BoneIndex;
	params.TargetZ = TargetZ;
	params.MovementDelay = MovementDelay;
	params.AttachedBox = AttachedBox;
	params.BoxOrigin = BoxOrigin;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UBP_AnimatedStepsComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ReceiveTick");

	UBP_AnimatedStepsComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpening
// (Event, Public, BlueprintEvent)

void UBP_AnimatedStepsComponent_C::StartOpening()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpening");

	UBP_AnimatedStepsComponent_C_StartOpening_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.OpenImmediate
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_AnimatedStepsComponent_C::OpenImmediate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.OpenImmediate");

	UBP_AnimatedStepsComponent_C_OpenImmediate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.Close
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_AnimatedStepsComponent_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.Close");

	UBP_AnimatedStepsComponent_C_Close_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ExecuteUbergraph_BP_AnimatedStepsComponent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_AnimatedStepsComponent_C::ExecuteUbergraph_BP_AnimatedStepsComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ExecuteUbergraph_BP_AnimatedStepsComponent");

	UBP_AnimatedStepsComponent_C_ExecuteUbergraph_BP_AnimatedStepsComponent_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
