#pragma once

// Sea of Thieves (1.0.5) SDK

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
	double                                             Double;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	int8_t                                             Int8;                                                     // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	int16_t                                            Int16;                                                    // 0x01E3(0x0002) (ZeroConstructor, IsPlainOldData)
	int                                                Int32;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Int64;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UInt8;                                                    // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           UInt16;                                                   // 0x01E3(0x0002) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           UInt32;                                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           UInt64;                                                   // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Float;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Serialization.StructSerializerBooleanTestStruct
// 0x0008
struct FStructSerializerBooleanTestStruct
{
	uint32_t                                           Bitfield;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	bool                                               BoolFalse;                                                // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolTrue;                                                 // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Serialization.StructSerializerObjectTestStruct
// 0x0010
struct FStructSerializerObjectTestStruct
{
	class UObject*                                     ObjectPtr;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UClass*                                      Class;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
// 0x0040
struct FStructSerializerBuiltinTestStruct
{
	struct FVector                                     Vector;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	struct FGuid                                       Guid;                                                     // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      String;                                                   // 0x01E3(0x0010) (ZeroConstructor)
	struct FRotator                                    Rotator;                                                  // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Serialization.StructSerializerArrayTestStruct
// 0x0040
struct FStructSerializerArrayTestStruct
{
	TArray<struct FVector>                             VectorArray;                                              // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<int>                                        Int32Array;                                               // 0x01E3(0x0010) (ZeroConstructor)
	int                                                StaticSingleElement;                                      // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StaticInt32Array[0x3];                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StaticFloatArray[0x3];                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Serialization.StructSerializerTestStruct
// 0x00C8
struct FStructSerializerTestStruct
{
	struct FStructSerializerArrayTestStruct            Arrays;                                                   // 0x0000(0x0040)
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FStructSerializerNumericTestStruct          Numerics;                                                 // 0x01E3(0x0030)
	struct FStructSerializerBooleanTestStruct          Booleans;                                                 // 0x01E3(0x0008)
	struct FStructSerializerObjectTestStruct           Objects;                                                  // 0x01E3(0x0010)
	struct FStructSerializerBuiltinTestStruct          Builtins;                                                 // 0x01E3(0x0040)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
