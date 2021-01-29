// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaAIAbilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaAIAbilities.ElectricShieldBuffComponent.OnRep_IsShieldActive
// (Final, Native, Public)

void UElectricShieldBuffComponent::OnRep_IsShieldActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAIAbilities.ElectricShieldBuffComponent.OnRep_IsShieldActive"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAIAbilities.ElectricShieldBuffComponent.DeactivateShield
// (Native, Public)

void UElectricShieldBuffComponent::DeactivateShield()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAIAbilities.ElectricShieldBuffComponent.DeactivateShield"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
