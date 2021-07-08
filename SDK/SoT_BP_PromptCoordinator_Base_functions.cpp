// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptCoordinator_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.IsCharacterInsideRadius
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Center                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PromptCoordinator_Base_C::IsCharacterInsideRadius(const struct FVector& Center, float Radius, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.IsCharacterInsideRadius"));

	struct
	{
		struct FVector                 Center;
		float                          Radius;
		bool                           Result;
	} params;

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetHUDObjectMessageDispatcher
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FObjectMessagingDispatcherHandle HUD_Dispatcher                 (Parm, OutParm)

void UBP_PromptCoordinator_Base_C::GetHUDObjectMessageDispatcher(struct FObjectMessagingDispatcherHandle* HUD_Dispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetHUDObjectMessageDispatcher"));

	struct
	{
		struct FObjectMessagingDispatcherHandle HUD_Dispatcher;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (HUD_Dispatcher != nullptr)
		*HUD_Dispatcher = params.HUD_Dispatcher;
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Complete
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_Base_C::Complete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Complete"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.UnregisterHandles
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_Base_C::UnregisterHandles()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.UnregisterHandles"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.PostInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_Base_C::PostInitialize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.PostInitialize"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.InitializeAndStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAthenaPlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UBP_PromptCoordinator_Base_C::InitializeAndStart(class AAthenaPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.InitializeAndStart"));

	struct
	{
		class AAthenaPlayerController* PlayerController;
	} params;

	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetCharacterObjectMessageDispatcher
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FObjectMessagingDispatcherHandle Player_Dispatcher              (Parm, OutParm)

void UBP_PromptCoordinator_Base_C::GetCharacterObjectMessageDispatcher(struct FObjectMessagingDispatcherHandle* Player_Dispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetCharacterObjectMessageDispatcher"));

	struct
	{
		struct FObjectMessagingDispatcherHandle Player_Dispatcher;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Player_Dispatcher != nullptr)
		*Player_Dispatcher = params.Player_Dispatcher;
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_Base_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetControllerObjectMessageDispatcher
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FObjectMessagingDispatcherHandle Player_Dispatcher              (Parm, OutParm)

void UBP_PromptCoordinator_Base_C::GetControllerObjectMessageDispatcher(struct FObjectMessagingDispatcherHandle* Player_Dispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetControllerObjectMessageDispatcher"));

	struct
	{
		struct FObjectMessagingDispatcherHandle Player_Dispatcher;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Player_Dispatcher != nullptr)
		*Player_Dispatcher = params.Player_Dispatcher;
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Start
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_Base_C::Start()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Start"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.ExecuteUbergraph_BP_PromptCoordinator_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_PromptCoordinator_Base_C::ExecuteUbergraph_BP_PromptCoordinator_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.ExecuteUbergraph_BP_PromptCoordinator_Base"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.OnComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_Base_C::OnComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.OnComplete__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
