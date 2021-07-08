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

// Enum AthenaInput.EInputHandlerResult
enum class EInputHandlerResult : uint8_t
{
	EInputHandlerResult__Handled   = 0,
	EInputHandlerResult__Unhandled = 1,
	EInputHandlerResult__EInputHandlerResult_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
