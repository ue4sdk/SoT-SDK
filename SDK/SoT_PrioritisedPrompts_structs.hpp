#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_PrioritisedPrompts_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PrioritisedPrompts.PrioritisedPromptHandle
// 0x0010
struct FPrioritisedPromptHandle
{
	struct FGuid                                       Id;                                                       // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PrioritisedPrompts.PrioritisedPrompt
// 0x0040
struct FPrioritisedPrompt
{
	struct FText                                       Message;                                                  // 0x0000(0x0038) (Edit)
	class UPopUpMessageDesc*                           PopUpMessageDesc;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PrioritisedPrompts.PrioritisedPromptWithHandle
// 0x0050
struct FPrioritisedPromptWithHandle
{
	struct FPrioritisedPromptHandle                    PromptHandle;                                             // 0x0000(0x0010) (Edit)
	struct FPrioritisedPrompt                          Prompt;                                                   // 0x0010(0x0040) (Edit)
};

// ScriptStruct PrioritisedPrompts.PermanentPromptNetworkEvent
// 0x0058 (0x0068 - 0x0010)
struct FPermanentPromptNetworkEvent : public FNetworkEventStruct
{
	struct FPrioritisedPromptWithHandle                Prompt;                                                   // 0x0010(0x0050)
	TEnumAsByte<EPromptStartStop>                      StartOrStop;                                              // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct PrioritisedPrompts.PrioritisedPromptsManager
// 0x0020
struct FPrioritisedPromptsManager
{
	TArray<struct FPrioritisedPromptWithHandle>        AllPrompts;                                               // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
