#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_ETurning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_Turning.BP_Turning
// 0x0015
struct FBP_Turning
{
	TEnumAsByte<ETurning>                              ETurning_21_CD2EA9F4434A28556C8ADFAB5A8F981C;             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	float                                              CurrentTurnAngle_6_F9875D9241BE398EE184A2A666799B76;      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentTurnRate_18_A5A53AE842E01C35387E038ED0A2241B;      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimationTurnTime45_9_B21F57A1409808E1965191963BB33E6A;   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimationTurnTime90_12_D85FA2934CBFF9F6CB4F17958D80C3F1;  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimationTurnTime180_15_1C2A85FD440795B73AD606AFB0F0A63B; // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
