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

// UserDefinedEnum ETurning.ETurning
enum class ETurning : uint8_t
{
	ETurning__NewEnumerator0       = 0,
	None                           = 1,
	IntProperty                    = 2,
	ETurning__ETurning_MAX         = 3,
	BoolProperty                   = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
