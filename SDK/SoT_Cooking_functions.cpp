// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Cooking_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cooking.CookerComponent.OnRep_CookingState
// (Final, Native, Private, HasOutParms)
// Parameters:
// FCookingClientRepresentation   OldRepresentation              (ConstParm, Parm, OutParm, ReferenceParm)

void UCookerComponent::OnRep_CookingState(const FCookingClientRepresentation& OldRepresentation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Cooking.CookerComponent.OnRep_CookingState"));

	UCookerComponent_OnRep_CookingState_Params params;
	params.OldRepresentation = OldRepresentation;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
