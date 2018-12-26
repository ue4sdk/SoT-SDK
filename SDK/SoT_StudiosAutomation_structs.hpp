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
	EComparisonMethod__Not_Equal_To = 1,
	EComparisonMethod__Greater_Than_Or_Equal_To = 2,
	EComparisonMethod__Less_Than_Or_Equal_To = 3,
	EComparisonMethod__Greater_Than = 4,
	EComparisonMethod__Less_Than   = 5,
	EComparisonMethod__EComparisonMethod_MAX = 6
};


// Enum StudiosAutomation.EPerformanceCaptureType
enum class EPerformanceCaptureType : uint8_t
{
	EPerformanceCaptureType__None  = 0,
	EPerformanceCaptureType__FrameTime = 1,
	EPerformanceCaptureType__StreamingMemory = 2,
	EPerformanceCaptureType__StreamingPositional = 3,
	EPerformanceCaptureType__EPerformanceCaptureType_MAX = 4
};


// Enum StudiosAutomation.ETestArea
enum class ETestArea : uint8_t
{
	ETestArea__None                = 0,
	ETestArea__Rendering           = 1,
	ETestArea__UserInterface       = 2,
	ETestArea__UserInterfaceInitialization = 3,
	ETestArea__Art                 = 4,
	ETestArea__ETestArea_MAX       = 5
};


// Enum StudiosAutomation.ETestCategory
enum class ETestCategory : uint8_t
{
	ETestCategory__Unit            = 0,
	ETestCategory__Integration     = 1,
	ETestCategory__Acceptance      = 2,
	ETestCategory__Stress          = 3,
	ETestCategory__Soak            = 4,
	ETestCategory__Performance     = 5,
	ETestCategory__ETestCategory_MAX = 6
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
