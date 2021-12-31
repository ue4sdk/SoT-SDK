#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_PrioritisedPrompts_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_ObjectMessaging_classes.hpp"
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
	FGuid                                              Id;                                                       // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PrioritisedPrompts.PrioritisedPrompt
// 0x0058
struct FPrioritisedPrompt
{
	FText                                              Message;                                                  // 0x0000(0x0038) (Edit, BlueprintVisible)
	FString                                            Key;                                                      // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	UPopUpMessageDesc*                                 PopUpMessageDesc;                                         // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPromptPriority>                       BasePriority;                                             // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct PrioritisedPrompts.PrioritisedPromptWithHandle
// 0x0068
struct FPrioritisedPromptWithHandle
{
	FPrioritisedPromptHandle                           PromptHandle;                                             // 0x0000(0x0010)
	FPrioritisedPrompt                                 Prompt;                                                   // 0x0010(0x0058) (Edit, BlueprintVisible)
};

// ScriptStruct PrioritisedPrompts.PromptEvaluation
// 0x0070
struct FPromptEvaluation
{
	TEnumAsByte<EPromptEvaluatedType>                  PromptType;                                               // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	FPrioritisedPromptWithHandle                       Prompt;                                                   // 0x0008(0x0068) (BlueprintVisible)
};

// ScriptStruct PrioritisedPrompts.PermanentPromptNetworkEvent
// 0x0070 (0x0080 - 0x0010)
struct FPermanentPromptNetworkEvent : public FNetworkEventStruct
{
	FPrioritisedPromptWithHandle                       Prompt;                                                   // 0x0010(0x0068)
	TEnumAsByte<EPromptStartStop>                      StartOrStop;                                              // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
};

// ScriptStruct PrioritisedPrompts.PromptsCounterIncrementEvent
// 0x0008
struct FPromptsCounterIncrementEvent
{
	UClass*                                            AccessKey;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PrioritisedPrompts.PlayerPromptTelemetryEvent
// 0x0020
struct FPlayerPromptTelemetryEvent
{
	FString                                            Message;                                                  // 0x0000(0x0010) (ZeroConstructor)
	FString                                            Key;                                                      // 0x0010(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
