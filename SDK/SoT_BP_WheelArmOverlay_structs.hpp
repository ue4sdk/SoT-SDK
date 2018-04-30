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

// UserDefinedStruct BP_WheelArmOverlay.BP_WheelArmOverlay
// 0x0010
struct FBP_WheelArmOverlay
{
	class UBlendSpace1D*                               ArmLower_2_5C05A9D74E843B0DD67A9DA5B8583065;              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               ArmRaise_5_4EA5CB8743D3E7C0F077349D8CC5A6C2;              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
