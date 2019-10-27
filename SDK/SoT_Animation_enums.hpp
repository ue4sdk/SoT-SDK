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

// Enum Animation.ELimbIKSpace
enum class ELimbIKSpace : uint8_t
{
	ELimbIKSpace__Local            = 0,
	ELimbIKSpace__World            = 1,
	ELimbIKSpace__Character        = 2,
	ELimbIKSpace__ELimbIKSpace_MAX = 3
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
