// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WSP_Portal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WSP_Portal.WSP_Portal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWSP_Portal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WSP_Portal.WSP_Portal_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
