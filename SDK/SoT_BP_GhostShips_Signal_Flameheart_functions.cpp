// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GhostShips_Signal_Flameheart_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.GetCutsceneMesh
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMeshComponent* ABP_GhostShips_Signal_Flameheart_C::GetCutsceneMesh()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.GetCutsceneMesh"));

	struct
	{
		class USkeletalMeshComponent*  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.CollectMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GhostShips_Signal_Flameheart_C::CollectMaterials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.CollectMaterials"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.TryPlayAlliance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Crew_Id                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::TryPlayAlliance(const struct FGuid& Crew_Id)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.TryPlayAlliance"));

	struct
	{
		struct FGuid                   Crew_Id;
	} params;

	params.Crew_Id = Crew_Id;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.ShipDefeatedCutscene
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAggressiveGhostShip*    Ghost_Ship                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::ShipDefeatedCutscene(class AAggressiveGhostShip* Ghost_Ship)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.ShipDefeatedCutscene"));

	struct
	{
		class AAggressiveGhostShip*    Ghost_Ship;
	} params;

	params.Ghost_Ship = Ghost_Ship;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.TryBroadcastWaveFullySpawned
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GhostShips_Signal_Flameheart_C::TryBroadcastWaveFullySpawned()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.TryBroadcastWaveFullySpawned"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.UpdateEncounterProgress
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEmergentGhostShipEncounterProgress> Encounter_Progress             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::UpdateEncounterProgress(TEnumAsByte<EEmergentGhostShipEncounterProgress>* Encounter_Progress)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.UpdateEncounterProgress"));

	struct
	{
		TEnumAsByte<EEmergentGhostShipEncounterProgress> Encounter_Progress;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Encounter_Progress != nullptr)
		*Encounter_Progress = params.Encounter_Progress;
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.TryPlayPirateLegend
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   CrewId                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::TryPlayPirateLegend(const struct FGuid& CrewId, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.TryPlayPirateLegend"));

	struct
	{
		struct FGuid                   CrewId;
		bool                           Result;
	} params;

	params.CrewId = CrewId;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.BattleStartedCutscene
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   NewCrew                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::BattleStartedCutscene(const struct FGuid& NewCrew)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.BattleStartedCutscene"));

	struct
	{
		struct FGuid                   NewCrew;
	} params;

	params.NewCrew = NewCrew;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.PlayerHasEntitlement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ItemToFind                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::PlayerHasEntitlement(class AActor* Target, class UClass* ItemToFind, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.PlayerHasEntitlement"));

	struct
	{
		class AActor*                  Target;
		class UClass*                  ItemToFind;
		bool                           Result;
	} params;

	params.Target = Target;
	params.ItemToFind = ItemToFind;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.ShipSummonCutscene
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAggressiveGhostShip*    GhostShip                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::ShipSummonCutscene(class AAggressiveGhostShip* GhostShip)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.ShipSummonCutscene"));

	struct
	{
		class AAggressiveGhostShip*    GhostShip;
	} params;

	params.GhostShip = GhostShip;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.ShipEnteredEncounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::ShipEnteredEncounter(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.ShipEnteredEncounter"));

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GhostShips_Signal_Flameheart_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.Appear__FinishedFunc
// (BlueprintEvent)

void ABP_GhostShips_Signal_Flameheart_C::Appear__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.Appear__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.Appear__UpdateFunc
// (BlueprintEvent)

void ABP_GhostShips_Signal_Flameheart_C::Appear__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.Appear__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnEncounterActorDamaged
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedByActor                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::OnEncounterActorDamaged(class AActor* Actor, class AActor* DamagedByActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnEncounterActorDamaged"));

	struct
	{
		class AActor*                  Actor;
		class AActor*                  DamagedByActor;
	} params;

	params.Actor = Actor;
	params.DamagedByActor = DamagedByActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnEncounterActorRemoved
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEncounterActorRemovedReason> Reason                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::OnEncounterActorRemoved(class AActor* Actor, TEnumAsByte<EEncounterActorRemovedReason> Reason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnEncounterActorRemoved"));

	struct
	{
		class AActor*                  Actor;
		TEnumAsByte<EEncounterActorRemovedReason> Reason;
	} params;

	params.Actor = Actor;
	params.Reason = Reason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnEncounterActorSpawnedActor
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  SpawningActor                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::OnEncounterActorSpawnedActor(class AActor* SpawningActor, class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnEncounterActorSpawnedActor"));

	struct
	{
		class AActor*                  SpawningActor;
		class AActor*                  SpawnedActor;
	} params;

	params.SpawningActor = SpawningActor;
	params.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnPlayerEnteredEncounter
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Player                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::OnPlayerEnteredEncounter(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnPlayerEnteredEncounter"));

	struct
	{
		class AActor*                  Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnPlayerLeftEncounter
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Player                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::OnPlayerLeftEncounter(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnPlayerLeftEncounter"));

	struct
	{
		class AActor*                  Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnShipDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventShipDamaged       DamageEvent                    (Parm)

void ABP_GhostShips_Signal_Flameheart_C::OnShipDamaged(const struct FEventShipDamaged& DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnShipDamaged"));

	struct
	{
		struct FEventShipDamaged       DamageEvent;
	} params;

	params.DamageEvent = DamageEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnShipSinking
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventBeginningToSink   SinkEvent                      (Parm)

void ABP_GhostShips_Signal_Flameheart_C::OnShipSinking(const struct FEventBeginningToSink& SinkEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnShipSinking"));

	struct
	{
		struct FEventBeginningToSink   SinkEvent;
	} params;

	params.SinkEvent = SinkEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnShipEnteredEncounter
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Ship                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::OnShipEnteredEncounter(class AActor* Ship)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnShipEnteredEncounter"));

	struct
	{
		class AActor*                  Ship;
	} params;

	params.Ship = Ship;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnShipLeftEncounter
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Ship                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::OnShipLeftEncounter(class AActor* Ship)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnShipLeftEncounter"));

	struct
	{
		class AActor*                  Ship;
	} params;

	params.Ship = Ship;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnEncounterActorAdded
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Player                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::OnEncounterActorAdded(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnEncounterActorAdded"));

	struct
	{
		class AActor*                  Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_GhostShips_Signal_Flameheart_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnSignalSpawnedForEncounter
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Encounter                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::OnSignalSpawnedForEncounter(class AActor* Encounter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnSignalSpawnedForEncounter"));

	struct
	{
		class AActor*                  Encounter;
	} params;

	params.Encounter = Encounter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.On Encounter Progress Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEmergentGhostShipEncounterProgress> CurrentEncounterProgress       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::On_Encounter_Progress_Updated(TEnumAsByte<EEmergentGhostShipEncounterProgress> CurrentEncounterProgress)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.On Encounter Progress Updated"));

	struct
	{
		TEnumAsByte<EEmergentGhostShipEncounterProgress> CurrentEncounterProgress;
	} params;

	params.CurrentEncounterProgress = CurrentEncounterProgress;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnWaveFullySpawned
// (BlueprintCallable, BlueprintEvent)

void ABP_GhostShips_Signal_Flameheart_C::OnWaveFullySpawned()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnWaveFullySpawned"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnApplyDamageEvent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FImpactDamageEvent      ImpactDamageEvent              (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_GhostShips_Signal_Flameheart_C::OnApplyDamageEvent(const struct FImpactDamageEvent& ImpactDamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnApplyDamageEvent"));

	struct
	{
		struct FImpactDamageEvent      ImpactDamageEvent;
	} params;

	params.ImpactDamageEvent = ImpactDamageEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnShipEnteredInnerRadiusEncounter
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Ship                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::OnShipEnteredInnerRadiusEncounter(class AActor* Ship)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnShipEnteredInnerRadiusEncounter"));

	struct
	{
		class AActor*                  Ship;
	} params;

	params.Ship = Ship;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnShipEnteredOuterRadiusEncounter
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Ship                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::OnShipEnteredOuterRadiusEncounter(class AActor* Ship)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnShipEnteredOuterRadiusEncounter"));

	struct
	{
		class AActor*                  Ship;
	} params;

	params.Ship = Ship;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.FlameheartAppear
// (BlueprintCallable, BlueprintEvent)

void ABP_GhostShips_Signal_Flameheart_C::FlameheartAppear()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.FlameheartAppear"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnCrewJoinedAllianceEvent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   AllianceId                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FGuid                   OfferingCrewId                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FGuid                   AcceptingCrewId                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::OnCrewJoinedAllianceEvent(const struct FGuid& AllianceId, const struct FGuid& OfferingCrewId, const struct FGuid& AcceptingCrewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnCrewJoinedAllianceEvent"));

	struct
	{
		struct FGuid                   AllianceId;
		struct FGuid                   OfferingCrewId;
		struct FGuid                   AcceptingCrewId;
	} params;

	params.AllianceId = AllianceId;
	params.OfferingCrewId = OfferingCrewId;
	params.AcceptingCrewId = AcceptingCrewId;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnEncounterActorKilled
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  KilledByActor                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::OnEncounterActorKilled(class AActor* Actor, class AActor* KilledByActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnEncounterActorKilled"));

	struct
	{
		class AActor*                  Actor;
		class AActor*                  KilledByActor;
	} params;

	params.Actor = Actor;
	params.KilledByActor = KilledByActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.FlameheartDisappear
// (BlueprintCallable, BlueprintEvent)

void ABP_GhostShips_Signal_Flameheart_C::FlameheartDisappear()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.FlameheartDisappear"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnGhostShipHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   CrewId                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  GhostShipActor                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::OnGhostShipHit(const struct FGuid& CrewId, class AActor* GhostShipActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.OnGhostShipHit"));

	struct
	{
		struct FGuid                   CrewId;
		class AActor*                  GhostShipActor;
	} params;

	params.CrewId = CrewId;
	params.GhostShipActor = GhostShipActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.ExecuteUbergraph_BP_GhostShips_Signal_Flameheart
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShips_Signal_Flameheart_C::ExecuteUbergraph_BP_GhostShips_Signal_Flameheart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShips_Signal_Flameheart.BP_GhostShips_Signal_Flameheart_C.ExecuteUbergraph_BP_GhostShips_Signal_Flameheart"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
