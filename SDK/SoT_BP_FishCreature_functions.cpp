// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishCreature_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FishCreature.BP_FishCreature_C.CreateCreature
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FishCreature_C::CreateCreature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishCreature.BP_FishCreature_C.CreateCreature");

	ABP_FishCreature_C_CreateCreature_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FishCreature.BP_FishCreature_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FishCreature_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishCreature.BP_FishCreature_C.UserConstructionScript");

	ABP_FishCreature_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
