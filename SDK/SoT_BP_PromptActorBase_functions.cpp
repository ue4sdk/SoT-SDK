// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActorBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializePrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PromptCoordinator_Base_C* PromptCoordinator              (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActorBase_C::UninitializePrompt(class UBP_PromptCoordinator_Base_C* PromptCoordinator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializePrompt"));

	struct
	{
		class UBP_PromptCoordinator_Base_C* PromptCoordinator;
	} params;

	params.PromptCoordinator = PromptCoordinator;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializeAllPrompts
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PromptActorBase_C::UninitializeAllPrompts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializeAllPrompts"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.CheckAllPromptsComplete
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           AllCompleted                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActorBase_C::CheckAllPromptsComplete(bool* AllCompleted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.CheckAllPromptsComplete"));

	struct
	{
		bool                           AllCompleted;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AllCompleted != nullptr)
		*AllCompleted = params.AllCompleted;
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.Complete
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PromptActorBase_C::Complete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.Complete"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.GetMyClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Class                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActorBase_C::GetMyClass(class UClass** Class)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.GetMyClass"));

	struct
	{
		class UClass*                  Class;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Class != nullptr)
		*Class = params.Class;
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.GetAthenaPlayerController
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AAthenaPlayerController* AthenaPlayerController         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActorBase_C::GetAthenaPlayerController(class AAthenaPlayerController** AthenaPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.GetAthenaPlayerController"));

	struct
	{
		class AAthenaPlayerController* AthenaPlayerController;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AthenaPlayerController != nullptr)
		*AthenaPlayerController = params.AthenaPlayerController;
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PromptActorBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.Add Prompt Coordinator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PromptCoordinator_Base_C* Prompt_Coordinator             (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActorBase_C::Add_Prompt_Coordinator(class UBP_PromptCoordinator_Base_C* Prompt_Coordinator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.Add Prompt Coordinator"));

	struct
	{
		class UBP_PromptCoordinator_Base_C* Prompt_Coordinator;
	} params;

	params.Prompt_Coordinator = Prompt_Coordinator;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.On Prompt Complete
// (BlueprintCallable, BlueprintEvent)

void ABP_PromptActorBase_C::On_Prompt_Complete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.On Prompt Complete"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActorBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.ExecuteUbergraph_BP_PromptActorBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActorBase_C::ExecuteUbergraph_BP_PromptActorBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.ExecuteUbergraph_BP_PromptActorBase"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.OnComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PromptActorBase_C::OnComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.OnComplete__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
