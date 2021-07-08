// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CompanyOnboardingStarter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CompanyOnboardingStarter.BP_CompanyOnboardingStarter_C.HasPrerequisites
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_CompanyOnboardingStarter_C::HasPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CompanyOnboardingStarter.BP_CompanyOnboardingStarter_C.HasPrerequisites"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
