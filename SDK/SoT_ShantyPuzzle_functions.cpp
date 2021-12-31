// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShantyPuzzle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShantyPuzzle.ShantyPuzzleComponent.OnEndOverlap
// (Final, Native, Public)
// Parameters:
// AActor*                        InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// UPrimitiveComponent*           InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InOtherBodyIndex               (Parm, ZeroConstructor, IsPlainOldData)

void UShantyPuzzleComponent::OnEndOverlap(AActor* InActor, UPrimitiveComponent* InComponent, int InOtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ShantyPuzzle.ShantyPuzzleComponent.OnEndOverlap"));

	UShantyPuzzleComponent_OnEndOverlap_Params params;
	params.InActor = InActor;
	params.InComponent = InComponent;
	params.InOtherBodyIndex = InOtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function ShantyPuzzle.ShantyPuzzleComponent.OnBeginOverlap
// (Final, Native, Public, HasOutParms)
// Parameters:
// AActor*                        InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// UPrimitiveComponent*           InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InOtherBodyIndex               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// FHitResult                     SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void UShantyPuzzleComponent::OnBeginOverlap(AActor* InActor, UPrimitiveComponent* InComponent, int InOtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ShantyPuzzle.ShantyPuzzleComponent.OnBeginOverlap"));

	UShantyPuzzleComponent_OnBeginOverlap_Params params;
	params.InActor = InActor;
	params.InComponent = InComponent;
	params.InOtherBodyIndex = InOtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
