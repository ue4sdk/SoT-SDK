#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Serialization.StructSerializerNumericTestStruct
// 0x0030
struct FStructSerializerNumericTestStruct
{
	int8_t                                             Int8;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	int16_t                                            Int16;                                                    // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	int                                                Int32;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Int64;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UInt8;                                                    // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0011(0x0001) MISSED OFFSET
	uint16_t                                           UInt16;                                                   // 0x0012(0x0002) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           UInt32;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           UInt64;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Float;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	double                                             Double;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Serialization.StructSerializerBooleanTestStruct
// 0x0008
struct FStructSerializerBooleanTestStruct
{
	bool                                               BoolFalse;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolTrue;                                                 // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	uint32_t                                           Bitfield;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Serialization.StructSerializerObjectTestStruct
// 0x0010
struct FStructSerializerObjectTestStruct
{
	UClass*                                            Class;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	UObject*                                           ObjectPtr;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
// 0x0040
struct FStructSerializerBuiltinTestStruct
{
	FGuid                                              Guid;                                                     // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	FName                                              Name;                                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	FString                                            String;                                                   // 0x0018(0x0010) (ZeroConstructor)
	FRotator                                           Rotator;                                                  // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData)
	FVector                                            Vector;                                                   // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Serialization.StructSerializerArrayTestStruct
// 0x0040
struct FStructSerializerArrayTestStruct
{
	TArray<int>                                        Int32Array;                                               // 0x0000(0x0010) (ZeroConstructor)
	int                                                StaticSingleElement;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StaticInt32Array[0x3];                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StaticFloatArray[0x3];                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<FVector>                                    VectorArray;                                              // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Serialization.StructSerializerTestStruct
// 0x00C8
struct FStructSerializerTestStruct
{
	FStructSerializerNumericTestStruct                 Numerics;                                                 // 0x0000(0x0030)
	FStructSerializerBooleanTestStruct                 Booleans;                                                 // 0x0030(0x0008)
	FStructSerializerObjectTestStruct                  Objects;                                                  // 0x0038(0x0010)
	FStructSerializerBuiltinTestStruct                 Builtins;                                                 // 0x0048(0x0040)
	FStructSerializerArrayTestStruct                   Arrays;                                                   // 0x0088(0x0040)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
