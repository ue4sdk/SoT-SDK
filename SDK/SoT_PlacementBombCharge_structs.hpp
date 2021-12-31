#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct PlacementBombCharge.PlacementBombCharge
// 0x002C
struct FPlacementBombCharge
{
	UClass*                                            Class_2_C9BD6A6847185FAAF40455801B2F864F;                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FVector2D                                          RadiusRange_20_766F5E1545643AF109A1C48B8CD8A81B;          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadiusOverlap_10_3A052E52449C395FA85BB99D6EB0A126;        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FVector2D                                          HeightRange_13_636ED5A34C3BA5D1D7AF0C8C9DCF2C3F;          // 0x0014(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FVector2D                                          SlopeRange_16_50192CC54A727B5D84B1CFB25DEE7264;           // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnWeight_19_0B05BBF2449133E0187C478432462F27;          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SinkDepth_24_8BED1B77489B57462ABCA087083A205C;            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
