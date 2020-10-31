#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PositionalVoice_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PositionalVoice.VoiceChatRendererInterface
// 0x0000 (0x0028 - 0x0028)
class UVoiceChatRendererInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PositionalVoice.VoiceChatRendererInterface"));
		return ptr;
	}

};


// Class PositionalVoice.MockVoiceChatRenderer
// 0x0018 (0x0040 - 0x0028)
class UMockVoiceChatRenderer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PositionalVoice.MockVoiceChatRenderer"));
		return ptr;
	}

};


// Class PositionalVoice.VoiceChatRendererRetreivalInterface
// 0x0000 (0x0028 - 0x0028)
class UVoiceChatRendererRetreivalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PositionalVoice.VoiceChatRendererRetreivalInterface"));
		return ptr;
	}

};


// Class PositionalVoice.MockVoiceChatRendererRetriever
// 0x0010 (0x0038 - 0x0028)
class UMockVoiceChatRendererRetriever : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PositionalVoice.MockVoiceChatRendererRetriever"));
		return ptr;
	}

};


// Class PositionalVoice.VoiceChatRenderer
// 0x0158 (0x0180 - 0x0028)
class UVoiceChatRenderer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class UWwiseEvent*                                 AttenuatedVoiceEvent;                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AttenuatedAndSpatialisedVoiceEvent;                       // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 UnattenuatedVoiceEvent;                                   // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PreBufferInMilliseconds;                                  // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                ChatRoutingListenerIndex;                                 // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              EmitterHoldInSeconds;                                     // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x124];                                     // 0x005C(0x0124) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PositionalVoice.VoiceChatRenderer"));
		return ptr;
	}

};


// Class PositionalVoice.PositionalVoiceTestFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPositionalVoiceTestFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PositionalVoice.PositionalVoiceTestFunctionLibrary"));
		return ptr;
	}


	static int GetNumberOfUnmutedRemotePlayers(class APlayerController* CurrentPlayer);
	static int GetNumberOfRegisteredChatEmitters(class UObject* WorldContextObject);
	static int GetMaxNumberOfAudibleChatEmitters();
};


// Class PositionalVoice.VoiceChatEmitterInterface
// 0x0000 (0x0028 - 0x0028)
class UVoiceChatEmitterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PositionalVoice.VoiceChatEmitterInterface"));
		return ptr;
	}


	struct FVector GetVoiceLocation();
	void GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy);
	float GetVoiceAttenuationScaler(const TScriptInterface<class UVoiceChatEmitterInterface>& RelativeToThisEmitter);
};


// Class PositionalVoice.TestVoiceChatEmitter
// 0x0068 (0x04C8 - 0x0460)
class ATestVoiceChatEmitter : public AActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0460(0x0058) MISSED OFFSET
	class UWwiseObjectPoolWrapper*                     PoolWrapper;                                              // 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PositionalVoice.TestVoiceChatEmitter"));
		return ptr;
	}


	struct FVector GetVoiceLocation();
	void GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy);
	float GetVoiceAttenuationScaler(const TScriptInterface<class UVoiceChatEmitterInterface>& RelativeToThisEmitter);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
