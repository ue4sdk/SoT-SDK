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

// Enum ItemQuality.EItemQualityQueryReason
enum class EItemQualityQueryReason : uint8_t
{
	EItemQualityQueryReason__DontCare = 0,
	EItemQualityQueryReason__ChangeOwnership = 1,
	EItemQualityQueryReason__DropOnShip = 2,
	EItemQualityQueryReason__HandIn = 3,
	EItemQualityQueryReason__EItemQualityQueryReason_MAX = 4
};


// Enum ItemQuality.EEmissaryQualityLevel
enum class EEmissaryQualityLevel : uint8_t
{
	EEmissaryQualityLevel__Invalid = 0,
	EEmissaryQualityLevel__Level1  = 1,
	EEmissaryQualityLevel__Level2  = 2,
	EEmissaryQualityLevel__Level3  = 3,
	EEmissaryQualityLevel__Level4  = 4,
	EEmissaryQualityLevel__Level5  = 5,
	EEmissaryQualityLevel__Level6  = 6,
	EEmissaryQualityLevel__Level7  = 7,
	EEmissaryQualityLevel__Level8  = 8,
	EEmissaryQualityLevel__MAX     = 9,
	EEmissaryQualityLevel__EEmissaryQualityLevel_MAX = 10
};


// Enum ItemQuality.EHealthIndex
enum class EHealthIndex : uint8_t
{
	EHealthIndex__DontCare         = 0,
	EHealthIndex__Level1           = 1,
	EHealthIndex__Level2           = 2,
	EHealthIndex__Level3           = 3,
	EHealthIndex__Level4           = 4,
	EHealthIndex__Level5           = 5,
	EHealthIndex__Level6           = 6,
	EHealthIndex__Level7           = 7,
	EHealthIndex__MAX              = 8,
	EHealthIndex__EHealthIndex_MAX = 9
};


// Enum ItemQuality.EStatusType
enum class EStatusType : uint8_t
{
	EStatusType__DontCare          = 0,
	EStatusType__Yes               = 1,
	EStatusType__No                = 2,
	EStatusType__EStatusType_MAX   = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
