#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaInput_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaInput.CompositeInputHandler.SetNotificationInputHandler
struct UCompositeInputHandler_SetNotificationInputHandler_Params
{
	class UClass*                                      Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Handler;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaInput.CompositeInputHandler.SetAnalogInputHandler
struct UCompositeInputHandler_SetAnalogInputHandler_Params
{
	class UClass*                                      Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Handler;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaInput.InputBinder.SpoofNotificationInput
struct UInputBinder_SpoofNotificationInput_Params
{
	class UClass*                                      Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInput.InputBinder.SpoofAnalogInput
struct UInputBinder_SpoofAnalogInput_Params
{
	class UClass*                                      Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInput.InputBinder.IsContinuousActionActive
struct UInputBinder_IsContinuousActionActive_Params
{
	class UClass*                                      BeginNotificationInputId;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaInput.InputBinder.IgnoreNonSpoofedInput
struct UInputBinder_IgnoreNonSpoofedInput_Params
{
	bool                                               InShouldIgnore;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInput.InputHandlerInterface.HandleNotificationInput
struct UInputHandlerInterface_HandleNotificationInput_Params
{
	class UClass*                                      Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaInput.InputHandlerInterface.HandleAnalogInput
struct UInputHandlerInterface_HandleAnalogInput_Params
{
	class UClass*                                      Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Input;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondNotificationHandler
struct UCompositeInputDelegatorTestsCallbackHelper_OnSecondNotificationHandler_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondHandler
struct UCompositeInputDelegatorTestsCallbackHelper_OnSecondHandler_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstNotificationHandler
struct UCompositeInputDelegatorTestsCallbackHelper_OnFirstNotificationHandler_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstHandler
struct UCompositeInputDelegatorTestsCallbackHelper_OnFirstHandler_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaInput.InputHandlerFunctionLibrary.MakeCompositeInputHandler
struct UInputHandlerFunctionLibrary_MakeCompositeInputHandler_Params
{
	class UCompositeInputHandler*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
