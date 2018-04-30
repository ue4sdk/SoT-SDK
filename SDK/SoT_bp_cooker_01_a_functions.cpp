// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bp_cooker_01_a_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_cooker_01_a.bp_cooker_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_cooker_01_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_cooker_01_a.bp_cooker_01_a_C.UserConstructionScript");

	Abp_cooker_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_cooker_01_a.bp_cooker_01_a_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Abp_cooker_01_a_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_cooker_01_a.bp_cooker_01_a_C.ReceiveBeginPlay");

	Abp_cooker_01_a_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_cooker_01_a.bp_cooker_01_a_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void Abp_cooker_01_a_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_cooker_01_a.bp_cooker_01_a_C.ReceiveTick");

	Abp_cooker_01_a_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_cooker_01_a.bp_cooker_01_a_C.ExecuteUbergraph_bp_cooker_01_a
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Abp_cooker_01_a_C::ExecuteUbergraph_bp_cooker_01_a(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_cooker_01_a.bp_cooker_01_a_C.ExecuteUbergraph_bp_cooker_01_a");

	Abp_cooker_01_a_C_ExecuteUbergraph_bp_cooker_01_a_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
