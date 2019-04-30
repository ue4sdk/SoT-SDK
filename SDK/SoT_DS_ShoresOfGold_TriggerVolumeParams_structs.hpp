#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_ShoresOfGold_TriggerVolumeParams.DS_ShoresOfGold_TriggerVolumeParams
// 0x0010
struct FDS_ShoresOfGold_TriggerVolumeParams
{
	class AActor*                                      Location_2_7AB781BA44D20A4C516F1C8301632592;              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_ShoresOfGold_QuestParticipantTriggerVolume_C* TriggerVolumeRef_6_2C45463347E920EC04919190FCCD2B65;      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
