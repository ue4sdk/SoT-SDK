#pragma once

// Sea of Thieves (2) SDK

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
// 0x00C0 (0x0370 - 0x02B0)
class UMusicZoneComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET
	float                                              InnerRadius;                                              // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LocationRTPC;                                             // 0x02C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               LocalRTPC;                                                // 0x02C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	class UWwiseEvent*                                 PlayEvent;                                                // 0x02D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopEvent;                                                // 0x02D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UWwiseEvent*>                         OneShotEvents;                                            // 0x02E0(0x0010) (Edit, ZeroConstructor)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                              // 0x02F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DisableAfterPlayThrough;                                  // 0x02F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ActivateOnBeginPlay;                                      // 0x02F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x02FA(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMusicZoneStarted;                                       // 0x0300(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x60];                                      // 0x0310(0x0060) MISSED OFFSET

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
// 0x0030 (0x03A0 - 0x0370)
class UAISpawnerMusicZoneComponent : public UMusicZoneComponent
{
public:
	class UWwiseEvent*                                 BattleWonEvent;                                           // 0x0370(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAISpawner*                                  AISpawner;                                                // 0x0378(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class APawn*>                               SpawnerPawns;                                             // 0x0380(0x0010) (Net, ZeroConstructor)
	TEnumAsByte<EAISpawnerMusicZoneState>              SpawnerState;                                             // 0x0390(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0391(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Music.AISpawnerMusicZoneComponent"));
		return ptr;
	}


	void OnRep_SpawnerState();
};


// Class Music.SynchedMusicZoneComponent
// 0x0030 (0x03A0 - 0x0370)
class USynchedMusicZoneComponent : public UMusicZoneComponent
{
public:
	float                                              StartDelayTime;                                           // 0x0370(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayFromStartTimeMS;                                      // 0x0374(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0378(0x0028) MISSED OFFSET

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
// 0x00A8 (0x0478 - 0x03D0)
class AMusicZoneService : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x03D0(0x00A8) MISSED OFFSET

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
