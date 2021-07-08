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

// ScriptStruct AthenaSocketLookup.SocketPathNode
// 0x0008
struct FSocketPathNode
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaSocketLookup.SocketPath
// 0x0018
struct FSocketPath
{
	TArray<struct FSocketPathNode>                     Nodes;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaSocketLookup.SocketId
// 0x0020
struct FSocketId
{
	struct FSocketPath                                 path;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FName                                       Name;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaSocketLookup.SocketLookupCache
// 0x0050
struct FSocketLookupCache
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
