#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum StatusEffects.EStatusComparisonMode
enum class EStatusComparisonMode : uint8_t
{
	EStatusComparisonMode__Ordered = 0,
	EStatusComparisonMode__Unordered = 1,
	EStatusComparisonMode__Partial = 2,
	EStatusComparisonMode__Any     = 3,
	EStatusComparisonMode__EStatusComparisonMode_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
