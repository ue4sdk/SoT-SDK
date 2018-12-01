// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PositionalVoice_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetNumberOfUnmutedRemotePlayers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       CurrentPlayer                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPositionalVoiceTestFunctionLibrary::STATIC_GetNumberOfUnmutedRemotePlayers(class APlayerController* CurrentPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetNumberOfUnmutedRemotePlayers");

	UPositionalVoiceTestFunctionLibrary_GetNumberOfUnmutedRemotePlayers_Params params;
	params.CurrentPlayer = CurrentPlayer;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetNumberOfRegisteredChatEmitters
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  VoiceChatRendererClass         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPositionalVoiceTestFunctionLibrary::STATIC_GetNumberOfRegisteredChatEmitters(class UObject* WorldContextObject, class UClass* VoiceChatRendererClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetNumberOfRegisteredChatEmitters");

	UPositionalVoiceTestFunctionLibrary_GetNumberOfRegisteredChatEmitters_Params params;
	params.WorldContextObject = WorldContextObject;
	params.VoiceChatRendererClass = VoiceChatRendererClass;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetMaxNumberOfAudibleChatEmitters
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPositionalVoiceTestFunctionLibrary::STATIC_GetMaxNumberOfAudibleChatEmitters()
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetMaxNumberOfAudibleChatEmitters");

	UPositionalVoiceTestFunctionLibrary_GetMaxNumberOfAudibleChatEmitters_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UVoiceChatEmitterInterface::GetVoiceLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation");

	UVoiceChatEmitterInterface_GetVoiceLocation_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           EmitterProxy                   (Parm, OutParm)

void UVoiceChatEmitterInterface::GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy)
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy");

	UVoiceChatEmitterInterface_GetVoiceAudioEmitterProxy_Params params;

	UObject::ProcessEvent(fn, &params);

	if (EmitterProxy != nullptr)
		*EmitterProxy = params.EmitterProxy;
}


// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAttenuationScaler
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class UVoiceChatEmitterInterface> RelativeToThisEmitter          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVoiceChatEmitterInterface::GetVoiceAttenuationScaler(const TScriptInterface<class UVoiceChatEmitterInterface>& RelativeToThisEmitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAttenuationScaler");

	UVoiceChatEmitterInterface_GetVoiceAttenuationScaler_Params params;
	params.RelativeToThisEmitter = RelativeToThisEmitter;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PositionalVoice.TestVoiceChatEmitter.GetVoiceLocation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ATestVoiceChatEmitter::GetVoiceLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.TestVoiceChatEmitter.GetVoiceLocation");

	ATestVoiceChatEmitter_GetVoiceLocation_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PositionalVoice.TestVoiceChatEmitter.GetVoiceAudioEmitterProxy
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           EmitterProxy                   (Parm, OutParm)

void ATestVoiceChatEmitter::GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy)
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.TestVoiceChatEmitter.GetVoiceAudioEmitterProxy");

	ATestVoiceChatEmitter_GetVoiceAudioEmitterProxy_Params params;

	UObject::ProcessEvent(fn, &params);

	if (EmitterProxy != nullptr)
		*EmitterProxy = params.EmitterProxy;
}


// Function PositionalVoice.TestVoiceChatEmitter.GetVoiceAttenuationScaler
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class UVoiceChatEmitterInterface> RelativeToThisEmitter          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestVoiceChatEmitter::GetVoiceAttenuationScaler(const TScriptInterface<class UVoiceChatEmitterInterface>& RelativeToThisEmitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.TestVoiceChatEmitter.GetVoiceAttenuationScaler");

	ATestVoiceChatEmitter_GetVoiceAttenuationScaler_Params params;
	params.RelativeToThisEmitter = RelativeToThisEmitter;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
