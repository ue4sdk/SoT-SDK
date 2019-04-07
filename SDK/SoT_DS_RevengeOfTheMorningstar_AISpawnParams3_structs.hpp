#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_RevengeOfTheMorningstar_Graymarrow_SpawnParams_classes.hpp"
#include "SoT_DS_RevengeOfTheMorningstar_SummoningTrinketsParams2_classes.hpp"
#include "SoT_DS_RevengeOfTheMorningstar_SummoningTrinketsParams_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_RevengeOfTheMorningstar_AISpawnParams3.DS_RevengeOfTheMorningstar_AISpawnParams3
// 0x0278
struct FDS_RevengeOfTheMorningstar_AISpawnParams3
{
	class UAISpawner*                                  Spawner_Rawbone_34_3151CCEA4EC199503CC8F7890ED75B5F;      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            SpawnerLocation_Rawbone_35_4D86F5DC467042BDE8E901BCB7FF64AB;// 0x0008(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            TriggerLocation_Rawbone_36_34CC416346E04CFB7E06C3AEB4F351CB;// 0x0028(0x0020) (Edit, BlueprintVisible)
	float                                              TriggerRadius_Rawbone_37_FC760E2C4A19C813387B639D63FFF6BD;// 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RegionName_Rawbone_38_30C1AB0C40E4897AC937B9AF6CEDBC8E;   // 0x004C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class UQuestBookPageBundle*                        QuestBookPages_Rawbone_39_CE92649F43198C5CF49E228D0B070FD4;// 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  Spawner_Thickskull_50_171F8F164B02FEC3DB53198D47B2BBA8;   // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            SpawnerLocation_ThickSkull_51_5386FB13491911813553F59E32F5CDB0;// 0x0068(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            TriggerLocation_ThickSkull_52_1F297DEA4C6B5CCFFA70B1B2FE5444F0;// 0x0088(0x0020) (Edit, BlueprintVisible)
	float                                              TriggerRadius_ThickSkull_53_10F18D2446A399C987A5EDBD4DE2C308;// 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RegionName_ThickSkull_56_B2F76A7A4AD060BBDFC0D4821021158B;// 0x00AC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	class UQuestBookPageBundle*                        QuestBookPages_ThickSkull_57_60AAF3204325FC3140C8B1945A710627;// 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  Spawner_Skull_68_1E35CE1244073F2E1DCA228B87AD4D40;        // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            SpawnerLocation_Skull_69_1972B7344708D502F4D850B9BBD4AAF1;// 0x00C8(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            TriggerLocation_Skull_70_ABC9FD1A44B12EA76D99AD813EA54712;// 0x00E8(0x0020) (Edit, BlueprintVisible)
	float                                              TriggerRadius_Skull_71_2BBD1FF441F5A5F4AA0ABBA1F09ADC34;  // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RegionName_Skull_72_C3EF2261444A85D832CDF6B4485A87BF;     // 0x010C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	class UAISpawner*                                  Spawner_Douglas_83_4E4EE31A4D53D36D3A660FB81D24E915;      // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            SpawnerLocation_Douglas_84_B725CA5B43948BDFEB3CE8BA1B4E69D8;// 0x0120(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            TriggerLocation_Douglas_85_A2B2B3654DEDF043377CADAE77438B15;// 0x0140(0x0020) (Edit, BlueprintVisible)
	float                                              TriggerRadius_Douglas_86_499AF4C849E64F2C6AEB38815D78E625;// 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RegionName_Douglas_87_882901504D9E0BA1EE04998C2EE07D88;   // 0x0164(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	struct FDS_RevengeOfTheMorningstar_Graymarrow_SpawnParams GraymarrowSpawnParams_33_5D00958F417C2DB2B573CCBF2826F37C;// 0x0170(0x0088) (Edit, BlueprintVisible)
	struct FDS_RevengeOfTheMorningstar_SummoningTrinketsParams DouglasSkull_91_BF21F13C41F9F05EA95F19BA847E1C04;         // 0x01F8(0x0040) (Edit, BlueprintVisible)
	struct FDS_RevengeOfTheMorningstar_SummoningTrinketsParams2 ChaliceOfRessurection_93_091372D24D3AA1BBE5C0828ABF151DD8;// 0x0238(0x0040) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
