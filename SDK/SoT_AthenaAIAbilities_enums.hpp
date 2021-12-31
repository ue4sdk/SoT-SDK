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

// Enum AthenaAIAbilities.EMeleeAwarenessCollisionHitResult
enum class EMeleeAwarenessCollisionHitResult : uint8_t
{
	EMeleeAwarenessCollisionHitResult__None = 0,
	EMeleeAwarenessCollisionHitResult__Static = 1,
	EMeleeAwarenessCollisionHitResult__Character = 2,
	EMeleeAwarenessCollisionHitResult__ToggleableCollider = 3,
	EMeleeAwarenessCollisionHitResult__EMeleeAwarenessCollisionHitResult_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
