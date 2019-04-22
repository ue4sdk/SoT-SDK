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

// UserDefinedStruct DS_FateOfTheMorningstar_SarcophagusSpawnParams.DS_FateOfTheMorningstar_SarcophagusSpawnParams
// 0x0058
struct FDS_FateOfTheMorningstar_SarcophagusSpawnParams
{
	TAssetPtr<class AActor>                            LocationID_3_DB6BE5504F6B0D112DBDEAA55CBFC115;            // 0x0000(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      Sarcophagus_10_5507647E471F077E0E3C9083ED3FE546;          // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SarcophagusInstance_9_876F829A4FEB0602856C86A26AAE9FDB;   // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UQuestBookPageBundle*                        InitialQuestBookBundle_13_C119A1E34A5B5D66A4DAF7A2CAD2D4AD;// 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            SarcophagusMusicZone_16_96E2E45F41CF2F6AD9C94A9EF0948889; // 0x0038(0x0020) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
