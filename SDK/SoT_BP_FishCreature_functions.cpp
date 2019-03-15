// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishCreature_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FishCreature.BP_FishCreature_C.ConfigureMaterialInstance
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FishCreature_C::ConfigureMaterialInstance()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FishCreature.BP_FishCreature_C.ConfigureMaterialInstance"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FishCreature.BP_FishCreature_C.CreateCreature
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FishCreature_C::CreateCreature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FishCreature.BP_FishCreature_C.CreateCreature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FishCreature.BP_FishCreature_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FishCreature_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FishCreature.BP_FishCreature_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
