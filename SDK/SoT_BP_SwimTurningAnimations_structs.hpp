#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_SwimTurningAnimations.BP_SwimTurningAnimations
// 0x0018
struct FBP_SwimTurningAnimations
{
	class UAnimSequence*                               Turn45_2_B302CB75470F6C2FD04AC8BE88A1B9FC;                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Turn90_6_3E4E7D384378A72C0D5737816320D73F;                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Turn180_8_AAAD27D34908061737643C8AB65CF0DB;               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
