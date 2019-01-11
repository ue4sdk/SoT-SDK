// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NPCObject_Flint_classes.hpp"

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
