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

// Enum Pets.EPetDangerHearingResponseType
enum class EPetDangerHearingResponseType : uint8_t
{
	EPetDangerHearingResponseType__RunAway = 0,
	EPetDangerHearingResponseType__RunToHangoutSpot = 1,
	EPetDangerHearingResponseType__TurnToward = 2,
	EPetDangerHearingResponseType__MAX = 3,
	EPetDangerHearingResponseType__EPetDangerHearingResponseType_MAX = 4
};


// Enum Pets.EPetDangerHearingTarget
enum class EPetDangerHearingTarget : uint8_t
{
	EPetDangerHearingTarget__None  = 0,
	EPetDangerHearingTarget__Owner = 1,
	EPetDangerHearingTarget__Crew  = 2,
	EPetDangerHearingTarget__Alliance = 3,
	EPetDangerHearingTarget__EPetDangerHearingTarget_MAX = 4
};


// Enum Pets.EHangoutRotationMode
enum class EHangoutRotationMode : uint8_t
{
	EHangoutRotationMode__Match    = 0,
	EHangoutRotationMode__Randomise = 1,
	EHangoutRotationMode__EHangoutRotationMode_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
