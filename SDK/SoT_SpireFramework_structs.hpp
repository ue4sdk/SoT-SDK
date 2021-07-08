#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_SpireFramework_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_AthenaEngine_classes.hpp"
#include "SoT_AthenaDebug_classes.hpp"
#include "SoT_Tales_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SpireFramework.ServerSpireInfo
// 0x0068
struct FServerSpireInfo
{
	int                                                LevelId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpireActor;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<class FString, struct FName>                  InstancedLevelPaths;                                      // 0x0018(0x0050) (ZeroConstructor)
};

// ScriptStruct SpireFramework.SpireInfo
// 0x0008
struct FSpireInfo
{
	int                                                LevelId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               ShouldBeLoaded;                                           // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ShouldBeVisible;                                          // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct SpireFramework.SpireEntry
// 0x0014
struct FSpireEntry
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       IslandName;                                               // 0x000C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
