#pragma once

// Sea of Thieves (1.0.5) SDK

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

// ScriptStruct Foliage.FoliageTypeObject
// 0x0020
struct FFoliageTypeObject
{
	class UClass*                                      Type;                                                     // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UObject*                                     FoliageTypeObject;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UFoliageType_InstancedStaticMesh*            TypeInstance;                                             // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsAsset;                                                 // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Foliage.ProceduralFoliageInstance
// 0x0060
struct FProceduralFoliageInstance
{
	class UFoliageType_InstancedStaticMesh*            Type;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // 0x01E3(0x0010) (IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Age;                                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Foliage.ConsoleCommands
// 0x0001
struct FConsoleCommands
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
