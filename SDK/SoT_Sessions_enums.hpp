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

// Enum Sessions.ECrewSessionType
enum class ECrewSessionType : uint8_t
{
	ECrewSessionType__Invalid      = 0,
	ECrewSessionType__SmallShip    = 1,
	ECrewSessionType__MediumShip   = 2,
	ECrewSessionType__LargeShip    = 3,
	ECrewSessionType__ServerLarge  = 4,
	ECrewSessionType__ECrewSessionType_MAX = 5
};


// Enum Sessions.ESessionVisibility
enum class ESessionVisibility : uint8_t
{
	ESessionVisibility__Invalid    = 0,
	ESessionVisibility__Open       = 1,
	ESessionVisibility__Closed     = 2,
	ESessionVisibility__ESessionVisibility_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
