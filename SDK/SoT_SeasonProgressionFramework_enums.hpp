#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SeasonProgressionFramework.ETrackedObjectiveType
enum class ETrackedObjectiveType : uint8_t
{
	ETrackedObjectiveType__ProgressUpdate = 0,
	ETrackedObjectiveType__Completion = 1,
	ETrackedObjectiveType__ETrackedObjectiveType_MAX = 2
};


// Enum SeasonProgressionFramework.ESeasonGoalType
enum class ESeasonGoalType : uint8_t
{
	ESeasonGoalType__Goal          = 0,
	ESeasonGoalType__Challenge     = 1,
	ESeasonGoalType__Individual    = 2,
	ESeasonGoalType__ESeasonGoalType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
