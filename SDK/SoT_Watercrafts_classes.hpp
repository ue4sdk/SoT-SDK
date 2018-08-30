#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Watercrafts_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Watercrafts.RowboatSpawnParamsDataAsset
// 0x0010 (0x0038 - 0x0028)
class URowboatSpawnParamsDataAsset : public UDataAsset
{
public:
	TArray<class UClass*>                              RowboatTypes;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.RowboatSpawnParamsDataAsset");
		return ptr;
	}

};


// Class Watercrafts.Watercraft
// 0x0288 (0x0718 - 0x0490)
class AWatercraft : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0490(0x0010) MISSED OFFSET
	class UBuoyancyComponent*                          BuoyancyComponent;                                        // 0x04A0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FWatercraftRolloverCorrector                RolloverCorrector;                                        // 0x04A8(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	class UShipNosediveBrake*                          NosediveBrake;                                            // 0x04B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        CollisionMesh;                                            // 0x04C0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CraftMesh;                                                // 0x04C8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WaterOcclusionVolume;                                     // 0x04D0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWaterInteractionComponent*                  WaterInteractionComponent;                                // 0x04D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientConvexHullCollisionProfile;                         // 0x04E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FNetTimeStampCalculator                     MovementTimeStamp;                                        // 0x04E8(0x0070) (Net)
	struct FRigidBodyErrorCorrection                   PhysicsErrorCorrection;                                   // 0x0558(0x001C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x24];                                      // 0x0574(0x0024) MISSED OFFSET
	struct FBuoyancySampleMovement                     BuoyancySampleMovement;                                   // 0x0598(0x0068) (Edit, DisableEditOnInstance)
	class UCurveFloat*                                 SpeedToChoppinessScalarCurve;                             // 0x0600(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeepWaterSubmersionThreshold;                             // 0x0608(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuoyancyChoppinessWhileSinking;                           // 0x060C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RigidBodyAwake;                                           // 0x0610(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               InContactWithLand;                                        // 0x0611(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               InDeepWater;                                              // 0x0612(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x105];                                     // 0x0613(0x0105) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.Watercraft");
		return ptr;
	}


	void OnRigidBodyWake(const struct FName& InBoneName);
	void OnRigidBodySleep(const struct FName& InBoneName);
};


// Class Watercrafts.Rowboat
// 0x0150 (0x0868 - 0x0718)
class ARowboat : public AWatercraft
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0718(0x0008) MISSED OFFSET
	class UHealthComponent*                            HealthComponent;                                          // 0x0720(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UActorDamageableComponent*                   ActorDamageableComponent;                                 // 0x0728(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStorageContainerComponent*                  StorageContainerComponent;                                // 0x0730(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UInteractableStorageContainer*               InteractableStorageContainerComponent;                    // 0x0738(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        LeftSideClamberSpot;                                      // 0x0740(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        RightSideClamberSpot;                                     // 0x0748(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        Lantern;                                                  // 0x0750(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBaseHullDragDynamicsDesc*                   HullDragDynamicsDesc;                                     // 0x0758(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 LinearDampingOverTimeWhileBeachedScalarCurve;             // 0x0760(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 AngularDampingOverTimeWhileBeachedScalarCurve;            // 0x0768(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF8];                                      // 0x0770(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.Rowboat");
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
		static auto ptr = UObject::FindClass("Class Watercrafts.WatercraftBlueprintFunctionLibrary");
		return ptr;
	}


	class AWatercraft* STATIC_SpawnWatercraft(class UObject* WorldContextObject, class UClass* WatercraftClass, const struct FVector& Location, const struct FRotator& Rotation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
