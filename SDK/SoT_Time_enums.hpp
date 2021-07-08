#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Time.ETimeOfDay
enum class ETimeOfDay : uint8_t
{
	ETimeOfDay__Day                = 0,
	ETimeOfDay__Night              = 1,
	ETimeOfDay__ETimeOfDay_MAX     = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
