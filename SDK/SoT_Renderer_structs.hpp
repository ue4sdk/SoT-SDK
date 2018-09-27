#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Renderer.ERefChangeFadPhase
enum class ERefChangeFadPhase : uint8_t
{
	NoFading                       = 0,
	None                           = 1,
	IntProperty                    = 2,
	ETwoPlayerSplitScreenType__Horizontal = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
