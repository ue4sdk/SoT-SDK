#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_SlateCore_classes.hpp"
#include "SoT_InputCore_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Slate.InputChord
// 0x0028
struct FInputChord
{
	unsigned char                                      UnknownData00 : 3;                                        // 0x0000(0x0001)
	unsigned char                                      bCmd : 1;                                                 // 0x0000(0x0001)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FKey                                        Key;                                                      // 0x01E3(0x0020)
	unsigned char                                      bShift : 1;                                               // 0x01E3(0x0001)
	unsigned char                                      bCtrl : 1;                                                // 0x01E3(0x0001)
	unsigned char                                      bAlt : 1;                                                 // 0x01E3(0x0001)
};

// ScriptStruct Slate.Anchors
// 0x0010
struct FAnchors
{
	struct FVector2D                                   Maximum;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FVector2D                                   Minimum;                                                  // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
