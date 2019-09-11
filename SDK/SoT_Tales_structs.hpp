#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Tales_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_PrioritisedPrompts_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Tales.SplineFootprintPathTool
// 0x0001
struct FSplineFootprintPathTool
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Tales.QuestVariableBountyTargetArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableBountyTargetArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableMerchantItemArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableMerchantItemArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariablePrioritisedPrompt
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariablePrioritisedPrompt : public FQuestVariable
{

};

// ScriptStruct Tales.StepBountyTargetDesc
// 0x0040
struct FStepBountyTargetDesc
{
	struct FText                                       Name;                                                     // 0x0000(0x0038) (Edit, BlueprintVisible)
	class UTexture*                                    Portrait;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.StepMerchantItemDesc
// 0x0040
struct FStepMerchantItemDesc
{
	struct FText                                       Name;                                                     // 0x0000(0x0038) (Edit, BlueprintVisible)
	class UTexture*                                    Icon;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
