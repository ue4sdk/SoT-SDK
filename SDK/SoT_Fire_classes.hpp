#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Fire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Fire.FlammableComponent
// 0x0018 (0x00E0 - 0x00C8)
class UFlammableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
	bool                                               OnFire;                                                   // 0x00D8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.FlammableComponent"));
		return ptr;
	}


	void OnRep_OnFire();
	void Multicast_NotifyExtinguished_RPC(const FVector& InExtinguishLocationWS);
	bool IsOnFire();
	void IncrementFireSource();
	void DecrementFireSource();
};


// Class Fire.ActorFlammableComponent
// 0x0030 (0x0110 - 0x00E0)
class UActorFlammableComponent : public UFlammableComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00E0(0x0018) MISSED OFFSET
	UParticleSystem*                                   FireVFX;                                                  // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UParticleSystem*                                   SteamVFX;                                                 // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireVFXIntensity;                                         // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.ActorFlammableComponent"));
		return ptr;
	}

};


// Class Fire.ExtinguishableInterface
// 0x0000 (0x0028 - 0x0028)
class UExtinguishableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.ExtinguishableInterface"));
		return ptr;
	}

};


// Class Fire.FireDamagerType
// 0x0000 (0x0028 - 0x0028)
class UFireDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.FireDamagerType"));
		return ptr;
	}

};


// Class Fire.FireExplosionDamagerType
// 0x0000 (0x0028 - 0x0028)
class UFireExplosionDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.FireExplosionDamagerType"));
		return ptr;
	}

};


// Class Fire.FireStatus
// 0x0000 (0x0030 - 0x0030)
class UFireStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.FireStatus"));
		return ptr;
	}

};


// Class Fire.FlammableInterface
// 0x0000 (0x0028 - 0x0028)
class UFlammableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.FlammableInterface"));
		return ptr;
	}


	void IncrementFireSource();
	void DecrementFireSource();
};


// Class Fire.FlammableWieldableComponent
// 0x0018 (0x00F8 - 0x00E0)
class UFlammableWieldableComponent : public UFlammableComponent
{
public:
	FStatus                                            IgnitedStatus;                                            // 0x00E0(0x0018) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.FlammableWieldableComponent"));
		return ptr;
	}

};


// Class Fire.TimedFlammableComponent
// 0x0008 (0x00E8 - 0x00E0)
class UTimedFlammableComponent : public UFlammableComponent
{
public:
	bool                                               UseExtinguishTimer;                                       // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowFireToBeReplenishedBeforeExtinguishTimerExpired;     // 0x00E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00E2(0x0002) MISSED OFFSET
	float                                              TimeInSecondsUntilFireExtinguished;                       // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.TimedFlammableComponent"));
		return ptr;
	}

};


// Class Fire.IgniteStatus
// 0x0000 (0x0030 - 0x0030)
class UIgniteStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.IgniteStatus"));
		return ptr;
	}

};


// Class Fire.StatusResponseExtinguish
// 0x0000 (0x0030 - 0x0030)
class UStatusResponseExtinguish : public UStatusResponse
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.StatusResponseExtinguish"));
		return ptr;
	}

};


// Class Fire.StatusResponseIgnite
// 0x0000 (0x0030 - 0x0030)
class UStatusResponseIgnite : public UStatusResponse
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.StatusResponseIgnite"));
		return ptr;
	}

};


// Class Fire.FireGridCellSelectionParamsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UFireGridCellSelectionParamsDataAsset : public UDataAsset
{
public:
	TArray<FFireGridCellSelectionParams>               FireGridCellSelectionParams;                              // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.FireGridCellSelectionParamsDataAsset"));
		return ptr;
	}

};


// Class Fire.FirePropagationInterface
// 0x0000 (0x0028 - 0x0028)
class UFirePropagationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.FirePropagationInterface"));
		return ptr;
	}


	void SetAllCellsState(TEnumAsByte<EFireCellState> State);
};


// Class Fire.CookerIgnitionComponent
// 0x0078 (0x0140 - 0x00C8)
class UCookerIgnitionComponent : public UActorComponent
{
public:
	FCookerIgnitionParams                              CookerIgnitionParams;                                     // 0x00C8(0x0078) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.CookerIgnitionComponent"));
		return ptr;
	}

};


// Class Fire.FireCellStateTimingParamsDataAsset
// 0x0098 (0x00C0 - 0x0028)
class UFireCellStateTimingParamsDataAsset : public UDataAsset
{
public:
	FFireCellStateTimingParams                         TimingParams;                                             // 0x0028(0x0094) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.FireCellStateTimingParamsDataAsset"));
		return ptr;
	}

};


// Class Fire.FireGridAudioManager
// 0x00A8 (0x00D0 - 0x0028)
class UFireGridAudioManager : public UObject
{
public:
	FFireCellAudioParams                               FireAudioParams;                                          // 0x0028(0x0040) (Transient)
	AActor*                                            OwningActor;                                              // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	UFirePropagator*                                   FirePropagator;                                           // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0078(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.FireGridAudioManager"));
		return ptr;
	}

};


// Class Fire.FireGridLocationInterface
// 0x0000 (0x0028 - 0x0028)
class UFireGridLocationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.FireGridLocationInterface"));
		return ptr;
	}

};


// Class Fire.FireGridProxyInterface
// 0x0000 (0x0028 - 0x0028)
class UFireGridProxyInterface : public UFireGridLocationInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.FireGridProxyInterface"));
		return ptr;
	}

};


// Class Fire.FireGridVFXParamsDataAsset
// 0x0040 (0x0068 - 0x0028)
class UFireGridVFXParamsDataAsset : public UDataAsset
{
public:
	FFireGridVFXParams                                 Params;                                                   // 0x0028(0x0040) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.FireGridVFXParamsDataAsset"));
		return ptr;
	}

};


// Class Fire.FireGridVFXManager
// 0x01E8 (0x0210 - 0x0028)
class UFireGridVFXManager : public UObject
{
public:
	UFireGridVFXParamsDataAsset*                       VFXParams;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<FName, UParticleSystemComponent*>             SpawnedParticleSystemsForTemplates;                       // 0x0030(0x0050) (ExportObject, ZeroConstructor, Transient)
	TArray<FFireParticleSystem>                        SpawnedCustomParticleSystemsForCells;                     // 0x0080(0x0010) (ZeroConstructor, Transient)
	TMap<int, FFireMesh>                               SpawnedMeshesForCells;                                    // 0x0090(0x0050) (ZeroConstructor, Transient)
	TMap<int, UParticleSystemComponent*>               SpawnedParticleSystemsForSmokeDescs;                      // 0x00E0(0x0050) (ExportObject, ZeroConstructor, Transient)
	UParticleSystemComponent*                          SpawnedExteriorSmokeParticleSystem;                       // 0x0130(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	UParticleSystemComponent*                          SpawnedLowDetailParticleSystem;                           // 0x0138(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<FFireMesh>                                  DespawningMeshes;                                         // 0x0140(0x0010) (ZeroConstructor, Transient)
	TArray<FFireGridRelativeSpawnDesc>                 InteriorSmokeSpawnDescs;                                  // 0x0150(0x0010) (ZeroConstructor)
	TArray<FFireGridLowDetailRelativeSpawnDesc>        LowDetailVFXSpawnDescs;                                   // 0x0160(0x0010) (ZeroConstructor)
	TArray<FFireParticleSpawnData>                     ParticleSpawnLODSettings;                                 // 0x0170(0x0010) (ZeroConstructor)
	TArray<FFireGridLowDetailRelativeSpawnDesc>        ExteriorSmokeVFXSpawnDescs;                               // 0x0180(0x0010) (ZeroConstructor)
	TArray<FFireDefaultVFXSpawnData>                   VFXToSpawn;                                               // 0x0190(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x01A0(0x0008) MISSED OFFSET
	TArray<FFireParticleSpawnList>                     InterleavedSpawnLists;                                    // 0x01A8(0x0010) (ZeroConstructor)
	UFirePropagator*                                   Propagator;                                               // 0x01B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x01C0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.FireGridVFXManager"));
		return ptr;
	}

};


// Class Fire.FirePropagator
// 0x00F8 (0x0120 - 0x0028)
class UFirePropagator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET
	UFireCellStateTimingParamsDataAsset*               CellStateTimingParams;                                    // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C0(0x0004) MISSED OFFSET
	float                                              WaterHeightOffsetToFloodCells;                            // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x58];                                      // 0x00C8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.FirePropagator"));
		return ptr;
	}

};


// Class Fire.MastFlammableComponent
// 0x0028 (0x0138 - 0x0110)
class UMastFlammableComponent : public UActorFlammableComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	FVector                                            FireGridLocation;                                         // 0x0118(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0124(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.MastFlammableComponent"));
		return ptr;
	}

};


// Class Fire.ShipFireDamageParamsDataAsset
// 0x0018 (0x0040 - 0x0028)
class UShipFireDamageParamsDataAsset : public UDataAsset
{
public:
	FShipFireDamageParams                              FireDamageParams;                                         // 0x0028(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.ShipFireDamageParamsDataAsset"));
		return ptr;
	}

};


// Class Fire.ShipFireLightParamsDataAsset
// 0x0018 (0x0040 - 0x0028)
class UShipFireLightParamsDataAsset : public UDataAsset
{
public:
	FShipFireLightParams                               Params;                                                   // 0x0028(0x0014) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.ShipFireLightParamsDataAsset"));
		return ptr;
	}

};


// Class Fire.ShipFirePropagationComponent
// 0x03C0 (0x0488 - 0x00C8)
class UShipFirePropagationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	FName                                              FeatureToggleName;                                        // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UClass*                                            ShipSize;                                                 // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CellSize;                                                 // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FIntVector                                         GridDimensions;                                           // 0x00E4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FVector                                            GridOffset;                                               // 0x00F0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	UFirePropagator*                                   Propagator;                                               // 0x0100(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UShipFireDamageParamsDataAsset*                    FireDamageDataAsset;                                      // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<FFireCellDesc>                              FireCellDescs;                                            // 0x0110(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0120(0x0010) MISSED OFFSET
	FStatus                                            BurnStatus;                                               // 0x0130(0x0018) (Edit, DisableEditOnInstance)
	UFireGridVFXManager*                               VFXManager;                                               // 0x0148(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	FFireGridVfxSpawnSettings                          VfxSpawnSettings;                                         // 0x0150(0x0058) (Edit, DisableEditOnInstance)
	FShipFireLightManager                              FireLightManager;                                         // 0x01A8(0x0150) (Edit, DisableEditOnInstance)
	FFireGridCharringManager                           FireCharringManager;                                      // 0x02F8(0x00C8) (Edit, DisableEditOnInstance)
	TArray<FReplicatedFireCellData>                    ReplicatedCellData;                                       // 0x03C0(0x0010) (Net, ZeroConstructor, Transient)
	FReplicatedFireCellCharringData                    ReplicatedCellCharringData;                               // 0x03D0(0x0018) (Net, Transient)
	UFireGridAudioManager*                             FireAudioManager;                                         // 0x03E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	FFireCellAudioParams                               FireAudioParams;                                          // 0x03F0(0x0040) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x58];                                      // 0x0430(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.ShipFirePropagationComponent"));
		return ptr;
	}


	void OnRep_CellData();
	void OnRep_CellCharringData();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
