#pragma once

// Sea of Thieves (2) SDK

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

// ScriptStruct WorldLocationPopUpFramework.PlayerEnteredWorldLocationNotificationEvent
// 0x0028
struct FPlayerEnteredWorldLocationNotificationEvent
{
	UPopUpAudioDesc*                                   AudioOverride;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FString                                            IconPath;                                                 // 0x0008(0x0010) (ZeroConstructor)
	FString                                            DisplayText;                                              // 0x0018(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
