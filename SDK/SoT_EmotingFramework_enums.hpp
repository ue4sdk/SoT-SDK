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

// Enum EmotingFramework.EDiceType
enum class EDiceType : uint8_t
{
	EDiceType__Dice4               = 0,
	EDiceType__Dice6               = 1,
	EDiceType__Dice8               = 2,
	EDiceType__Dice10              = 3,
	EDiceType__Dice12              = 4,
	EDiceType__Dice20              = 5,
	EDiceType__EDiceType_MAX       = 6
};


// Enum EmotingFramework.EEmoteFlourishType
enum class EEmoteFlourishType : uint8_t
{
	EEmoteFlourishType__Invalid    = 0,
	EEmoteFlourishType__PrimaryWeaponSlotFlourish = 1,
	EEmoteFlourishType__SecondaryWeaponSlotFlourish = 2,
	EEmoteFlourishType__EEmoteFlourishType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
