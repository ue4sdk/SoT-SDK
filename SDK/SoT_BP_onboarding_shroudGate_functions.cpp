// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_onboarding_shroudGate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_onboarding_shroudGate.BP_onboarding_shroudGate_C.StopReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_onboarding_shroudGate_C::StopReaction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_onboarding_shroudGate.BP_onboarding_shroudGate_C.StopReaction"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_onboarding_shroudGate.BP_onboarding_shroudGate_C.StartReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_onboarding_shroudGate_C::StartReaction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_onboarding_shroudGate.BP_onboarding_shroudGate_C.StartReaction"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_onboarding_shroudGate.BP_onboarding_shroudGate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_onboarding_shroudGate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_onboarding_shroudGate.BP_onboarding_shroudGate_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_onboarding_shroudGate.BP_onboarding_shroudGate_C.GateOpen__FinishedFunc
// (BlueprintEvent)

void ABP_onboarding_shroudGate_C::GateOpen__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_onboarding_shroudGate.BP_onboarding_shroudGate_C.GateOpen__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_onboarding_shroudGate.BP_onboarding_shroudGate_C.GateOpen__UpdateFunc
// (BlueprintEvent)

void ABP_onboarding_shroudGate_C::GateOpen__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_onboarding_shroudGate.BP_onboarding_shroudGate_C.GateOpen__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_onboarding_shroudGate.BP_onboarding_shroudGate_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_onboarding_shroudGate_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_onboarding_shroudGate.BP_onboarding_shroudGate_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_onboarding_shroudGate.BP_onboarding_shroudGate_C.ExecuteUbergraph_BP_onboarding_shroudGate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_onboarding_shroudGate_C::ExecuteUbergraph_BP_onboarding_shroudGate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_onboarding_shroudGate.BP_onboarding_shroudGate_C.ExecuteUbergraph_BP_onboarding_shroudGate"));

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
