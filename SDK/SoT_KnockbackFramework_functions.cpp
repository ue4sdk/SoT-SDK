// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_KnockbackFramework_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KnockbackFramework.KnockbackColliderComponent.OnRep_SolidState
// (Final, Native, Private)

void UKnockbackColliderComponent::OnRep_SolidState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KnockbackFramework.KnockbackColliderComponent.OnRep_SolidState"));

	UKnockbackColliderComponent_OnRep_SolidState_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
