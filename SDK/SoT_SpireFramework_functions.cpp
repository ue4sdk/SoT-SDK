// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SpireFramework_classes.hpp"

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

	struct
	{
		TEnumAsByte<EDirectionOfMovement> InMovement;
	} params;

	params.InMovement = InMovement;

	UObject::ProcessEvent(fn, &params);
}


// Function SpireFramework.SpireService.OnRep_SpireLevels
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FSpireInfo>      InPreviousSpireLevels          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ASpireService::OnRep_SpireLevels(TArray<struct FSpireInfo> InPreviousSpireLevels)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SpireFramework.SpireService.OnRep_SpireLevels"));

	struct
	{
		TArray<struct FSpireInfo>      InPreviousSpireLevels;
	} params;

	params.InPreviousSpireLevels = InPreviousSpireLevels;

	UObject::ProcessEvent(fn, &params);
}


// Function SpireFramework.TaleSpireService.RegisterResetMechanismInterface
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InMechanismResetInterface      (Parm, ZeroConstructor, IsPlainOldData)

void UTaleSpireService::RegisterResetMechanismInterface(class AActor* InMechanismResetInterface)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SpireFramework.TaleSpireService.RegisterResetMechanismInterface"));

	struct
	{
		class AActor*                  InMechanismResetInterface;
	} params;

	params.InMechanismResetInterface = InMechanismResetInterface;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
