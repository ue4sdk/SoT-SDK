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

// Enum Tethering.ETetherConstrainMode
enum class ETetherConstrainMode : uint8_t
{
	ETetherConstrainMode__ShrinkLength = 0,
	ETetherConstrainMode__ConstantLength = 1,
	ETetherConstrainMode__GrowLength = 2,
	ETetherConstrainMode__ETetherConstrainMode_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
