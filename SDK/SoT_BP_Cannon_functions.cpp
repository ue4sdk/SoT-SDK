// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Cannon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Cannon.BP_Cannon_C.GetDockableInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDockableInfo           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockableInfo ABP_Cannon_C::GetDockableInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.GetDockableInfo");

	ABP_Cannon_C_GetDockableInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Cannon.BP_Cannon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Cannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.UserConstructionScript");

	ABP_Cannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cannon.BP_Cannon_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Cannon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.ReceiveBeginPlay");

	ABP_Cannon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cannon.BP_Cannon_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Cannon_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.ReceiveEndPlay");

	ABP_Cannon_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cannon.BP_Cannon_C.CannonAimingCenteredPitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCannonAimingCenteredPitch Event                          (Parm)

void ABP_Cannon_C::CannonAimingCenteredPitch(const struct FEventCannonAimingCenteredPitch& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.CannonAimingCenteredPitch");

	ABP_Cannon_C_CannonAimingCenteredPitch_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cannon.BP_Cannon_C.CannonAimingStartedPitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCannonAimingStartedPitch Event                          (Parm)

void ABP_Cannon_C::CannonAimingStartedPitch(const struct FEventCannonAimingStartedPitch& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.CannonAimingStartedPitch");

	ABP_Cannon_C_CannonAimingStartedPitch_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cannon.BP_Cannon_C.CannonAimingStoppedPitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCannonAimingStoppedPitch Event                          (Parm)

void ABP_Cannon_C::CannonAimingStoppedPitch(const struct FEventCannonAimingStoppedPitch& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.CannonAimingStoppedPitch");

	ABP_Cannon_C_CannonAimingStoppedPitch_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cannon.BP_Cannon_C.CannonAimingCenteredYaw
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCannonAimingCenteredYaw Event                          (Parm)

void ABP_Cannon_C::CannonAimingCenteredYaw(const struct FEventCannonAimingCenteredYaw& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.CannonAimingCenteredYaw");

	ABP_Cannon_C_CannonAimingCenteredYaw_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cannon.BP_Cannon_C.CannonAimingStartedYaw
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCannonAimingStartedYaw Event                          (Parm)

void ABP_Cannon_C::CannonAimingStartedYaw(const struct FEventCannonAimingStartedYaw& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.CannonAimingStartedYaw");

	ABP_Cannon_C_CannonAimingStartedYaw_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cannon.BP_Cannon_C.CannonAimingStoppedYaw
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCannonAimingStoppedYaw Event                          (Parm)

void ABP_Cannon_C::CannonAimingStoppedYaw(const struct FEventCannonAimingStoppedYaw& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.CannonAimingStoppedYaw");

	ABP_Cannon_C_CannonAimingStoppedYaw_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cannon.BP_Cannon_C.OnCannonDescLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCannonDescAsset**       CannonDesc                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Cannon_C::OnCannonDescLoaded(class UCannonDescAsset** CannonDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.OnCannonDescLoaded");

	ABP_Cannon_C_OnCannonDescLoaded_Params params;
	params.CannonDesc = CannonDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cannon.BP_Cannon_C.ExecuteUbergraph_BP_Cannon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Cannon_C::ExecuteUbergraph_BP_Cannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.ExecuteUbergraph_BP_Cannon");

	ABP_Cannon_C_ExecuteUbergraph_BP_Cannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
