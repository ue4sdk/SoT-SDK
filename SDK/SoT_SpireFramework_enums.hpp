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

// Enum SpireFramework.EDirectionOfMovement
enum class EDirectionOfMovement : uint8_t
{
	EDirectionOfMovement__None     = 0,
	EDirectionOfMovement__Rising   = 1,
	EDirectionOfMovement__Lowering = 2,
	EDirectionOfMovement__EDirectionOfMovement_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
