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

// Enum Sessions.ESessionStyle
enum class ESessionStyle : uint8_t
{
	ESessionStyle__Invalid         = 0,
	ESessionStyle__Standard        = 1,
	ESessionStyle__BeachNPCSpawn   = 2,
	ESessionStyle__Max             = 3,
	ESessionStyle__ESessionStyle_MAX = 4
};


// Enum Sessions.ESessionGrouping
enum class ESessionGrouping : uint8_t
{
	ESessionGrouping__Invalid      = 0,
	ESessionGrouping__Default      = 1,
	ESessionGrouping__MediumLargeShip = 2,
	ESessionGrouping__Max          = 3,
	ESessionGrouping__ESessionGrouping_MAX = 4
};


// Enum Sessions.ECrewSessionType
enum class ECrewSessionType : uint8_t
{
	ECrewSessionType__Invalid      = 0,
	ECrewSessionType__SmallShip    = 1,
	ECrewSessionType__MediumShip   = 2,
	ECrewSessionType__LargeShip    = 3,
	ECrewSessionType__ServerLarge  = 4,
	ECrewSessionType__SloopSolo    = 5,
	ECrewSessionType__Lobby        = 6,
	ECrewSessionType__ECrewSessionType_MAX = 7
};


// Enum Sessions.ESessionVisibility
enum class ESessionVisibility : uint8_t
{
	ESessionVisibility__Invalid    = 0,
	ESessionVisibility__Open       = 1,
	ESessionVisibility__Closed     = 2,
	ESessionVisibility__ESessionVisibility_MAX = 3
};


// Enum Sessions.ECrewSessionQoSServerResolveResult
enum class ECrewSessionQoSServerResolveResult : uint8_t
{
	ECrewSessionQoSServerResolveResult__Success = 0,
	ECrewSessionQoSServerResolveResult__InvalidLocation = 1,
	ECrewSessionQoSServerResolveResult__TimedOut = 2,
	ECrewSessionQoSServerResolveResult__Failed = 3,
	ECrewSessionQoSServerResolveResult__ECrewSessionQoSServerResolveResult_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
