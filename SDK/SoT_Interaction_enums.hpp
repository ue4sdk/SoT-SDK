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

// Enum Interaction.EInteractionBlockReason
enum class EInteractionBlockReason : uint8_t
{
	EInteractionBlockReason__None  = 0,
	EInteractionBlockReason__Radial = 1,
	EInteractionBlockReason__Other = 2,
	EInteractionBlockReason__EInteractionBlockReason_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
