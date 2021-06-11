#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Cleanliness.EDirtinessType
enum class EDirtinessType : uint8_t
{
	EDirtinessType__Soot           = 0,
	EDirtinessType__Dust           = 1,
	EDirtinessType__MAX            = 2,
	EDirtinessType__EDirtinessType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
