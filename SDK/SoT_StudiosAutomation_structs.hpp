#pragma once

// Sea of Thieves (1.1.1) SDK

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
	EComparisonMethod__Greater_Than = 2,
	None01                         = 3
};


// Enum StudiosAutomation.EPerformanceCaptureType
enum class EPerformanceCaptureType : uint8_t
{
	EPerformanceCaptureType__None  = 0,
	None                           = 1,
	EPerformanceCaptureType__EPerformanceCaptureType_MAX = 2,
	IntProperty                    = 3
};


// Enum StudiosAutomation.ETestArea
enum class ETestArea : uint8_t
{
	ETestArea__None                = 0,
	None                           = 1,
	ETestArea__Art                 = 2,
	None01                         = 3
};


// Enum StudiosAutomation.ETestCategory
enum class ETestCategory : uint8_t
{
	ETestCategory__Unit            = 0,
	None                           = 1,
	ETestCategory__Soak            = 2,
	None01                         = 3,
	EGameplayTagQueryExprType__Undefined = 4
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
