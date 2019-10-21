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

// Enum AthenaEngine.EPlayMode
enum class EPlayMode : uint8_t
{
	EPlayMode__Adventure           = 0,
	EPlayMode__Contest             = 1,
	EPlayMode__Tutorial            = 2,
	EPlayMode__NotSelectedYet      = 3,
	EPlayMode__MAX                 = 4,
	EPlayMode__Invalid             = 5,
	EPlayMode__EPlayMode_MAX       = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
