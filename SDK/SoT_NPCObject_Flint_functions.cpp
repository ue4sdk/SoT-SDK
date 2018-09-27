// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NPCObject_Flint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NPCObject_Flint.NPCObject_Flint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANPCObject_Flint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCObject_Flint.NPCObject_Flint_C.UserConstructionScript");

	ANPCObject_Flint_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
