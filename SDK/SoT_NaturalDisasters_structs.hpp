#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Maths_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum NaturalDisasters.EGeyserState
enum class EGeyserState : uint8_t
{
	EGeyserState__Dormant          = 0,
	None                           = 1
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
