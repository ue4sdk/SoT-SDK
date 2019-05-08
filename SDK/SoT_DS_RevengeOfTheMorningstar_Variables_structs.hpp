#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_DS_RevengeOfTheMorningstar_Graymarrow_SpawnParams_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_RevengeOfTheMorningstar_Variables.DS_RevengeOfTheMorningstar_Variables
// 0x0158
struct FDS_RevengeOfTheMorningstar_Variables
{
	class AActor*                                      NoteSpawnLocation_17_0F1E0FDB41578EF4C0D3EFB1ECD3BCD8;    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NPCProxySandra_58_117B0BA9434BC7D814A05EBCA685AD7C;       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NPCSandra_57_0483DDA84C43D5B0A3131AA5CD55DC92;            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SkeleNoteLocation_38_06FC91194E3F79BB5FB4229A5302B113;    // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class AItemInfo*                                   SummoningTrinket1_47_69B9BC4443347DB365E1F5B189513552;    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AItemInfo*                                   SummoningTrinket2_50_E5058DF844B685EA4BC8BA8F63045B32;    // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WreckNotes_56_658725C94FD83F663B1AFD8AFD92E78E;           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class AActor*                                      NPCProxyTracy_62_54DB91574D088629EF995CA663FE2C8A;        // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NPCProxyTyler_65_3E9EDC7D47B6DBAD3E62E8BA815B63F0;        // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NPCTracy_71_C90128CF497E5CDCFD984DA8E2B253F6;             // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NPCTyler_74_9C885F374644846244727F8B1D336820;             // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AItemInfo*                                   ShroudbreakerGem_84_370DF2734E671BB452D54A8A293C3CC4;     // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDS_RevengeOfTheMorningstar_Graymarrow_SpawnParams GreyMarrowSpawnParams_87_9F6060624098B9C11F4B8F8451347B87;// 0x0068(0x0050) (Edit, BlueprintVisible)
	TArray<TAssetPtr<class AActor>>                    GrayMarrowPossibleLocations_92_5C007C2A427A2250765DA884000302C1;// 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                AISpawnIndex_95_E56E34B9416FD922766A0BB09D61FF51;         // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	TArray<class UAISpawner*>                          RawboneSpawners_103_C70F2A9C4DE25A63CA3233A5B27C2E50;     // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAISpawner*>                          SkullSpawners_104_BF21BD774E3242648FDC8881C80AD8E6;       // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAISpawner*>                          ThickskullSpawners_108_73C42CC043893CABC6303EA481ACCFBC;  // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAISpawner*>                          DouglasSpawners_112_39765C434A17EFDFD5F771A5B4654D78;     // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAISpawner*>                          GraymarrowSpawners_116_C3876FED4DC1EB510C7FDDB6CE7AEA60;  // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAISpawner*                                  ChosenRawboneSpawner_119_AA88C57A420CB01BAC67D2BF2F277D53;// 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  ChosenSkullSpawner_122_6E37CBB441E6B759F043808D77422E5E;  // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  ChosenThickskullSpawner_132_8721174444CA48B4CA1B37B9EBB1ACEE;// 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  ChosenDouglasSpawner_133_9C259036409E61964D21BB9B4E818E9E;// 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  ChosenGraymarrowSpawner_131_74EAB3BC45B5C108A89E6790FD72C4C2;// 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_RevengeOfTheMorningstar_TrinketTrackerProxy_C* TrinketTrackerProxy_136_BC272DDC480565A68EC15C8738100F40; // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Shipwreck_MusicZone_141_88269B9244AD27E43CF0FF81909E79C7; // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
