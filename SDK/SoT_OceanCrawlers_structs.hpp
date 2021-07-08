#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_AthenaAI_classes.hpp"
#include "SoT_AIModule_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Maths_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OceanCrawlers.OceanCrawlerAudioKeyPair
// 0x0010
struct FOceanCrawlerAudioKeyPair
{
	TEnumAsByte<EOceanCrawlerAbilityAudioKey>          AudioKey;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UWwiseEvent*                                 AudioEvent;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OceanCrawlers.OceanCrawlerBuffAudioSettings
// 0x0010
struct FOceanCrawlerBuffAudioSettings
{
	class UWwiseEvent*                                 GiveBuffAudioEvent;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 ReceiveBuffAudioEvent;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
