#pragma once

// Sea of Thieves (1.4) SDK

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
	EFireCellState__Kindled        = 1,
	EFireCellState__Smouldering    = 2,
	EFireCellState__Steaming       = 3,
	EFireCellState__Burning        = 4,
	EFireCellState__MAX            = 5,
	EFireCellState__EFireCellState_MAX = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
