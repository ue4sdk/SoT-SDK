#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GhostShips_Signal_Flameheart_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C
// 0x01C0 (0x06A8 - 0x04E8)
class ABP_GhostShips_Signal_Flameheart_C : public AGameplayEventSignal_SkinnedMesh
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URotateMeshToLocalPlayerComponent*           RotateMeshToLocalPlayer;                                  // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shroud;                                                   // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCrewSpecificCutsceneComponent*              CrewSpecificCutscene;                                     // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Appear_GhostBloom_3E85993C4B7A1DAD3153AA9FD2749277;       // 0x0510(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Appear_GhostOpacity_3E85993C4B7A1DAD3153AA9FD2749277;     // 0x0514(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Appear__Direction_3E85993C4B7A1DAD3153AA9FD2749277;       // 0x0518(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0519(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Appear;                                                   // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FObjectMessagingObjectScoper                ObjectScoper;                                             // 0x0528(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuid>                               CrewsThatEnteredEncounter;                                // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SummonShipBarkChance;                                     // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GhostShipDefeatedBarkChance;                              // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OpeningDialogueDelay;                                     // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlameheartOpeningDialogueComplete;                        // 0x0594(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0595(0x0003) MISSED OFFSET
	int                                                ShipHitGhostBallBarkChance;                               // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	class AAggressiveGhostShipsEncounter*              Encounter;                                                // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FDS_GhostShipEncounterProgress>      EncounterProgressDefinitions;                             // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EEmergentGhostShipEncounterProgress>   CurrentEncounterProgress;                                 // 0x05B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WaveFullySpawned;                                         // 0x05B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BurningBladeDefeatPlayed;                                 // 0x05BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllianceCutscenePlayed;                                   // 0x05BB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x05BC(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ShouldTaunt;                                              // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CutscenePlayStarted;                                      // 0x05D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasPlayedCutscene;                                        // 0x05D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x05D3(0x0005) MISSED OFFSET
	TArray<struct FGuid>                               CrewsThatHaveSeenTauntApproach;                           // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       TauntApproach;                                            // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BattleStart;                                              // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TauntConfident;                                           // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TauntFrustrated;                                          // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TauntAngry;                                               // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SummonShip;                                               // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SummonFormation;                                          // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FlagShip;                                                 // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Defeated;                                                 // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Flee;                                                     // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Return;                                                   // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HitGhostly;                                               // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HitBurning;                                               // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HitVolley;                                                // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Collide;                                                  // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GhostShipHit;                                             // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Sunk;                                                     // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Join;                                                     // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ShipJoin;                                                 // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Legend;                                                   // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EarlyDefeat;                                              // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MidwayDefeat;                                             // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EndDefeat;                                                // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BurningBladeDefeat;                                       // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C"));
		return ptr;
	}


	class USkeletalMeshComponent* GetCutsceneMesh();
	void CollectMaterials();
	void TryPlayAlliance(const struct FGuid& Crew_Id);
	void ShipDefeatedCutscene(class AAggressiveGhostShip* Ghost_Ship);
	void TryBroadcastWaveFullySpawned();
	void UpdateEncounterProgress(TEnumAsByte<EEmergentGhostShipEncounterProgress>* Encounter_Progress);
	void TryPlayPirateLegend(const struct FGuid& CrewId, bool* Result);
	void BattleStartedCutscene(const struct FGuid& NewCrew);
	void PlayerHasEntitlement(class AActor* Target, class UClass* ItemToFind, bool* Result);
	void ShipSummonCutscene(class AAggressiveGhostShip* GhostShip);
	void ShipEnteredEncounter(class AActor* Actor);
	void UserConstructionScript();
	void Appear__FinishedFunc();
	void Appear__UpdateFunc();
	void OnEncounterActorDamaged(class AActor* Actor, class AActor* DamagedByActor);
	void OnEncounterActorRemoved(class AActor* Actor, TEnumAsByte<EEncounterActorRemovedReason> Reason);
	void OnEncounterActorSpawnedActor(class AActor* SpawningActor, class AActor* SpawnedActor);
	void OnPlayerEnteredEncounter(class AActor* Player);
	void OnPlayerLeftEncounter(class AActor* Player);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnShipDamaged(const struct FEventShipDamaged& DamageEvent);
	void OnShipSinking(const struct FEventBeginningToSink& SinkEvent);
	void OnShipEnteredEncounter(class AActor* Ship);
	void OnShipLeftEncounter(class AActor* Ship);
	void OnEncounterActorAdded(class AActor* Player);
	void ReceiveBeginPlay();
	void OnSignalSpawnedForEncounter(class AActor* Encounter);
	void On_Encounter_Progress_Updated(TEnumAsByte<EEmergentGhostShipEncounterProgress> CurrentEncounterProgress);
	void OnWaveFullySpawned();
	void OnApplyDamageEvent(const struct FImpactDamageEvent& ImpactDamageEvent);
	void OnShipEnteredInnerRadiusEncounter(class AActor* Ship);
	void OnShipEnteredOuterRadiusEncounter(class AActor* Ship);
	void FlameheartAppear();
	void OnCrewJoinedAllianceEvent(const struct FGuid& AllianceId, const struct FGuid& OfferingCrewId, const struct FGuid& AcceptingCrewId);
	void OnEncounterActorKilled(class AActor* Actor, class AActor* KilledByActor);
	void FlameheartDisappear();
	void OnGhostShipHit(const struct FGuid& CrewId, class AActor* GhostShipActor);
	void ExecuteUbergraph_BP_GhostShips_Signal_Flameheart(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
