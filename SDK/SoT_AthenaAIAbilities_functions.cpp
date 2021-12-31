// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaAIAbilities_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaAIAbilities.BurrowHealVFXComponent.OnRep_IsVFXActive
// (Final, Native, Private)

void UBurrowHealVFXComponent::OnRep_IsVFXActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAIAbilities.BurrowHealVFXComponent.OnRep_IsVFXActive"));

	UBurrowHealVFXComponent_OnRep_IsVFXActive_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAIAbilities.ElectricShieldBuffComponent.OnRep_IsShieldActive
// (Final, Native, Public)

void UElectricShieldBuffComponent::OnRep_IsShieldActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAIAbilities.ElectricShieldBuffComponent.OnRep_IsShieldActive"));

	UElectricShieldBuffComponent_OnRep_IsShieldActive_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAIAbilities.ElectricShieldBuffComponent.DeactivateShield
// (Native, Public)

void UElectricShieldBuffComponent::DeactivateShield()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAIAbilities.ElectricShieldBuffComponent.DeactivateShield"));

	UElectricShieldBuffComponent_DeactivateShield_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
