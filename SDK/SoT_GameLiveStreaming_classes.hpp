#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameLiveStreaming_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameLiveStreaming.GameLiveStreamingFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameLiveStreamingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameLiveStreaming.GameLiveStreamingFunctionLibrary"));
		return ptr;
	}


	static void StopBroadcastingGame();
	static void StartBroadcastingGame(int FrameRate, float ScreenScaling, bool bEnableWebCam, int DesiredWebCamWidth, int DesiredWebCamHeight, bool bMirrorWebCamImage, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, bool bDrawSimpleWebCamVideo);
	static bool IsBroadcastingGame();
};


// Class GameLiveStreaming.QueryLiveStreamsCallbackProxy
// 0x0020 (0x0048 - 0x0028)
class UQueryLiveStreamsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnQueriedLiveStreams;                                     // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameLiveStreaming.QueryLiveStreamsCallbackProxy"));
		return ptr;
	}


	static class UQueryLiveStreamsCallbackProxy* QueryLiveStreams(const class FString& GameName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
