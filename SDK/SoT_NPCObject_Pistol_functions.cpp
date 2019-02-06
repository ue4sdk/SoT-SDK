// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NPCObject_Pistol_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NPCObject_Pistol.NPCObject_Pistol_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANPCObject_Pistol_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NPCObject_Pistol.NPCObject_Pistol_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
