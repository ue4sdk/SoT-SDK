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

// Enum SafeZoneReservationFramework.ESafeZoneState
enum class ESafeZoneState : uint8_t
{
	ESafeZoneState__Initial        = 0,
	ESafeZoneState__Activated      = 1,
	ESafeZoneState__Deactivated    = 2,
	ESafeZoneState__ESafeZoneState_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
