#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Pets_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Pets.PetAIController.OnPerceptionUpdated
struct APetAIController_OnPerceptionUpdated_Params
{
	TArray<AActor*>                                    ChangedPerceivedActors;                                   // (Parm, ZeroConstructor)
};

// Function Pets.PetAIController.GetAthenaAICharPathFollowingComp
struct APetAIController_GetAthenaAICharPathFollowingComp_Params
{
	UAthenaAICharacterPathFollowingComponent*          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pets.PetHangoutSpotComponent.OnRep_IsOwnerSinking
struct UPetHangoutSpotComponent_OnRep_IsOwnerSinking_Params
{
};

// Function Pets.PetOwnerComponent.Server_RequestDismissal
struct UPetOwnerComponent_Server_RequestDismissal_Params
{
};

// Function Pets.PetsService.RemovePetFromActor
struct UPetsService_RemovePetFromActor_Params
{
	AActor*                                            InOwner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pets.PetsService.AddPetForActorAndWield
struct UPetsService_AddPetForActorAndWield_Params
{
	UClass*                                            InPetType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FPetCustomisation                                  InCustomisation;                                          // (ConstParm, Parm)
	AActor*                                            InOwner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWielded;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pets.PetsService.AddPetForActor
struct UPetsService_AddPetForActor_Params
{
	UClass*                                            InPetType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FPetCustomisation                                  InCustomisation;                                          // (ConstParm, Parm)
	AActor*                                            InOwner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pets.WieldablePet.OnRep_HungerReactAnimationState
struct AWieldablePet_OnRep_HungerReactAnimationState_Params
{
};

// Function Pets.WieldablePet.OnRep_DropRequest
struct AWieldablePet_OnRep_DropRequest_Params
{
	TEnumAsByte<EWieldablePetDropRequestReason>        PriorDropRequest;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
