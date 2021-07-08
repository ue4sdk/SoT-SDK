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

// Enum AthenaInputMkII.ELeftStickScalarReason
enum class ELeftStickScalarReason : uint8_t
{
	ELeftStickScalarReason__Limping = 0,
	ELeftStickScalarReason__Pacing = 1,
	ELeftStickScalarReason__NumReasons = 2,
	ELeftStickScalarReason__ELeftStickScalarReason_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
