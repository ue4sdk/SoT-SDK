// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Cleanliness_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cleanliness.CleanlinessComponent.OnRep_CleanlinessInfo
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FCleanlinessInfo        PreviousInfo                   (ConstParm, Parm, OutParm, ReferenceParm)

void UCleanlinessComponent::OnRep_CleanlinessInfo(const struct FCleanlinessInfo& PreviousInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Cleanliness.CleanlinessComponent.OnRep_CleanlinessInfo"));

	struct
	{
		struct FCleanlinessInfo        PreviousInfo;
	} params;

	params.PreviousInfo = PreviousInfo;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
