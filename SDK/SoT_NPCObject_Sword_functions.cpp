// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NPCObject_Sword_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NPCObject_Sword.NPCObject_Sword_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANPCObject_Sword_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NPCObject_Sword.NPCObject_Sword_C.UserConstructionScript"));

	ANPCObject_Sword_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
