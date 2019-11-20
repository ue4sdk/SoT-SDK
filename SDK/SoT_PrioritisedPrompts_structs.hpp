#pragma once

// Sea of Thieves (2.0) SDK

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
	struct FGuid                                       Id;                                                       // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PrioritisedPrompts.PrioritisedPrompt
// 0x0048
struct FPrioritisedPrompt
{
	struct FText                                       Message;                                                  // 0x0000(0x0038) (Edit, BlueprintVisible)
	class UPopUpMessageDesc*                           PopUpMessageDesc;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPromptPriority>                       BasePriority;                                             // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct PrioritisedPrompts.PrioritisedPromptWithHandle
// 0x0058
struct FPrioritisedPromptWithHandle
{
	struct FPrioritisedPromptHandle                    PromptHandle;                                             // 0x0000(0x0010)
	struct FPrioritisedPrompt                          Prompt;                                                   // 0x0010(0x0048) (Edit, BlueprintVisible)
};

// ScriptStruct PrioritisedPrompts.PromptEvaluation
// 0x0060
struct FPromptEvaluation
{
	TEnumAsByte<EPromptEvaluatedType>                  PromptType;                                               // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FPrioritisedPromptWithHandle                Prompt;                                                   // 0x0008(0x0058) (BlueprintVisible)
};

// ScriptStruct PrioritisedPrompts.PermanentPromptNetworkEvent
// 0x0060 (0x0070 - 0x0010)
struct FPermanentPromptNetworkEvent : public FNetworkEventStruct
{
	struct FPrioritisedPromptWithHandle                Prompt;                                                   // 0x0010(0x0058)
	TEnumAsByte<EPromptStartStop>                      StartOrStop;                                              // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
