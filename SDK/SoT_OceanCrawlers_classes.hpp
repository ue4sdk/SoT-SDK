#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_OceanCrawlers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OceanCrawlers.BTTask_BroadcastOceanCrawlerAbilityAudioEvent
// 0x0008 (0x0068 - 0x0060)
class UBTTask_BroadcastOceanCrawlerAbilityAudioEvent : public UBTTaskNode
{
public:
	TEnumAsByte<EOceanCrawlerAbilityAudioKey>          OceanCrawlerAudioKeyToBroadcast;                          // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OceanCrawlers.BTTask_BroadcastOceanCrawlerAbilityAudioEvent"));
		return ptr;
	}

};


// Class OceanCrawlers.OceanCrawlerAudioParamsDataAsset
// 0x0078 (0x00A0 - 0x0028)
class UOceanCrawlerAudioParamsDataAsset : public UDataAsset
{
public:
	UWwiseObjectPoolWrapper*                           WwiseObjectPoolWrapper;                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FOceanCrawlerAudioKeyPair>                  AudioKeyPairs;                                            // 0x0030(0x0010) (Edit, ZeroConstructor)
	FWeightedProbabilityRangeOfRanges                  BuffThankDelay;                                           // 0x0040(0x0030) (Edit)
	FOceanCrawlerBuffAudioSettings                     CrabBuffAudioSettings;                                    // 0x0070(0x0010) (Edit)
	FOceanCrawlerBuffAudioSettings                     EelBuffAudioSettings;                                     // 0x0080(0x0010) (Edit)
	FOceanCrawlerBuffAudioSettings                     HermitBuffAudioSettings;                                  // 0x0090(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OceanCrawlers.OceanCrawlerAudioParamsDataAsset"));
		return ptr;
	}

};


// Class OceanCrawlers.OceanCrawlerAudioBroadcaster
// 0x00D8 (0x01A0 - 0x00C8)
class UOceanCrawlerAudioBroadcaster : public UActorComponent
{
public:
	UOceanCrawlerAudioParamsDataAsset*                 AudioDataAsset;                                           // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	AActor*                                            CachedOwner;                                              // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC8];                                      // 0x00D8(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OceanCrawlers.OceanCrawlerAudioBroadcaster"));
		return ptr;
	}


	void Multicast_PlayBuffAudio(const FEventOceanCrawlerAIBuffAudioRequest& InRequest);
	void Multicast_PlayAudio(TEnumAsByte<EOceanCrawlerAbilityAudioKey> InAudioKey, float InAudioDelay);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
