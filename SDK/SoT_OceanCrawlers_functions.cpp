// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_OceanCrawlers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayAudio
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// TEnumAsByte<EOceanCrawlerAbilityAudioKey> InAudioKey                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UOceanCrawlerAudioBroadcaster::Multicast_PlayAudio(TEnumAsByte<EOceanCrawlerAbilityAudioKey> InAudioKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayAudio"));

	struct
	{
		TEnumAsByte<EOceanCrawlerAbilityAudioKey> InAudioKey;
	} params;

	params.InAudioKey = InAudioKey;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
