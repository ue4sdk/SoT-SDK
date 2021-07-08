#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaDebug.DrawDebugItemMessage
// 0x0028
struct FDrawDebugItemMessage
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceInGroup;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class FString                                      Message;                                                  // 0x0010(0x0010) (ZeroConstructor)
	struct FColor                                      Colour;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaDebug.DrawDebugItemSphere
// 0x0020
struct FDrawDebugItemSphere
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceInGroup;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FVector                                     CentrePos;                                                // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      Colour;                                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaDebug.DrawDebugItemBox
// 0x0050
struct FDrawDebugItemBox
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceInGroup;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FVector                                     CentrePos;                                                // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Box;                                                      // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0030(0x0010) (IsPlainOldData)
	struct FColor                                      Colour;                                                   // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
};

// ScriptStruct AthenaDebug.DrawDebugItemCapsule
// 0x0040
struct FDrawDebugItemCapsule
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceInGroup;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FVector                                     CentrePos;                                                // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // 0x0020(0x0010) (IsPlainOldData)
	struct FColor                                      Colour;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
};

// ScriptStruct AthenaDebug.DrawDebugItemLine
// 0x002C
struct FDrawDebugItemLine
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceInGroup;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FVector                                     LineStart;                                                // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      Colour;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaDebug.DrawDebugItemSector
// 0x0048
struct FDrawDebugItemSector
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceInGroup;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              RotationAngle;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Centre;                                                   // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              SectorAngle;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      Colour;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ZeroAngleVector;                                          // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationAxis;                                             // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              SubAngles;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaDebug.DrawDebugItemString
// 0x0030
struct FDrawDebugItemString
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceInGroup;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class FString                                      String;                                                   // 0x0010(0x0010) (ZeroConstructor)
	struct FColor                                      Colour;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     StringPos;                                                // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaDebug.SphereData
// 0x0018
struct FSphereData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Segments;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      Colour;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
