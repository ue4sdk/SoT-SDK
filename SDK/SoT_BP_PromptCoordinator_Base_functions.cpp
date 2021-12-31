// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptCoordinator_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.IsCharacterInsideRadius
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// FVector                        Center                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PromptCoordinator_Base_C::IsCharacterInsideRadius(const FVector& Center, float Radius, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.IsCharacterInsideRadius"));

	UBP_PromptCoordinator_Base_C_IsCharacterInsideRadius_Params params;
	params.Center = Center;
	params.Radius = Radius;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.UninitializeImplementable
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_Base_C::UninitializeImplementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.UninitializeImplementable"));

	UBP_PromptCoordinator_Base_C_UninitializeImplementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetHUDObjectMessageDispatcher
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// FObjectMessagingDispatcherHandle HUD_Dispatcher                 (Parm, OutParm)

void UBP_PromptCoordinator_Base_C::GetHUDObjectMessageDispatcher(FObjectMessagingDispatcherHandle* HUD_Dispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetHUDObjectMessageDispatcher"));

	UBP_PromptCoordinator_Base_C_GetHUDObjectMessageDispatcher_Params params;

	UObject::ProcessEvent(fn, &params);

	if (HUD_Dispatcher != nullptr)
		*HUD_Dispatcher = params.HUD_Dispatcher;
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Complete
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_Base_C::Complete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Complete"));

	UBP_PromptCoordinator_Base_C_Complete_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.UnregisterHandles
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_Base_C::UnregisterHandles()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.UnregisterHandles"));

	UBP_PromptCoordinator_Base_C_UnregisterHandles_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.PostInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_Base_C::PostInitialize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.PostInitialize"));

	UBP_PromptCoordinator_Base_C_PostInitialize_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.InitializeAndStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// AAthenaPlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UBP_PromptCoordinator_Base_C::InitializeAndStart(AAthenaPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.InitializeAndStart"));

	UBP_PromptCoordinator_Base_C_InitializeAndStart_Params params;
	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetCharacterObjectMessageDispatcher
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// FObjectMessagingDispatcherHandle Player_Dispatcher              (Parm, OutParm)

void UBP_PromptCoordinator_Base_C::GetCharacterObjectMessageDispatcher(FObjectMessagingDispatcherHandle* Player_Dispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetCharacterObjectMessageDispatcher"));

	UBP_PromptCoordinator_Base_C_GetCharacterObjectMessageDispatcher_Params params;

	UObject::ProcessEvent(fn, &params);

	if (Player_Dispatcher != nullptr)
		*Player_Dispatcher = params.Player_Dispatcher;
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_Base_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Evaluate"));

	UBP_PromptCoordinator_Base_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetControllerObjectMessageDispatcher
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// FObjectMessagingDispatcherHandle Player_Dispatcher              (Parm, OutParm)

void UBP_PromptCoordinator_Base_C::GetControllerObjectMessageDispatcher(FObjectMessagingDispatcherHandle* Player_Dispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetControllerObjectMessageDispatcher"));

	UBP_PromptCoordinator_Base_C_GetControllerObjectMessageDispatcher_Params params;

	UObject::ProcessEvent(fn, &params);

	if (Player_Dispatcher != nullptr)
		*Player_Dispatcher = params.Player_Dispatcher;
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Start
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_Base_C::Start()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Start"));

	UBP_PromptCoordinator_Base_C_Start_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.ExecuteUbergraph_BP_PromptCoordinator_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_PromptCoordinator_Base_C::ExecuteUbergraph_BP_PromptCoordinator_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.ExecuteUbergraph_BP_PromptCoordinator_Base"));

	UBP_PromptCoordinator_Base_C_ExecuteUbergraph_BP_PromptCoordinator_Base_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.OnComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_Base_C::OnComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.OnComplete__DelegateSignature"));

	UBP_PromptCoordinator_Base_C_OnComplete__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
