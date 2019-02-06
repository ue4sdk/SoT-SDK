// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AnimatedStepsComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpeningSteps
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AnimatedStepsComponent_C::StartOpeningSteps()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpeningSteps"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.SetAllStepsZs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                  TargetZOffsets                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           OpeningOrClosing               (Parm, ZeroConstructor, IsPlainOldData)

void UBP_AnimatedStepsComponent_C::SetAllStepsZs(bool OpeningOrClosing, TArray<float>* TargetZOffsets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.SetAllStepsZs"));

	struct
	{
		TArray<float>                  TargetZOffsets;
		bool                           OpeningOrClosing;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.UpdateStep"));

	struct
	{
		int                            BoneIndex;
		float                          TargetZ;
		float                          MovementDelay;
		class UBoxComponent*           AttachedBox;
		struct FVector                 BoxOrigin;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpening
// (Event, Public, BlueprintEvent)

void UBP_AnimatedStepsComponent_C::StartOpening()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpening"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.OpenImmediate
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_AnimatedStepsComponent_C::OpenImmediate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.OpenImmediate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.Close
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_AnimatedStepsComponent_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.Close"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ExecuteUbergraph_BP_AnimatedStepsComponent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_AnimatedStepsComponent_C::ExecuteUbergraph_BP_AnimatedStepsComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ExecuteUbergraph_BP_AnimatedStepsComponent"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
