// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaInputMkII_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaInputMkII.MovementInterferenceComponent.OnMoveRightInput
// (Final, Native, Private)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMovementInterferenceComponent::OnMoveRightInput(float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInputMkII.MovementInterferenceComponent.OnMoveRightInput"));

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaInputMkII.MovementInterferenceComponent.OnMoveForwardInput
// (Final, Native, Private)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMovementInterferenceComponent::OnMoveForwardInput(float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInputMkII.MovementInterferenceComponent.OnMoveForwardInput"));

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
