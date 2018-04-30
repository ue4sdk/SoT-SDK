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

// ScriptStruct Serialisation.SerialisedNestedStruct
// 0x0028
struct FSerialisedNestedStruct
{
	float                                              Float;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class FString                                      String;                                                   // 0x01E3(0x0010) (ZeroConstructor)
	TArray<int>                                        IntArray;                                                 // 0x01E3(0x0010) (ZeroConstructor)
	int                                                Int;                                                      // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Serialisation.SerialisedTestStruct
// 0x0060
struct FSerialisedTestStruct
{
	struct FSerialisedNestedStruct                     NestedStruct;                                             // 0x0000(0x0028)
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	int                                                Int;                                                      // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      String;                                                   // 0x01E3(0x0010) (ZeroConstructor)
	TArray<int>                                        IntArray;                                                 // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FSerialisedNestedStruct>             StructArray;                                              // 0x01E3(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
