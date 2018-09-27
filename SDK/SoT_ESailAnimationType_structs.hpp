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

// UserDefinedEnum ESailAnimationType.ESailAnimationType
enum class ESailAnimationType : uint8_t
{
	ESailAnimationType__NewEnumerator0 = 0,
	None                           = 1,
	IntProperty                    = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
