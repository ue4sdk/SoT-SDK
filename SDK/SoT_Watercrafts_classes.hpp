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
	class UItemProxyWatercraftTrackerComponentDataAsset* WatercraftTrackingData;                                   // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      CurrentWatercraft;                                        // 0x00D8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x70];                                      // 0x00E0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.ItemProxyWatercraftTrackerComponent"));
		return ptr;
	}


	void OnRep_CurrentWatercraft(class AActor* PreviousWatercraft);
	void OnCurrentWatercraftDestroyed(class AActor* DestroyedWatercraft);
};


// Class Watercrafts.ItemProxyWatercraftTrackerComponentDataAsset
// 0x0010 (0x0038 - 0x0028)
class UItemProxyWatercraftTrackerComponentDataAsset : public UDataAsset
{
public:
	TArray<class UClass*>                              WatercraftTypes;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

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
	class URowboatAudioComponentParams*                Params;                                                   // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ARowboat*                                    ParentRowboat;                                            // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData)
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
	class UWwiseObjectPoolWrapper*                     RowboatObjectPool;                                        // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatWakeStart;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatWakeStop;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowboatSpeedRtpcName;                                     // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RowboatMaxSpeedRtpc;                                      // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 RowboatLaunch;                                            // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatImpactAndScrapeStart;                              // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatImpactAndScrapeStop;                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatStrainStart;                                       // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatStrainStop;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowboatStrainRtpcName;                                    // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RowboatMaxStrainRtpc;                                     // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 RowboatTakenDamage;                                       // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmountRequiredForNoiseToPlay;                       // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 RowboatAttach;                                            // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatDetach;                                            // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     WwiseOarEmitterPool;                                      // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayOarInOarLayer;                                        // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayOarInWaterLayer;                                      // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayOarOutOarLayer;                                       // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayOarOutWaterLayer;                                     // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayOarBrakingLoop;                                       // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopOarBrakingLoop;                                       // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayOarPullFinished;                                      // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	struct FPartDesc                                   PartDesc;                                                 // 0x0028(0x0020) (Edit)

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
	TArray<struct FScrapeableDamageSpeedEntry>         DamageSpeedParams;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

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
	class UScrapeableDamageDataAsset*                  ScrapeDamageSettings;                                     // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SafeZoneCenterDirection;                                  // 0x00E0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SafeZoneMaximumAngle;                                     // 0x00EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ScrapeDamagerType;                                        // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
	class UBuoyancyComponent*                          BuoyancyComponent;                                        // 0x03F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FWatercraftRolloverCorrector                RolloverCorrector;                                        // 0x0400(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	class UShipNosediveBrake*                          NosediveBrake;                                            // 0x0410(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBowSplashContainer*                         BowSplashContainer;                                       // 0x0418(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        CollisionMesh;                                            // 0x0420(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CraftMesh;                                                // 0x0428(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               OverlapHits;                                              // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WaterOcclusionVolume;                                     // 0x0438(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWaterInteractionComponent*                  WaterInteractionComponent;                                // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientConvexHullCollisionProfile;                         // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FNetTimeStampCalculator                     MovementTimeStamp;                                        // 0x0450(0x0070) (Net)
	struct FRigidBodyErrorCorrection                   PhysicsErrorCorrection;                                   // 0x04C0(0x001C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x34];                                      // 0x04DC(0x0034) MISSED OFFSET
	struct FBuoyancySampleMovement                     BuoyancySampleMovement;                                   // 0x0510(0x0068) (Edit, DisableEditOnInstance)
	class UCurveFloat*                                 SpeedToChoppinessScalarCurve;                             // 0x0578(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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


	void OnRigidBodyWake(const struct FName& InBoneName);
	void OnRigidBodySleep(const struct FName& InBoneName);
};


// Class Watercrafts.Rowboat
// 0x0278 (0x0990 - 0x0718)
class ARowboat : public AWatercraft
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0718(0x0030) MISSED OFFSET
	class UChildActorComponent*                        LeftSideClamberSpot;                                      // 0x0748(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        RightSideClamberSpot;                                     // 0x0750(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ForceSpot;                                                // 0x0758(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        Lantern;                                                  // 0x0760(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        RowingSeat;                                               // 0x0768(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UShipLiveryComponent*                        LiveryComponent;                                          // 0x0770(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UReplicatedShipPartCustomizationComponent*   CustomizationComponent;                                   // 0x0778(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FVector                                     WaterExclusionOffset;                                     // 0x0780(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	class UTetherCustomisationComponent*               TetherCustomisationComponent;                             // 0x0790(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UHealthComponent*                            HealthComponent;                                          // 0x0798(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UActorDamageableComponent*                   ActorDamageableComponent;                                 // 0x07A0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStorageContainerComponent*                  StorageContainerComponent;                                // 0x07A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UInteractableStorageContainer*               InteractableStorageContainerComponent;                    // 0x07B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class URammableComponent*                          RammableComponent;                                        // 0x07B8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UScrapeableComponent*                        ScrapeableComponent;                                      // 0x07C0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class URowboatAudioComponent*                      RowboatAudio;                                             // 0x07C8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBaseHullDragDynamicsDesc*                   HullDragDynamicsDesc;                                     // 0x07D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBowSplashContainer*                         OarSplashContainer;                                       // 0x07D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMountableComponent*                         MountableComponent;                                       // 0x07E0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCurveFloat*                                 LinearDampingOverTimeWhileBeachedScalarCurve;             // 0x07E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 AngularDampingOverTimeWhileBeachedScalarCurve;            // 0x07F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRowboatDamageEffectData                    DamageEffectData;                                         // 0x07F8(0x0018) (Edit, DisableEditOnInstance)
	struct FRowboatStrainDamageData                    StrainDamageData;                                         // 0x0810(0x0020) (Edit, DisableEditOnInstance)
	TArray<class UChildActorComponent*>                AlwaysEnabledInteractables;                               // 0x0830(0x0010) (ExportObject, ZeroConstructor)
	class UShroudBreakerTrackerComponent*              ShroudBreakerTrackerComponent;                            // 0x0840(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsBeingLaunched;                                          // 0x0848(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsSinking;                                                // 0x0849(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x084A(0x0002) MISSED OFFSET
	float                                              MaxPushingAngle;                                          // 0x084C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentStrainAmount;                                      // 0x0850(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsDocked;                                                 // 0x0854(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0855(0x0001) MISSED OFFSET
	TEnumAsByte<ECollisionChannel>                     CoverCollisionChannel;                                    // 0x0856(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0857(0x0001) MISSED OFFSET
	float                                              UnderCoverCheckInterval;                                  // 0x0858(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnderCoverHeight;                                         // 0x085C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             RelativeUnderCoverProbeRoots;                             // 0x0860(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x120];                                     // 0x0870(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.Rowboat"));
		return ptr;
	}


	void SetAlwaysEnabledInteractables(TArray<class UChildActorComponent*> InAlwaysEnabledInteractables);
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
	TArray<class UClass*>                              RowboatTypes;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)

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
// 0x0008 (0x0238 - 0x0230)
class URowingInputComponent : public ULookAtOffsetInputComponent
{
public:
	class ARowingSeat*                                 TargetOars;                                               // 0x0230(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowingInputComponent"));
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


	static class AWatercraft* SpawnWatercraft(class UObject* WorldContextObject, class UClass* WatercraftClass, const struct FVector& Location, const struct FRotator& Rotation);
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
	TArray<class AActor*>                              CurrentWatercrafts;                                       // 0x00D0(0x0010) (Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.WatercraftTrackerComponent"));
		return ptr;
	}


	void OnWatercraftDestroyed(class AActor* WatercraftActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
