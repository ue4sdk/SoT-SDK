#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_GlitterBeard_enums.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GlitterBeard.VisualFeedbackEntry
// 0x0010
struct FVisualFeedbackEntry
{
	class UEffectBlendObjectBase*                      Effect;                                                   // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TransitionTime;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartDelay;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GlitterBeard.VisualFeedbackList
// 0x0018
struct FVisualFeedbackList
{
	TArray<struct FVisualFeedbackEntry>                Entires;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GlitterBeard.ChangeGlitterBeardVFXStateEvent
// 0x0008
struct FChangeGlitterBeardVFXStateEvent
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlitterbeardVFXState>                 Target;                                                   // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct GlitterBeard.UnlockEventData
// 0x0004
struct FUnlockEventData
{
	int                                                Idx;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GlitterBeard.GlitterBeardVFXTransitionCompletedEvent
// 0x0004
struct FGlitterBeardVFXTransitionCompletedEvent
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
