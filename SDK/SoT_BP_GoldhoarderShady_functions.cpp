// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GoldhoarderShady_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GoldhoarderShady.BP_GoldhoarderShady_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GoldhoarderShady_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoldhoarderShady.BP_GoldhoarderShady_C.UserConstructionScript");

	ABP_GoldhoarderShady_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GoldhoarderShady.BP_GoldhoarderShady_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_GoldhoarderShady_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoldhoarderShady.BP_GoldhoarderShady_C.ReceiveBeginPlay");

	ABP_GoldhoarderShady_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GoldhoarderShady.BP_GoldhoarderShady_C.ExecuteUbergraph_BP_GoldhoarderShady
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GoldhoarderShady_C::ExecuteUbergraph_BP_GoldhoarderShady(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoldhoarderShady.BP_GoldhoarderShady_C.ExecuteUbergraph_BP_GoldhoarderShady");

	ABP_GoldhoarderShady_C_ExecuteUbergraph_BP_GoldhoarderShady_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
