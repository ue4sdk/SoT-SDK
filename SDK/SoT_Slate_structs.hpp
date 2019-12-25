#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Slate_enums.hpp"
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
	struct FKey                                        Key;                                                      // 0x0000(0x0020)
	unsigned char                                      bShift : 1;                                               // 0x0020(0x0001)
	unsigned char                                      bCtrl : 1;                                                // 0x0020(0x0001)
	unsigned char                                      bAlt : 1;                                                 // 0x0020(0x0001)
	unsigned char                                      bCmd : 1;                                                 // 0x0020(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Slate.Anchors
// 0x0010
struct FAnchors
{
	struct FVector2D                                   Minimum;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Maximum;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
