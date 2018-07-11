// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shipwright_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Shipwright.BP_Shipwright_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Shipwright_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shipwright.BP_Shipwright_C.UserConstructionScript");

	ABP_Shipwright_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Shipwright.BP_Shipwright_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Shipwright_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shipwright.BP_Shipwright_C.ReceiveBeginPlay");

	ABP_Shipwright_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Shipwright.BP_Shipwright_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Shipwright_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shipwright.BP_Shipwright_C.ReceiveEndPlay");

	ABP_Shipwright_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Shipwright.BP_Shipwright_C.ExecuteUbergraph_BP_Shipwright
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Shipwright_C::ExecuteUbergraph_BP_Shipwright(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shipwright.BP_Shipwright_C.ExecuteUbergraph_BP_Shipwright");

	ABP_Shipwright_C_ExecuteUbergraph_BP_Shipwright_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
