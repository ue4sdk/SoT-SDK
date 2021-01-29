// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GlitterBeard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlitterBeard.GlitterBeardTreeVisualFeedbackComponent.OnRep_NextStateEvent
// (Final, RequiredAPI, Native, Private)

void UGlitterBeardTreeVisualFeedbackComponent::OnRep_NextStateEvent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GlitterBeard.GlitterBeardTreeVisualFeedbackComponent.OnRep_NextStateEvent"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
