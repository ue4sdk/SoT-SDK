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
// 0x0000 (0x0028 - 0x0028)
class UStatusBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusBase"));
		return ptr;
	}

};


// Class StatusEffects.StatusResponse
// 0x0000 (0x0028 - 0x0028)
class UStatusResponse : public UObject
{
public:

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
// 0x0018 (0x04C8 - 0x04B0)
class AStatusEffectOverlapZone : public AActor
{
public:
	class UBoxComponent*                               CollisionMesh;                                            // 0x04B0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FStatus>                             StatusesToApplyOnOverlap;                                 // 0x04B8(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusEffectOverlapZone"));
		return ptr;
	}


	void OnOverlapZoneEndOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapZoneBeginOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult);
};


// Class StatusEffects.DebugStatusEffectOverlapZoneVisualizer
// 0x0000 (0x00D0 - 0x00D0)
class UDebugStatusEffectOverlapZoneVisualizer : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.DebugStatusEffectOverlapZoneVisualizer"));
		return ptr;
	}

};


// Class StatusEffects.DebugStatusTicketHolder
// 0x0008 (0x04B8 - 0x04B0)
class ADebugStatusTicketHolder : public AActor
{
public:
	class AActor*                                      StatusRecipient;                                          // 0x04B0(0x0008) (ZeroConstructor, IsPlainOldData)

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
// 0x0020 (0x0048 - 0x0028)
class UStatusResponseAsset : public UDataAsset
{
public:
	TArray<class UClass*>                              TriggerStatus;                                            // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<class UStatusResponse*>                     Responses;                                                // 0x0038(0x0010) (Edit, ExportObject, ZeroConstructor)

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
// 0x0038 (0x0108 - 0x00D0)
class ULightWeightStatusEffectManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00D0(0x0020) MISSED OFFSET
	class UStatusRecipientResponseList*                RecipientResponseList;                                    // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FActiveStatusEffect>                 ActiveEffects;                                            // 0x00F8(0x0010) (Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.LightWeightStatusEffectManagerComponent"));
		return ptr;
	}


	void OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects);
	void MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> ActivatedEffects);
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
// 0x0030 (0x0100 - 0x00D0)
class UMaterialStatusSusceptibilityComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	class UPhysicalMaterial*                           CurrentSurfaceMaterial;                                   // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TScriptInterface<class USurfaceMaterialStatusZoneInterface> CurrentMaterialStatusZone;                                // 0x00E0(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.MaterialStatusSusceptibilityComponent"));
		return ptr;
	}

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
// 0x0040 (0x0110 - 0x00D0)
class UStatusEffectManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00D0(0x0028) MISSED OFFSET
	class UStatusRecipientResponseList*                RecipientResponseList;                                    // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FActiveStatusEffect>                 ActiveEffects;                                            // 0x0100(0x0010) (Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StatusEffects.StatusEffectManagerComponent"));
		return ptr;
	}


	void OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects);
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
// 0x0008 (0x00D8 - 0x00D0)
class UStatusEffectPersistenceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
