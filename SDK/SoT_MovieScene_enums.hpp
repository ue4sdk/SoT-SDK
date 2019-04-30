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

// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t
{
	MSKI_Auto                      = 0,
	MSKI_User                      = 1,
	MSKI_Break                     = 2,
	MSKI_Linear                    = 3,
	MSKI_Constant                  = 4,
	MSKI_MAX                       = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
