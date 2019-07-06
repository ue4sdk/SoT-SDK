#pragma once

// Sea of Thieves (2.0) SDK

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
	EDirtinessType__Dust           = 0,
	EDirtinessType__Soot           = 1,
	EDirtinessType__MAX            = 2,
	EDirtinessType__EDirtinessType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
