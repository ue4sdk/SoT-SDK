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

// Enum Reviving.EReviveState
enum class EReviveState : uint8_t
{
	EReviveState__Revivable        = 0,
	EReviveState__NotRevivable     = 1,
	EReviveState__BeingRevived     = 2,
	EReviveState__Revived          = 3,
	EReviveState__EReviveState_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
