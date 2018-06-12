#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// UserDefinedEnum ELadderState.ELadderState
enum class ELadderState : uint8_t
{
	ELadderState__NewEnumerator5   = 0,
	None                           = 1,
	IntProperty                    = 2,
	ELadderState__ELadderState_MAX = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
