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

// UserDefinedEnum EFishCreatures.EFishCreatures
enum class EFishCreatures : uint8_t
{
	EFishCreatures__NewEnumerator8 = 0,
	None                           = 1,
	IntProperty                    = 2,
	EFishCreatures__NewEnumerator5 = 3,
	None01                         = 4,
	NameProperty                   = 5,
	EFishCreatures__EFishCreatures_MAX = 6
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
