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

// Enum Fire.EFireCellState
enum class EFireCellState : uint8_t
{
	EFireCellState__Deactivated    = 0,
	EFireCellState__Flooded        = 1,
	EFireCellState__Wet            = 2,
	EFireCellState__Kindled        = 3,
	EFireCellState__Smouldering    = 4,
	EFireCellState__Steaming       = 5,
	EFireCellState__Burning        = 6,
	EFireCellState__MAX            = 7,
	EFireCellState__EFireCellState_MAX = 8
};


// Enum Fire.ELastIgnitionState
enum class ELastIgnitionState : uint8_t
{
	ELastIgnitionState__None       = 0,
	ELastIgnitionState__Success    = 1,
	ELastIgnitionState__Failure    = 2,
	ELastIgnitionState__ELastIgnitionState_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
