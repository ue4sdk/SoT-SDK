#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_StarsOfAThiefPhasedMechanism.DS_StarsOfAThiefPhasedMechanism
// 0x0020
struct FDS_StarsOfAThiefPhasedMechanism
{
	class AActor*                                      StaticMouthActor_23_06DD418A47875CA1BA8FBDB82A68F936;     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DynamicMouthLocationActor_12_8B83C72A42E31C0D21DE94B07A308862;// 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DynamicMouthActor_14_7CA903F64144272391F963AEE5138F90;    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TriggerLocationActor_21_96A1176C4A3793E7B69FFAA55B53B3C6; // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
