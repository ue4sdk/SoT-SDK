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

// UserDefinedStruct DS_Shroudbreaker_AmbushMusicParams.DS_Shroudbreaker_AmbushMusicParams
// 0x0010
struct FDS_Shroudbreaker_AmbushMusicParams
{
	class AActor*                                      MusicSpawnLocation_2_35D548914E6F502F4B7272B03C67C260;    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      MusicZoneRef_5_50A74F1245F5BB3000C82DBD84113F15;          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
