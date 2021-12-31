#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Watercrafts_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Watercrafts.ControllableOarsInterface
// 0x0000 (0x0028 - 0x0028)
class UControllableOarsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.ControllableOarsInterface"));
		return ptr;
	}

};


// Class Watercrafts.FakeShip
// 0x0100 (0x04D0 - 0x03D0)
class AFakeShip : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	TArray<AItemProxy*>                                AttachedItems;                                            // 0x03D8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xE8];                                      // 0x03E8(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.FakeShip"));
		return ptr;
	}


	void OnAttachedItemEndPlay(AActor* Actor);
};


// Class Watercrafts.WatercraftTrackerInterface
// 0x0000 (0x0028 - 0x0028)
class UWatercraftTrackerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.WatercraftTrackerInterface"));
		return ptr;
	}

};


// Class Watercrafts.ItemProxyWatercraftTrackerComponent
// 0x0088 (0x0150 - 0x00C8)
class UItemProxyWatercraftTrackerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	UItemProxyWatercraftTrackerComponentDataAsset*     WatercraftTrackingData;                                   // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	AActor*                                            CurrentWatercraft;                                        // 0x00D8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x70];                                      // 0x00E0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.ItemProxyWatercraftTrackerComponent"));
		return ptr;
	}


	void OnRep_CurrentWatercraft(AActor* PreviousWatercraft);
	void OnCurrentWatercraftDestroyed(AActor* DestroyedWatercraft);
};


// Class Watercrafts.ItemProxyWatercraftTrackerComponentDataAsset
// 0x0010 (0x0038 - 0x0028)
class UItemProxyWatercraftTrackerComponentDataAsset : public UDataAsset
{
public:
	TArray<UClass*>                                    WatercraftTypes;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.ItemProxyWatercraftTrackerComponentDataAsset"));
		return ptr;
	}

};


// Class Watercrafts.RowboatAudioComponent
// 0x01B0 (0x0460 - 0x02B0)
class URowboatAudioComponent : public USceneComponent
{
public:
	URowboatAudioComponentParams*                      Params;                                                   // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ARowboat*                                          ParentRowboat;                                            // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x02C0(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatAudioComponent"));
		return ptr;
	}

};


// Class Watercrafts.RowboatAudioComponentParams
// 0x00C0 (0x00E8 - 0x0028)
class URowboatAudioComponentParams : public UDataAsset
{
public:
	UWwiseObjectPoolWrapper*                           RowboatObjectPool;                                        // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       RowboatWakeStart;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       RowboatWakeStop;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FName                                              RowboatSpeedRtpcName;                                     // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RowboatMaxSpeedRtpc;                                      // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	UWwiseEvent*                                       RowboatLaunch;                                            // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       RowboatImpactAndScrapeStart;                              // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       RowboatImpactAndScrapeStop;                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       RowboatStrainStart;                                       // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       RowboatStrainStop;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FName                                              RowboatStrainRtpcName;                                    // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RowboatMaxStrainRtpc;                                     // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	UWwiseEvent*                                       RowboatTakenDamage;                                       // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmountRequiredForNoiseToPlay;                       // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	UWwiseEvent*                                       RowboatAttach;                                            // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       RowboatDetach;                                            // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseObjectPoolWrapper*                           WwiseOarEmitterPool;                                      // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       PlayOarInOarLayer;                                        // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       PlayOarInWaterLayer;                                      // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       PlayOarOutOarLayer;                                       // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       PlayOarOutWaterLayer;                                     // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       PlayOarBrakingLoop;                                       // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       StopOarBrakingLoop;                                       // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       PlayOarPullFinished;                                      // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatAudioComponentParams"));
		return ptr;
	}

};


// Class Watercrafts.RowboatDescDataAsset
// 0x0020 (0x0048 - 0x0028)
class URowboatDescDataAsset : public UDataAsset
{
public:
	FPartDesc                                          PartDesc;                                                 // 0x0028(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatDescDataAsset"));
		return ptr;
	}

};


// Class Watercrafts.RowboatOarsLeftForwardNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class URowboatOarsLeftForwardNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatOarsLeftForwardNotificationInputId"));
		return ptr;
	}

};


// Class Watercrafts.RowboatOarsLeftForwardDeactivatedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class URowboatOarsLeftForwardDeactivatedNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatOarsLeftForwardDeactivatedNotificationInputId"));
		return ptr;
	}

};


// Class Watercrafts.RowboatOarsRightForwardNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class URowboatOarsRightForwardNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatOarsRightForwardNotificationInputId"));
		return ptr;
	}

};


// Class Watercrafts.RowboatOarsRightForwardDeactivatedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class URowboatOarsRightForwardDeactivatedNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatOarsRightForwardDeactivatedNotificationInputId"));
		return ptr;
	}

};


// Class Watercrafts.RowboatOarsLeftBrakingActivatedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class URowboatOarsLeftBrakingActivatedNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatOarsLeftBrakingActivatedNotificationInputId"));
		return ptr;
	}

};


// Class Watercrafts.RowboatOarsLeftBrakingDeactivatedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class URowboatOarsLeftBrakingDeactivatedNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatOarsLeftBrakingDeactivatedNotificationInputId"));
		return ptr;
	}

};


// Class Watercrafts.RowboatOarsRightBrakingActivatedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class URowboatOarsRightBrakingActivatedNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatOarsRightBrakingActivatedNotificationInputId"));
		return ptr;
	}

};


// Class Watercrafts.RowboatOarsRightBrakingDeactivatedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class URowboatOarsRightBrakingDeactivatedNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatOarsRightBrakingDeactivatedNotificationInputId"));
		return ptr;
	}

};


// Class Watercrafts.ScrapeableDamageDataAsset
// 0x0010 (0x0038 - 0x0028)
class UScrapeableDamageDataAsset : public UDataAsset
{
public:
	TArray<FScrapeableDamageSpeedEntry>                DamageSpeedParams;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.ScrapeableDamageDataAsset"));
		return ptr;
	}

};


// Class Watercrafts.ScrapeableInterface
// 0x0000 (0x0028 - 0x0028)
class UScrapeableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.ScrapeableInterface"));
		return ptr;
	}

};


// Class Watercrafts.ScrapeableComponent
// 0x0030 (0x00F8 - 0x00C8)
class UScrapeableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	float                                              MinIntervalBetweenScrapeDamage;                           // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	UScrapeableDamageDataAsset*                        ScrapeDamageSettings;                                     // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FVector                                            SafeZoneCenterDirection;                                  // 0x00E0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SafeZoneMaximumAngle;                                     // 0x00EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UClass*                                            ScrapeDamagerType;                                        // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.ScrapeableComponent"));
		return ptr;
	}

};


// Class Watercrafts.Watercraft
// 0x0348 (0x0718 - 0x03D0)
class AWatercraft : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03D0(0x0028) MISSED OFFSET
	UBuoyancyComponent*                                BuoyancyComponent;                                        // 0x03F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	FWatercraftRolloverCorrector                       RolloverCorrector;                                        // 0x0400(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	UShipNosediveBrake*                                NosediveBrake;                                            // 0x0410(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UBowSplashContainer*                               BowSplashContainer;                                       // 0x0418(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UStaticMeshComponent*                              CollisionMesh;                                            // 0x0420(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UStaticMeshComponent*                              CraftMesh;                                                // 0x0428(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UBoxComponent*                                     OverlapHits;                                              // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UStaticMeshComponent*                              WaterOcclusionVolume;                                     // 0x0438(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UWaterInteractionComponent*                        WaterInteractionComponent;                                // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	FName                                              ClientConvexHullCollisionProfile;                         // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FNetTimeStampCalculator                            MovementTimeStamp;                                        // 0x0450(0x0070) (Net)
	FRigidBodyErrorCorrection                          PhysicsErrorCorrection;                                   // 0x04C0(0x001C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x34];                                      // 0x04DC(0x0034) MISSED OFFSET
	FBuoyancySampleMovement                            BuoyancySampleMovement;                                   // 0x0510(0x0068) (Edit, DisableEditOnInstance)
	UCurveFloat*                                       SpeedToChoppinessScalarCurve;                             // 0x0578(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeepWaterSubmersionThreshold;                             // 0x0580(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuoyancyChoppinessWhileSinking;                           // 0x0584(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RigidBodyAwake;                                           // 0x0588(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               InContactWithLand;                                        // 0x0589(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               InDeepWater;                                              // 0x058A(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x058B(0x0005) MISSED OFFSET
	TScriptInterface<class UScrapeableInterface>       Scrapeable;                                               // 0x0590(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x178];                                     // 0x05A0(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.Watercraft"));
		return ptr;
	}


	void OnRigidBodyWake(const FName& InBoneName);
	void OnRigidBodySleep(const FName& InBoneName);
};


// Class Watercrafts.Rowboat
// 0x02F0 (0x0A08 - 0x0718)
class ARowboat : public AWatercraft
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0718(0x0040) MISSED OFFSET
	UChildActorComponent*                              LeftSideClamberSpot;                                      // 0x0758(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UChildActorComponent*                              RightSideClamberSpot;                                     // 0x0760(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UChildActorComponent*                              ForceSpot;                                                // 0x0768(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UChildActorComponent*                              Lantern;                                                  // 0x0770(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UChildActorComponent*                              RowingSeat;                                               // 0x0778(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UChildActorComponent*                              StorageSeat;                                              // 0x0780(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UShipLiveryComponent*                              LiveryComponent;                                          // 0x0788(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UReplicatedShipPartCustomizationComponent*         CustomizationComponent;                                   // 0x0790(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	FVector                                            WaterExclusionOffset;                                     // 0x0798(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07A4(0x0004) MISSED OFFSET
	UTetherCustomisationComponent*                     TetherCustomisationComponent;                             // 0x07A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UHealthComponent*                                  HealthComponent;                                          // 0x07B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UActorDamageableComponent*                         ActorDamageableComponent;                                 // 0x07B8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	URammableComponent*                                RammableComponent;                                        // 0x07C0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UScrapeableComponent*                              ScrapeableComponent;                                      // 0x07C8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	URowboatAudioComponent*                            RowboatAudio;                                             // 0x07D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UBaseHullDragDynamicsDesc*                         HullDragDynamicsDesc;                                     // 0x07D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UBowSplashContainer*                               OarSplashContainer;                                       // 0x07E0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UMountableComponent*                               MountableComponent;                                       // 0x07E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	UCurveFloat*                                       LinearDampingOverTimeWhileBeachedScalarCurve;             // 0x07F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UCurveFloat*                                       AngularDampingOverTimeWhileBeachedScalarCurve;            // 0x07F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FRowboatDamageEffectData                           DamageEffectData;                                         // 0x0800(0x0018) (Edit, DisableEditOnInstance)
	FRowboatStrainDamageData                           StrainDamageData;                                         // 0x0818(0x0020) (Edit, DisableEditOnInstance)
	TArray<UChildActorComponent*>                      AlwaysEnabledInteractables;                               // 0x0838(0x0010) (ExportObject, ZeroConstructor)
	UShroudBreakerTrackerComponent*                    ShroudBreakerTrackerComponent;                            // 0x0848(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsBeingLaunched;                                          // 0x0850(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsSinking;                                                // 0x0851(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0852(0x0002) MISSED OFFSET
	float                                              MaxPushingAngle;                                          // 0x0854(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentStrainAmount;                                      // 0x0858(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsDocked;                                                 // 0x085C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x085D(0x0001) MISSED OFFSET
	TEnumAsByte<ECollisionChannel>                     CoverCollisionChannel;                                    // 0x085E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x085F(0x0001) MISSED OFFSET
	float                                              UnderCoverCheckInterval;                                  // 0x0860(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnderCoverHeight;                                         // 0x0864(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<FVector>                                    RelativeUnderCoverProbeRoots;                             // 0x0868(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<ETrackedActorType>                     TrackedActorType;                                         // 0x0878(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x18F];                                     // 0x0879(0x018F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.Rowboat"));
		return ptr;
	}


	void SetAlwaysEnabledInteractables(TArray<UChildActorComponent*> InAlwaysEnabledInteractables);
	void OnRep_IsSinking();
};


// Class Watercrafts.RowboatPartInterface
// 0x0000 (0x0028 - 0x0028)
class URowboatPartInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatPartInterface"));
		return ptr;
	}

};


// Class Watercrafts.RowboatSpawnParamsDataAsset
// 0x0010 (0x0038 - 0x0028)
class URowboatSpawnParamsDataAsset : public UDataAsset
{
public:
	TArray<UClass*>                                    RowboatTypes;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatSpawnParamsDataAsset"));
		return ptr;
	}

};


// Class Watercrafts.RowingActionStateId
// 0x0000 (0x0028 - 0x0028)
class URowingActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowingActionStateId"));
		return ptr;
	}

};


// Class Watercrafts.RowingInputComponent
// 0x0008 (0x0288 - 0x0280)
class URowingInputComponent : public ULookAtOffsetInputComponent
{
public:
	ARowingSeat*                                       TargetOars;                                               // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowingInputComponent"));
		return ptr;
	}

};


// Class Watercrafts.StorageSeat
// 0x0030 (0x06A8 - 0x0678)
class AStorageSeat : public ASeat
{
public:
	UClass*                                            StorageInteractionInput;                                  // 0x0678(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UStorageContainerComponent*                        StorageContainerComponent;                                // 0x0680(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0688(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.StorageSeat"));
		return ptr;
	}

};


// Class Watercrafts.WatercraftBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWatercraftBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.WatercraftBlueprintFunctionLibrary"));
		return ptr;
	}


	static AWatercraft* SpawnWatercraft(UObject* WorldContextObject, UClass* WatercraftClass, const FVector& Location, const FRotator& Rotation);
};


// Class Watercrafts.WatercraftServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UWatercraftServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.WatercraftServiceInterface"));
		return ptr;
	}

};


// Class Watercrafts.WatercraftService
// 0x0008 (0x03D8 - 0x03D0)
class AWatercraftService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.WatercraftService"));
		return ptr;
	}

};


// Class Watercrafts.WatercraftSpawnData
// 0x0028 (0x0080 - 0x0058)
class UWatercraftSpawnData : public UItemSpawnData
{
public:
	TAssetPtr<class UClass>                            WatercraftClass;                                          // 0x0058(0x0020) (Edit)
	float                                              MinDistanceToNearestWatercraftInMetres;                   // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.WatercraftSpawnData"));
		return ptr;
	}

};


// Class Watercrafts.WatercraftTrackerComponent
// 0x0018 (0x00E0 - 0x00C8)
class UWatercraftTrackerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TArray<AActor*>                                    CurrentWatercrafts;                                       // 0x00D0(0x0010) (Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.WatercraftTrackerComponent"));
		return ptr;
	}


	void OnWatercraftDestroyed(AActor* WatercraftActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
