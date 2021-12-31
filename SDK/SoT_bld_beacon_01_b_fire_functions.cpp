// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bld_beacon_01_b_fire_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bld_beacon_01_b_fire.bld_beacon_01_b_fire_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abld_beacon_01_b_fire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bld_beacon_01_b_fire.bld_beacon_01_b_fire_C.UserConstructionScript"));

	Abld_beacon_01_b_fire_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function bld_beacon_01_b_fire.bld_beacon_01_b_fire_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Abld_beacon_01_b_fire_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bld_beacon_01_b_fire.bld_beacon_01_b_fire_C.ReceiveBeginPlay"));

	Abld_beacon_01_b_fire_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function bld_beacon_01_b_fire.bld_beacon_01_b_fire_C.ExecuteUbergraph_bld_beacon_01_b_fire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Abld_beacon_01_b_fire_C::ExecuteUbergraph_bld_beacon_01_b_fire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bld_beacon_01_b_fire.bld_beacon_01_b_fire_C.ExecuteUbergraph_bld_beacon_01_b_fire"));

	Abld_beacon_01_b_fire_C_ExecuteUbergraph_bld_beacon_01_b_fire_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
