#pragma once

// Sea of Thieves (2.0) SDK

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
	struct FEventOceanCrawlerAIAbilityAudioRequest     OceanCrawlerAIAbilityToBroadcast;                         // 0x0060(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OceanCrawlers.BTTask_BroadcastOceanCrawlerAbilityAudioEvent"));
		return ptr;
	}

};


// Class OceanCrawlers.OceanCrawlerAudioParamsDataAsset
// 0x0028 (0x0050 - 0x0028)
class UOceanCrawlerAudioParamsDataAsset : public UDataAsset
{
public:
	class UWwiseEvent*                                 StartHermitBurrowingLoop;                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopHermitBurrowingLoop;                                  // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayHermitBurrowDownOneShot;                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayHermitBurrowEmergeOneShot;                            // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayHermitBurrowHealTargetOneShot;                        // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OceanCrawlers.OceanCrawlerAudioParamsDataAsset"));
		return ptr;
	}

};


// Class OceanCrawlers.OceanCrawlerAudioComponent
// 0x0050 (0x0310 - 0x02C0)
class UOceanCrawlerAudioComponent : public UAICharacterAudioComponent
{
public:
	class AActor*                                      CachedOwner;                                              // 0x02C0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x02C8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OceanCrawlers.OceanCrawlerAudioComponent"));
		return ptr;
	}


	void Multicast_PlayAudio_StopHermitBurrowingLoop();
	void Multicast_PlayAudio_StartHermitBurrowingLoop();
	void Multicast_PlayAudio_PlayHermitBurrowHealTargetOneShot();
	void Multicast_PlayAudio_PlayHermitBurrowEmergeOneShot();
	void Multicast_PlayAudio_PlayHermitBurrowDownOneShot();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
