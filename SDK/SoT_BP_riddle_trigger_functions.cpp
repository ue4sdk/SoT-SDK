// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_riddle_trigger_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_riddle_trigger.BP_riddle_trigger_C.Destroy
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_riddle_trigger_C::Destroy()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_riddle_trigger.BP_riddle_trigger_C.Destroy"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_riddle_trigger.BP_riddle_trigger_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_riddle_trigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_riddle_trigger.BP_riddle_trigger_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
