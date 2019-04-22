#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_FateOfTheMorningstar_TriggerVolumeParams.DS_FateOfTheMorningstar_TriggerVolumeParams
// 0x0010
struct FDS_FateOfTheMorningstar_TriggerVolumeParams
{
	class AActor*                                      Location_2_7AB781BA44D20A4C516F1C8301632592;              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C* TriggerVolumeRef_5_2C45463347E920EC04919190FCCD2B65;      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
