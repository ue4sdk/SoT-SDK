#pragma once

// Sea of Thieves (1.4) SDK

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

// ScriptStruct SimpleOverlaps.SimpleOverlapAggregateTickFunction
// 0x0040 (0x0088 - 0x0048)
struct FSimpleOverlapAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET
};

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
