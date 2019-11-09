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

// Enum StatusEffects.EOverlapZoneState
enum class EOverlapZoneState : uint8_t
{
	EOverlapZoneState__Active      = 0,
	EOverlapZoneState__Inactive    = 1,
	EOverlapZoneState__EOverlapZoneState_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
