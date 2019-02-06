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


// Class Fire.ShipFirePropagationComponent
// 0x0050 (0x0120 - 0x00D0)
class UShipFirePropagationComponent : public UActorComponent
{
public:
	class UClass*                                      ShipSize;                                                 // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CellSize;                                                 // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FIntVector                                  GridDimensions;                                           // 0x00DC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GridOffset;                                               // 0x00E8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	class UShipFirePropagator*                         Propagator;                                               // 0x00F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FShipFireCellDesc>                   FireCellDescs;                                            // 0x0100(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FReplicatedFireCellData>             ReplicatedCellData;                                       // 0x0110(0x0010) (Net, ZeroConstructor, Transient)

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
