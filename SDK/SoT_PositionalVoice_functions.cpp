// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PositionalVoice_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UVoiceChatEmitterInterface::GetVoiceLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation"));

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           EmitterProxy                   (Parm, OutParm)

void UVoiceChatEmitterInterface::GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy"));

	struct
	{
		struct FWwiseEmitter           EmitterProxy;
	} params;


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

	struct
	{
		TScriptInterface<class UVoiceChatEmitterInterface> RelativeToThisEmitter;
		float                          ReturnValue;
	} params;

	params.RelativeToThisEmitter = RelativeToThisEmitter;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
