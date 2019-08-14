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

// Enum PrioritisedPrompts.EPromptStartStop
enum class EPromptStartStop : uint8_t
{
	EPromptStartStop__Start        = 0,
	EPromptStartStop__Stop         = 1,
	EPromptStartStop__EPromptStartStop_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
