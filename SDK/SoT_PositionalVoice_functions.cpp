// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PositionalVoice_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector UVoiceChatEmitterInterface::GetVoiceLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation"));

	UVoiceChatEmitterInterface_GetVoiceLocation_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FWwiseEmitter                  EmitterProxy                   (Parm, OutParm)

void UVoiceChatEmitterInterface::GetVoiceAudioEmitterProxy(FWwiseEmitter* EmitterProxy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAttenuationScaler"));

	UVoiceChatEmitterInterface_GetVoiceAttenuationScaler_Params params;
	params.RelativeToThisEmitter = RelativeToThisEmitter;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
