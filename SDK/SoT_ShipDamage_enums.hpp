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

// Enum ShipDamage.EHullDamageDeck
enum class EHullDamageDeck : uint8_t
{
	EHullDamageDeck__Bottom        = 0,
	EHullDamageDeck__Mid           = 1,
	EHullDamageDeck__EHullDamageDeck_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
