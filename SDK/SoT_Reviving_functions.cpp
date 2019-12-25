// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Reviving_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Reviving.ReviveComponent.OnRep_ReviveState
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<EReviveState>      PreviousReviveState            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UReviveComponent::OnRep_ReviveState(TEnumAsByte<EReviveState> PreviousReviveState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Reviving.ReviveComponent.OnRep_ReviveState"));

	struct
	{
		TEnumAsByte<EReviveState>      PreviousReviveState;
	} params;

	params.PreviousReviveState = PreviousReviveState;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
