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

// Enum RareEngine.EMemoryUsageVisualiserInstanceType
enum class EMemoryUsageVisualiserInstanceType : uint8_t
{
	EMemoryUsageVisualiserInstanceType__Server = 0,
	EMemoryUsageVisualiserInstanceType__Client = 1,
	EMemoryUsageVisualiserInstanceType__EMemoryUsageVisualiserInstanceType_MAX = 2
};


// Enum RareEngine.EMemoryGatheringMode
enum class EMemoryGatheringMode : uint8_t
{
	EMemoryGatheringMode__Exclusive = 0,
	EMemoryGatheringMode__Inclusive = 1,
	EMemoryGatheringMode__EMemoryGatheringMode_MAX = 2
};


// Enum RareEngine.ETestEnum
enum class ETestEnum : uint8_t
{
	Alpha                          = 0,
	Beta                           = 1,
	ETestEnum_MAX                  = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
