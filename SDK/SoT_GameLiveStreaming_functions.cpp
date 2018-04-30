// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameLiveStreaming_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
// (Final, Native, Static, Public, BlueprintCallable)

void UGameLiveStreamingFunctionLibrary::STATIC_StopBroadcastingGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame");

	UGameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            FrameRate                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScreenScaling                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnableWebCam                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            DesiredWebCamWidth             (Parm, ZeroConstructor, IsPlainOldData)
// int                            DesiredWebCamHeight            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMirrorWebCamImage             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCaptureAudioFromComputer      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCaptureAudioFromMicrophone    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDrawSimpleWebCamVideo         (Parm, ZeroConstructor, IsPlainOldData)

void UGameLiveStreamingFunctionLibrary::STATIC_StartBroadcastingGame(int FrameRate, float ScreenScaling, bool bEnableWebCam, int DesiredWebCamWidth, int DesiredWebCamHeight, bool bMirrorWebCamImage, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, bool bDrawSimpleWebCamVideo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame");

	UGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params params;
	params.FrameRate = FrameRate;
	params.ScreenScaling = ScreenScaling;
	params.bEnableWebCam = bEnableWebCam;
	params.DesiredWebCamWidth = DesiredWebCamWidth;
	params.DesiredWebCamHeight = DesiredWebCamHeight;
	params.bMirrorWebCamImage = bMirrorWebCamImage;
	params.bCaptureAudioFromComputer = bCaptureAudioFromComputer;
	params.bCaptureAudioFromMicrophone = bCaptureAudioFromMicrophone;
	params.bDrawSimpleWebCamVideo = bDrawSimpleWebCamVideo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameLiveStreamingFunctionLibrary::STATIC_IsBroadcastingGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame");

	UGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  GameName                       (Parm, ZeroConstructor)
// class UQueryLiveStreamsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UQueryLiveStreamsCallbackProxy* UQueryLiveStreamsCallbackProxy::STATIC_QueryLiveStreams(const class FString& GameName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams");

	UQueryLiveStreamsCallbackProxy_QueryLiveStreams_Params params;
	params.GameName = GameName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
