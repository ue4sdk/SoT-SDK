#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Water_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Watercrafts.EOarState
enum class EOarState : uint8_t
{
	EOarState__Idle                = 0,
	None                           = 1,
	EOarState__Braking             = 2,
	None01                         = 3,
	EAddEndpointResult__Success    = 4
};


// Enum Watercrafts.EOarIdentifier
enum class EOarIdentifier : uint8_t
{
	EOarIdentifier__Left           = 0,
	None                           = 1,
	IntProperty                    = 2
};


// Enum Watercrafts.EOarInputState
enum class EOarInputState : uint8_t
{
	EOarInputState__Inactive       = 0,
	None                           = 1,
	EGeyserState__Dormant          = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Watercrafts.WatercraftRolloverCorrector
// 0x000C
struct FWatercraftRolloverCorrector
{
	float                                              RollThresholdToConsiderRolledOver;                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TorqueScalar;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
