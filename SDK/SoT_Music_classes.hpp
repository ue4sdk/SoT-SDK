#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Music_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Music.MusicZoneInterface
// 0x0000 (0x0028 - 0x0028)
class UMusicZoneInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Music.MusicZoneInterface"));
		return ptr;
	}


	bool CanPlayForPlayer(class AActor* Player);
};


// Class Music.MusicZoneComponent
// 0x00B0 (0x0340 - 0x0290)
class UMusicZoneComponent : public USceneComponent
{
public:
	float                                              InnerRadius;                                              // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LocationRTPC;                                             // 0x0298(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               LocalRTPC;                                                // 0x02A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	class UWwiseEvent*                                 PlayEvent;                                                // 0x02A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopEvent;                                                // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UWwiseEvent*>                         OneShotEvents;                                            // 0x02B8(0x0010) (Edit, ZeroConstructor)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                              // 0x02C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DisableAfterPlayThrough;                                  // 0x02D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ActivateOnBeginPlay;                                      // 0x02D1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6E];                                      // 0x02D2(0x006E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Music.MusicZoneComponent"));
		return ptr;
	}


	struct FWwiseEmitter GetEmitter();
	void DisableZone();
	void Client_StopMusicAndDisableZone();
	void Client_PlayOneShot(int Index);
	void ActivateZone();
};


// Class Music.AISpawnerMusicZoneComponent
// 0x0020 (0x0360 - 0x0340)
class UAISpawnerMusicZoneComponent : public UMusicZoneComponent
{
public:
	class UAISpawner*                                  AISpawner;                                                // 0x0340(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class APawn*>                               SpawnerPawns;                                             // 0x0348(0x0010) (Net, ZeroConstructor)
	TEnumAsByte<EAISpawnerMusicZoneState>              SpawnerState;                                             // 0x0358(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Music.AISpawnerMusicZoneComponent"));
		return ptr;
	}


	void OnRep_SpawnerState();
};


// Class Music.SynchedMusicZoneComponent
// 0x0030 (0x0370 - 0x0340)
class USynchedMusicZoneComponent : public UMusicZoneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0340(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Music.SynchedMusicZoneComponent"));
		return ptr;
	}

};


// Class Music.MusicZoneServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UMusicZoneServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Music.MusicZoneServiceInterface"));
		return ptr;
	}

};


// Class Music.MusicZoneService
// 0x00A8 (0x0518 - 0x0470)
class AMusicZoneService : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0470(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Music.MusicZoneService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
