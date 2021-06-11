// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Cooking_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cooking.CookerComponent.OnRep_CookingState
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FCookingClientRepresentation OldRepresentation              (ConstParm, Parm, OutParm, ReferenceParm)

void UCookerComponent::OnRep_CookingState(const struct FCookingClientRepresentation& OldRepresentation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Cooking.CookerComponent.OnRep_CookingState"));

	struct
	{
		struct FCookingClientRepresentation OldRepresentation;
	} params;

	params.OldRepresentation = OldRepresentation;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
