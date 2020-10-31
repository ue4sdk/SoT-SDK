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

// Enum EnchantedCompass.ETargetUpdateReason
enum class ETargetUpdateReason : uint8_t
{
	ETargetUpdateReason__Update    = 0,
	ETargetUpdateReason__Replace   = 1,
	ETargetUpdateReason__ETargetUpdateReason_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
