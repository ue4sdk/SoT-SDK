#pragma once

// Sea of Thieves (1.4) SDK

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
// 0x00F0
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
	struct FDS_RevengeOfTheMorningstar_Graymarrow_SpawnParams GreyMarrowSpawnParams_87_9F6060624098B9C11F4B8F8451347B87;// 0x0068(0x0088) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
