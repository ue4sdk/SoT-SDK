#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Fire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Fire.FireCellStateTimingParamsDataAsset
// 0x0020 (0x0048 - 0x0028)
class UFireCellStateTimingParamsDataAsset : public UDataAsset
{
public:
	struct FFireCellStateTimingParams                  TimingParams;                                             // 0x0028(0x001C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

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


// Class Fire.ShipFirePropagationComponent
// 0x0080 (0x0150 - 0x00D0)
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
	class UShipFireVFXManager*                         VFXManager;                                               // 0x0120(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FReplicatedFireCellData>             ReplicatedCellData;                                       // 0x0128(0x0010) (Net, ZeroConstructor, Transient)
	TArray<class AActor*>                              DamageableShipParts;                                      // 0x0138(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0148(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.ShipFirePropagationComponent"));
		return ptr;
	}


	void OnRep_CellData();
};


// Class Fire.ShipFirePropagator
// 0x0020 (0x0048 - 0x0028)
class UShipFirePropagator : public UObject
{
public:
	TArray<struct FShipFireCell>                       Cells;                                                    // 0x0028(0x0010) (ZeroConstructor)
	class UFireCellStateTimingParamsDataAsset*         CellStateTimingParams;                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.ShipFirePropagator"));
		return ptr;
	}

};


// Class Fire.ShipFireVFXParamsDataAsset
// 0x0030 (0x0058 - 0x0028)
class UShipFireVFXParamsDataAsset : public UDataAsset
{
public:
	struct FShipFireVFXParams                          Params;                                                   // 0x0028(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.ShipFireVFXParamsDataAsset"));
		return ptr;
	}

};


// Class Fire.ShipFireVFXManager
// 0x0148 (0x0170 - 0x0028)
class UShipFireVFXManager : public UObject
{
public:
	TArray<struct FShipFireRelativeSpawnDesc>          BelowDeckSmokeSpawnDescs;                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UShipFireVFXParamsDataAsset*                 VfxParams;                                                // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FFireParticleSpawnData>              ParticleSpawnLODSettings;                                 // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, class UParticleSystemComponent*> SpawnedParticleSystemsForTemplates;                       // 0x0050(0x0050) (ExportObject, ZeroConstructor)
	TMap<int, class UParticleSystemComponent*>         SpawnedCustomParticleSystemsForCells;                     // 0x00A0(0x0050) (ExportObject, ZeroConstructor)
	TMap<int, class UParticleSystemComponent*>         SpawnedParticleSystemsForSmokeDescs;                      // 0x00F0(0x0050) (ExportObject, ZeroConstructor)
	class UParticleSystemComponent*                    SpawnedTopDeckSmokeParticleSystem;                        // 0x0140(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FFireParticleSpawnList>              InterleavedSpawnLists;                                    // 0x0148(0x0010) (ZeroConstructor)
	class UShipFirePropagator*                         Propagator;                                               // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0160(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Fire.ShipFireVFXManager"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
