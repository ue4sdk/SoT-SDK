// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Pets_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pets.PetAIController.OnPerceptionUpdated
// (Native, Public)
// Parameters:
// TArray<AActor*>                ChangedPerceivedActors         (Parm, ZeroConstructor)

void APetAIController::OnPerceptionUpdated(TArray<AActor*> ChangedPerceivedActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Pets.PetAIController.OnPerceptionUpdated"));

	APetAIController_OnPerceptionUpdated_Params params;
	params.ChangedPerceivedActors = ChangedPerceivedActors;

	UObject::ProcessEvent(fn, &params);
}


// Function Pets.PetAIController.GetAthenaAICharPathFollowingComp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UAthenaAICharacterPathFollowingComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

UAthenaAICharacterPathFollowingComponent* APetAIController::GetAthenaAICharPathFollowingComp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Pets.PetAIController.GetAthenaAICharPathFollowingComp"));

	APetAIController_GetAthenaAICharPathFollowingComp_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Pets.PetHangoutSpotComponent.OnRep_IsOwnerSinking
// (Final, Native, Private)

void UPetHangoutSpotComponent::OnRep_IsOwnerSinking()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Pets.PetHangoutSpotComponent.OnRep_IsOwnerSinking"));

	UPetHangoutSpotComponent_OnRep_IsOwnerSinking_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Pets.PetOwnerComponent.Server_RequestDismissal
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UPetOwnerComponent::Server_RequestDismissal()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Pets.PetOwnerComponent.Server_RequestDismissal"));

	UPetOwnerComponent_Server_RequestDismissal_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Pets.PetsService.RemovePetFromActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// AActor*                        InOwner                        (Parm, ZeroConstructor, IsPlainOldData)

void UPetsService::RemovePetFromActor(AActor* InOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Pets.PetsService.RemovePetFromActor"));

	UPetsService_RemovePetFromActor_Params params;
	params.InOwner = InOwner;

	UObject::ProcessEvent(fn, &params);
}


// Function Pets.PetsService.AddPetForActorAndWield
// (Native, Public, BlueprintCallable)
// Parameters:
// UClass*                        InPetType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FPetCustomisation              InCustomisation                (ConstParm, Parm)
// AActor*                        InOwner                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWielded                      (Parm, ZeroConstructor, IsPlainOldData)

void UPetsService::AddPetForActorAndWield(UClass* InPetType, const FPetCustomisation& InCustomisation, AActor* InOwner, bool IsWielded)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Pets.PetsService.AddPetForActorAndWield"));

	UPetsService_AddPetForActorAndWield_Params params;
	params.InPetType = InPetType;
	params.InCustomisation = InCustomisation;
	params.InOwner = InOwner;
	params.IsWielded = IsWielded;

	UObject::ProcessEvent(fn, &params);
}


// Function Pets.PetsService.AddPetForActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UClass*                        InPetType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FPetCustomisation              InCustomisation                (ConstParm, Parm)
// AActor*                        InOwner                        (Parm, ZeroConstructor, IsPlainOldData)

void UPetsService::AddPetForActor(UClass* InPetType, const FPetCustomisation& InCustomisation, AActor* InOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Pets.PetsService.AddPetForActor"));

	UPetsService_AddPetForActor_Params params;
	params.InPetType = InPetType;
	params.InCustomisation = InCustomisation;
	params.InOwner = InOwner;

	UObject::ProcessEvent(fn, &params);
}


// Function Pets.WieldablePet.OnRep_HungerReactAnimationState
// (Final, Native, Private)

void AWieldablePet::OnRep_HungerReactAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Pets.WieldablePet.OnRep_HungerReactAnimationState"));

	AWieldablePet_OnRep_HungerReactAnimationState_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Pets.WieldablePet.OnRep_DropRequest
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<EWieldablePetDropRequestReason> PriorDropRequest               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AWieldablePet::OnRep_DropRequest(TEnumAsByte<EWieldablePetDropRequestReason> PriorDropRequest)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Pets.WieldablePet.OnRep_DropRequest"));

	AWieldablePet_OnRep_DropRequest_Params params;
	params.PriorDropRequest = PriorDropRequest;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
