#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ShantyPuzzle.EGlitterBeardPlayerPuzzleOutcome
enum class EGlitterBeardPlayerPuzzleOutcome : uint8_t
{
	EGlitterBeardPlayerPuzzleOutcome__WrongTime = 0,
	EGlitterBeardPlayerPuzzleOutcome__WrongInstrument = 1,
	EGlitterBeardPlayerPuzzleOutcome__WrongShanty = 2,
	EGlitterBeardPlayerPuzzleOutcome__ConditionsMetForThisPosition = 3,
	EGlitterBeardPlayerPuzzleOutcome__EGlitterBeardPlayerPuzzleOutcome_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
