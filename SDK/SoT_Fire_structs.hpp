#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Fire_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Fire.FireCellStateTimingParams
// 0x001C
struct FFireCellStateTimingParams
{
	float                                              KindleTime;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BurningTime;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SmoulderingTime;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SteamingTime;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SidewaysPropagationTime;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpwardPropagationTime;                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DownwardPropagationTime;                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.ShipFireCellDesc
// 0x0050
struct FShipFireCellDesc
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FBox                                        BoundingBox;                                              // 0x000C(0x001C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FIntVector                                  GridPosition;                                             // 0x0028(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               CanBurn;                                                  // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShipDeck>                             Deck;                                                     // 0x0035(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	int                                                CellIndex;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<int>                                        NeighbourCellIndices;                                     // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct Fire.ReplicatedFireCellData
// 0x0001
struct FReplicatedFireCellData
{
	TEnumAsByte<EFireCellState>                        State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.ShipFireCell
// 0x0070
struct FShipFireCell
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct Fire.FireCellStateData
// 0x0010
struct FFireCellStateData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
