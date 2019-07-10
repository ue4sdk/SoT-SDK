#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x0018 (0x00E8 - 0x00D0)
class UFlammableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET
	bool                                               OnFire;                                                   // 0x00E0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.FlammableComponent"));
		return ptr;
	}


	void OnRep_OnFire();
	void Multicast_NotifyExtinguished_RPC(const struct FVector& InExtinguishLocationWS);
};


// Class Fire.ActorFlammableComponent
// 0x0030 (0x0118 - 0x00E8)
class UActorFlammableComponent : public UFlammableComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00E8(0x0018) MISSED OFFSET
	class UParticleSystem*                             FireVFX;                                                  // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SteamVFX;                                                 // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireVFXIntensity;                                         // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET

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


// Class Fire.FireCellStateTimingParamsDataAsset
// 0x0080 (0x00A8 - 0x0028)
class UFireCellStateTimingParamsDataAsset : public UDataAsset
{
public:
	struct FFireCellStateTimingParams                  TimingParams;                                             // 0x0028(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.FireCellStateTimingParamsDataAsset"));
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


	void SetAllCellsOnFire(bool IsOnFire);
};


// Class Fire.FireStatus
// 0x0000 (0x0028 - 0x0028)
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

};


// Class Fire.FlammableWieldableComponent
// 0x0010 (0x00F8 - 0x00E8)
class UFlammableWieldableComponent : public UFlammableComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.FlammableWieldableComponent"));
		return ptr;
	}

};


// Class Fire.IgniteStatus
// 0x0000 (0x0028 - 0x0028)
class UIgniteStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.IgniteStatus"));
		return ptr;
	}

};


// Class Fire.ShipFireAudioManager
// 0x00B8 (0x00E0 - 0x0028)
class UShipFireAudioManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	struct FFireCellAudioParams                        FireAudioParams;                                          // 0x0040(0x0038) (Edit, DisableEditOnInstance)
	class AActor*                                      OwningActor;                                              // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	class UShipFirePropagator*                         FirePropagator;                                           // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0088(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.ShipFireAudioManager"));
		return ptr;
	}

};


// Class Fire.ShipFireCellAreaSelectionParamsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UShipFireCellAreaSelectionParamsDataAsset : public UDataAsset
{
public:
	TArray<struct FShipFireCellAreaSelectionParams>    ShipFireCellAreaSelectionParams;                          // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.ShipFireCellAreaSelectionParamsDataAsset"));
		return ptr;
	}

};


// Class Fire.ShipFireDamageParamsDataAsset
// 0x0020 (0x0048 - 0x0028)
class UShipFireDamageParamsDataAsset : public UDataAsset
{
public:
	struct FShipFireDamageParams                       FireDamageParams;                                         // 0x0028(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.ShipFireDamageParamsDataAsset"));
		return ptr;
	}

};


// Class Fire.ShipFireLightManager
// 0x0118 (0x0140 - 0x0028)
class UShipFireLightManager : public UObject
{
public:
	TArray<struct FShipFireLightRelativeSpawnDesc>     LightSpawnDescs;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FGenericLightTemplate                       LightTemplate;                                            // 0x0038(0x00D0) (Edit, DisableEditOnInstance)
	TArray<struct FShipFireLight>                      Lights;                                                   // 0x0108(0x0010) (ZeroConstructor, Transient)
	class UShipFirePropagator*                         Propagator;                                               // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UStaticMesh*                                 AreaLightMesh;                                            // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AreaLightScaleWhenNotOnShip;                              // 0x0128(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AreaLightZScale;                                          // 0x012C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinLightRadius;                                           // 0x0130(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLightRadius;                                           // 0x0134(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFlickerScale;                                          // 0x0138(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightMovementSpeedCmPerSecond;                            // 0x013C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.ShipFireLightManager"));
		return ptr;
	}

};


// Class Fire.ShipFirePropagationComponent
// 0x00A0 (0x0170 - 0x00D0)
class UShipFirePropagationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	class UClass*                                      ShipSize;                                                 // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CellSize;                                                 // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FIntVector                                  GridDimensions;                                           // 0x00E4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GridOffset;                                               // 0x00F0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	class UShipFirePropagator*                         Propagator;                                               // 0x0100(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UShipFireDamageParamsDataAsset*              FireDamageDataAsset;                                      // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FShipFireCellDesc>                   FireCellDescs;                                            // 0x0110(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStatus                                     BurnStatus;                                               // 0x0120(0x0018) (Edit, DisableEditOnInstance)
	class UShipFireVFXManager*                         VFXManager;                                               // 0x0138(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UShipFireLightManager*                       LightManager;                                             // 0x0140(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FReplicatedFireCellData>             ReplicatedCellData;                                       // 0x0148(0x0010) (Net, ZeroConstructor, Transient)
	class UShipFireAudioManager*                       FireAudioManager;                                         // 0x0158(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0160(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.ShipFirePropagationComponent"));
		return ptr;
	}


	void OnRep_CellData();
};


// Class Fire.ShipFirePropagator
// 0x0050 (0x0078 - 0x0028)
class UShipFirePropagator : public UObject
{
public:
	TArray<struct FShipFireCell>                       Cells;                                                    // 0x0028(0x0010) (ZeroConstructor)
	class UFireCellStateTimingParamsDataAsset*         CellStateTimingParams;                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.ShipFirePropagator"));
		return ptr;
	}

};


// Class Fire.ShipFireVFXParamsDataAsset
// 0x0038 (0x0060 - 0x0028)
class UShipFireVFXParamsDataAsset : public UDataAsset
{
public:
	struct FShipFireVFXParams                          Params;                                                   // 0x0028(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.ShipFireVFXParamsDataAsset"));
		return ptr;
	}

};


// Class Fire.ShipFireVFXManager
// 0x0168 (0x0190 - 0x0028)
class UShipFireVFXManager : public UObject
{
public:
	TArray<struct FShipFireRelativeSpawnDesc>          BelowDeckSmokeSpawnDescs;                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShipFireLowDetailRelativeSpawnDesc> LowDetailVFXSpawnDescs;                                   // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFireParticleSpawnData>              ParticleSpawnLODSettings;                                 // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UShipFireVFXParamsDataAsset*                 VfxParams;                                                // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, class UParticleSystemComponent*> SpawnedParticleSystemsForTemplates;                       // 0x0060(0x0050) (ExportObject, ZeroConstructor, Transient)
	TMap<int, class UParticleSystemComponent*>         SpawnedCustomParticleSystemsForCells;                     // 0x00B0(0x0050) (ExportObject, ZeroConstructor, Transient)
	TMap<int, class UParticleSystemComponent*>         SpawnedParticleSystemsForSmokeDescs;                      // 0x0100(0x0050) (ExportObject, ZeroConstructor, Transient)
	class UParticleSystemComponent*                    SpawnedTopDeckSmokeParticleSystem;                        // 0x0150(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnedLowDetailParticleSystem;                           // 0x0158(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0160(0x0008) MISSED OFFSET
	TArray<struct FFireParticleSpawnList>              InterleavedSpawnLists;                                    // 0x0168(0x0010) (ZeroConstructor)
	class UShipFirePropagator*                         Propagator;                                               // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0180(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.ShipFireVFXManager"));
		return ptr;
	}

};


// Class Fire.StatusResponseExtinguish
// 0x0000 (0x0028 - 0x0028)
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
// 0x0000 (0x0028 - 0x0028)
class UStatusResponseIgnite : public UStatusResponse
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.StatusResponseIgnite"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
