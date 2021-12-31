// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SpireFramework_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpireFramework.HeightTriggerableEffectsComponent.SetMovementDirection
// (Final, RequiredAPI, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EDirectionOfMovement> InMovement                     (Parm, ZeroConstructor, IsPlainOldData)

void UHeightTriggerableEffectsComponent::SetMovementDirection(TEnumAsByte<EDirectionOfMovement> InMovement)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SpireFramework.HeightTriggerableEffectsComponent.SetMovementDirection"));

	UHeightTriggerableEffectsComponent_SetMovementDirection_Params params;
	params.InMovement = InMovement;

	UObject::ProcessEvent(fn, &params);
}


// Function SpireFramework.SpireService.OnRep_SpireLevels
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<FSpireInfo>             InPreviousSpireLevels          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ASpireService::OnRep_SpireLevels(TArray<FSpireInfo> InPreviousSpireLevels)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SpireFramework.SpireService.OnRep_SpireLevels"));

	ASpireService_OnRep_SpireLevels_Params params;
	params.InPreviousSpireLevels = InPreviousSpireLevels;

	UObject::ProcessEvent(fn, &params);
}


// Function SpireFramework.TaleSpireService.RegisterResetMechanismInterface
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// AActor*                        InMechanismResetInterface      (Parm, ZeroConstructor, IsPlainOldData)

void UTaleSpireService::RegisterResetMechanismInterface(AActor* InMechanismResetInterface)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SpireFramework.TaleSpireService.RegisterResetMechanismInterface"));

	UTaleSpireService_RegisterResetMechanismInterface_Params params;
	params.InMechanismResetInterface = InMechanismResetInterface;

	UObject::ProcessEvent(fn, &params);
}


// Function SpireFramework.TaleSpireService.IsSpireVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleSpireService::IsSpireVisible()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SpireFramework.TaleSpireService.IsSpireVisible"));

	UTaleSpireService_IsSpireVisible_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
