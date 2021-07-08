#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_AthenaInput_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaInput.NotificationInputDisplayName
// 0x0040
struct FNotificationInputDisplayName
{
	class UClass*                                      InputID;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Name;                                                     // 0x0008(0x0038) (Edit, DisableEditOnInstance)
};

// ScriptStruct AthenaInput.IdleTimeTracker
// 0x0038
struct FIdleTimeTracker
{
	struct FTimespan                                   InactivityThreshold;                                      // 0x0000(0x0008) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AthenaInput.PrioritizedCompositeInputHandler
// 0x0010
struct FPrioritizedCompositeInputHandler
{
	class UCompositeInputHandler*                      InputHandler;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaInput.CompositeInputDelegator
// 0x0060
struct FCompositeInputDelegator
{
	TArray<struct FPrioritizedCompositeInputHandler>   PrioritizedCompositeInputHandlers;                        // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0010(0x0050) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
