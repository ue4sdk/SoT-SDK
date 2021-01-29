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

// Enum GlitterBeard.EGlitterbeardVFXState
enum class EGlitterbeardVFXState : uint8_t
{
	EGlitterbeardVFXState__Active  = 0,
	EGlitterbeardVFXState__Inactive = 1,
	EGlitterbeardVFXState__EGlitterbeardVFXState_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
