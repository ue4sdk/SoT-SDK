// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaInput_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaInput.CompositeInputHandler.SetNotificationInputHandler
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UClass*                        Id                             (Parm, ZeroConstructor, IsPlainOldData)
// FScriptDelegate                Handler                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCompositeInputHandler::SetNotificationInputHandler(UClass* Id, const FScriptDelegate& Handler)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.CompositeInputHandler.SetNotificationInputHandler"));

	UCompositeInputHandler_SetNotificationInputHandler_Params params;
	params.Id = Id;
	params.Handler = Handler;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaInput.CompositeInputHandler.SetAnalogInputHandler
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UClass*                        Id                             (Parm, ZeroConstructor, IsPlainOldData)
// FScriptDelegate                Handler                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCompositeInputHandler::SetAnalogInputHandler(UClass* Id, const FScriptDelegate& Handler)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.CompositeInputHandler.SetAnalogInputHandler"));

	UCompositeInputHandler_SetAnalogInputHandler_Params params;
	params.Id = Id;
	params.Handler = Handler;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaInput.InputBinder.SpoofNotificationInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UClass*                        Id                             (Parm, ZeroConstructor, IsPlainOldData)

void UInputBinder::SpoofNotificationInput(UClass* Id)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.InputBinder.SpoofNotificationInput"));

	UInputBinder_SpoofNotificationInput_Params params;
	params.Id = Id;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaInput.InputBinder.SpoofAnalogInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UClass*                        Id                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UInputBinder::SpoofAnalogInput(UClass* Id, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.InputBinder.SpoofAnalogInput"));

	UInputBinder_SpoofAnalogInput_Params params;
	params.Id = Id;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaInput.InputBinder.IsContinuousActionActive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UClass*                        BeginNotificationInputId       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInputBinder::IsContinuousActionActive(UClass* BeginNotificationInputId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.InputBinder.IsContinuousActionActive"));

	UInputBinder_IsContinuousActionActive_Params params;
	params.BeginNotificationInputId = BeginNotificationInputId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaInput.InputBinder.IgnoreNonSpoofedInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InShouldIgnore                 (Parm, ZeroConstructor, IsPlainOldData)

void UInputBinder::IgnoreNonSpoofedInput(bool InShouldIgnore)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.InputBinder.IgnoreNonSpoofedInput"));

	UInputBinder_IgnoreNonSpoofedInput_Params params;
	params.InShouldIgnore = InShouldIgnore;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaInput.InputHandlerInterface.HandleNotificationInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UClass*                        Id                             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EInputHandlerResult> UInputHandlerInterface::HandleNotificationInput(UClass* Id)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.InputHandlerInterface.HandleNotificationInput"));

	UInputHandlerInterface_HandleNotificationInput_Params params;
	params.Id = Id;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaInput.InputHandlerInterface.HandleAnalogInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UClass*                        Id                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Input                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EInputHandlerResult> UInputHandlerInterface::HandleAnalogInput(UClass* Id, float Input)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.InputHandlerInterface.HandleAnalogInput"));

	UInputHandlerInterface_HandleAnalogInput_Params params;
	params.Id = Id;
	params.Input = Input;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondNotificationHandler
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EInputHandlerResult> UCompositeInputDelegatorTestsCallbackHelper::OnSecondNotificationHandler()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondNotificationHandler"));

	UCompositeInputDelegatorTestsCallbackHelper_OnSecondNotificationHandler_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondHandler
// (Final, Native, Public)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EInputHandlerResult> UCompositeInputDelegatorTestsCallbackHelper::OnSecondHandler(float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondHandler"));

	UCompositeInputDelegatorTestsCallbackHelper_OnSecondHandler_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstNotificationHandler
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EInputHandlerResult> UCompositeInputDelegatorTestsCallbackHelper::OnFirstNotificationHandler()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstNotificationHandler"));

	UCompositeInputDelegatorTestsCallbackHelper_OnFirstNotificationHandler_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstHandler
// (Final, Native, Public)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EInputHandlerResult> UCompositeInputDelegatorTestsCallbackHelper::OnFirstHandler(float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstHandler"));

	UCompositeInputDelegatorTestsCallbackHelper_OnFirstHandler_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaInput.InputHandlerFunctionLibrary.MakeCompositeInputHandler
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UCompositeInputHandler*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UCompositeInputHandler* UInputHandlerFunctionLibrary::MakeCompositeInputHandler()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.InputHandlerFunctionLibrary.MakeCompositeInputHandler"));

	UInputHandlerFunctionLibrary_MakeCompositeInputHandler_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaInput.NamedNotificationInputInterface.GetNotificationInputDisplayName
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// UClass*                        InputID                        (Parm, ZeroConstructor, IsPlainOldData)
// FText                          ReturnValue                    (Parm, OutParm, ReturnParm)

FText UNamedNotificationInputInterface::GetNotificationInputDisplayName(UClass* InputID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.NamedNotificationInputInterface.GetNotificationInputDisplayName"));

	UNamedNotificationInputInterface_GetNotificationInputDisplayName_Params params;
	params.InputID = InputID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
