#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8_t
{
	EFoliageScaling__Uniform       = 0,
	None                           = 1,
	IntProperty                    = 2,
	EFoliageScaling__LockYZ        = 3,
	None01                         = 4,
	FOLIAGEVERTEXCOLORMASK_Disabled = 5
};


// Enum Foliage.FoliageVertexColorMask
enum class EFoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	None                           = 1,
	FOLIAGEVERTEXCOLORMASK_Alpha   = 2,
	None01                         = 3
};


// Enum Foliage.ESimulationQuery
enum class ESimulationQuery : uint8_t
{
	ESimulationQuery__CollisionOverlap = 0,
	None                           = 1,
	ESimulationOverlap__CollisionOverlap = 2
};


// Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8_t
{
	ESimulationOverlap__CollisionOverlap = 0,
	None                           = 1,
	LGT_None                       = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Foliage.FoliageTypeObject
// 0x0020
struct FFoliageTypeObject
{
	class UObject*                                     FoliageTypeObject;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UFoliageType_InstancedStaticMesh*            TypeInstance;                                             // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsAsset;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UClass*                                      Type;                                                     // 0x0018(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct Foliage.ProceduralFoliageInstance
// 0x0060
struct FProceduralFoliageInstance
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0010(0x0010) (IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Age;                                                      // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UFoliageType_InstancedStaticMesh*            Type;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0040(0x0020) MISSED OFFSET
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
