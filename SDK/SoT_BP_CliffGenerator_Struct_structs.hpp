#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_CliffGenerator_Struct.BP_CliffGenerator_Struct
// 0x0010
struct FBP_CliffGenerator_Struct
{
	float                                              Bank_7_2C980FB244B92CC493C97DA58B366CF8;                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Depth_13_1545F24E4D1B35DADB6D65979D94B410;                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Height_11_16D0E9744D3BE1D6FD9FEBBFEBBD6AA3;               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpecificCliffIndex_17_3FF6A18F45DE69C0DD833F83F249F7B6;   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
