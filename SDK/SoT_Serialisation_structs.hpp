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
	class FString                                      String;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        IntArray;                                                 // 0x0010(0x0010) (ZeroConstructor)
	int                                                Int;                                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Serialisation.SerialisedTestStruct
// 0x0060
struct FSerialisedTestStruct
{
	int                                                Int;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      String;                                                   // 0x0008(0x0010) (ZeroConstructor)
	TArray<int>                                        IntArray;                                                 // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FSerialisedNestedStruct>             StructArray;                                              // 0x0028(0x0010) (ZeroConstructor)
	struct FSerialisedNestedStruct                     NestedStruct;                                             // 0x0038(0x0028)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
