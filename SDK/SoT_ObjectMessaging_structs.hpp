#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ObjectMessaging.ObjectMessagingDispatcherHandle
// 0x0008
struct FObjectMessagingDispatcherHandle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ObjectMessaging.ObjectMessagingHandle
// 0x0048
struct FObjectMessagingHandle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UStruct*                                     EventType;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0010(0x0038) MISSED OFFSET
};

// ScriptStruct ObjectMessaging.ObjectMessagingDispatcher
// 0x00A0
struct FObjectMessagingDispatcher
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
