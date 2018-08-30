#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// UserDefinedEnum EObjectAnimationState.EObjectAnimationState
enum class EObjectAnimationState : uint8_t
{
	EObjectAnimationState__NewEnumerator0 = 0,
	None                           = 1,
	EObjectAnimationState__NewEnumerator4 = 2,
	None01                         = 3,
	EObjectAnimationState__NewEnumerator8 = 4,
	None02                         = 5,
	EObjectAnimationState__NewEnumerator12 = 6,
	None03                         = 7,
	TextProperty                   = 8,
	EObjectAnimationState__NewEnumerator16 = 9,
	None04                         = 10,
	LazyObjectProperty             = 11,
	EObjectAnimationState__NewEnumerator20 = 12,
	None05                         = 13,
	UInt16Property                 = 14
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
