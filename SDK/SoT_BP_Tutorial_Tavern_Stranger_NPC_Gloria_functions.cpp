// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Tutorial_Tavern_Stranger_NPC_Gloria_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Tutorial_Tavern_Stranger_NPC_Gloria.BP_Tutorial_Tavern_Stranger_NPC_Gloria_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Tutorial_Tavern_Stranger_NPC_Gloria_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Tutorial_Tavern_Stranger_NPC_Gloria.BP_Tutorial_Tavern_Stranger_NPC_Gloria_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
