// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_OceanCrawlers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayBuffAudio
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// struct FEventOceanCrawlerAIBuffAudioRequest InRequest                      (ConstParm, Parm, ReferenceParm)

void UOceanCrawlerAudioBroadcaster::Multicast_PlayBuffAudio(const struct FEventOceanCrawlerAIBuffAudioRequest& InRequest)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayBuffAudio"));

	struct
	{
		struct FEventOceanCrawlerAIBuffAudioRequest InRequest;
	} params;

	params.InRequest = InRequest;

	UObject::ProcessEvent(fn, &params);
}


// Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayAudio
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// TEnumAsByte<EOceanCrawlerAbilityAudioKey> InAudioKey                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InAudioDelay                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UOceanCrawlerAudioBroadcaster::Multicast_PlayAudio(TEnumAsByte<EOceanCrawlerAbilityAudioKey> InAudioKey, float InAudioDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayAudio"));

	struct
	{
		TEnumAsByte<EOceanCrawlerAbilityAudioKey> InAudioKey;
		float                          InAudioDelay;
	} params;

	params.InAudioKey = InAudioKey;
	params.InAudioDelay = InAudioDelay;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
