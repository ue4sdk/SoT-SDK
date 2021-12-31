#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TreasuryFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TreasuryFramework.ShimmerActor
// 0x00A8 (0x0478 - 0x03D0)
class AShimmerActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x03D0(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TreasuryFramework.ShimmerActor"));
		return ptr;
	}


	void OnDeactivateShimmer();
	void OnActivateShimmer();
};


// Class TreasuryFramework.TreasuryWaveDataAsset
// 0x0040 (0x0068 - 0x0028)
class UTreasuryWaveDataAsset : public UDataAsset
{
public:
	TArray<UAIProgressiveWavesSpawner*>                Waves1Player;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<UAIProgressiveWavesSpawner*>                Waves2Player;                                             // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<UAIProgressiveWavesSpawner*>                Waves3Player;                                             // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<UAIProgressiveWavesSpawner*>                Waves4Player;                                             // 0x0058(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TreasuryFramework.TreasuryWaveDataAsset"));
		return ptr;
	}

};


// Class TreasuryFramework.TreasuryRoom
// 0x0130 (0x0500 - 0x03D0)
class ATreasuryRoom : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	UBoxComponent*                                     RoomAreaComponent;                                        // 0x03D8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              TreasuryInactiveDurationMinSeconds;                       // 0x03E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TreasuryInactiveDurationMaxSeconds;                       // 0x03E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoomFailureDurationSeconds;                               // 0x03E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaveDelaySeconds;                                         // 0x03EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EncounterDelaySeconds;                                    // 0x03F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VaultDoorAnimDurationSeconds;                             // 0x03F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VaultDoorOpenDurationSeconds;                             // 0x03F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinWavesInEncounter;                                      // 0x03FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxWavesInEncounter;                                      // 0x0400(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxEncounters;                                            // 0x0404(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<FTreasuryWaveEncounter>                     WaveEncounters;                                           // 0x0408(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	AActor*                                            FloodMechanismActor;                                      // 0x0418(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	AActor*                                            FloodTriggerActor;                                        // 0x0420(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	AActor*                                            DrainMechanismActor;                                      // 0x0428(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	AActor*                                            DrainTriggerActor;                                        // 0x0430(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	AActor*                                            VaultMechanismActor;                                      // 0x0438(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	AActor*                                            VaultTriggerActor;                                        // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	UClass*                                            VaultLootSpawner;                                         // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	AActor*                                            VaultLootSpawnLocationActor;                              // 0x0450(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TAssetPtr<class AActor>                            Shimmer;                                                  // 0x0458(0x0020) (Edit, DisableEditOnTemplate)
	TArray<AActor*>                                    OverlappingActors;                                        // 0x0478(0x0010) (ZeroConstructor)
	TArray<TWeakObjectPtr<class AController>>          CachedParticipantControllers;                             // 0x0488(0x0010) (ZeroConstructor)
	AActor*                                            VaultLootSpawnerActor;                                    // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData)
	FPlayerStat                                        VaultOpenStat;                                            // 0x04A0(0x0004) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET
	UMechanismActionComponent*                         FloodMechanismComponent;                                  // 0x04A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	UMechanismActionComponent*                         DrainMechanismComponent;                                  // 0x04B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	UMechanismActionComponent*                         VaultMechanismComponent;                                  // 0x04B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TScriptInterface<class UMechanismTriggerInterface> FloodTriggerComponent;                                    // 0x04C0(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	TScriptInterface<class UMechanismTriggerInterface> DrainTriggerComponent;                                    // 0x04D0(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	TScriptInterface<class UMechanismTriggerInterface> VaultTriggerComponent;                                    // 0x04E0(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x04F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TreasuryFramework.TreasuryRoom"));
		return ptr;
	}


	void OnWaveStart(TEnumAsByte<ETreasuryEncounterType> EncounterType, TEnumAsByte<ETreasuryWaveType> WaveType);
	void OnWaveFinished(const TScriptInterface<class UMechanismActionInterface>& Action);
	void OnWaveComplete(TEnumAsByte<ETreasuryEncounterType> EncounterType);
	void OnVaultOpen();
	void OnVaultClosed();
	void OnTreasuryStateChange(TEnumAsByte<ETreasuryState> PrevState, TEnumAsByte<ETreasuryState> NewState);
	void OnTreasuryDeactivate();
	void OnTreasuryActivate();
	void OnStartRaiseWater();
	void OnStartDrainWater();
	void OnRoomStarted();
	void OnRaisedWater(const TScriptInterface<class UMechanismResetInterface>& Action);
	void OnLeaveRoom(AActor* OtherActor);
	void OnEnterRoom(AActor* OtherActor);
	void OnEncounterParamsSetup();
	void OnDrainedWater(const TScriptInterface<class UMechanismResetInterface>& Action);
	TEnumAsByte<ETreasuryState> GetState();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
