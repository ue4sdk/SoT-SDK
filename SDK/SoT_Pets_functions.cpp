// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Pets_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pets.PetAIController.GetAthenaAICharPathFollowingComp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAthenaAICharacterPathFollowingComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAthenaAICharacterPathFollowingComponent* APetAIController::GetAthenaAICharPathFollowingComp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Pets.PetAIController.GetAthenaAICharPathFollowingComp"));

	struct
	{
		class UAthenaAICharacterPathFollowingComponent* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Pets.PetsService.RemovePetFromActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InOwner                        (Parm, ZeroConstructor, IsPlainOldData)

void UPetsService::RemovePetFromActor(class AActor* InOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Pets.PetsService.RemovePetFromActor"));

	struct
	{
		class AActor*                  InOwner;
	} params;

	params.InOwner = InOwner;

	UObject::ProcessEvent(fn, &params);
}


// Function Pets.PetsService.AddPetForActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InPetType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FPetCustomisation       InCustomisation                (ConstParm, Parm)
// class AActor*                  InOwner                        (Parm, ZeroConstructor, IsPlainOldData)

void UPetsService::AddPetForActor(class UClass* InPetType, const struct FPetCustomisation& InCustomisation, class AActor* InOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Pets.PetsService.AddPetForActor"));

	struct
	{
		class UClass*                  InPetType;
		struct FPetCustomisation       InCustomisation;
		class AActor*                  InOwner;
	} params;

	params.InPetType = InPetType;
	params.InCustomisation = InCustomisation;
	params.InOwner = InOwner;

	UObject::ProcessEvent(fn, &params);
}


// Function Pets.WieldablePet.OnRep_DropRequested
// (Final, Native, Private)
// Parameters:
// bool                           DropRequestedPrior             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AWieldablePet::OnRep_DropRequested(bool DropRequestedPrior)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Pets.WieldablePet.OnRep_DropRequested"));

	struct
	{
		bool                           DropRequestedPrior;
	} params;

	params.DropRequestedPrior = DropRequestedPrior;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
