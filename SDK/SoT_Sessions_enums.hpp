#pragma once

// Sea of Thieves (1.4) SDK

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
	ECrewSessionType__Default      = 1,
	ECrewSessionType__LargeShip    = 2,
	ECrewSessionType__ThreePlayerShip = 3,
	ECrewSessionType__SmallShip    = 4,
	ECrewSessionType__SoloShip     = 5,
	ECrewSessionType__ServerLarge  = 6,
	ECrewSessionType__MediumShip   = 7,
	ECrewSessionType__ECrewSessionType_MAX = 8
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
