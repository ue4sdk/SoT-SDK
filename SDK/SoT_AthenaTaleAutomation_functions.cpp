// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaTaleAutomation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaTaleAutomation.TaleQuestAutomationService.GetPuppet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AAthenaPlayerCharacter*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AAthenaPlayerCharacter* UTaleQuestAutomationService::GetPuppet()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaTaleAutomation.TaleQuestAutomationService.GetPuppet"));

	struct
	{
		class AAthenaPlayerCharacter*  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
