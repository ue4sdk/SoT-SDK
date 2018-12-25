#pragma once

// Sea of Thieves (1.4) SDK

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

// Enum StudiosAutomation.EComparisonMethod
enum class EComparisonMethod : uint8_t
{
	EComparisonMethod__Equal_To    = 0,
	None                           = 1,
	__UNKNOWN_NAME__               = 2,
	EComparisonMethod__Greater_Than = 3,
	None01                         = 4,
	NameProperty                   = 5,
	__UNKNOWN_NAME__01             = 6
};


// Enum StudiosAutomation.EPerformanceCaptureType
enum class EPerformanceCaptureType : uint8_t
{
	EPerformanceCaptureType__None  = 0,
	None                           = 1,
	__UNKNOWN_NAME__               = 2,
	EPerformanceCaptureType__EPerformanceCaptureType_MAX = 3,
	__UNKNOWN_NAME__01             = 4
};


// Enum StudiosAutomation.ETestArea
enum class ETestArea : uint8_t
{
	ETestArea__None                = 0,
	None                           = 1,
	__UNKNOWN_NAME__               = 2,
	ETestArea__Art                 = 3,
	None01                         = 4,
	EProgressBarFillType__LeftToRight = 5
};


// Enum StudiosAutomation.ETestCategory
enum class ETestCategory : uint8_t
{
	ETestCategory__Unit            = 0,
	None                           = 1,
	__UNKNOWN_NAME__               = 2,
	ETestCategory__Soak            = 3,
	None01                         = 4,
	__UNKNOWN_NAME__01             = 5,
	__UNKNOWN_NAME__02             = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct StudiosAutomation.TestLevelMetadataEntry
// 0x0020
struct FTestLevelMetadataEntry
{
	class FString                                      Property;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      Value;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct StudiosAutomation.ClientPawnDetails
// 0x0010
struct FClientPawnDetails
{
	TArray<class APawn*>                               Pawns;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
