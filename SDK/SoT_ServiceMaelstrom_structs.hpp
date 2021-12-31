#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ServiceMaelstrom.MaelstromEventBaseFragment
// 0x0030
struct FMaelstromEventBaseFragment
{
	uint64_t                                           SequenceId;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           TypeID;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	FString                                            Name;                                                     // 0x0010(0x0010) (ZeroConstructor)
	FString                                            TimestampUtc;                                             // 0x0020(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
