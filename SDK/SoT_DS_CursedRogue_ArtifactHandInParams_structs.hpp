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

// UserDefinedStruct DS_CursedRogue_ArtifactHandInParams.DS_CursedRogue_ArtifactHandInParams
// 0x0010
struct FDS_CursedRogue_ArtifactHandInParams
{
	class AActor*                                      Location_2_19B9D7764CE8F86BA453A4B71661C63F;              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      LockedChest_5_2981052348CAF43D89BCCC8BF678190D;           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
