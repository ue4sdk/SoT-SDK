// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shroudbreaker_MedallionLockMechanism_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.PlayVFXByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            VFXIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Shroudbreaker_MedallionLockMechanism_C::PlayVFXByIndex(int VFXIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.PlayVFXByIndex"));

	struct
	{
		int                            VFXIndex;
	} params;

	params.VFXIndex = VFXIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.InitialiseVariables
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PuzzleVault_C*       Puzzle_Vault                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstance*> Materials                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Shroudbreaker_MedallionLockMechanism_C::InitialiseVariables(class ABP_PuzzleVault_C* Puzzle_Vault, TArray<class UMaterialInstance*>* Materials)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.InitialiseVariables"));

	struct
	{
		class ABP_PuzzleVault_C*       Puzzle_Vault;
		TArray<class UMaterialInstance*> Materials;
	} params;

	params.Puzzle_Vault = Puzzle_Vault;

	UObject::ProcessEvent(fn, &params);

	if (Materials != nullptr)
		*Materials = params.Materials;
}


// Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.IncrementVaultTableMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_MedallionLockMechanism_C::IncrementVaultTableMaterial()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.IncrementVaultTableMaterial"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.GetObjectDisplayName
// (HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_Shroudbreaker_MedallionLockMechanism_C::GetObjectDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.GetObjectDisplayName"));

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_Shroudbreaker_MedallionLockMechanism_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.GetClosestInteractionPoint"));

	struct
	{
		struct FVector                 ReferencePosition;
		float                          OutInteractionPointRadius;
		struct FVector                 ReturnValue;
	} params;

	params.ReferencePosition = ReferencePosition;

	UObject::ProcessEvent(fn, &params);

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;

	return params.ReturnValue;
}


// Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_MedallionLockMechanism_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Shroudbreaker_MedallionLockMechanism_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Shroudbreaker_MedallionLockMechanism_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.KeyReceived_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_MedallionLockMechanism_C::KeyReceived_Event()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.KeyReceived_Event"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_Shroudbreaker_MedallionLockMechanism_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.ReceiveDestroyed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.ExecuteUbergraph_BP_Shroudbreaker_MedallionLockMechanism
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Shroudbreaker_MedallionLockMechanism_C::ExecuteUbergraph_BP_Shroudbreaker_MedallionLockMechanism(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.ExecuteUbergraph_BP_Shroudbreaker_MedallionLockMechanism"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.KeyReceived__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_MedallionLockMechanism_C::KeyReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C.KeyReceived__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
