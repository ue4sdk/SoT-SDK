#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Tutorial.TutorialStepEndedTelemetryEvent
// 0x0028
struct FTutorialStepEndedTelemetryEvent
{
	class FString                                      SequenceName;                                             // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      StepName;                                                 // 0x0010(0x0010) (ZeroConstructor)
	bool                                               StepCompleted;                                            // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsFinalStep;                                              // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

// ScriptStruct Tutorial.TutorialShowTutorialLegendaryTavernStrangerEvent
// 0x0001
struct FTutorialShowTutorialLegendaryTavernStrangerEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
