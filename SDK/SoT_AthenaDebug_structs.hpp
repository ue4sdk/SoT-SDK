#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaDebug.DrawDebugItemSphere
// 0x001C
struct FDrawDebugItemSphere
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CentrePos;                                                // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      Colour;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaDebug.DrawDebugItemBox
// 0x0040
struct FDrawDebugItemBox
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CentrePos;                                                // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Box;                                                      // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // 0x0020(0x0010) (IsPlainOldData)
	struct FColor                                      Colour;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
};

// ScriptStruct AthenaDebug.DrawDebugItemCapsule
// 0x0040
struct FDrawDebugItemCapsule
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CentrePos;                                                // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0020(0x0010) (IsPlainOldData)
	struct FColor                                      Colour;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
};

// ScriptStruct AthenaDebug.DrawDebugItemLine
// 0x0028
struct FDrawDebugItemLine
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineStart;                                                // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      Colour;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaDebug.DrawDebugItemMessage
// 0x0020
struct FDrawDebugItemMessage
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      Message;                                                  // 0x0008(0x0010) (ZeroConstructor)
	struct FColor                                      Colour;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaDebug.DrawDebugItemString
// 0x0028
struct FDrawDebugItemString
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      String;                                                   // 0x0008(0x0010) (ZeroConstructor)
	struct FColor                                      Colour;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     StringPos;                                                // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
