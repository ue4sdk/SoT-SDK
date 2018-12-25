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

// UserDefinedEnum EFlyingCreatures.EFlyingCreatures
enum class EFlyingCreatures : uint8_t
{
	EFlyingCreatures__NewEnumerator8 = 0,
	None                           = 1,
	IntProperty                    = 2,
	EFlyingCreatures__EFlyingCreatures_MAX = 3,
	__UNKNOWN_NAME__               = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
