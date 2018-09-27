#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PositionalVoice_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetNumberOfUnmutedRemotePlayers
struct UPositionalVoiceTestFunctionLibrary_GetNumberOfUnmutedRemotePlayers_Params
{
	class APlayerController*                           CurrentPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetNumberOfRegisteredChatEmitters
struct UPositionalVoiceTestFunctionLibrary_GetNumberOfRegisteredChatEmitters_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      VoiceChatRendererClass;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetMaxNumberOfAudibleChatEmitters
struct UPositionalVoiceTestFunctionLibrary_GetMaxNumberOfAudibleChatEmitters_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation
struct UVoiceChatEmitterInterface_GetVoiceLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy
struct UVoiceChatEmitterInterface_GetVoiceAudioEmitterProxy_Params
{
	struct FWwiseEmitter                               EmitterProxy;                                             // (Parm, OutParm)
};

// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAttenuationScaler
struct UVoiceChatEmitterInterface_GetVoiceAttenuationScaler_Params
{
	TScriptInterface<class UVoiceChatEmitterInterface> RelativeToThisEmitter;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PositionalVoice.TestVoiceChatEmitter.GetVoiceLocation
struct ATestVoiceChatEmitter_GetVoiceLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PositionalVoice.TestVoiceChatEmitter.GetVoiceAudioEmitterProxy
struct ATestVoiceChatEmitter_GetVoiceAudioEmitterProxy_Params
{
	struct FWwiseEmitter                               EmitterProxy;                                             // (Parm, OutParm)
};

// Function PositionalVoice.TestVoiceChatEmitter.GetVoiceAttenuationScaler
struct ATestVoiceChatEmitter_GetVoiceAttenuationScaler_Params
{
	TScriptInterface<class UVoiceChatEmitterInterface> RelativeToThisEmitter;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
