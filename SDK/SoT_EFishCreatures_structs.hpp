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

// UserDefinedEnum EFishCreatures.EFishCreatures
enum class EFishCreatures : uint8_t
{
	EFishCreatures__NewEnumerator8 = 0,
	None                           = 1,
	EFishCreatures__NewEnumerator5 = 2,
	None01                         = 3,
	EFishCreatures__EFishCreatures_MAX = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
