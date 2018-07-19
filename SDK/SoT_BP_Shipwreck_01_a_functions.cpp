// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shipwreck_01_a_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Shipwreck_01_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.UserConstructionScript");

	ABP_Shipwreck_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Shipwreck_01_a_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.ReceiveBeginPlay");

	ABP_Shipwreck_01_a_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Shipwreck_01_a_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.ReceiveEndPlay");

	ABP_Shipwreck_01_a_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.OnResetTo
// (Event, Public, BlueprintEvent)

void ABP_Shipwreck_01_a_C::OnResetTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.OnResetTo");

	ABP_Shipwreck_01_a_C_OnResetTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.ExecuteUbergraph_BP_Shipwreck_01_a
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Shipwreck_01_a_C::ExecuteUbergraph_BP_Shipwreck_01_a(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.ExecuteUbergraph_BP_Shipwreck_01_a");

	ABP_Shipwreck_01_a_C_ExecuteUbergraph_BP_Shipwreck_01_a_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
