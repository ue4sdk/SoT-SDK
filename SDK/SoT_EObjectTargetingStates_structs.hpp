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

// UserDefinedEnum EObjectTargetingStates.EObjectTargetingStates
enum class EObjectTargetingStates : uint8_t
{
	EObjectTargetingStates__NewEnumerator0 = 0,
	None                           = 1,
	IntProperty                    = 2,
	EObjectTargetingStates__NewEnumerator4 = 3,
	None01                         = 4,
	None02                         = 5
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
