#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Interaction_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Interaction.EventOptimalInteractionObjectChanged
// 0x0010
struct FEventOptimalInteractionObjectChanged
{
	class UObject*                                     PreviousFocusObject;                                      // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UObject*                                     NewFocusObject;                                           // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Interaction.EventInteractionBlockingStateChanged
// 0x0002
struct FEventInteractionBlockingStateChanged
{
	bool                                               IsInteractionBlocked;                                     // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBlockReason>               InteractionBlockReason;                                   // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
