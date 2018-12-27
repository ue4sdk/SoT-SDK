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

// Enum MovieSceneCapture.EMovieCaptureType
enum class EMovieCaptureType : uint8_t
{
	EMovieCaptureType__AVI         = 0,
	EMovieCaptureType__BMP         = 1,
	EMovieCaptureType__PNG         = 2,
	EMovieCaptureType__JPEG        = 3,
	EMovieCaptureType__EMovieCaptureType_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
