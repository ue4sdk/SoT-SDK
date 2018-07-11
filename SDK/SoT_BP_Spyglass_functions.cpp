// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Spyglass_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Spyglass.BP_Spyglass_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Spyglass_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass.BP_Spyglass_C.UserConstructionScript");

	ABP_Spyglass_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spyglass.BP_Spyglass_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Spyglass_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass.BP_Spyglass_C.ReceiveTick");

	ABP_Spyglass_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spyglass.BP_Spyglass_C.ScopeOn
// (Event, Protected, BlueprintEvent)

void ABP_Spyglass_C::ScopeOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass.BP_Spyglass_C.ScopeOn");

	ABP_Spyglass_C_ScopeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spyglass.BP_Spyglass_C.ScopeOff
// (Event, Protected, BlueprintEvent)

void ABP_Spyglass_C::ScopeOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass.BP_Spyglass_C.ScopeOff");

	ABP_Spyglass_C_ScopeOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spyglass.BP_Spyglass_C.GlintOn
// (Event, Protected, BlueprintEvent)

void ABP_Spyglass_C::GlintOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass.BP_Spyglass_C.GlintOn");

	ABP_Spyglass_C_GlintOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spyglass.BP_Spyglass_C.GlintOff
// (Event, Protected, BlueprintEvent)

void ABP_Spyglass_C::GlintOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass.BP_Spyglass_C.GlintOff");

	ABP_Spyglass_C_GlintOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spyglass.BP_Spyglass_C.ForceScopeOff
// (Event, Protected, BlueprintEvent)

void ABP_Spyglass_C::ForceScopeOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass.BP_Spyglass_C.ForceScopeOff");

	ABP_Spyglass_C_ForceScopeOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spyglass.BP_Spyglass_C.ExecuteUbergraph_BP_Spyglass
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Spyglass_C::ExecuteUbergraph_BP_Spyglass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass.BP_Spyglass_C.ExecuteUbergraph_BP_Spyglass");

	ABP_Spyglass_C_ExecuteUbergraph_BP_Spyglass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
