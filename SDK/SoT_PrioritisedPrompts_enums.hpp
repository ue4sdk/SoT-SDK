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

// Enum PrioritisedPrompts.EPromptPriority
enum class EPromptPriority : uint8_t
{
	EPromptPriority__Low           = 0,
	EPromptPriority__High          = 1,
	EPromptPriority__EPromptPriority_MAX = 2
};


// Enum PrioritisedPrompts.EPromptEvaluatedType
enum class EPromptEvaluatedType : uint8_t
{
	EPromptEvaluatedType__ShowPrompt = 0,
	EPromptEvaluatedType__ShowNoPrompt = 1,
	EPromptEvaluatedType__CompleteCoordinator = 2,
	EPromptEvaluatedType__EPromptEvaluatedType_MAX = 3
};


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
