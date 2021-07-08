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

// Enum SeasonProgressionUI.EMoreButtonSource
enum class EMoreButtonSource : uint8_t
{
	EMoreButtonSource__Popup       = 0,
	EMoreButtonSource__TextNotification = 1,
	EMoreButtonSource__EMoreButtonSource_MAX = 2
};


// Enum SeasonProgressionUI.ENavigationAction
enum class ENavigationAction : uint8_t
{
	ENavigationAction__ShowDeed    = 0,
	ENavigationAction__ShowTrial   = 1,
	ENavigationAction__ShowReward  = 2,
	ENavigationAction__ShowProgress = 3,
	ENavigationAction__None        = 4,
	ENavigationAction__ENavigationAction_MAX = 5
};


// Enum SeasonProgressionUI.ESeasonStyleModifiers
enum class ESeasonStyleModifiers : uint8_t
{
	ESeasonStyleModifiers__Owned   = 0,
	ESeasonStyleModifiers__SeasonMark = 1,
	ESeasonStyleModifiers__PirateLegend = 2,
	ESeasonStyleModifiers__ESeasonStyleModifiers_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
