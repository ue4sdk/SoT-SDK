#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_RevengeOfTheMorningstar_SummoningTrinketsParams_classes.hpp"
#include "SoT_DS_RevengeOfTheMorningstar_Graymarrow_SpawnParams_classes.hpp"
#include "SoT_DS_RevengeOfTheMorningstar_SummoningTrinketsParams2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_RevengeOfTheMorningstar_AISpawnParams3.DS_RevengeOfTheMorningstar_AISpawnParams3
// 0x0160
struct FDS_RevengeOfTheMorningstar_AISpawnParams3
{
	TAssetPtr<class AActor>                            SpawnerLocation_Rawbone_35_4D86F5DC467042BDE8E901BCB7FF64AB;// 0x0000(0x0020) (Edit, BlueprintVisible)
	class UQuestBookPageBundle*                        QuestBookPages_Rawbone_39_CE92649F43198C5CF49E228D0B070FD4;// 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            SpawnerLocation_ThickSkull_51_5386FB13491911813553F59E32F5CDB0;// 0x0028(0x0020) (Edit, BlueprintVisible)
	class UQuestBookPageBundle*                        QuestBookPages_ThickSkull_57_60AAF3204325FC3140C8B1945A710627;// 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            SpawnerLocation_Skull_69_1972B7344708D502F4D850B9BBD4AAF1;// 0x0050(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            SpawnerLocation_Douglas_84_B725CA5B43948BDFEB3CE8BA1B4E69D8;// 0x0070(0x0020) (Edit, BlueprintVisible)
	struct FDS_RevengeOfTheMorningstar_Graymarrow_SpawnParams GraymarrowSpawnParams_33_5D00958F417C2DB2B573CCBF2826F37C;// 0x0090(0x0050) (Edit, BlueprintVisible)
	struct FDS_RevengeOfTheMorningstar_SummoningTrinketsParams DouglasSkull_91_BF21F13C41F9F05EA95F19BA847E1C04;         // 0x00E0(0x0040) (Edit, BlueprintVisible)
	struct FDS_RevengeOfTheMorningstar_SummoningTrinketsParams2 ChaliceOfRessurection_93_091372D24D3AA1BBE5C0828ABF151DD8;// 0x0120(0x0040) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
