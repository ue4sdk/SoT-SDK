#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct JsonConvertersTests.TestStructWithPropertyFlag
// 0x0008
struct FTestStructWithPropertyFlag
{
	float                                              FieldWithFlag;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FieldWithoutFlag;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct JsonConvertersTests.TestStructWithOneField
// 0x0004
struct FTestStructWithOneField
{
	float                                              TestField;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct JsonConvertersTests.TestStructWithNestedStruct
// 0x0004
struct FTestStructWithNestedStruct
{
	struct FTestStructWithOneField                     TestStructField;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
