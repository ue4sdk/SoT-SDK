#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameLiveStreaming_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params
{
};

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params
{
	int                                                FrameRate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenScaling;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableWebCam;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DesiredWebCamWidth;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DesiredWebCamHeight;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMirrorWebCamImage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCaptureAudioFromComputer;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCaptureAudioFromMicrophone;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawSimpleWebCamVideo;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
struct UQueryLiveStreamsCallbackProxy_QueryLiveStreams_Params
{
	class FString                                      GameName;                                                 // (Parm, ZeroConstructor)
	class UQueryLiveStreamsCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
