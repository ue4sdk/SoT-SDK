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

// Enum Interaction.EInteractionBlockReason
enum class EInteractionBlockReason : uint8_t
{
	EInteractionBlockReason__None  = 0,
	EInteractionBlockReason__Radial = 1,
	EInteractionBlockReason__Other = 2,
	EInteractionBlockReason__EInteractionBlockReason_MAX = 3
};


// Enum Interaction.EInteractableIdentifier
enum class EInteractableIdentifier : uint8_t
{
	EInteractableIdentifier__None  = 0,
	EInteractableIdentifier__Capstan = 1,
	EInteractableIdentifier__Cannon = 2,
	EInteractableIdentifier__Harpoon = 3,
	EInteractableIdentifier__Sail  = 4,
	EInteractableIdentifier__Wheel = 5,
	EInteractableIdentifier__MAX   = 6,
	EInteractableIdentifier__EInteractableIdentifier_MAX = 7
};


// Enum Interaction.EInteractionObject
enum class EInteractionObject : uint8_t
{
	EInteractionObject__None       = 0,
	EInteractionObject__Shop       = 1,
	EInteractionObject__Chest      = 2,
	EInteractionObject__Barrel     = 3,
	EInteractionObject__EInteractionObject_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
