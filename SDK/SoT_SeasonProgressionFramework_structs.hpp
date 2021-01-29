#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_SeasonProgressionFramework_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SeasonProgressionFramework.PlayerTrackedObjective
// 0x0010
struct FPlayerTrackedObjective
{
	struct FGuid                                       ObjectiveId;                                              // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SeasonProgressionFramework.SeasonReward
// 0x0020
struct FSeasonReward
{
	struct FGuid                                       Id;                                                       // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Tier;                                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Level;                                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SeasonProgressionFramework.SeasonRewardEarnedEvent
// 0x0028
struct FSeasonRewardEarnedEvent
{
	struct FGuid                                       SeasonId;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               MultipleRewards;                                          // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FSeasonReward>                       Rewards;                                                  // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct SeasonProgressionFramework.LevelCompletionEvent
// 0x0024
struct FLevelCompletionEvent
{
	struct FGuid                                       SeasonId;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TimeSpentInLevel;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Tier;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TimeSpentInTier;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               TierCompleted;                                            // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               SeasonCompleted;                                          // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
};

// ScriptStruct SeasonProgressionFramework.LevelProgressionEvent
// 0x0030
struct FLevelProgressionEvent
{
	struct FGuid                                       SeasonId;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SourceGoalId;                                             // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                XpChange;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentXP;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentTier;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentLevel;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SeasonProgressionFramework.SeasonGoalCompletionEvent
// 0x0034
struct FSeasonGoalCompletionEvent
{
	struct FGuid                                       SeasonId;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       GoalId;                                                   // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESeasonGoalType>                       GoalType;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FGuid                                       GoalGroupId;                                              // 0x0024(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SeasonProgressionFramework.SeasonGoalProgressionEvent
// 0x0040
struct FSeasonGoalProgressionEvent
{
	int                                                PreviousProgress;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentProgress;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CompletionThreshold;                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SeasonId;                                                 // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       GoalId;                                                   // 0x001C(0x0010) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESeasonGoalType>                       GoalType;                                                 // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	struct FGuid                                       GoalGroupId;                                              // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SeasonProgressionFramework.TrackedObjectiveCompletionMessage
// 0x00D8
struct FTrackedObjectiveCompletionMessage
{
	struct FGuid                                       ObjectiveId;                                              // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FPirateIdentity                             PirateIdentity;                                           // 0x0010(0x0078)
	struct FPlayerBaseTelemetryFragment                PlayerInfo;                                               // 0x0088(0x0048)
	double                                             CreatedAt;                                                // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SeasonProgressionFramework.TrackedObjectiveProgressUpdateMessage
// 0x00E0
struct FTrackedObjectiveProgressUpdateMessage
{
	struct FGuid                                       ObjectiveId;                                              // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FPirateIdentity                             PirateIdentity;                                           // 0x0010(0x0078)
	struct FPlayerBaseTelemetryFragment                PlayerInfo;                                               // 0x0088(0x0048)
	int                                                Value;                                                    // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	double                                             CreatedAt;                                                // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SeasonProgressionFramework.TrackedObjectiveEvent
// 0x0018
struct FTrackedObjectiveEvent
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
