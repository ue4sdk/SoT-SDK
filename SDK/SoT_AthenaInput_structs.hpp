#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AthenaInput.EInputHandlerResult
enum class EInputHandlerResult : uint8_t
{
	EInputHandlerResult__Handled   = 0,
	None                           = 1,
	IntProperty                    = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

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
