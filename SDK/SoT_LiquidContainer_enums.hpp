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

// Enum LiquidContainer.ELiquidType
enum class ELiquidType : uint8_t
{
	ELiquidType__Water             = 0,
	ELiquidType__Vomit             = 1,
	ELiquidType__ELiquidType_MAX   = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
