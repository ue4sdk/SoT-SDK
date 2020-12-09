// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bp_fire_bin_movable_a_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_fire_bin_movable_a.bp_fire_bin_movable_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_fire_bin_movable_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bp_fire_bin_movable_a.bp_fire_bin_movable_a_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function bp_fire_bin_movable_a.bp_fire_bin_movable_a_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Abp_fire_bin_movable_a_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bp_fire_bin_movable_a.bp_fire_bin_movable_a_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function bp_fire_bin_movable_a.bp_fire_bin_movable_a_C.ExecuteUbergraph_bp_fire_bin_movable_a
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Abp_fire_bin_movable_a_C::ExecuteUbergraph_bp_fire_bin_movable_a(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bp_fire_bin_movable_a.bp_fire_bin_movable_a_C.ExecuteUbergraph_bp_fire_bin_movable_a"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
