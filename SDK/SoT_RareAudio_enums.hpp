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

// Enum RareAudio.EEmitterRelationship
enum class EEmitterRelationship : uint8_t
{
	EEmitterRelationship__Audio_Remote = 0,
	EEmitterRelationship__Audio_Local = 1,
	EEmitterRelationship__Audio_Default = 2,
	EEmitterRelationship__Audio_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
