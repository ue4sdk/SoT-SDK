#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SimpleOverlaps.SimpleOverlapInfo
// 0x0010
struct FSimpleOverlapInfo
{
	class AActor*                                      OtherActor;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComponent;                                           // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct SimpleOverlaps.SimpleOverlapEnd
// 0x0010
struct FSimpleOverlapEnd
{
	struct FSimpleOverlapInfo                          OverlapInfo;                                              // 0x0000(0x0010)
};

// ScriptStruct SimpleOverlaps.SimpleOverlapBegin
// 0x0010
struct FSimpleOverlapBegin
{
	struct FSimpleOverlapInfo                          OverlapInfo;                                              // 0x0000(0x0010)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
