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

// Enum Animation.ECharacterIKLimb
enum class ECharacterIKLimb : uint8_t
{
	ECharacterIKLimb__None         = 0,
	ECharacterIKLimb__LeftHand     = 1,
	ECharacterIKLimb__RightHand    = 2,
	ECharacterIKLimb__LeftFoot     = 3,
	ECharacterIKLimb__RightFoot    = 4,
	ECharacterIKLimb__ECharacterIKLimb_MAX = 5
};


// Enum Animation.ELimbIKSpace
enum class ELimbIKSpace : uint8_t
{
	ELimbIKSpace__Local            = 0,
	ELimbIKSpace__World            = 1,
	ELimbIKSpace__Character        = 2,
	ELimbIKSpace__ELimbIKSpace_MAX = 3
};


// Enum Animation.ECustomAnimationMontageType
enum class ECustomAnimationMontageType : uint8_t
{
	ECustomAnimationMontageType__OneShot = 0,
	ECustomAnimationMontageType__LoopingOneShot = 1,
	ECustomAnimationMontageType__LoopingStaged = 2,
	ECustomAnimationMontageType__ECustomAnimationMontageType_MAX = 3
};


// Enum Animation.EDockableSocketOverlapUpdates
enum class EDockableSocketOverlapUpdates : uint8_t
{
	EDockableSocketOverlapUpdates__AllowUpdate = 0,
	EDockableSocketOverlapUpdates__BlockUpdate = 1,
	EDockableSocketOverlapUpdates__EDockableSocketOverlapUpdates_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
