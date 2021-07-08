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

// Enum PositionalVoice.EVoiceChatState
enum class EVoiceChatState : uint8_t
{
	EVoiceChatState__Silent        = 0,
	EVoiceChatState__Talking       = 1,
	EVoiceChatState__Muted         = 2,
	EVoiceChatState__Deafened      = 3,
	EVoiceChatState__EVoiceChatState_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
