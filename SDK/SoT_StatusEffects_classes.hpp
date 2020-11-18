#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StatusEffects_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class StatusEffects.StatusBase
// 0x0008 (0x0030 - 0x0028)
class UStatusBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusBase"));
		return ptr;
	}

};


// Class StatusEffects.StatusResponse
// 0x0008 (0x0030 - 0x0028)
class UStatusResponse : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusResponse"));
		return ptr;
	}

};


// Class StatusEffects.ActivateableSurfaceMaterialStatusZoneInterface
// 0x0000 (0x0028 - 0x0028)
class UActivateableSurfaceMaterialStatusZoneInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.ActivateableSurfaceMaterialStatusZoneInterface"));
		return ptr;
	}

};


// Class StatusEffects.DebugMenuStatusDataAsset
// 0x0020 (0x0048 - 0x0028)
class UDebugMenuStatusDataAsset : public UDataAsset
{
public:
	TArray<struct FDebugMenuStatusDefinition>          StatusDefinitions;                                        // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      Durations;                                                // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.DebugMenuStatusDataAsset"));
		return ptr;
	}

};


// Class StatusEffects.StatusEffectOverlapZone
// 0x00C8 (0x0538 - 0x0470)
class AStatusEffectOverlapZone : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0470(0x00A8) MISSED OFFSET
	class UBoxComponent*                               CollisionMesh;                                            // 0x0518(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FDelayedStatusEffect>                StatusesToApplyOnOverlap;                                 // 0x0520(0x0010) (Edit, ZeroConstructor)
	bool                                               StartActive;                                              // 0x0530(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0531(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusEffectOverlapZone"));
		return ptr;
	}


	void OnStatusDelayEnd(int InStatusIndex, class AActor* ActorRef);
};


// Class StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent
// 0x0020 (0x00E8 - 0x00C8)
class UDebugStatusEffectOverlapZoneVisualizerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FVector                                     BoxCollisionDimensions;                                   // 0x00D0(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	struct FColor                                      DebugColour;                                              // 0x00DC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               VisibleState;                                             // 0x00E0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent"));
		return ptr;
	}


	void OnRep_SetDebugDrawColour();
	void OnRep_DebugBoxDimensions();
};


// Class StatusEffects.DebugStatusTicketHolder
// 0x0008 (0x0478 - 0x0470)
class ADebugStatusTicketHolder : public AActor
{
public:
	class AActor*                                      StatusRecipient;                                          // 0x0470(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.DebugStatusTicketHolder"));
		return ptr;
	}

};


// Class StatusEffects.StatusEffectCancellationInterface
// 0x0000 (0x0028 - 0x0028)
class UStatusEffectCancellationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusEffectCancellationInterface"));
		return ptr;
	}

};


// Class StatusEffects.StatusEffectRecipientInterface
// 0x0000 (0x0028 - 0x0028)
class UStatusEffectRecipientInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusEffectRecipientInterface"));
		return ptr;
	}

};


// Class StatusEffects.StatusEffectResponseConfigurationInterface
// 0x0000 (0x0028 - 0x0028)
class UStatusEffectResponseConfigurationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusEffectResponseConfigurationInterface"));
		return ptr;
	}

};


// Class StatusEffects.StatusEffectSuspensionInterface
// 0x0000 (0x0028 - 0x0028)
class UStatusEffectSuspensionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusEffectSuspensionInterface"));
		return ptr;
	}

};


// Class StatusEffects.StatusResponseAsset
// 0x0058 (0x0080 - 0x0028)
class UStatusResponseAsset : public UDataAsset
{
public:
	struct FText                                       HighFrequencyTriggerStatusHelper;                         // 0x0028(0x0038) (Edit, EditConst)
	TArray<class UClass*>                              TriggerStatus;                                            // 0x0060(0x0010) (Edit, ZeroConstructor)
	TArray<class UStatusResponse*>                     Responses;                                                // 0x0070(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusResponseAsset"));
		return ptr;
	}

};


// Class StatusEffects.StatusRecipientResponseList
// 0x0030 (0x0058 - 0x0028)
class UStatusRecipientResponseList : public UDataAsset
{
public:
	TArray<class UStatusResponseAsset*>                ResponseAssets;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FFeatureToggledStatusResponseList>   FeatureToggledResponseLists;                              // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<class UStatusResponseAsset*>                FinalResponseAssets;                                      // 0x0048(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusRecipientResponseList"));
		return ptr;
	}

};


// Class StatusEffects.LightWeightStatusEffectManagerComponent
// 0x0038 (0x0100 - 0x00C8)
class ULightWeightStatusEffectManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C8(0x0020) MISSED OFFSET
	class UStatusRecipientResponseList*                RecipientResponseList;                                    // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FActiveStatusEffect>                 ActiveEffects;                                            // 0x00F0(0x0010) (Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.LightWeightStatusEffectManagerComponent"));
		return ptr;
	}


	void OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects);
	void MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> AddedEffects, TArray<struct FActiveStatusEffect> RemovedEffects);
};


// Class StatusEffects.MaterialStatusSusceptibilityInterface
// 0x0000 (0x0028 - 0x0028)
class UMaterialStatusSusceptibilityInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.MaterialStatusSusceptibilityInterface"));
		return ptr;
	}

};


// Class StatusEffects.SurfaceMaterialStatusZoneInterface
// 0x0000 (0x0028 - 0x0028)
class USurfaceMaterialStatusZoneInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.SurfaceMaterialStatusZoneInterface"));
		return ptr;
	}

};


// Class StatusEffects.MaterialStatusSusceptibilityComponent
// 0x0030 (0x00F8 - 0x00C8)
class UMaterialStatusSusceptibilityComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	class UPhysicalMaterial*                           CurrentSurfaceMaterial;                                   // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TScriptInterface<class USurfaceMaterialStatusZoneInterface> CurrentMaterialStatusZone;                                // 0x00D8(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.MaterialStatusSusceptibilityComponent"));
		return ptr;
	}

};


// Class StatusEffects.SphericalStatusEffectZone
// 0x00B8 (0x0528 - 0x0470)
class ASphericalStatusEffectZone : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET
	class USphereComponent*                            SphereComponent;                                          // 0x0478(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStatusEffectVolumeComponent*                StatusEffectVolumeComponent;                              // 0x0480(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0488(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.SphericalStatusEffectZone"));
		return ptr;
	}

};


// Class StatusEffects.StatusApplicationDesc
// 0x0020 (0x0048 - 0x0028)
class UStatusApplicationDesc : public UObject
{
public:
	struct FEventAppliedStatusToTargets                ApplicationEvent;                                         // 0x0028(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusApplicationDesc"));
		return ptr;
	}

};


// Class StatusEffects.StatusApplicationMonitorComponent
// 0x0008 (0x00D0 - 0x00C8)
class UStatusApplicationMonitorComponent : public UActorComponent
{
public:
	class UClass*                                      StatusApplicationTrigger;                                 // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusApplicationMonitorComponent"));
		return ptr;
	}

};


// Class StatusEffects.StatusEffectHelperFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UStatusEffectHelperFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusEffectHelperFunctionLibrary"));
		return ptr;
	}


	static void ApplyOneShotStatus(class AActor* Recipient, const struct FStatus& Status);
};


// Class StatusEffects.StatusEffectTicketDispenserInterface
// 0x0000 (0x0028 - 0x0028)
class UStatusEffectTicketDispenserInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusEffectTicketDispenserInterface"));
		return ptr;
	}

};


// Class StatusEffects.StatusEffectManagerComponent
// 0x0040 (0x0108 - 0x00C8)
class UStatusEffectManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00C8(0x0028) MISSED OFFSET
	class UStatusRecipientResponseList*                RecipientResponseList;                                    // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FActiveStatusEffect>                 ActiveEffects;                                            // 0x00F8(0x0010) (Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusEffectManagerComponent"));
		return ptr;
	}


	void OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects);
	void MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> AddedEffects, TArray<struct FActiveStatusEffect> RemovedEffects);
};


// Class StatusEffects.StatusEffectPersistenceInterface
// 0x0000 (0x0028 - 0x0028)
class UStatusEffectPersistenceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusEffectPersistenceInterface"));
		return ptr;
	}

};


// Class StatusEffects.StatusEffectPersistenceComponent
// 0x0008 (0x00D0 - 0x00C8)
class UStatusEffectPersistenceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusEffectPersistenceComponent"));
		return ptr;
	}

};


// Class StatusEffects.StatusEffectsSettings
// 0x0010 (0x0048 - 0x0038)
class UStatusEffectsSettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       DebugMenuStatusDefinitionsDataAsset;                      // 0x0038(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusEffectsSettings"));
		return ptr;
	}

};


// Class StatusEffects.StatusEffectVolumeComponent
// 0x0010 (0x02A0 - 0x0290)
class UStatusEffectVolumeComponent : public USceneComponent
{
public:
	TArray<struct FStatus>                             StatusEffectsToMaintain;                                  // 0x0290(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusEffectVolumeComponent"));
		return ptr;
	}


	void UnaffectActor(class AActor* Actor);
	void OnParentComponentEndOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnParentComponentBeginOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void AffectActor(class AActor* Actor);
};


// Class StatusEffects.StatusResponseNull
// 0x0000 (0x0030 - 0x0030)
class UStatusResponseNull : public UStatusResponse
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusResponseNull"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
