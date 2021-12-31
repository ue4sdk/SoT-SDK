#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Tales_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BarrelsOfPlenty.BarrelsOfPlentyDebugLocationEntry
// 0x0010
struct FBarrelsOfPlentyDebugLocationEntry
{
	FVector                                            WorldSpacePosition;                                       // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              SinkTime;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
