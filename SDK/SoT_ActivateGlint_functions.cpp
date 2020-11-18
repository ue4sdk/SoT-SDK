// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ActivateGlint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActivateGlint.ActivateGlint_C.ActivateGlintOnObject
// (Public, BlueprintCallable, BlueprintEvent)

void UActivateGlint_C::ActivateGlintOnObject()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActivateGlint.ActivateGlint_C.ActivateGlintOnObject"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
