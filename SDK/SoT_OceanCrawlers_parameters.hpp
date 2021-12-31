#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_OceanCrawlers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayBuffAudio
struct UOceanCrawlerAudioBroadcaster_Multicast_PlayBuffAudio_Params
{
	FEventOceanCrawlerAIBuffAudioRequest               InRequest;                                                // (ConstParm, Parm, ReferenceParm)
};

// Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayAudio
struct UOceanCrawlerAudioBroadcaster_Multicast_PlayAudio_Params
{
	TEnumAsByte<EOceanCrawlerAbilityAudioKey>          InAudioKey;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InAudioDelay;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
