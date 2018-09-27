// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaLoadingScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary.IsLoadingScreenVisible
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaLoadingScreenBlueprintFunctionLibrary::STATIC_IsLoadingScreenVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary.IsLoadingScreenVisible");

	UAthenaLoadingScreenBlueprintFunctionLibrary_IsLoadingScreenVisible_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary.IsLoadingScreenRegistered
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaLoadingScreenBlueprintFunctionLibrary::STATIC_IsLoadingScreenRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary.IsLoadingScreenRegistered");

	UAthenaLoadingScreenBlueprintFunctionLibrary_IsLoadingScreenRegistered_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaLoadingScreen.LoadingUtilities.IsStreaming
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULoadingUtilities::STATIC_IsStreaming(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLoadingScreen.LoadingUtilities.IsStreaming");

	ULoadingUtilities_IsStreaming_Params params;
	params.WorldContextObject = WorldContextObject;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
