#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Kraken_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Kraken.KrakenTentacle
// 0x0138 (0x0508 - 0x03D0)
class AKrakenTentacle : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03D0(0x0020) MISSED OFFSET
	class UHealthComponent*                            HealthComponent;                                          // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UActorDamageableComponent*                   DamageableComponent;                                      // 0x03F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UVenomComponent*                             VenomComponent;                                           // 0x0400(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              VenomChance;                                              // 0x0408(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xFC];                                      // 0x040C(0x00FC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenTentacle"));
		return ptr;
	}


	void OnDamageToTentacle(const struct FImpactDamageEvent& ImpactDamageEvent);
};


// Class Kraken.CoordinatedKrakenInterface
// 0x0000 (0x0028 - 0x0028)
class UCoordinatedKrakenInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.CoordinatedKrakenInterface"));
		return ptr;
	}

};


// Class Kraken.CoordinatedKrakenPhaseActionsDataAsset
// 0x0028 (0x0050 - 0x0028)
class UCoordinatedKrakenPhaseActionsDataAsset : public UDataAsset
{
public:
	TArray<int>                                        TentaclesUsed;                                            // 0x0028(0x0010) (Edit, ZeroConstructor)
	bool                                               KrakenHeadUsed;                                           // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	TArray<struct FCoordinatedKrakenAction>            Actions;                                                  // 0x0040(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.CoordinatedKrakenPhaseActionsDataAsset"));
		return ptr;
	}

};


// Class Kraken.EnvQueryContext_AllKrakenOccupiedLocations
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_AllKrakenOccupiedLocations : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.EnvQueryContext_AllKrakenOccupiedLocations"));
		return ptr;
	}

};


// Class Kraken.EnvQueryContext_AllocatedShip
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_AllocatedShip : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.EnvQueryContext_AllocatedShip"));
		return ptr;
	}

};


// Class Kraken.EnvQueryContext_AllShipsInWorld
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_AllShipsInWorld : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.EnvQueryContext_AllShipsInWorld"));
		return ptr;
	}

};


// Class Kraken.EnvQueryContext_AllWatercraftsInWorld
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_AllWatercraftsInWorld : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.EnvQueryContext_AllWatercraftsInWorld"));
		return ptr;
	}

};


// Class Kraken.EnvQueryContext_PreviousLocation
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_PreviousLocation : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.EnvQueryContext_PreviousLocation"));
		return ptr;
	}

};


// Class Kraken.EnvQueryGenerator_KrakenSpawnLocations
// 0x0000 (0x0050 - 0x0050)
class UEnvQueryGenerator_KrakenSpawnLocations : public UEnvQueryGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.EnvQueryGenerator_KrakenSpawnLocations"));
		return ptr;
	}

};


// Class Kraken.EnvQueryGenerator_KrakenTentacleSpawnLocations
// 0x0000 (0x0050 - 0x0050)
class UEnvQueryGenerator_KrakenTentacleSpawnLocations : public UEnvQueryGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.EnvQueryGenerator_KrakenTentacleSpawnLocations"));
		return ptr;
	}

};


// Class Kraken.Murk
// 0x00A0 (0x0470 - 0x03D0)
class AMurk : public AActor
{
public:
	class UMurkWaterModifierZoneComponent*             WaterModifierZone;                                        // 0x03D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SceneRootComponent;                                       // 0x03D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        InnerSheet;                                               // 0x03E0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        OuterSheet;                                               // 0x03E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              UnderwaterSheetHeightScale;                               // 0x03F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    InnerSheetMaterialInstance;                               // 0x03F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    OuterSheetMaterialInstance;                               // 0x0400(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0408(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.Murk"));
		return ptr;
	}


	void DeactivateMurkBP();
	void ActivateMurkBP();
};


// Class Kraken.KrakenShipWrappingTentacle
// 0x01F0 (0x06F8 - 0x0508)
class AKrakenShipWrappingTentacle : public AKrakenTentacle
{
public:
	class USceneComponent*                             SceneRoot;                                                // 0x0508(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TentacleCollisions;                                       // 0x0510(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TentacleMesh;                                             // 0x0518(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               DamageZone;                                               // 0x0520(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             InteractableBlockingRegions;                              // 0x0528(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             KnockbackRegions;                                         // 0x0530(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               TentacleHeadCollisions;                                   // 0x0538(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TentacleHeadKnockbackRegions;                             // 0x0540(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UKrakenShipWrappingTentacleAIAudioComponent* AudioComponent;                                           // 0x0548(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStaticMesh*                                 LowDetailTentacleMesh;                                    // 0x0550(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStringAssetReference                       HighDetailTentacleMeshAsset;                              // 0x0558(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleParams           Params;                                                   // 0x0568(0x00F0) (Edit, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    TentacleDynamicMaterialInstance;                          // 0x0658(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UStaticMesh*                                 HighDetailTentacleMesh;                                   // 0x0660(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FKrakenShipWrappingTentacleAnimationState   CurrentServerAnimationState;                              // 0x0668(0x0010) (Net, Transient)
	struct FKrakenShipWrappingTentacleAnimationState   PendingServerAnimationState;                              // 0x0678(0x0010) (Net, Transient)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0688(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenShipWrappingTentacle"));
		return ptr;
	}


	void OnRep_CurrentServerAnimationState();
};


// Class Kraken.KrakenTelemetryComponent
// 0x0108 (0x01D0 - 0x00C8)
class UKrakenTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x00C8(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenTelemetryComponent"));
		return ptr;
	}

};


// Class Kraken.Kraken
// 0x0540 (0x0910 - 0x03D0)
class AKraken : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03D0(0x0018) MISSED OFFSET
	float                                              RelevancyDistance;                                        // 0x03E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x03EC(0x0014) MISSED OFFSET
	float                                              InnerRadius;                                              // 0x0400(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0404(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EKrakenState>                          CurrentState;                                             // 0x0408(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1A7];                                     // 0x0409(0x01A7) MISSED OFFSET
	class AMurk*                                       MurkActor;                                                // 0x05B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0xA0];                                      // 0x05B8(0x00A0) MISSED OFFSET
	class UKrakenAICharacterAudioComponent*            KrakenAudioComponent;                                     // 0x0658(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKrakenTelemetryComponent*                   KrakenTelemetryComponent;                                 // 0x0660(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEncounterParams                            SightingEncounterParams;                                  // 0x0668(0x000C) (Edit, DisableEditOnInstance)
	struct FEncounterParams                            CloseEncounterParams;                                     // 0x0674(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0680(0x0010) MISSED OFFSET
	struct FKrakenParams                               Params;                                                   // 0x0690(0x0160) (Transient)
	int                                                NumTentaclesRemaining;                                    // 0x07F0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x11C];                                     // 0x07F4(0x011C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.Kraken"));
		return ptr;
	}


	void Multicast_OnTentacleTakenDamage();
	void AddActorToKnownTargets(class AActor* Target);
};


// Class Kraken.KrakenAnimatedTentacleAnimationDataAsset
// 0x0030 (0x0058 - 0x0028)
class UKrakenAnimatedTentacleAnimationDataAsset : public UDataAsset
{
public:
	class UKrakenAnimatedTentacleAnimationSpecDataAsset* AnimationSpec;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrameTimeDelta;                                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimationLength;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumFrames;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowLookAround;                                          // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresWaterHeightQuery;                                 // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	float                                              AnimationPlayRateScale;                                   // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FKrakenAnimatedTentacleAnimationBoneTrack> Bones;                                                    // 0x0048(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenAnimatedTentacleAnimationDataAsset"));
		return ptr;
	}

};


// Class Kraken.KrakenAnimatedTentacleAnimationMappingDataAsset
// 0x0010 (0x0038 - 0x0028)
class UKrakenAnimatedTentacleAnimationMappingDataAsset : public UDataAsset
{
public:
	TArray<struct FKrakenAnimatedTentacleMappedAnimation> Animations;                                               // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenAnimatedTentacleAnimationMappingDataAsset"));
		return ptr;
	}

};


// Class Kraken.KrakenAnimatedTentacleAnimationSpecDataAsset
// 0x0010 (0x0038 - 0x0028)
class UKrakenAnimatedTentacleAnimationSpecDataAsset : public UDataAsset
{
public:
	TArray<struct FKrakenAnimatedTentacleAnimationSpecBone> Bones;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenAnimatedTentacleAnimationSpecDataAsset"));
		return ptr;
	}

};


// Class Kraken.KrakenAnimatedTentacleStateAnimationsDataAsset
// 0x0030 (0x0058 - 0x0028)
class UKrakenAnimatedTentacleStateAnimationsDataAsset : public UDataAsset
{
public:
	TAssetPtr<class UKrakenAnimatedTentacleAnimationMappingDataAsset> MappingAssetReference;                                    // 0x0028(0x0020) (Edit)
	TArray<struct FKrakenAnimatedTentacleStateAnimationMapping> States;                                                   // 0x0048(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenAnimatedTentacleStateAnimationsDataAsset"));
		return ptr;
	}

};


// Class Kraken.KrakenHeadStateAnimationsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UKrakenHeadStateAnimationsDataAsset : public UDataAsset
{
public:
	TArray<struct FKrakenHeadStateAnimationMapping>    States;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenHeadStateAnimationsDataAsset"));
		return ptr;
	}

};


// Class Kraken.KrakenHead
// 0x0218 (0x05E8 - 0x03D0)
class AKrakenHead : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x03E0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UHealthComponent*                            HealthComponent;                                          // 0x03E8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UActorDamageableComponent*                   ActorDamageableComponent;                                 // 0x03F0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SphereComponent;                                          // 0x03F8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UExplosionComponent*                         ExplosionComponent;                                       // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             BiteAttackVFX;                                            // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FStatus>                             BreathingInContinuousStatusesToApply;                     // 0x0410(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              BreatheInStatusDuration;                                  // 0x0420(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	TArray<struct FStatus>                             RoarContinuousStatusesToApply;                            // 0x0428(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              RoarStatusDuration;                                       // 0x0438(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	class UEnvQuery*                                   RoarEQSQuery;                                             // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RoarVenomSource;                                          // 0x0448(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RoarVenomInitialDamage;                                   // 0x0450(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RoarVenomDamageOverTime;                                  // 0x0454(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RoarVenomDamageOverTimeDuration;                          // 0x0458(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	class UClass*                                      KnockbackDamagerType;                                     // 0x0460(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKnockBackInfo                              RoarKnockbackInfo;                                        // 0x0468(0x0050) (Edit)
	class UKrakenHeadAnimationInstance*                HeadAnimInstance;                                         // 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     EQSQuerierLocation;                                       // 0x04C0(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	class UKrakenHeadHealthParamsDataAsset*            KrakenHeadHealthParams;                                   // 0x04D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHeadStateChangeRequest                     HeadStateRequest;                                         // 0x04D8(0x0018) (Net)
	bool                                               IsDamageEnabled;                                          // 0x04F0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	class USceneComponent*                             Root;                                                     // 0x04F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData06[0xC0];                                      // 0x0500(0x00C0) MISSED OFFSET
	struct FName                                       BiteAttackImpactNamedPointsGroupName;                     // 0x05C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x20];                                      // 0x05C8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenHead"));
		return ptr;
	}


	void RequestState(class UClass* NewState);
	void OnRep_IsDamageEnabled();
	void OnRep_HeadStateRequest();
	void OnCoordinatedKrakenSpecialEvent(TEnumAsByte<ECoordinatedKrakenSpecialEventTypes> InEventType);
};


// Class Kraken.KrakenHeadAnimationInstance
// 0x0060 (0x04A0 - 0x0440)
class UKrakenHeadAnimationInstance : public UAnimInstance
{
public:
	class UClass*                                      CurrentState;                                             // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      PreviousState;                                            // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData)
	class UKrakenHeadStateAnimationsDataAsset*         MappingAsset;                                             // 0x0450(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnBlendTime;                                           // 0x0458(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultBlendTime;                                         // 0x045C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInIntro;                                                // 0x0460(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	class UAnimMontage*                                PlayingMontage;                                           // 0x0468(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0470(0x0010) MISSED OFFSET
	class UKrakenHeadHitReactAnimationsDataAsset*      KrakenHeadHitReactionAsset;                               // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0488(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenHeadAnimationInstance"));
		return ptr;
	}

};


// Class Kraken.KrakenHeadBreathingInStatus
// 0x0000 (0x0030 - 0x0030)
class UKrakenHeadBreathingInStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenHeadBreathingInStatus"));
		return ptr;
	}

};


// Class Kraken.KrakenHeadHealthParamsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UKrakenHeadHealthParamsDataAsset : public UDataAsset
{
public:
	TArray<struct FKrakenHeadHealthPair>               KrakenHeadHealthPairs;                                    // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenHeadHealthParamsDataAsset"));
		return ptr;
	}

};


// Class Kraken.KrakenHeadHitReactAnimationsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UKrakenHeadHitReactAnimationsDataAsset : public UDataAsset
{
public:
	TArray<struct FKrakenHeadHitReactAnimations>       HitReactionAnimations;                                    // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenHeadHitReactAnimationsDataAsset"));
		return ptr;
	}

};


// Class Kraken.KrakenHeadRoaringStatus
// 0x0000 (0x0030 - 0x0030)
class UKrakenHeadRoaringStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenHeadRoaringStatus"));
		return ptr;
	}

};


// Class Kraken.KrakenIdleBehaviourParamsDataAsset
// 0x00C0 (0x00E8 - 0x0028)
class UKrakenIdleBehaviourParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenIdleBehaviourParams                  Params;                                                   // 0x0028(0x00C0) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenIdleBehaviourParamsDataAsset"));
		return ptr;
	}

};


// Class Kraken.KrakenParamsDataAsset
// 0x0160 (0x0188 - 0x0028)
class UKrakenParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenParams                               Params;                                                   // 0x0028(0x0160) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenParamsDataAsset"));
		return ptr;
	}

};


// Class Kraken.KrakenPlayerGrabbingBehaviourParamsDataAsset
// 0x00E8 (0x0110 - 0x0028)
class UKrakenPlayerGrabbingBehaviourParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenPlayerGrabbingBehaviourParams        Params;                                                   // 0x0028(0x00E8) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenPlayerGrabbingBehaviourParamsDataAsset"));
		return ptr;
	}

};


// Class Kraken.KrakenServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UKrakenServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenServiceInterface"));
		return ptr;
	}

};


// Class Kraken.KrakenService
// 0x0220 (0x05F0 - 0x03D0)
class AKrakenService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	struct FKrakenServiceParams                        KrakenServiceParams;                                      // 0x03D8(0x00A0) (Transient)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0478(0x00A0) MISSED OFFSET
	class AKraken*                                     Kraken;                                                   // 0x0518(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xD0];                                      // 0x0520(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenService"));
		return ptr;
	}


	void RequestKrakenWithLocation(const struct FVector& SpawnLocation, class AActor* SpawnedForActor);
	bool IsServiceInitialized();
	bool IsKrakenActive();
	void DismissKraken();
};


// Class Kraken.KrakenServiceParamsDataAsset
// 0x00A0 (0x00C8 - 0x0028)
class UKrakenServiceParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenServiceParams                        Params;                                                   // 0x0028(0x00A0) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenServiceParamsDataAsset"));
		return ptr;
	}

};


// Class Kraken.KrakenShipHittingBehaviourParamsDataAsset
// 0x0060 (0x0088 - 0x0028)
class UKrakenShipHittingBehaviourParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenShipHittingBehaviourParams           Params;                                                   // 0x0028(0x0060) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenShipHittingBehaviourParamsDataAsset"));
		return ptr;
	}

};


// Class Kraken.KrakenShipWrappingBehaviourParamsDataAsset
// 0x0428 (0x0450 - 0x0028)
class UKrakenShipWrappingBehaviourParamsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FKrakenShipWrappingBehaviourParams          Params;                                                   // 0x0030(0x0420) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenShipWrappingBehaviourParamsDataAsset"));
		return ptr;
	}

};


// Class Kraken.KrakenShipWrappingKnockbackRegionComponent
// 0x00A0 (0x0350 - 0x02B0)
class UKrakenShipWrappingKnockbackRegionComponent : public USceneComponent
{
public:
	class UBoxComponent*                               KnockbackRegion;                                          // 0x02B0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     KnockbackDirection;                                       // 0x02B8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              KnockbackTime;                                            // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKnockBackInfo                              KnockbackParams;                                          // 0x02C8(0x0050) (Edit)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0318(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenShipWrappingKnockbackRegionComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
