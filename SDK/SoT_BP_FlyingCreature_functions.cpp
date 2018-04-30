// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FlyingCreature_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FlyingCreature.BP_FlyingCreature_C.CreateCreature
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FlyingCreature_C::CreateCreature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingCreature.BP_FlyingCreature_C.CreateCreature");

	ABP_FlyingCreature_C_CreateCreature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlyingCreature.BP_FlyingCreature_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FlyingCreature_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingCreature.BP_FlyingCreature_C.UserConstructionScript");

	ABP_FlyingCreature_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
