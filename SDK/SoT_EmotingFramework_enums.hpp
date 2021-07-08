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
