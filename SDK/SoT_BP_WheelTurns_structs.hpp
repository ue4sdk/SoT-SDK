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

// UserDefinedStruct BP_WheelTurns.BP_WheelTurns
// 0x0018
struct FBP_WheelTurns
{
	class UAnimSequence*                               Turn_2_C520E90D4EBA5702AED7C38AACEC1F98;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TurnFast_5_C08B9B384B5E56AA42A6C5BA5401753A;              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TurnFast180_8_386604EA45C2D21BBBF525BFE7026040;           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
