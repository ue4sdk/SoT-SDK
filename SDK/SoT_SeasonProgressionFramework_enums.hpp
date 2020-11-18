#pragma once

// Sea of Thieves (2.0) SDK

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
