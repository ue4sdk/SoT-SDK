#pragma once

// Sea of Thieves (1.2.6) SDK

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
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.ControllableOarsInterface");
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
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.RowboatSpawnParamsDataAsset");
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
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.ScrapeableDamageDataAsset");
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
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.ScrapeableInterface");
		return ptr;
	}

};


// Class Watercrafts.ScrapeableComponent
// 0x0030 (0x0108 - 0x00D8)
class UScrapeableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	float                                              MinIntervalBetweenScrapeDamage;                           // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	class UScrapeableDamageDataAsset*                  ScrapeDamageSettings;                                     // 0x00E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SafeZoneCenterDirection;                                  // 0x00F0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SafeZoneMaximumAngle;                                     // 0x00FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ScrapeDamagerType;                                        // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.ScrapeableComponent");
		return ptr;
	}

};


// Class Watercrafts.Watercraft
// 0x0280 (0x0710 - 0x0490)
class AWatercraft : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0490(0x0018) MISSED OFFSET
	class UBuoyancyComponent*                          BuoyancyComponent;                                        // 0x04A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FWatercraftRolloverCorrector                RolloverCorrector;                                        // 0x04B0(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	class UShipNosediveBrake*                          NosediveBrake;                                            // 0x04C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBowSplashContainer*                         BowSplashContainer;                                       // 0x04C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        CollisionMesh;                                            // 0x04D0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CraftMesh;                                                // 0x04D8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WaterOcclusionVolume;                                     // 0x04E0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWaterInteractionComponent*                  WaterInteractionComponent;                                // 0x04E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientConvexHullCollisionProfile;                         // 0x04F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FNetTimeStampCalculator                     MovementTimeStamp;                                        // 0x04F8(0x0070) (Net)
	struct FRigidBodyErrorCorrection                   PhysicsErrorCorrection;                                   // 0x0568(0x001C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x24];                                      // 0x0584(0x0024) MISSED OFFSET
	struct FBuoyancySampleMovement                     BuoyancySampleMovement;                                   // 0x05A8(0x0068) (Edit, DisableEditOnInstance)
	class UCurveFloat*                                 SpeedToChoppinessScalarCurve;                             // 0x0610(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeepWaterSubmersionThreshold;                             // 0x0618(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuoyancyChoppinessWhileSinking;                           // 0x061C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RigidBodyAwake;                                           // 0x0620(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               InContactWithLand;                                        // 0x0621(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               InDeepWater;                                              // 0x0622(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0623(0x0005) MISSED OFFSET
	TScriptInterface<class UScrapeableInterface>       Scrapeable;                                               // 0x0628(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0xD8];                                      // 0x0638(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.Watercraft");
		return ptr;
	}


	void OnRigidBodyWake(const struct FName& InBoneName);
	void OnRigidBodySleep(const struct FName& InBoneName);
};


// Class Watercrafts.Rowboat
// 0x0260 (0x0970 - 0x0710)
class ARowboat : public AWatercraft
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0710(0x0020) MISSED OFFSET
	class UHealthComponent*                            HealthComponent;                                          // 0x0730(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UActorDamageableComponent*                   ActorDamageableComponent;                                 // 0x0738(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStorageContainerComponent*                  StorageContainerComponent;                                // 0x0740(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UInteractableStorageContainer*               InteractableStorageContainerComponent;                    // 0x0748(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class URammableComponent*                          RammableComponent;                                        // 0x0750(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UScrapeableComponent*                        ScrapeableComponent;                                      // 0x0758(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        LeftSideClamberSpot;                                      // 0x0760(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        RightSideClamberSpot;                                     // 0x0768(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ForceSpot;                                                // 0x0770(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        Lantern;                                                  // 0x0778(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        RowingSeat;                                               // 0x0780(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class URowboatAudioComponent*                      RowboatAudio;                                             // 0x0788(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBaseHullDragDynamicsDesc*                   HullDragDynamicsDesc;                                     // 0x0790(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBowSplashContainer*                         OarSplashContainer;                                       // 0x0798(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMountableComponent*                         MountableComponent;                                       // 0x07A0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCurveFloat*                                 LinearDampingOverTimeWhileBeachedScalarCurve;             // 0x07A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 AngularDampingOverTimeWhileBeachedScalarCurve;            // 0x07B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRowboatDamageEffectData                    DamageEffectData;                                         // 0x07B8(0x0018) (Edit, DisableEditOnInstance)
	struct FRowboatStrainDamageData                    StrainDamageData;                                         // 0x07D0(0x001C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07EC(0x0004) MISSED OFFSET
	TArray<class UChildActorComponent*>                AlwaysEnabledInteractables;                               // 0x07F0(0x0010) (ExportObject, ZeroConstructor)
	bool                                               IsBeingLaunched;                                          // 0x0800(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsSinking;                                                // 0x0801(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0802(0x0002) MISSED OFFSET
	float                                              MaxPushingAngle;                                          // 0x0804(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentStrainAmount;                                      // 0x0808(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsDocked;                                                 // 0x080C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x163];                                     // 0x080D(0x0163) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.Rowboat");
		return ptr;
	}


	void SetAlwaysEnabledInteractables(TArray<class UChildActorComponent*> InAlwaysEnabledInteractables);
	void OnRep_IsSinking();
};


// Class Watercrafts.WatercraftBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWatercraftBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.WatercraftBlueprintFunctionLibrary");
		return ptr;
	}


	class AWatercraft* STATIC_SpawnWatercraft(class UObject* WorldContextObject, class UClass* WatercraftClass, const struct FVector& Location, const struct FRotator& Rotation);
};


// Class Watercrafts.WatercraftServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UWatercraftServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.WatercraftServiceInterface");
		return ptr;
	}

};


// Class Watercrafts.WatercraftService
// 0x0008 (0x0498 - 0x0490)
class AWatercraftService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0490(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.WatercraftService");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
