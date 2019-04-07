#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_Shroudbreaker_ShipsLogParams.DS_Shroudbreaker_ShipsLogParams
// 0x0018
struct FDS_Shroudbreaker_ShipsLogParams
{
	class AActor*                                      Location_15_0C7EF04B4B5BF8C166EA3DA844B2AE96;             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UQuestBookPageBundle*                        ShipsLogBundle_6_471BE9AF4927BE10B3F4078D1B2B2EBD;        // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ShipsLogItem_12_906EDF4249E036A8309E2F9EFE561769;         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
