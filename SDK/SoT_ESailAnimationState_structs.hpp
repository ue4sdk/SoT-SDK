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

// UserDefinedEnum ESailAnimationState.ESailAnimationState
enum class ESailAnimationState : uint8_t
{
	ESailAnimationState__NewEnumerator14 = 0,
	None                           = 1,
	IntProperty                    = 2,
	ESailAnimationState__NewEnumerator18 = 3,
	None01                         = 4,
	NameProperty                   = 5,
	ESailAnimationState__NewEnumerator22 = 6,
	None02                         = 7,
	StructProperty                 = 8,
	ESailAnimationState__NewEnumerator26 = 9,
	None03                         = 10,
	None04                         = 11
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
