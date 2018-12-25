#pragma once

// Sea of Thieves (1.4) SDK

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
	__UNKNOWN_NAME__               = 2,
	EObjectTargetingStates__NewEnumerator4 = 3,
	None01                         = 4,
	NameProperty                   = 5,
	NavCollision_X                 = 6,
	__UNKNOWN_NAME__01             = 7
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
