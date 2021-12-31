// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Reviving_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Reviving.DeathSelfInteractionComponent.SetGiveUpAvaliable
// (Final, Native, Private)

void UDeathSelfInteractionComponent::SetGiveUpAvaliable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Reviving.DeathSelfInteractionComponent.SetGiveUpAvaliable"));

	UDeathSelfInteractionComponent_SetGiveUpAvaliable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Reviving.DeathSelfInteractionComponent.OnRep_HasGivenUp
// (Final, Native, Private)

void UDeathSelfInteractionComponent::OnRep_HasGivenUp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Reviving.DeathSelfInteractionComponent.OnRep_HasGivenUp"));

	UDeathSelfInteractionComponent_OnRep_HasGivenUp_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Reviving.ReviveComponent.OnRep_ReviveState
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<EReviveState>      PreviousReviveState            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UReviveComponent::OnRep_ReviveState(TEnumAsByte<EReviveState> PreviousReviveState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Reviving.ReviveComponent.OnRep_ReviveState"));

	UReviveComponent_OnRep_ReviveState_Params params;
	params.PreviousReviveState = PreviousReviveState;

	UObject::ProcessEvent(fn, &params);
}


// Function Reviving.ReviveComponent.HandleOwningCharacterEndPlay
// (Final, Native, Public)

void UReviveComponent::HandleOwningCharacterEndPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Reviving.ReviveComponent.HandleOwningCharacterEndPlay"));

	UReviveComponent_HandleOwningCharacterEndPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
