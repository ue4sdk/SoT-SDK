#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// UserDefinedEnum EDocking.EDocking
enum class EDocking : uint8_t
{
	EDocking__NewEnumerator2       = 0,
	None                           = 1,
	FPostProcessAmbientOcclusionPS114 = 2,
	ClassProperty                  = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
