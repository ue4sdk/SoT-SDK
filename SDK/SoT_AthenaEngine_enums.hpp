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

// Enum AthenaEngine.EPlayMode
enum class EPlayMode : uint8_t
{
	EPlayMode__Adventure           = 0,
	EPlayMode__Contest             = 1,
	EPlayMode__MAX                 = 2,
	EPlayMode__Invalid             = 3,
	EPlayMode__EPlayMode_MAX       = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
