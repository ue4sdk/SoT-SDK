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

// Enum EmissaryLevel.EBootyRewardType
enum class EBootyRewardType : uint8_t
{
	EBootyRewardType__OwnershipChanged = 0,
	EBootyRewardType__ItemDroppedOnItem = 1,
	EBootyRewardType__PlayerKilled = 2,
	EBootyRewardType__GameEventsFinished = 3,
	EBootyRewardType__Handin       = 4,
	EBootyRewardType__MAX          = 5,
	EBootyRewardType__EBootyRewardType_MAX = 6
};


// Enum EmissaryLevel.EEmissaryDeactivateReason
enum class EEmissaryDeactivateReason : uint8_t
{
	EEmissaryDeactivateReason__DissociateFromShip = 0,
	EEmissaryDeactivateReason__Cancelled = 1,
	EEmissaryDeactivateReason__EEmissaryDeactivateReason_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
