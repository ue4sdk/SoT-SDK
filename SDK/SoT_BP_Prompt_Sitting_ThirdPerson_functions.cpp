// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_Sitting_ThirdPerson_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_Sitting_ThirdPerson_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.Evaluate"));

	UBP_Prompt_Sitting_ThirdPerson_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_Sitting_ThirdPerson_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.RegisterOtherEvents_Implementable"));

	UBP_Prompt_Sitting_ThirdPerson_C_RegisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_Sitting_ThirdPerson_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.UnregisterOtherEvents_Implementable"));

	UBP_Prompt_Sitting_ThirdPerson_C_UnregisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerEnteredSittingState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEventLocalPlayerEnteredSittingState Event                          (Parm)

void UBP_Prompt_Sitting_ThirdPerson_C::LocalPlayerEnteredSittingState(const FEventLocalPlayerEnteredSittingState& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerEnteredSittingState"));

	UBP_Prompt_Sitting_ThirdPerson_C_LocalPlayerEnteredSittingState_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerExitedSittingState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEventLocalPlayerExittedSittingState Event                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_Sitting_ThirdPerson_C::LocalPlayerExitedSittingState(const FEventLocalPlayerExittedSittingState& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerExitedSittingState"));

	UBP_Prompt_Sitting_ThirdPerson_C_LocalPlayerExitedSittingState_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerEnteredSittingThirdPersonCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEventLocalPlayerEnteredSittingThirdPersonCameraState Event                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_Sitting_ThirdPerson_C::LocalPlayerEnteredSittingThirdPersonCamera(const FEventLocalPlayerEnteredSittingThirdPersonCameraState& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerEnteredSittingThirdPersonCamera"));

	UBP_Prompt_Sitting_ThirdPerson_C_LocalPlayerEnteredSittingThirdPersonCamera_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.ExecuteUbergraph_BP_Prompt_Sitting_ThirdPerson
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_Sitting_ThirdPerson_C::ExecuteUbergraph_BP_Prompt_Sitting_ThirdPerson(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.ExecuteUbergraph_BP_Prompt_Sitting_ThirdPerson"));

	UBP_Prompt_Sitting_ThirdPerson_C_ExecuteUbergraph_BP_Prompt_Sitting_ThirdPerson_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
