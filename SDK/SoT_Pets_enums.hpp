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
