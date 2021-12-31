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
	UHealthComponent*                                  HealthComponent;                                          // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UActorDamageableComponent*                         DamageableComponent;                                      // 0x03F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UVenomComponent*                                   VenomComponent;                                           // 0x0400(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              VenomChance;                                              // 0x0408(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xFC];                                      // 0x040C(0x00FC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenTentacle"));
		return ptr;
	}


	void OnDamageToTentacle(const FImpactDamageEvent& ImpactDamageEvent);
};


// Class Kraken.Murk
// 0x00A0 (0x0470 - 0x03D0)
class AMurk : public AActor
{
public:
	UMurkWaterModifierZoneComponent*                   WaterModifierZone;                                        // 0x03D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	USceneComponent*                                   SceneRootComponent;                                       // 0x03D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UStaticMeshComponent*                              InnerSheet;                                               // 0x03E0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UStaticMeshComponent*                              OuterSheet;                                               // 0x03E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              UnderwaterSheetHeightScale;                               // 0x03F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	UMaterialInstanceDynamic*                          InnerSheetMaterialInstance;                               // 0x03F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	UMaterialInstanceDynamic*                          OuterSheetMaterialInstance;                               // 0x0400(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0408(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.Murk"));
		return ptr;
	}


	void DeactivateMurkBP();
	void ActivateMurkBP();
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
	TArray<FCoordinatedKrakenAction>                   Actions;                                                  // 0x0040(0x0010) (Edit, ZeroConstructor)

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


// Class Kraken.KrakenShipWrappingTentacle
// 0x01F0 (0x06F8 - 0x0508)
class AKrakenShipWrappingTentacle : public AKrakenTentacle
{
public:
	USceneComponent*                                   SceneRoot;                                                // 0x0508(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UStaticMeshComponent*                              TentacleCollisions;                                       // 0x0510(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UStaticMeshComponent*                              TentacleMesh;                                             // 0x0518(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UBoxComponent*                                     DamageZone;                                               // 0x0520(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	USceneComponent*                                   InteractableBlockingRegions;                              // 0x0528(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	USceneComponent*                                   KnockbackRegions;                                         // 0x0530(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UBoxComponent*                                     TentacleHeadCollisions;                                   // 0x0538(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	USceneComponent*                                   TentacleHeadKnockbackRegions;                             // 0x0540(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UKrakenShipWrappingTentacleAIAudioComponent*       AudioComponent;                                           // 0x0548(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UStaticMesh*                                       LowDetailTentacleMesh;                                    // 0x0550(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FStringAssetReference                              HighDetailTentacleMeshAsset;                              // 0x0558(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	FKrakenShipWrappingTentacleParams                  Params;                                                   // 0x0568(0x00F0) (Edit, DisableEditOnInstance)
	UMaterialInstanceDynamic*                          TentacleDynamicMaterialInstance;                          // 0x0658(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	UStaticMesh*                                       HighDetailTentacleMesh;                                   // 0x0660(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	FKrakenShipWrappingTentacleAnimationState          CurrentServerAnimationState;                              // 0x0668(0x0010) (Net, Transient)
	FKrakenShipWrappingTentacleAnimationState          PendingServerAnimationState;                              // 0x0678(0x0010) (Net, Transient)
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
// 0x0560 (0x0930 - 0x03D0)
class AKraken : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03D0(0x0018) MISSED OFFSET
	float                                              RelevancyDistance;                                        // 0x03E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x03EC(0x0014) MISSED OFFSET
	float                                              InnerRadius;                                              // 0x0400(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0404(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EKrakenState>                          CurrentState;                                             // 0x0408(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1B7];                                     // 0x0409(0x01B7) MISSED OFFSET
	AMurk*                                             MurkActor;                                                // 0x05C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0xA0];                                      // 0x05C8(0x00A0) MISSED OFFSET
	UKrakenAICharacterAudioComponent*                  KrakenAudioComponent;                                     // 0x0668(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UKrakenTelemetryComponent*                         KrakenTelemetryComponent;                                 // 0x0670(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	FEncounterParams                                   SightingEncounterParams;                                  // 0x0678(0x000C) (Edit, DisableEditOnInstance)
	FEncounterParams                                   CloseEncounterParams;                                     // 0x0684(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0690(0x0010) MISSED OFFSET
	FKrakenParams                                      Params;                                                   // 0x06A0(0x0160) (Transient)
	int                                                NumTentaclesRemaining;                                    // 0x0800(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x12C];                                     // 0x0804(0x012C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.Kraken"));
		return ptr;
	}


	void Multicast_OnTentacleTakenDamage();
	void AddActorToKnownTargets(AActor* Target);
};


// Class Kraken.KrakenAnimatedTentacleAnimationDataAsset
// 0x0030 (0x0058 - 0x0028)
class UKrakenAnimatedTentacleAnimationDataAsset : public UDataAsset
{
public:
	UKrakenAnimatedTentacleAnimationSpecDataAsset*     AnimationSpec;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrameTimeDelta;                                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimationLength;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumFrames;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowLookAround;                                          // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresWaterHeightQuery;                                 // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	float                                              AnimationPlayRateScale;                                   // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<FKrakenAnimatedTentacleAnimationBoneTrack>  Bones;                                                    // 0x0048(0x0010) (Edit, ZeroConstructor)

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
	TArray<FKrakenAnimatedTentacleMappedAnimation>     Animations;                                               // 0x0028(0x0010) (Edit, ZeroConstructor)

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
	TArray<FKrakenAnimatedTentacleAnimationSpecBone>   Bones;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)

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
	TArray<FKrakenAnimatedTentacleStateAnimationMapping> States;                                                   // 0x0048(0x0010) (Edit, ZeroConstructor)

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
	TArray<FKrakenHeadStateAnimationMapping>           States;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenHeadStateAnimationsDataAsset"));
		return ptr;
	}

};


// Class Kraken.KrakenHead
// 0x0208 (0x05D8 - 0x03D0)
class AKrakenHead : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET
	USkeletalMeshComponent*                            SkeletalMesh;                                             // 0x03E0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UHealthComponent*                                  HealthComponent;                                          // 0x03E8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UActorDamageableComponent*                         ActorDamageableComponent;                                 // 0x03F0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	USphereComponent*                                  SphereComponent;                                          // 0x03F8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UVenomComponent*                                   VenomComponent;                                           // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UExplosionComponent*                               ExplosionComponent;                                       // 0x0408(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UParticleSystem*                                   BiteAttackVFX;                                            // 0x0410(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FStatus>                                    BreathingInContinuousStatusesToApply;                     // 0x0418(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              BreatheInStatusDuration;                                  // 0x0428(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	TArray<FStatus>                                    RoarContinuousStatusesToApply;                            // 0x0430(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              RoarStatusDuration;                                       // 0x0440(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	UEnvQuery*                                         RoarEQSQuery;                                             // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UClass*                                            KnockbackDamagerType;                                     // 0x0450(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FKnockBackInfo                                     RoarKnockbackInfo;                                        // 0x0458(0x0050) (Edit)
	UKrakenHeadAnimationInstance*                      HeadAnimInstance;                                         // 0x04A8(0x0008) (ZeroConstructor, IsPlainOldData)
	FVector                                            EQSQuerierLocation;                                       // 0x04B0(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	UKrakenHeadHealthParamsDataAsset*                  KrakenHeadHealthParams;                                   // 0x04C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FHeadStateChangeRequest                            HeadStateRequest;                                         // 0x04C8(0x0018) (Net)
	bool                                               IsDamageEnabled;                                          // 0x04E0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	USceneComponent*                                   Root;                                                     // 0x04E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC0];                                      // 0x04F0(0x00C0) MISSED OFFSET
	FName                                              BiteAttackImpactNamedPointsGroupName;                     // 0x05B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x20];                                      // 0x05B8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenHead"));
		return ptr;
	}


	void RequestState(UClass* NewState);
	void OnRep_IsDamageEnabled();
	void OnRep_HeadStateRequest();
	void OnCoordinatedKrakenSpecialEvent(TEnumAsByte<ECoordinatedKrakenSpecialEventTypes> InEventType);
};


// Class Kraken.KrakenHeadAnimationInstance
// 0x0060 (0x04A0 - 0x0440)
class UKrakenHeadAnimationInstance : public UAnimInstance
{
public:
	UClass*                                            CurrentState;                                             // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData)
	UClass*                                            PreviousState;                                            // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData)
	UKrakenHeadStateAnimationsDataAsset*               MappingAsset;                                             // 0x0450(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnBlendTime;                                           // 0x0458(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultBlendTime;                                         // 0x045C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInIntro;                                                // 0x0460(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	UAnimMontage*                                      PlayingMontage;                                           // 0x0468(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0470(0x0010) MISSED OFFSET
	UKrakenHeadHitReactAnimationsDataAsset*            KrakenHeadHitReactionAsset;                               // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
	TArray<FKrakenHeadHealthPair>                      KrakenHeadHealthPairs;                                    // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

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
	TArray<FKrakenHeadHitReactAnimations>              HitReactionAnimations;                                    // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

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
	FKrakenIdleBehaviourParams                         Params;                                                   // 0x0028(0x00C0) (Edit, DisableEditOnInstance)

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
	FKrakenParams                                      Params;                                                   // 0x0028(0x0160) (Edit, DisableEditOnInstance)

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
	FKrakenPlayerGrabbingBehaviourParams               Params;                                                   // 0x0028(0x00E8) (Edit, DisableEditOnInstance)

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
	FKrakenServiceParams                               KrakenServiceParams;                                      // 0x03D8(0x00A0) (Transient)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0478(0x00A0) MISSED OFFSET
	AKraken*                                           Kraken;                                                   // 0x0518(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xD0];                                      // 0x0520(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Kraken.KrakenService"));
		return ptr;
	}


	void RequestKrakenWithLocation(const FVector& SpawnLocation, AActor* SpawnedForActor);
	bool IsServiceInitialized();
	bool IsKrakenActive();
	void DismissKraken();
};


// Class Kraken.KrakenServiceParamsDataAsset
// 0x00A0 (0x00C8 - 0x0028)
class UKrakenServiceParamsDataAsset : public UDataAsset
{
public:
	FKrakenServiceParams                               Params;                                                   // 0x0028(0x00A0) (Edit, DisableEditOnInstance)

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
	FKrakenShipHittingBehaviourParams                  Params;                                                   // 0x0028(0x0060) (Edit, DisableEditOnInstance)

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
	FKrakenShipWrappingBehaviourParams                 Params;                                                   // 0x0030(0x0420) (Edit, DisableEditOnInstance)

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
	UBoxComponent*                                     KnockbackRegion;                                          // 0x02B0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	FVector                                            KnockbackDirection;                                       // 0x02B8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              KnockbackTime;                                            // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FKnockBackInfo                                     KnockbackParams;                                          // 0x02C8(0x0050) (Edit)
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
