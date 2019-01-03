// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Pets_parameters.hpp"

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
	static auto fn = UObject::FindObject<UFunction>("Function Pets.PetAIController.GetAthenaAICharPathFollowingComp");

	APetAIController_GetAthenaAICharPathFollowingComp_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Pets.PetsService.RemovePetFromActor
// (Final, Native, Protected)
// Parameters:
// class AActor*                  InOwner                        (Parm, ZeroConstructor, IsPlainOldData)

void UPetsService::RemovePetFromActor(class AActor* InOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pets.PetsService.RemovePetFromActor");

	UPetsService_RemovePetFromActor_Params params;
	params.InOwner = InOwner;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
