#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_StairsLocomotion.BP_StairsLocomotion
// 0x0020
struct FBP_StairsLocomotion
{
	class UBlendSpace*                                 DownStairsRight_15_8EE6178B4FF9D4DA39FD92A20FCCF914;      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UBlendSpace*                                 UpStairsLeft_2_DA19AA214BF482B301330BBFF50A6F08;          // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 UpStairsRight_13_5833E8C84B80A8FC73E6C1A7137C7BED;        // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 DownStairsLeft_14_3B87C4B54F900C770C667BB5F7C76A5B;       // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
