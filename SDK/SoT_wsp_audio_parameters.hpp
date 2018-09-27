#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_audio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function wsp_audio.wsp_audio_C.ReceiveTick
struct Awsp_audio_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function wsp_audio.wsp_audio_C.ReceiveBeginPlay
struct Awsp_audio_C_ReceiveBeginPlay_Params
{
};

// Function wsp_audio.wsp_audio_C.ExecuteUbergraph_wsp_audio
struct Awsp_audio_C_ExecuteUbergraph_wsp_audio_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
