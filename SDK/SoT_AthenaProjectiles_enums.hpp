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

// Enum AthenaProjectiles.EProjectileFiredFrom
enum class EProjectileFiredFrom : uint8_t
{
	EProjectileFiredFrom__Cannon   = 0,
	EProjectileFiredFrom__Character = 1,
	EProjectileFiredFrom__DeepSeaCannon = 2,
	EProjectileFiredFrom__DeepSeaCharacter = 3,
	EProjectileFiredFrom__RowboatCannon = 4,
	EProjectileFiredFrom__EProjectileFiredFrom_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
