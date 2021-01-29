// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShantyPuzzle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShantyPuzzle.ShantyPuzzleComponent.OnEndOverlap
// (Final, Native, Public)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InOtherBodyIndex               (Parm, ZeroConstructor, IsPlainOldData)

void UShantyPuzzleComponent::OnEndOverlap(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ShantyPuzzle.ShantyPuzzleComponent.OnEndOverlap"));

	struct
	{
		class AActor*                  InActor;
		class UPrimitiveComponent*     InComponent;
		int                            InOtherBodyIndex;
	} params;

	params.InActor = InActor;
	params.InComponent = InComponent;
	params.InOtherBodyIndex = InOtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function ShantyPuzzle.ShantyPuzzleComponent.OnBeginOverlap
// (Final, Native, Public, HasOutParms)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InOtherBodyIndex               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void UShantyPuzzleComponent::OnBeginOverlap(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ShantyPuzzle.ShantyPuzzleComponent.OnBeginOverlap"));

	struct
	{
		class AActor*                  InActor;
		class UPrimitiveComponent*     InComponent;
		int                            InOtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params;

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
