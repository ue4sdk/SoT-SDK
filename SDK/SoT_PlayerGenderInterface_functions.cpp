// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PlayerGenderInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerGenderInterface.PlayerGenderInterface_C.CheckIsFemale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFemale                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerGenderInterface_C::CheckIsFemale(bool* IsFemale)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayerGenderInterface.PlayerGenderInterface_C.CheckIsFemale"));

	struct
	{
		bool                           IsFemale;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsFemale != nullptr)
		*IsFemale = params.IsFemale;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
