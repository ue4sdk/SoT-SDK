// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActorBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializePrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UBP_PromptCoordinator_Base_C*  PromptCoordinator              (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActorBase_C::UninitializePrompt(UBP_PromptCoordinator_Base_C* PromptCoordinator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializePrompt"));

	ABP_PromptActorBase_C_UninitializePrompt_Params params;
	params.PromptCoordinator = PromptCoordinator;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializeAllPrompts
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PromptActorBase_C::UninitializeAllPrompts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializeAllPrompts"));

	ABP_PromptActorBase_C_UninitializeAllPrompts_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.CheckAllPromptsComplete
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           AllCompleted                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActorBase_C::CheckAllPromptsComplete(bool* AllCompleted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.CheckAllPromptsComplete"));

	ABP_PromptActorBase_C_CheckAllPromptsComplete_Params params;

	UObject::ProcessEvent(fn, &params);

	if (AllCompleted != nullptr)
		*AllCompleted = params.AllCompleted;
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.Complete
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PromptActorBase_C::Complete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.Complete"));

	ABP_PromptActorBase_C_Complete_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.GetMyClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UClass*                        Class                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActorBase_C::GetMyClass(UClass** Class)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.GetMyClass"));

	ABP_PromptActorBase_C_GetMyClass_Params params;

	UObject::ProcessEvent(fn, &params);

	if (Class != nullptr)
		*Class = params.Class;
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.GetAthenaPlayerController
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// AAthenaPlayerController*       AthenaPlayerController         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActorBase_C::GetAthenaPlayerController(AAthenaPlayerController** AthenaPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.GetAthenaPlayerController"));

	ABP_PromptActorBase_C_GetAthenaPlayerController_Params params;

	UObject::ProcessEvent(fn, &params);

	if (AthenaPlayerController != nullptr)
		*AthenaPlayerController = params.AthenaPlayerController;
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PromptActorBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.UserConstructionScript"));

	ABP_PromptActorBase_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.Add Prompt Coordinator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// UBP_PromptCoordinator_Base_C*  Prompt_Coordinator             (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActorBase_C::Add_Prompt_Coordinator(UBP_PromptCoordinator_Base_C* Prompt_Coordinator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.Add Prompt Coordinator"));

	ABP_PromptActorBase_C_Add_Prompt_Coordinator_Params params;
	params.Prompt_Coordinator = Prompt_Coordinator;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.On Prompt Complete
// (BlueprintCallable, BlueprintEvent)

void ABP_PromptActorBase_C::On_Prompt_Complete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.On Prompt Complete"));

	ABP_PromptActorBase_C_On_Prompt_Complete_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActorBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.ReceiveEndPlay"));

	ABP_PromptActorBase_C_ReceiveEndPlay_Params params;
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

	ABP_PromptActorBase_C_ExecuteUbergraph_BP_PromptActorBase_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActorBase.BP_PromptActorBase_C.OnComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PromptActorBase_C::OnComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActorBase.BP_PromptActorBase_C.OnComplete__DelegateSignature"));

	ABP_PromptActorBase_C_OnComplete__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
