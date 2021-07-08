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

// Enum KnockbackFramework.ESolidState
enum class ESolidState : uint8_t
{
	ESolidState__Disabled          = 0,
	ESolidState__Knockback         = 1,
	ESolidState__Solid             = 2,
	ESolidState__ESolidState_MAX   = 3
};


// Enum KnockbackFramework.EKnockbackType
enum class EKnockbackType : uint8_t
{
	EKnockbackType__AwayFromCentre = 0,
	EKnockbackType__TowardsActor   = 1,
	EKnockbackType__EKnockbackType_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
