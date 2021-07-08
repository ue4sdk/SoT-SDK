#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_InputCore_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct InputCore.Key
// 0x0020
struct FKey
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET

    inline FKey() : KeyName(), UnknownData00{} {}

    inline FKey(const FName InName)	: KeyName(InName), UnknownData00{} {}

    inline FKey(const char * InName) : KeyName(FName(InName)), UnknownData00{} {}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
