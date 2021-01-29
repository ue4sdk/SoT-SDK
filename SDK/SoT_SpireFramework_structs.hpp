#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_SpireFramework_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_AthenaEngine_classes.hpp"
#include "SoT_Tales_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SpireFramework.SpireInfo
// 0x0020
struct FSpireInfo
{
	int                                                LevelId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsLoaded;                                                 // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class AActor*                                      SpireActor;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct SpireFramework.QuestVariableSpireHandle
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableSpireHandle : public FQuestVariable
{

};

// ScriptStruct SpireFramework.SpireStreamedLevelData
// 0x0020
struct FSpireStreamedLevelData
{
	class UAthenaStreamedLevelDataAsset*               DataAsset;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             Locations;                                                // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       FeatureToggle;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
