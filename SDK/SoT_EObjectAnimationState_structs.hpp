#pragma once

// Sea of Thieves (1.2.6) SDK

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
	IntProperty                    = 2,
	EObjectAnimationState__NewEnumerator4 = 3,
	None01                         = 4,
	NameProperty                   = 5,
	EObjectAnimationState__NewEnumerator8 = 6,
	None02                         = 7,
	StructProperty                 = 8,
	EObjectAnimationState__NewEnumerator12 = 9,
	None03                         = 10,
	TextProperty                   = 11,
	EObjectAnimationState__NewEnumerator16 = 12,
	None04                         = 13,
	LazyObjectProperty             = 14,
	EObjectAnimationState__NewEnumerator20 = 15,
	None05                         = 16,
	UInt16Property                 = 17,
	BlurAmount                     = 18,
	None06                         = 19,
	RefractionDepthBias            = 20,
	EObjectAnimationState__NewEnumerator001 = 21
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
